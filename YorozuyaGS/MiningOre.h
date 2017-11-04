#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/CPlayerInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CMiningOre : public IModule, CModuleRegister<CMiningOre>
        {
        public:
            CMiningOre() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static void WINAPIV pc_MineStart(
                ATF::CPlayer* pPlayer, 
                char byMineIndex, 
                char byOreIndex, 
                uint16_t wBatterySerial, 
                ATF::Info::CPlayerpc_MineStart1789_ptr);
        };
    };
};
