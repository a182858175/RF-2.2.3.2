// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "HWND__.hpp"
#include "_D3DFORMAT.hpp"


START_ATF_NAMESPACE
    struct _D3DPRESENT_PARAMETERS_
    {
        unsigned int BackBufferWidth;
        unsigned int BackBufferHeight;
        _D3DFORMAT BackBufferFormat;
        unsigned int BackBufferCount;
        _D3DMULTISAMPLE_TYPE MultiSampleType;
        _D3DSWAPEFFECT SwapEffect;
        HWND__ *hDeviceWindow;
        int Windowed;
        int EnableAutoDepthStencil;
        _D3DFORMAT AutoDepthStencilFormat;
        unsigned int Flags;
        unsigned int FullScreen_RefreshRateInHz;
        unsigned int FullScreen_PresentationInterval;
    };
END_ATF_NAMESPACE