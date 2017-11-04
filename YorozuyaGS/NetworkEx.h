#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CNetworkEXInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CNetworkEX : public IModule, CModuleRegister<CNetworkEX>
        {
        public:
            CNetworkEX() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static bool WINAPIV DTradeAskRequest(
                ATF::CNetworkEX* pObj, 
                int n, 
                char* pBuf, 
                ATF::Info::CNetworkEXDTradeAskRequest200_ptr next);

            static bool WINAPIV Apex_R(
                ATF::CNetworkEX* pObj, 
                int n, 
                uint16_t wSize, 
                char* pBuf,
                ATF::Info::CNetworkEXApex_R48_ptr next);

            static bool WINAPIV Apex_T(
                ATF::CNetworkEX* pObj, 
                int n, 
                uint16_t wSize, 
                char* pBuf,
                ATF::Info::CNetworkEXApex_T50_ptr next);
        };
    };
};
