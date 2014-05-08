/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_analyser.h
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

#include <map>
#include <string>
#include <duye_spider_def.h>
#include <crawler_page.h>
#include <spider_analyser_face.h>

DUYE_SPIDER_NS_BEG

typedef D_UInt64 AnalyserId;

class Analyser : public AnalyserFace
{
public:
    explicit Analyser(const AnalyserId& analyserId, const std::string& analyserName);
    virtual ~Analyser();

    virtual D_Result OnInit() = 0;
    virtual D_Result OnUninit() = 0;   
    virtual D_Result OnPageAnalysis(CrawlerPage& crawlerPage) = 0;
    
    const AnalyserId& GetAnalyserId() const;
    const std::string& GetAnalyserNmae() const;

private:
    AnalyserId      m_analyserId;
    std::string     m_analyserName;
};

typedef std::map<AnalyserId, Analyser*> AnalyserMap;

DUYE_SPIDER_NS_END