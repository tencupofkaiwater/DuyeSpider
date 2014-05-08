/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_analyser_mgr.cpp
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

DUYE_SPIDER_NS_BEG

void AnalyserMgr::AddAnalyser(Analyser* analyser)
{
    m_analyserMap.insert(std::make_pair(analyser->GetAnalyserId(), analyser));       
}

const AnalyserMap& AnalyserMgr::GetAnalyserMap() const
{
    return m_analyserMap;
}

DUYE_SPIDER_NS_END