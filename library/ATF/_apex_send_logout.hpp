// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    struct _apex_send_logout
    {
        char m_szAccountID[13];
    public:
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _apex_send_logout*);
            return (org_ptr(0x140410c40L))(this);
        };
    };
END_ATF_NAMESPACE