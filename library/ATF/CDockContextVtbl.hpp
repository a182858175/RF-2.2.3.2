// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CPoint.hpp"


START_ATF_NAMESPACE
    struct CDockContextVtbl
    {
        void (WINAPIV *StartDrag)(struct CDockContext *_this, CPoint);
        void (WINAPIV *StartResize)(struct CDockContext *_this, int, CPoint);
        void (WINAPIV *ToggleDocking)(struct CDockContext *_this);
    };
END_ATF_NAMESPACE