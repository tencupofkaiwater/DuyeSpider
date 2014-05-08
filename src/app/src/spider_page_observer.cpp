/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_page_observer.cpp
* @version     
* @brief      
* @author   duye
* @date     2014-03-13
* @note 
*
*  1. 2014-03-13 duye Created this file
* 
*/

#include <spider_analyser_mgr.h>
#include <spider_page_observer.h>

DUYE_SPIDER_NS_BEG

D_Result PageObserver::OnPageAnalysis(CrawlerPage& crawlerPage)
{
    AnalyserMgr* analyserMgr = AnalyserMgr::GetInstance();
    const AnalyserMap& analyserMap = analyserMgr->GetAnalyserMap();

    AnalyserMap::const_iterator iter = analyserMap.begin();
    for (; iter != analyserMap.end(); iter++)
    {
        iter->second->OnPageAnalysis(crawlerPage);
    }
    
    return D_SUCCESS;
}

DUYE_SPIDER_NS_END