/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_analyser_if.h
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
#include <crawler_page.h>

DUYE_SPIDER_NS_BEG

class AnalyserFace
{
public:
    virtual ~AnalyserFace() {}

    virtual D_Result OnInit() = 0;
    virtual D_Result OnUninit() = 0;
    virtual D_Result OnPageAnalysis(CrawlerPage& crawlerPage) = 0;
};

DUYE_SPIDER_NS_END