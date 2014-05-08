/************************************************************************************
**  
*    @copyright (c) 2013-2100, ChengDu Duyer Technology Co., LTD. All Right Reserved.
*
*************************************************************************************/
/**
* @file		spider_main.cpp
* @version     
* @brief      
* @author   duye
* @date     2014-03-04
* @note 
*
*  1. 2014-03-04 duye Created this file
* 
*/

#include <stdio.h>
#include <duye/duye_posix>
#include <spider_startup.h>

int main(int argc, char *argv[])
{
	printf("Duye Spider Start \n");

	dspider::SpiderStartup startup;
	
	if (startup.Start(argc, argv) == D_FAILURE)
	{
	    printf("Duye Spider Start Failed \n");    
	}

	printf("Duye Spider Start OK \n");
	
	for (;;)
	{
	    printf("Duye Spider working. \n");
	    duye::System::Usleep(2);
	}
	
	return 0;
}
