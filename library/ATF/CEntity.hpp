// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CIndexBuffer.hpp"
#include "CVertexBuffer.hpp"
#include "_ANI_OBJECT.hpp"
#include "_ENTITY_FILE_HEADER.hpp"
#include "_ENTITY_M_GROUP.hpp"
#include "_R3MATERIAL.hpp"


START_ATF_NAMESPACE
    #pragma pack(push, 4)
    struct  CEntity
    {
        int mIsUseMemory;
        int mIsEntityLoad;
        int mIsAlpha;
        _ENTITY_FILE_HEADER mHeader;
        unsigned int mVetexBufferSize;
        float (*mOrgUV)[2];
        unsigned int mMapColor;
        unsigned int mFlag;
        _R3MATERIAL *mMat;
        CVertexBuffer mStaticVertexBuffer;
        CIndexBuffer mStaticIndexedBuffer;
        unsigned int mTextureSize;
        int mMatGroupNum;
        _ENTITY_M_GROUP *mMatGroup;
        int mObjectNum;
        _ANI_OBJECT *mObject;
        char *mTrack;
        int mStartTexID;
        int mTexNum;
        unsigned int mVertexNum;
        void *mIndependencyTex;
        float mStartTime;
        float mBBMin[3];
        float mBBMax[3];
        float mAddFrame;
        float mFrame;
    public:
        void AddFlag(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*, uint32_t);
            (org_ptr(0x14051d530L))(this, arg_0);
        };
        int64_t DrawEntity(float** arg_0, uint32_t arg_1, float arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*, float**, uint32_t, float);
            return (org_ptr(0x14051efb0L))(this, arg_0, arg_1, arg_2);
        };
        int64_t DrawEntityVS(struct _ENTITY_LIST* arg_0, float** arg_1, uint32_t arg_2)
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*, struct _ENTITY_LIST*, float**, uint32_t);
            return (org_ptr(0x14051f6f0L))(this, arg_0, arg_1, arg_2);
        };
        void DrawOneMatGroup(struct _ENTITY_M_GROUP* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*, struct _ENTITY_M_GROUP*);
            (org_ptr(0x14051e8b0L))(this, arg_0);
        };
        void DrawOneMatGroupVS(struct _ENTITY_M_GROUP* arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*, struct _ENTITY_M_GROUP*);
            (org_ptr(0x14051f3a0L))(this, arg_0);
        };
        void GetAnimationMatrix(float** arg_0, struct _ANI_OBJECT* arg_1, float arg_2)
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*, float**, struct _ANI_OBJECT*, float);
            (org_ptr(0x14051d0a0L))(this, arg_0, arg_1, arg_2);
        };
        struct _ENTITY_M_GROUP* GetMatGroup()
        {
            using org_ptr = struct _ENTITY_M_GROUP* (WINAPIV*)(struct CEntity*);
            return (org_ptr(0x1404f5910L))(this);
        };
        int64_t GetMatGroupNum()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
            return (org_ptr(0x1404f58f0L))(this);
        };
        int64_t GetMatNum()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
            return (org_ptr(0x1404f5900L))(this);
        };
        struct _ANI_OBJECT* GetObjectA()
        {
            using org_ptr = struct _ANI_OBJECT* (WINAPIV*)(struct CEntity*);
            return (org_ptr(0x1404f58e0L))(this);
        };
        struct CIndexBuffer* GetStaticIndexedBuffer()
        {
            using org_ptr = struct CIndexBuffer* (WINAPIV*)(struct CEntity*);
            return (org_ptr(0x1404f5930L))(this);
        };
        struct CVertexBuffer* GetStaticVertexBuffer()
        {
            using org_ptr = struct CVertexBuffer* (WINAPIV*)(struct CEntity*);
            return (org_ptr(0x1404f5920L))(this);
        };
        int64_t GetUsedVertexBufferSize()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
            return (org_ptr(0x14051d090L))(this);
        };
        int64_t IsAlpha()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
            return (org_ptr(0x1404f6150L))(this);
        };
        int64_t IsEnableShaderID(uint32_t arg_0)
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*, uint32_t);
            return (org_ptr(0x14051f550L))(this, arg_0);
        };
        int64_t IsFirstAlpha()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
            return (org_ptr(0x14051d6b0L))(this);
        };
        int64_t LoadEntity(char* arg_0, uint32_t arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*, char*, uint32_t);
            return (org_ptr(0x14051d770L))(this, arg_0, arg_1);
        };
        int64_t OnceDrawEntity(float** arg_0, uint32_t arg_1)
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*, float**, uint32_t);
            return (org_ptr(0x14051f340L))(this, arg_0, arg_1);
        };
        void PrepareAnimation()
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*);
            (org_ptr(0x14051d540L))(this);
        };
        void ReleaseEntity()
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*);
            (org_ptr(0x14051d6e0L))(this);
        };
        void ReleaseTexMem()
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*);
            (org_ptr(0x14051d600L))(this);
        };
        void RestoreTexMem()
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*);
            (org_ptr(0x14051d590L))(this);
        };
        void SetMapColor(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*, uint32_t);
            (org_ptr(0x1404f6160L))(this, arg_0);
        };
        void SetMaterialAndLight(uint32_t arg_0)
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*, uint32_t);
            (org_ptr(0x14051eb60L))(this, arg_0);
        };
        void SetVertexShaderID(struct _ENTITY_LIST* arg_0, float** arg_1, uint32_t arg_2)
        {
            using org_ptr = void (WINAPIV*)(struct CEntity*, struct _ENTITY_LIST*, float**, uint32_t);
            (org_ptr(0x14051f580L))(this, arg_0, arg_1, arg_2);
        };
        ~CEntity()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
            (org_ptr(0x14051d030L))(this);
        };
        int64_t dtor_CEntity()
        {
            using org_ptr = int64_t (WINAPIV*)(struct CEntity*);
            return (org_ptr(0x14051d030L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE