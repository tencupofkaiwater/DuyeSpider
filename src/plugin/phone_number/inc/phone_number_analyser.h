/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    phone_number_parser.h
* @version     
* @brief      
* @author   duye
* @date     2014-03-14
* @note 
*
*  1. 2014-03-14 duye Created this file
* 
*/

#pragma once

#include <spider_plugin_def.h>

DUYE_SPIDER_NS_BEG

class PhoneNumberAnalyser : public Analyser
{
public:
    explicit PhoneNumberAnalyser(const AnalyserId& analyserId, const std::string& analyserName) 
        : Analyser(analyserId, analyserName) {}
        
    virtual ~PhoneNumberAnalyser() {}

    virtual D_Result OnInit();
    virtual D_Result OnUninit();
    virtual D_Result OnPageAnalysis(CrawlerPage& crawlerPage);
};

DUYE_SPIDER_NS_END