// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "in6_addr.hpp"


START_ATF_NAMESPACE
    struct sockaddr_in6_old
    {
        __int16 sin6_family;
        unsigned __int16 sin6_port;
        unsigned int sin6_flowinfo;
        in6_addr sin6_addr;
    };
END_ATF_NAMESPACE