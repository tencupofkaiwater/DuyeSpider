PRONAME:= spider_analyser
TARGET:= lib$(PRONAME)
PRE_DEFINED := 
BUILD_PATH := $(shell pwd)
INCLUDES := \
            $(BUILD_PATH)/inc \
            $(SPIDER_ROOT)/inc \
            $(SPIDER_ROOT)/crawler/inc
            
LIBS_PATH := \
            $(SPIDER_ROOT)/lib
            
LIBS := spider_crawler

include ../shared.mk

$(shell mkdir -p ../lib)
$(shell cp $(BUILD_PATH)/output/lib/* ../lib)
