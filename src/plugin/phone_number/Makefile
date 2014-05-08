PRONAME:= phone_number
TARGET:= lib$(PRONAME)
PRE_DEFINED := 
BUILD_PATH := $(shell pwd)
INCLUDES := \
	$(BUILD_PATH)/inc \
	$(SPIDER_ROOT)/inc \
    $(SPIDER_ROOT)/crawler/inc \
    $(SPIDER_ROOT)/analyser/inc \
    $(SPIDER_ROOT)/plugin/inc
            
LIBS_PATH := \
	$(SPIDER_ROOT)/lib
            
LIBS := spider_analyser 

include ../../shared.mk

$(shell mkdir -p ../lib)
$(shell cp $(BUILD_PATH)/output/lib/* ../lib)

$(shell mkdir -p ../../lib/plugin/)
$(shell cp $(BUILD_PATH)/output/lib/* ../../lib/plugin)
