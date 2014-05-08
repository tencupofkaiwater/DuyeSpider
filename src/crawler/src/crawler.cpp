/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    crawler.cpp
* @version     
* @brief      
* @author   duye
* @date     2014-03-08
* @note 
*
*  1. 2014-03-08 duye Created this file
* 
*/

#include <startup.h>
#include <crawler.h>

DUYE_SPIDER_NS_BEG

SpiderCrawler::SpiderCrawler()
{
}

SpiderCrawler::~SpiderCrawler()
{
}

D_Result SpiderCrawler::Start(int argc, char *argv[])
{
    return CrawlerStart(argc, argv);
}

void SpiderCrawler::AddObserver(CrawlerObserverFace* crawlerObserver)
{
    m_crawlerObserverList.push_back(crawlerObserver);   
}

void SpiderCrawler::RemoveAllObserver()
{
    m_crawlerObserverList.clear();    
}
    
DUYE_SPIDER_NS_END