/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_analyser_factory.h
* @version     
* @brief      
* @author   duye
* @date     2014-03-15
* @note 
*
*  1. 2014-03-15 duye Created this file
* 
*/

#pragma once

#include <duye_spider_def.h>
#include <spider_analyser.h>
#include <duye/duye_stl>

DUYE_SPIDER_NS_BEG

class AnalyserFactory : public duye::Singleton<AnalyserFactory>
{
public:
    Analyser* CreateAnalyser(const std::string& analyserName);

private:
    AnalyserFactory() {}

private:
    friend class duye::Singleton<AnalyserFactory>;
};

DUYE_SPIDER_NS_END