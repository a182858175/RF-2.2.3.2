// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_base_fld.hpp"


START_ATF_NAMESPACE
    struct  _AmuletItem_fld : _base_fld
    {
        int m_bExist;
        char m_strModel[64];
        int m_nIconIDX;
        char m_strName[64];
        int m_nKindClt;
        int m_nItemGrade;
        int m_nFixPart;
        char m_strCivil[64];
        int m_nLevelLim;
        int m_nUpLevelLim;
        int m_nClassGradeLim;
        int m_nMoney;
        int m_nStdPrice;
        int m_nStdPoint;
        int m_nGoldPoint;
        int m_nKillPoint;
        int m_nProcPoint;
        int m_nStoragePrice;
        int m_bAbr;
        int m_nEffState;
        float m_fFireTol;
        float m_fWaterTol;
        float m_fSoilTol;
        float m_fWindTol;
        int m_nEff1Code;
        float m_fEff1Unit;
        int m_nEff2Code;
        float m_fEff2Unit;
        int m_nEff3Code;
        float m_fEff3Unit;
        int m_nEff4Code;
        float m_fEff4Unit;
        int m_bSell;
        int m_bExchange;
        int m_bGround;
        int m_bStoragePossible;
        int m_bUseableNormalAcc;
        char m_strTooltipIndex[64];
        int m_bIsCash;
        int m_bIsTime;
    };
END_ATF_NAMESPACE