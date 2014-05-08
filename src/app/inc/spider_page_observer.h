/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_page_observer.h
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

#include <list>
#include <duye_spider_def.h>
#include <spider_analyser.h>
#include <crawler.h>

DUYE_SPIDER_NS_BEG

class PageObserver : public CrawlerObserverFace
{
public:
    PageObserver() {}
    virtual ~PageObserver() {}

    virtual D_Result OnPageAnalysis(CrawlerPage& crawlerPage);
};

typedef std::list<PageObserver*>    PageObserverList;

DUYE_SPIDER_NS_END