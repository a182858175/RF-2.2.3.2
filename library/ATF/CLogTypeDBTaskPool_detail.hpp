// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CLogTypeDBTaskPool_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        info::CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_ptr CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_next(nullptr);
        info::CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_clbk CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_user(nullptr);
        info::CLogTypeDBTaskPoolDestroy4_ptr CLogTypeDBTaskPoolDestroy4_next(nullptr);
        info::CLogTypeDBTaskPoolDestroy4_clbk CLogTypeDBTaskPoolDestroy4_user(nullptr);
        info::CLogTypeDBTaskPoolGetComplete6_ptr CLogTypeDBTaskPoolGetComplete6_next(nullptr);
        info::CLogTypeDBTaskPoolGetComplete6_clbk CLogTypeDBTaskPoolGetComplete6_user(nullptr);
        info::CLogTypeDBTaskPoolGetEmpty8_ptr CLogTypeDBTaskPoolGetEmpty8_next(nullptr);
        info::CLogTypeDBTaskPoolGetEmpty8_clbk CLogTypeDBTaskPoolGetEmpty8_user(nullptr);
        info::CLogTypeDBTaskPoolGetProc10_ptr CLogTypeDBTaskPoolGetProc10_next(nullptr);
        info::CLogTypeDBTaskPoolGetProc10_clbk CLogTypeDBTaskPoolGetProc10_user(nullptr);
        info::CLogTypeDBTaskPoolInit12_ptr CLogTypeDBTaskPoolInit12_next(nullptr);
        info::CLogTypeDBTaskPoolInit12_clbk CLogTypeDBTaskPoolInit12_user(nullptr);
        info::CLogTypeDBTaskPoolSetComplete14_ptr CLogTypeDBTaskPoolSetComplete14_next(nullptr);
        info::CLogTypeDBTaskPoolSetComplete14_clbk CLogTypeDBTaskPoolSetComplete14_user(nullptr);
        info::CLogTypeDBTaskPoolSetEmpty16_ptr CLogTypeDBTaskPoolSetEmpty16_next(nullptr);
        info::CLogTypeDBTaskPoolSetEmpty16_clbk CLogTypeDBTaskPoolSetEmpty16_user(nullptr);
        info::CLogTypeDBTaskPoolSetProc18_ptr CLogTypeDBTaskPoolSetProc18_next(nullptr);
        info::CLogTypeDBTaskPoolSetProc18_clbk CLogTypeDBTaskPoolSetProc18_user(nullptr);
        info::CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_ptr CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_next(nullptr);
        info::CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_clbk CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_user(nullptr);
        
        void CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_user(_this, CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_next);
        };
        void CLogTypeDBTaskPoolDestroy4_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           CLogTypeDBTaskPoolDestroy4_user(_this, CLogTypeDBTaskPoolDestroy4_next);
        };
        struct CLogTypeDBTask* CLogTypeDBTaskPoolGetComplete6_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           return CLogTypeDBTaskPoolGetComplete6_user(_this, CLogTypeDBTaskPoolGetComplete6_next);
        };
        struct CLogTypeDBTask* CLogTypeDBTaskPoolGetEmpty8_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           return CLogTypeDBTaskPoolGetEmpty8_user(_this, CLogTypeDBTaskPoolGetEmpty8_next);
        };
        struct CLogTypeDBTask* CLogTypeDBTaskPoolGetProc10_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           return CLogTypeDBTaskPoolGetProc10_user(_this, CLogTypeDBTaskPoolGetProc10_next);
        };
        bool CLogTypeDBTaskPoolInit12_wrapper(struct CLogTypeDBTaskPool* _this, unsigned int uiBuffSize, unsigned int uiMaxCnt, struct CLogFile* kLogger)
        {
           return CLogTypeDBTaskPoolInit12_user(_this, uiBuffSize, uiMaxCnt, kLogger, CLogTypeDBTaskPoolInit12_next);
        };
        bool CLogTypeDBTaskPoolSetComplete14_wrapper(struct CLogTypeDBTaskPool* _this, struct CLogTypeDBTask* pTask, struct CLogFile* kLogger)
        {
           return CLogTypeDBTaskPoolSetComplete14_user(_this, pTask, kLogger, CLogTypeDBTaskPoolSetComplete14_next);
        };
        bool CLogTypeDBTaskPoolSetEmpty16_wrapper(struct CLogTypeDBTaskPool* _this, struct CLogTypeDBTask* pTask, struct CLogFile* kLogger)
        {
           return CLogTypeDBTaskPoolSetEmpty16_user(_this, pTask, kLogger, CLogTypeDBTaskPoolSetEmpty16_next);
        };
        bool CLogTypeDBTaskPoolSetProc18_wrapper(struct CLogTypeDBTaskPool* _this, struct CLogTypeDBTask* pTask, struct CLogFile* kLogger)
        {
           return CLogTypeDBTaskPoolSetProc18_user(_this, pTask, kLogger, CLogTypeDBTaskPoolSetProc18_next);
        };
        void CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_wrapper(struct CLogTypeDBTaskPool* _this)
        {
           CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_user(_this, CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_next);
        };
        
        hook_record CLogTypeDBTaskPool_functions[] = {
        {   (LPVOID)0x1402c1ea0L,
            (LPVOID *)&CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_user,
            (LPVOID *)&CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_next,
            (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolctor_CLogTypeDBTaskPool2_wrapper),
            (LPVOID)cast_pointer_function((void(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::ctor_CLogTypeDBTaskPool) },
        {   (LPVOID)0x1402c28d0L,
            (LPVOID *)&CLogTypeDBTaskPoolDestroy4_user,
            (LPVOID *)&CLogTypeDBTaskPoolDestroy4_next,
            (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolDestroy4_wrapper),
            (LPVOID)cast_pointer_function((void(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::Destroy) },
        {   (LPVOID)0x1402c25d0L,
            (LPVOID *)&CLogTypeDBTaskPoolGetComplete6_user,
            (LPVOID *)&CLogTypeDBTaskPoolGetComplete6_next,
            (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolGetComplete6_wrapper),
            (LPVOID)cast_pointer_function((struct CLogTypeDBTask*(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::GetComplete) },
        {   (LPVOID)0x1402c2430L,
            (LPVOID *)&CLogTypeDBTaskPoolGetEmpty8_user,
            (LPVOID *)&CLogTypeDBTaskPoolGetEmpty8_next,
            (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolGetEmpty8_wrapper),
            (LPVOID)cast_pointer_function((struct CLogTypeDBTask*(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::GetEmpty) },
        {   (LPVOID)0x1402c2510L,
            (LPVOID *)&CLogTypeDBTaskPoolGetProc10_user,
            (LPVOID *)&CLogTypeDBTaskPoolGetProc10_next,
            (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolGetProc10_wrapper),
            (LPVOID)cast_pointer_function((struct CLogTypeDBTask*(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::GetProc) },
        {   (LPVOID)0x1402c2110L,
            (LPVOID *)&CLogTypeDBTaskPoolInit12_user,
            (LPVOID *)&CLogTypeDBTaskPoolInit12_next,
            (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolInit12_wrapper),
            (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskPool::*)(unsigned int, unsigned int, struct CLogFile*))&CLogTypeDBTaskPool::Init) },
        {   (LPVOID)0x1402c2750L,
            (LPVOID *)&CLogTypeDBTaskPoolSetComplete14_user,
            (LPVOID *)&CLogTypeDBTaskPoolSetComplete14_next,
            (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolSetComplete14_wrapper),
            (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskPool::*)(struct CLogTypeDBTask*, struct CLogFile*))&CLogTypeDBTaskPool::SetComplete) },
        {   (LPVOID)0x1402c2810L,
            (LPVOID *)&CLogTypeDBTaskPoolSetEmpty16_user,
            (LPVOID *)&CLogTypeDBTaskPoolSetEmpty16_next,
            (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolSetEmpty16_wrapper),
            (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskPool::*)(struct CLogTypeDBTask*, struct CLogFile*))&CLogTypeDBTaskPool::SetEmpty) },
        {   (LPVOID)0x1402c2690L,
            (LPVOID *)&CLogTypeDBTaskPoolSetProc18_user,
            (LPVOID *)&CLogTypeDBTaskPoolSetProc18_next,
            (LPVOID)cast_pointer_function(CLogTypeDBTaskPoolSetProc18_wrapper),
            (LPVOID)cast_pointer_function((bool(CLogTypeDBTaskPool::*)(struct CLogTypeDBTask*, struct CLogFile*))&CLogTypeDBTaskPool::SetProc) },
        {   (LPVOID)0x1402c1fc0L,
            (LPVOID *)&CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_user,
            (LPVOID *)&CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_next,
            (LPVOID)cast_pointer_function(CLogTypeDBTaskPooldtor_CLogTypeDBTaskPool20_wrapper),
            (LPVOID)cast_pointer_function((void(CLogTypeDBTaskPool::*)())&CLogTypeDBTaskPool::dtor_CLogTypeDBTaskPool) },
        
        };
        
    }; // end namespace detail
END_ATF_NAMESPACE