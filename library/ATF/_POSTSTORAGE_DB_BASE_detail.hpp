// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_POSTSTORAGE_DB_BASE_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::_POSTSTORAGE_DB_BASEInit2_ptr _POSTSTORAGE_DB_BASEInit2_next(nullptr);
        info::_POSTSTORAGE_DB_BASEInit2_clbk _POSTSTORAGE_DB_BASEInit2_user(nullptr);
        info::_POSTSTORAGE_DB_BASEUpdateInit4_ptr _POSTSTORAGE_DB_BASEUpdateInit4_next(nullptr);
        info::_POSTSTORAGE_DB_BASEUpdateInit4_clbk _POSTSTORAGE_DB_BASEUpdateInit4_user(nullptr);
        info::_POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_ptr _POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_next(nullptr);
        info::_POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_clbk _POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_user(nullptr);
        
        void _POSTSTORAGE_DB_BASEInit2_wrapper(struct _POSTSTORAGE_DB_BASE* _this)
        {
           _POSTSTORAGE_DB_BASEInit2_user(_this, _POSTSTORAGE_DB_BASEInit2_next);
        };
        void _POSTSTORAGE_DB_BASEUpdateInit4_wrapper(struct _POSTSTORAGE_DB_BASE* _this)
        {
           _POSTSTORAGE_DB_BASEUpdateInit4_user(_this, _POSTSTORAGE_DB_BASEUpdateInit4_next);
        };
        void _POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_wrapper(struct _POSTSTORAGE_DB_BASE* _this)
        {
           _POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_user(_this, _POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_next);
        };
        
        hook_record _POSTSTORAGE_DB_BASE_functions[] = {
        {   (LPVOID)0x140077470L,
            (LPVOID *)&_POSTSTORAGE_DB_BASEInit2_user,
            (LPVOID *)&_POSTSTORAGE_DB_BASEInit2_next,
            (LPVOID)cast_pointer_function(_POSTSTORAGE_DB_BASEInit2_wrapper),
            (LPVOID)cast_pointer_function((void(_POSTSTORAGE_DB_BASE::*)())&_POSTSTORAGE_DB_BASE::Init) },
        {   (LPVOID)0x14011fcc0L,
            (LPVOID *)&_POSTSTORAGE_DB_BASEUpdateInit4_user,
            (LPVOID *)&_POSTSTORAGE_DB_BASEUpdateInit4_next,
            (LPVOID)cast_pointer_function(_POSTSTORAGE_DB_BASEUpdateInit4_wrapper),
            (LPVOID)cast_pointer_function((void(_POSTSTORAGE_DB_BASE::*)())&_POSTSTORAGE_DB_BASE::UpdateInit) },
        {   (LPVOID)0x140077420L,
            (LPVOID *)&_POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_user,
            (LPVOID *)&_POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_next,
            (LPVOID)cast_pointer_function(_POSTSTORAGE_DB_BASEctor__POSTSTORAGE_DB_BASE6_wrapper),
            (LPVOID)cast_pointer_function((void(_POSTSTORAGE_DB_BASE::*)())&_POSTSTORAGE_DB_BASE::ctor__POSTSTORAGE_DB_BASE) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE