#pragma once

#include "ModuleRegistry.h"
#include "../Common/Interfaces/ModuleInterface.h"

#include <ATF/_PotionItem_fld.hpp>
#include <ATF/CPotionMgrInfo.hpp>

namespace GameServer
{
    using namespace Yorozuya::Module;

    namespace Fixes
    {
        class CPotionMgr : public IModule, CModuleRegister<CPotionMgr>
        {
        public:
            CPotionMgr() { };

            virtual void load();

            virtual void unload();

            virtual ModuleName_t get_name();
        private:
            static int WINAPIV PreCheckPotion(
                ATF::CPotionMgr* pObj,
                ATF::CPlayer* pUsePlayer,
                ATF::CCharacter** pTargetCharacter,
                ATF::_PotionItem_fld* pfB,
                unsigned int nCurTime,
                ATF::_skill_fld* pFld,
                bool bCheckDist,
                ATF::Info::CPotionMgrPreCheckPotion22_ptr next);
        };
    };
};
