/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_analyser.cpp
* @version     
* @brief      
* @author   duye
* @date     2014-03-04
* @note 
*
*  1. 2014-03-04 duye Created this file
* 
*/

#include <spider_analyser.h>

DUYE_SPIDER_NS_BEG

Analyser::Analyser(const AnalyserId& analyserId, const std::string& analyserName) 
    : m_analyserId(analyserId)
    , m_analyserName(analyserName)
{
}

Analyser::~Analyser()
{
}

const AnalyserId& Analyser::GetAnalyserId() const
{
    return m_analyserId;
}
    
DUYE_SPIDER_NS_END