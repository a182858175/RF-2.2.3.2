// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "ATL__CComBSTR_info.hpp"


START_ATF_NAMESPACE
    namespace ATL
    {
        namespace detail
        {
            info::ATL__CComBSTRdtor_CComBSTR1_ptr ATL__CComBSTRdtor_CComBSTR1_next(nullptr);
            info::ATL__CComBSTRdtor_CComBSTR1_clbk ATL__CComBSTRdtor_CComBSTR1_user(nullptr);
            
            void ATL__CComBSTRdtor_CComBSTR1_wrapper(struct ATL::CComBSTR* _this)
            {
               ATL__CComBSTRdtor_CComBSTR1_user(_this, ATL__CComBSTRdtor_CComBSTR1_next);
            };
            
            hook_record CComBSTR_functions[] = {
            {   (LPVOID)0x1404dc4e0L,
                (LPVOID *)&ATL__CComBSTRdtor_CComBSTR1_user,
                (LPVOID *)&ATL__CComBSTRdtor_CComBSTR1_next,
                (LPVOID)cast_pointer_function(ATL__CComBSTRdtor_CComBSTR1_wrapper),
                (LPVOID)cast_pointer_function((void(CComBSTR::*)())&CComBSTR::dtor_CComBSTR) },
            
            };
            
        }; // end namespace detail
    }; // end namespace ATL
END_ATF_NAMESPACE