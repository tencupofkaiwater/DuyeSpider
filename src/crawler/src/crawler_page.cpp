/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    crawler_page.cpp
* @version     
* @brief      
* @author   duye
* @date     2014-03-12
* @note 
*
*  1. 2014-03-12 duye Created this file
* 
*/

#include <crawler_page.h>

DUYE_SPIDER_NS_BEG

CrawlerPage::CrawlerPage() : m_orgData(NULL), m_orgSize(0)
{
}

CrawlerPage::CrawlerPage(D_Int8* orgData, const D_Int64 orgSize)
    : m_orgData(orgData), m_orgSize(orgSize)
{
}

CrawlerPage::~CrawlerPage()
{
}

DUYE_SPIDER_NS_END