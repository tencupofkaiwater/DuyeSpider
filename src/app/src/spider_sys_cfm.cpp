/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_sys_cfm.h
* @version     
* @brief      
* @author   duye
* @date     2014-03-15
* @note 
*
*  1. 2014-03-15 duye Created this file
* 
*/

#include <spider_sys_cfm.h>

DUYE_SPIDER_NS_BEG

D_Result SysCFM::LoadConfig(const std::string& configPath)
{
    duye::IniParser iniParser(configPath);
    
    return D_SUCCESS;
}

const AnalyserConfList& SysCFM::GetAnalyserConfList() const 
{ 
    return m_analyserConfList; 
}

DUYE_SPIDER_NS_END
