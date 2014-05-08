/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    crawler_if.cpp
* @version     
* @brief      
* @author   duye
* @date     2014-03-12
* @note 
*
*  1. 2014-03-12 duye Created this file
* 
*/

#pragma once

#include <duye_spider_def.h>
#include <crawler_page.h>

DUYE_SPIDER_NS_BEG

class CrawlerObserverFace
{
public:
    virtual ~CrawlerObserverFace() {}

    // data analysis
    virtual D_Result OnPageAnalysis(CrawlerPage& crawlerPage) = 0;
};

DUYE_SPIDER_NS_END