// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_sheet_insert_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_qry_sheet_insertctor__qry_sheet_insert2_ptr _qry_sheet_insertctor__qry_sheet_insert2_next(nullptr);
        info::_qry_sheet_insertctor__qry_sheet_insert2_clbk _qry_sheet_insertctor__qry_sheet_insert2_user(nullptr);
        info::_qry_sheet_insertsize4_ptr _qry_sheet_insertsize4_next(nullptr);
        info::_qry_sheet_insertsize4_clbk _qry_sheet_insertsize4_user(nullptr);
        
        void _qry_sheet_insertctor__qry_sheet_insert2_wrapper(struct _qry_sheet_insert* _this)
        {
           _qry_sheet_insertctor__qry_sheet_insert2_user(_this, _qry_sheet_insertctor__qry_sheet_insert2_next);
        };
        int _qry_sheet_insertsize4_wrapper(struct _qry_sheet_insert* _this)
        {
           return _qry_sheet_insertsize4_user(_this, _qry_sheet_insertsize4_next);
        };
        
        hook_record _qry_sheet_insert_functions[] = {
        {   (LPVOID)0x14011f820L,
            (LPVOID *)&_qry_sheet_insertctor__qry_sheet_insert2_user,
            (LPVOID *)&_qry_sheet_insertctor__qry_sheet_insert2_next,
            (LPVOID)cast_pointer_function(_qry_sheet_insertctor__qry_sheet_insert2_wrapper),
            (LPVOID)cast_pointer_function((void(_qry_sheet_insert::*)())&_qry_sheet_insert::ctor__qry_sheet_insert) },
        {   (LPVOID)0x14011f810L,
            (LPVOID *)&_qry_sheet_insertsize4_user,
            (LPVOID *)&_qry_sheet_insertsize4_next,
            (LPVOID)cast_pointer_function(_qry_sheet_insertsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_sheet_insert::*)())&_qry_sheet_insert::size) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE