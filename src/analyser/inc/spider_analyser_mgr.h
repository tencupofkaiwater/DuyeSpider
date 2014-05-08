/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_analyser_mgr.h
* @version     
* @brief      
* @author   duye
* @date     2014-03-13
* @note 
*
*  1. 2014-03-13 duye Created this file
* 
*/

#pragma once

#include <duye_spider_def.h>
#include <spider_analyser.h>
#include <spider_analyser_factory.h>

DUYE_SPIDER_NS_BEG

class AnalyserMgr : public duye::Singleton<AnalyserMgr>
{
public:
    void AddAnalyser(Analyser* analyser);
    const AnalyserMap& GetAnalyserMap() const;

private:
    AnalyserMgr() {}
    
private:
    friend class duye::Singleton<AnalyserMgr>;
    
    AnalyserMap     m_analyserMap;
};

DUYE_SPIDER_NS_END