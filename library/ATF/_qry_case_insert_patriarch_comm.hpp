// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct _qry_case_insert_patriarch_comm
    {
        unsigned int dwSerial;
        unsigned int dwDalant;
        char szDepDate[9];
    public:
        _qry_case_insert_patriarch_comm()
        {
            using org_ptr = void (WINAPIV*)(struct _qry_case_insert_patriarch_comm*);
            (org_ptr(0x1402d98f0L))(this);
        };
        void ctor__qry_case_insert_patriarch_comm()
        {
            using org_ptr = void (WINAPIV*)(struct _qry_case_insert_patriarch_comm*);
            (org_ptr(0x1402d98f0L))(this);
        };
        int size()
        {
            using org_ptr = int (WINAPIV*)(struct _qry_case_insert_patriarch_comm*);
            return (org_ptr(0x1402d9940L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE