/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file	    spider_sys_cfm.h
* @version     
* @brief      
* @author   duye
* @date     2014-03-15
* @note 
*
*  1. 2014-03-15 duye Created this file
* 
*/

#pragma once

#include <map>
#include <string>

#include <duye_spider_def.h>

DUYE_SPIDER_NS_BEG

typedef std::map<std::string, std::string> KeyValueMap;

class AnalyserConf;

typedef std::list<AnalyserConf*> AnalyserConfList;

class SysCFM : public duye::Singleton<SysCFM>
{
public:
    D_Result LoadConfig(const std::string& configPath);
    const AnalyserConfList& GetAnalyserConfList() const;

private:
    SysCFM() {}
    
private:
    friend class duye::Singleton<SysCFM>;
    
    AnalyserConfList    m_analyserConfList;
};

class AnalyserConf
{
public:
    AnalyserConf() {}
    ~AnalyserConf() {}

    void SetName(const std::string& name) { m_name = name; }
    const std::string& GetName() const { return m_name; }

    void SetSoPath(const std::string& soPath) { m_soPath = soPath; }
    const std::string& GetSoPath() const { return m_soPath; }

    void SetInstance(const D_UInt32 instance) { m_instance = instance; }
    D_UInt32 GetInstance() const { return m_instance; }

private:
    // the shared library name
    std::string     m_name;
    // the shared library path
    std::string     m_soPath;
    // the number of run instance
    D_UInt32        m_instance;         
};

DUYE_SPIDER_NS_END