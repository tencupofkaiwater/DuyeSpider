/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file		spider_startup.cpp
* @version     
* @brief      
* @author   duye
* @date     2014-03-04
* @note 
*
*  1. 2014-03-04 duye Created this file
* 
*/

#include <spider_sys_cfm.h>
#include <spider_analyser_mgr.h>
#include <spider_startup.h>

DUYE_SPIDER_NS_BEG

static const D_Int8* CONFIG_PATH = "./spider.conf";    

SpiderStartup::SpiderStartup()
{
}

SpiderStartup::~SpiderStartup()
{
}

D_Result SpiderStartup::Start(int argc, char *argv[])
{
    // step 1 : load configure
    SysCFM* syscfm = SysCFM::GetInstance();
    if (D_RETNO(syscfm->LoadConfig(CONFIG_PATH)))
    {
        return D_FAILURE;
    }

    // step 2 : load analyser
    if (D_RETNO(LoadAnalyser()))
    {
        return D_FAILURE;   
    }
    
    // step 3 : regist page handle callback
    if (D_RETNO(RegistPageObserver()))
    {
        return D_FAILURE;    
    }
    
    return m_crawler.Start(argc, argv);
}

D_Result SpiderStartup::LoadAnalyser()
{
    AnalyserMgr* analyserMgr = AnalyserMgr::GetInstance();
    SysCFM* sysCfm = SysCFM::GetInstance();
    
    const AnalyserConfList& analyserConfList = sysCfm->GetAnalyserConfList();
    AnalyserConfList::const_iterator iter = analyserConfList.begin();
    for (; iter != analyserConfList.end() ; ++iter)
    {
        AnalyserConf* analyserConf = *iter;
        
        D_Void* handle = duye::SharedLibrary::OpenLib(analyserConf->GetSoPath());

        Analyser* analyser = (Analyser*)handle;
        analyserMgr->AddAnalyser(analyser);
    }
    
    return D_SUCCESS;
}

D_Result SpiderStartup::RegistPageObserver()
{
        
    return D_SUCCESS;
}

DUYE_SPIDER_NS_END
