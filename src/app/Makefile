PRONAME:= dspider
TARGET:= $(PRONAME)
PRE_DEFINED := 
BUILD_PATH := $(shell pwd)

INCLUDES := \
            $(BUILD_PATH)/inc \
            $(SPIDER_ROOT)/inc \
            $(SPIDER_ROOT)/crawler/inc \
            $(SPIDER_ROOT)/analyser/inc

LIBS_PATH := \
            $(SPIDER_ROOT)/lib
            
LIBS := spider_crawler spider_analyser

include ../app.mk

$(shell mkdir ../bin -p)
$(shell cp $(BUILD_PATH)/output/bin/* ../bin)
