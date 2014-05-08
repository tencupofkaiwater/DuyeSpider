/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_crawler.cpp
* @version     
* @brief      
* @author   duye
* @date     2014-03-08
* @note 
*
*  1. 2014-03-08 duye Created this file
* 
*/

#pragma once

#include <list>

#include <duye_spider_def.h>

#include <crawler_face.h>
#include <crawler_page.h>

DUYE_SPIDER_NS_BEG

typedef std::list<CrawlerObserverFace*> CrawlerObserverList;

class SpiderCrawler
{
public:
    SpiderCrawler();
    ~SpiderCrawler();

    D_Result Start(int argc, char *argv[]);

    void AddObserver(CrawlerObserverFace* crawlerObserver);
    void RemoveAllObserver();

private:
    void NotifyPageAnalysis();

private:
    CrawlerObserverList     m_crawlerObserverList;
};

DUYE_SPIDER_NS_END