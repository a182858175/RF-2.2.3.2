// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_STORAGE_POS_INDIV.hpp"


START_ATF_NAMESPACE
    struct _npclink_check_item_result_zocl
    {
        char byRet;
        _STORAGE_POS_INDIV storage;
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _npclink_check_item_result_zocl*);
            return (org_ptr(0x1400f06a0L))(this);
        };
    };
END_ATF_NAMESPACE