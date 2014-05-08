/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_startup.h
* @version     
* @brief      
* @author   duye
* @date     2014-03-04
* @note 
*
*  1. 2014-03-04 duye Created this file
* 
*/

#pragma once

#include <crawler.h>

#include <duye_spider_def.h>
#include <spider_analyser_mgr.h>
#include <spider_page_observer.h>

DUYE_SPIDER_NS_BEG

class SpiderStartup
{
public:
    SpiderStartup();
    ~SpiderStartup();

    D_Result Start(int argc, char *argv[]);

private:
    D_Result LoadAnalyser();
    D_Result RegistPageObserver();
    
private:
    SpiderCrawler       m_crawler;
    PageObserverList    m_pageObserverList;
};

DUYE_SPIDER_NS_END