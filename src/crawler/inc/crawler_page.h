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

#pragma once

#include <duye_spider_def.h>

DUYE_SPIDER_NS_BEG

class CrawlerPage
{
public:
    CrawlerPage();
    CrawlerPage(D_Int8* orgData, const D_Int64 orgSize);
    ~CrawlerPage();

private:
    D_Int8*     m_orgData;
    D_Int64     m_orgSize;
};

DUYE_SPIDER_NS_END