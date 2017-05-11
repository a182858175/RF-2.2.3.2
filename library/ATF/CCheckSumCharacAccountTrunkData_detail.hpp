// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCheckSumCharacAccountTrunkData_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_ptr CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_next(nullptr);
        info::CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_clbk CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_user(nullptr);
        info::CCheckSumCharacAccountTrunkDataCheckDiff4_ptr CCheckSumCharacAccountTrunkDataCheckDiff4_next(nullptr);
        info::CCheckSumCharacAccountTrunkDataCheckDiff4_clbk CCheckSumCharacAccountTrunkDataCheckDiff4_user(nullptr);
        info::CCheckSumCharacAccountTrunkDataDecode6_ptr CCheckSumCharacAccountTrunkDataDecode6_next(nullptr);
        info::CCheckSumCharacAccountTrunkDataDecode6_clbk CCheckSumCharacAccountTrunkDataDecode6_user(nullptr);
        info::CCheckSumCharacAccountTrunkDataEncode8_ptr CCheckSumCharacAccountTrunkDataEncode8_next(nullptr);
        info::CCheckSumCharacAccountTrunkDataEncode8_clbk CCheckSumCharacAccountTrunkDataEncode8_user(nullptr);
        info::CCheckSumCharacAccountTrunkDataInsertCharacData10_ptr CCheckSumCharacAccountTrunkDataInsertCharacData10_next(nullptr);
        info::CCheckSumCharacAccountTrunkDataInsertCharacData10_clbk CCheckSumCharacAccountTrunkDataInsertCharacData10_user(nullptr);
        info::CCheckSumCharacAccountTrunkDataInsertTrunkData12_ptr CCheckSumCharacAccountTrunkDataInsertTrunkData12_next(nullptr);
        info::CCheckSumCharacAccountTrunkDataInsertTrunkData12_clbk CCheckSumCharacAccountTrunkDataInsertTrunkData12_user(nullptr);
        info::CCheckSumCharacAccountTrunkDataLoad14_ptr CCheckSumCharacAccountTrunkDataLoad14_next(nullptr);
        info::CCheckSumCharacAccountTrunkDataLoad14_clbk CCheckSumCharacAccountTrunkDataLoad14_user(nullptr);
        info::CCheckSumCharacAccountTrunkDataSetValue16_ptr CCheckSumCharacAccountTrunkDataSetValue16_next(nullptr);
        info::CCheckSumCharacAccountTrunkDataSetValue16_clbk CCheckSumCharacAccountTrunkDataSetValue16_user(nullptr);
        info::CCheckSumCharacAccountTrunkDataSetValue18_ptr CCheckSumCharacAccountTrunkDataSetValue18_next(nullptr);
        info::CCheckSumCharacAccountTrunkDataSetValue18_clbk CCheckSumCharacAccountTrunkDataSetValue18_user(nullptr);
        info::CCheckSumCharacAccountTrunkDataUpdate20_ptr CCheckSumCharacAccountTrunkDataUpdate20_next(nullptr);
        info::CCheckSumCharacAccountTrunkDataUpdate20_clbk CCheckSumCharacAccountTrunkDataUpdate20_user(nullptr);
        info::CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_ptr CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_next(nullptr);
        info::CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_clbk CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_user(nullptr);
        
        void CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_wrapper(struct CCheckSumCharacAccountTrunkData* _this, unsigned int dwSerial, unsigned int dwAccountSerial, char byRace)
        {
           CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_user(_this, dwSerial, dwAccountSerial, byRace, CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_next);
        };
        int CCheckSumCharacAccountTrunkDataCheckDiff4_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct CRFWorldDatabase* pkDB, char* wszName, struct CCheckSumCharacAccountTrunkData* kSrcValue)
        {
           return CCheckSumCharacAccountTrunkDataCheckDiff4_user(_this, pkDB, wszName, kSrcValue, CCheckSumCharacAccountTrunkDataCheckDiff4_next);
        };
        void CCheckSumCharacAccountTrunkDataDecode6_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct _AVATOR_DATA* pAvator)
        {
           CCheckSumCharacAccountTrunkDataDecode6_user(_this, pAvator, CCheckSumCharacAccountTrunkDataDecode6_next);
        };
        void CCheckSumCharacAccountTrunkDataEncode8_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct _AVATOR_DATA* pAvator)
        {
           CCheckSumCharacAccountTrunkDataEncode8_user(_this, pAvator, CCheckSumCharacAccountTrunkDataEncode8_next);
        };
        bool CCheckSumCharacAccountTrunkDataInsertCharacData10_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct CRFWorldDatabase* pkDB)
        {
           return CCheckSumCharacAccountTrunkDataInsertCharacData10_user(_this, pkDB, CCheckSumCharacAccountTrunkDataInsertCharacData10_next);
        };
        bool CCheckSumCharacAccountTrunkDataInsertTrunkData12_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct CRFWorldDatabase* pkDB)
        {
           return CCheckSumCharacAccountTrunkDataInsertTrunkData12_user(_this, pkDB, CCheckSumCharacAccountTrunkDataInsertTrunkData12_next);
        };
        int CCheckSumCharacAccountTrunkDataLoad14_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct CRFWorldDatabase* pkDB, struct CCheckSumCharacAccountTrunkData* kSrcValue)
        {
           return CCheckSumCharacAccountTrunkDataLoad14_user(_this, pkDB, kSrcValue, CCheckSumCharacAccountTrunkDataLoad14_next);
        };
        void CCheckSumCharacAccountTrunkDataSetValue16_wrapper(struct CCheckSumCharacAccountTrunkData* _this, CCheckSumCharacAccountTrunkData::COLUMN_DW_TYPE eType, unsigned int dwValue)
        {
           CCheckSumCharacAccountTrunkDataSetValue16_user(_this, eType, dwValue, CCheckSumCharacAccountTrunkDataSetValue16_next);
        };
        void CCheckSumCharacAccountTrunkDataSetValue18_wrapper(struct CCheckSumCharacAccountTrunkData* _this, CCheckSumCharacAccountTrunkData::COLUMN_D_TYPE eType, long double dValue)
        {
           CCheckSumCharacAccountTrunkDataSetValue18_user(_this, eType, dValue, CCheckSumCharacAccountTrunkDataSetValue18_next);
        };
        bool CCheckSumCharacAccountTrunkDataUpdate20_wrapper(struct CCheckSumCharacAccountTrunkData* _this, struct CRFWorldDatabase* pkDB)
        {
           return CCheckSumCharacAccountTrunkDataUpdate20_user(_this, pkDB, CCheckSumCharacAccountTrunkDataUpdate20_next);
        };
        void CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_wrapper(struct CCheckSumCharacAccountTrunkData* _this)
        {
           CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_user(_this, CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_next);
        };
        
        hook_record CCheckSumCharacAccountTrunkData_functions[] = {
        {   (LPVOID)0x1402c06a0L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDatactor_CCheckSumCharacAccountTrunkData2_wrapper),
            (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)(unsigned int, unsigned int, char))&CCheckSumCharacAccountTrunkData::ctor_CCheckSumCharacAccountTrunkData) },
        {   (LPVOID)0x1402c08e0L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataCheckDiff4_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataCheckDiff4_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataCheckDiff4_wrapper),
            (LPVOID)cast_pointer_function((int(CCheckSumCharacAccountTrunkData::*)(struct CRFWorldDatabase*, char*, struct CCheckSumCharacAccountTrunkData*))&CCheckSumCharacAccountTrunkData::CheckDiff) },
        {   (LPVOID)0x1402c0c60L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataDecode6_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataDecode6_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataDecode6_wrapper),
            (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)(struct _AVATOR_DATA*))&CCheckSumCharacAccountTrunkData::Decode) },
        {   (LPVOID)0x1402c0c00L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataEncode8_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataEncode8_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataEncode8_wrapper),
            (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)(struct _AVATOR_DATA*))&CCheckSumCharacAccountTrunkData::Encode) },
        {   (LPVOID)0x1402c0cc0L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataInsertCharacData10_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataInsertCharacData10_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataInsertCharacData10_wrapper),
            (LPVOID)cast_pointer_function((bool(CCheckSumCharacAccountTrunkData::*)(struct CRFWorldDatabase*))&CCheckSumCharacAccountTrunkData::InsertCharacData) },
        {   (LPVOID)0x1402c0d20L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataInsertTrunkData12_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataInsertTrunkData12_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataInsertTrunkData12_wrapper),
            (LPVOID)cast_pointer_function((bool(CCheckSumCharacAccountTrunkData::*)(struct CRFWorldDatabase*))&CCheckSumCharacAccountTrunkData::InsertTrunkData) },
        {   (LPVOID)0x1402c0750L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataLoad14_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataLoad14_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataLoad14_wrapper),
            (LPVOID)cast_pointer_function((int(CCheckSumCharacAccountTrunkData::*)(struct CRFWorldDatabase*, struct CCheckSumCharacAccountTrunkData*))&CCheckSumCharacAccountTrunkData::Load) },
        {   (LPVOID)0x1402c0e20L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataSetValue16_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataSetValue16_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataSetValue16_wrapper),
            (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)(CCheckSumCharacAccountTrunkData::COLUMN_DW_TYPE, unsigned int))&CCheckSumCharacAccountTrunkData::SetValue) },
        {   (LPVOID)0x1402c0e60L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataSetValue18_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataSetValue18_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataSetValue18_wrapper),
            (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)(CCheckSumCharacAccountTrunkData::COLUMN_D_TYPE, long double))&CCheckSumCharacAccountTrunkData::SetValue) },
        {   (LPVOID)0x1402c0b60L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataUpdate20_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDataUpdate20_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDataUpdate20_wrapper),
            (LPVOID)cast_pointer_function((bool(CCheckSumCharacAccountTrunkData::*)(struct CRFWorldDatabase*))&CCheckSumCharacAccountTrunkData::Update) },
        {   (LPVOID)0x1402c0740L,
            (LPVOID *)&CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_user,
            (LPVOID *)&CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_next,
            (LPVOID)cast_pointer_function(CCheckSumCharacAccountTrunkDatadtor_CCheckSumCharacAccountTrunkData22_wrapper),
            (LPVOID)cast_pointer_function((void(CCheckSumCharacAccountTrunkData::*)())&CCheckSumCharacAccountTrunkData::dtor_CCheckSumCharacAccountTrunkData) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE