#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>
struct List_1_t2037434726;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
struct List_1_t394701973;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct List_1_t2537151505;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>
struct List_1_t3440720070;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
struct List_1_t314435623;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Void
struct Void_t1185182177;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t2242999785;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t2559910621;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t527871248;
// UnityEngine.SocialPlatforms.ISocialPlatform
struct ISocialPlatform_t2920057433;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_t360500636;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t909679733;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t565359984;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t3217594527;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t1886727686;
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_t1511134929;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t1065076763;
// UnityEngine.SocialPlatforms.Impl.Leaderboard[]
struct LeaderboardU5BU5D_t31671578;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t365094499;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t1968645328;
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t972561905;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t3137328177;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t1895532524;
// UnityEngine.SocialPlatforms.Local
struct Local_t4068483442;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;

extern RuntimeClass* AchievementDescription_t3217594527_il2cpp_TypeInfo_var;
extern RuntimeClass* ActivePlatform_t3103617690_il2cpp_TypeInfo_var;
extern RuntimeClass* Boolean_t97287965_il2cpp_TypeInfo_var;
extern RuntimeClass* DateTime_t3738529785_il2cpp_TypeInfo_var;
extern RuntimeClass* Double_t594665363_il2cpp_TypeInfo_var;
extern RuntimeClass* ISocialPlatform_t2920057433_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* Leaderboard_t1065076763_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2037434726_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t2537151505_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t314435623_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t3440720070_il2cpp_TypeInfo_var;
extern RuntimeClass* List_1_t394701973_il2cpp_TypeInfo_var;
extern RuntimeClass* LocalUser_t365094499_il2cpp_TypeInfo_var;
extern RuntimeClass* Local_t4068483442_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* ScoreU5BU5D_t972561905_il2cpp_TypeInfo_var;
extern RuntimeClass* Score_t1968645328_il2cpp_TypeInfo_var;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* TimeScope_t539351503_il2cpp_TypeInfo_var;
extern RuntimeClass* UInt32_t2560061978_il2cpp_TypeInfo_var;
extern RuntimeClass* UserProfileU5BU5D_t1895532524_il2cpp_TypeInfo_var;
extern RuntimeClass* UserProfile_t3137328177_il2cpp_TypeInfo_var;
extern RuntimeClass* UserScope_t604006431_il2cpp_TypeInfo_var;
extern RuntimeClass* UserState_t4177058321_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1177415910;
extern String_t* _stringLiteral1207588649;
extern String_t* _stringLiteral1343626406;
extern String_t* _stringLiteral1358844784;
extern String_t* _stringLiteral1410607624;
extern String_t* _stringLiteral1464936688;
extern String_t* _stringLiteral1488170903;
extern String_t* _stringLiteral1589925673;
extern String_t* _stringLiteral15947561;
extern String_t* _stringLiteral1695920045;
extern String_t* _stringLiteral1702585322;
extern String_t* _stringLiteral1736209072;
extern String_t* _stringLiteral174720081;
extern String_t* _stringLiteral1815849347;
extern String_t* _stringLiteral1972262697;
extern String_t* _stringLiteral2065339255;
extern String_t* _stringLiteral2608391305;
extern String_t* _stringLiteral2704654648;
extern String_t* _stringLiteral2754897401;
extern String_t* _stringLiteral2758590827;
extern String_t* _stringLiteral2823322644;
extern String_t* _stringLiteral2859292443;
extern String_t* _stringLiteral2862084853;
extern String_t* _stringLiteral2937937919;
extern String_t* _stringLiteral2979315402;
extern String_t* _stringLiteral3353015368;
extern String_t* _stringLiteral3410331484;
extern String_t* _stringLiteral3449030883;
extern String_t* _stringLiteral3452614532;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3546240809;
extern String_t* _stringLiteral3714347010;
extern String_t* _stringLiteral3725686153;
extern String_t* _stringLiteral3786252490;
extern String_t* _stringLiteral3818843126;
extern String_t* _stringLiteral3889212743;
extern String_t* _stringLiteral3928577833;
extern String_t* _stringLiteral4060093497;
extern String_t* _stringLiteral4166618085;
extern String_t* _stringLiteral4281704856;
extern String_t* _stringLiteral71334293;
extern String_t* _stringLiteral71334295;
extern String_t* _stringLiteral71334296;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral774297412;
extern String_t* _stringLiteral790607520;
extern String_t* _stringLiteral797346979;
extern String_t* _stringLiteral808924690;
extern String_t* _stringLiteral930699636;
extern String_t* _stringLiteral933325165;
extern const RuntimeMethod* Action_1_Invoke_m1933767679_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1578522892_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1702244787_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1774517840_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m351770690_RuntimeMethod_var;
extern const RuntimeMethod* List_1_ToArray_m2845752048_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1836006746_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1850989583_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m1889483756_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m3689826338_RuntimeMethod_var;
extern const RuntimeMethod* List_1__ctor_m973695318_RuntimeMethod_var;
extern const uint32_t AchievementDescription_ToString_m2063334390_MetadataUsageId;
extern const uint32_t Achievement_ToString_m3521250266_MetadataUsageId;
extern const uint32_t ActivePlatform_SelectSocialPlatform_m1059707725_MetadataUsageId;
extern const uint32_t ActivePlatform_get_Instance_m3727118555_MetadataUsageId;
extern const uint32_t Leaderboard_ToString_m1544604165_MetadataUsageId;
extern const uint32_t Leaderboard__ctor_m1030108446_MetadataUsageId;
extern const uint32_t LocalUser_Authenticate_m2136646640_MetadataUsageId;
extern const uint32_t LocalUser__ctor_m4260307073_MetadataUsageId;
extern const uint32_t Local_CreateDummyTexture_m3769606019_MetadataUsageId;
extern const uint32_t Local_PopulateStaticData_m916798409_MetadataUsageId;
extern const uint32_t Local_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2207258125_MetadataUsageId;
extern const uint32_t Local__cctor_m4006956713_MetadataUsageId;
extern const uint32_t Local__ctor_m3461781796_MetadataUsageId;
extern const uint32_t Local_get_localUser_m1583274769_MetadataUsageId;
extern const uint32_t Score_ToString_m885507283_MetadataUsageId;
extern const uint32_t Score__ctor_m2390363112_MetadataUsageId;
extern const uint32_t Social_get_localUser_m4215544813_MetadataUsageId;
extern const uint32_t UserProfile_ToString_m2232825484_MetadataUsageId;
extern const uint32_t UserProfile__ctor_m3353918255_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct IScoreU5BU5D_t527871248;
struct IUserProfileU5BU5D_t909679733;
struct ScoreU5BU5D_t972561905;
struct UserProfileU5BU5D_t1895532524;


#ifndef U3CMODULEU3E_T692745544_H
#define U3CMODULEU3E_T692745544_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745544 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745544_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef LIST_1_T2037434726_H
#define LIST_1_T2037434726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>
struct  List_1_t2037434726  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AchievementU5BU5D_t1511134929* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2037434726, ____items_1)); }
	inline AchievementU5BU5D_t1511134929* get__items_1() const { return ____items_1; }
	inline AchievementU5BU5D_t1511134929** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AchievementU5BU5D_t1511134929* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2037434726, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2037434726, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2037434726, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2037434726_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AchievementU5BU5D_t1511134929* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2037434726_StaticFields, ____emptyArray_5)); }
	inline AchievementU5BU5D_t1511134929* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AchievementU5BU5D_t1511134929** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AchievementU5BU5D_t1511134929* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2037434726_H
#ifndef LIST_1_T394701973_H
#define LIST_1_T394701973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>
struct  List_1_t394701973  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AchievementDescriptionU5BU5D_t1886727686* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t394701973, ____items_1)); }
	inline AchievementDescriptionU5BU5D_t1886727686* get__items_1() const { return ____items_1; }
	inline AchievementDescriptionU5BU5D_t1886727686** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AchievementDescriptionU5BU5D_t1886727686* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t394701973, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t394701973, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t394701973, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t394701973_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AchievementDescriptionU5BU5D_t1886727686* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t394701973_StaticFields, ____emptyArray_5)); }
	inline AchievementDescriptionU5BU5D_t1886727686* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AchievementDescriptionU5BU5D_t1886727686** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AchievementDescriptionU5BU5D_t1886727686* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T394701973_H
#ifndef LIST_1_T2537151505_H
#define LIST_1_T2537151505_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>
struct  List_1_t2537151505  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	LeaderboardU5BU5D_t31671578* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2537151505, ____items_1)); }
	inline LeaderboardU5BU5D_t31671578* get__items_1() const { return ____items_1; }
	inline LeaderboardU5BU5D_t31671578** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(LeaderboardU5BU5D_t31671578* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2537151505, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2537151505, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2537151505, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2537151505_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	LeaderboardU5BU5D_t31671578* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2537151505_StaticFields, ____emptyArray_5)); }
	inline LeaderboardU5BU5D_t31671578* get__emptyArray_5() const { return ____emptyArray_5; }
	inline LeaderboardU5BU5D_t31671578** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(LeaderboardU5BU5D_t31671578* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2537151505_H
#ifndef LIST_1_T3440720070_H
#define LIST_1_T3440720070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>
struct  List_1_t3440720070  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ScoreU5BU5D_t972561905* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3440720070, ____items_1)); }
	inline ScoreU5BU5D_t972561905* get__items_1() const { return ____items_1; }
	inline ScoreU5BU5D_t972561905** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ScoreU5BU5D_t972561905* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3440720070, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3440720070, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3440720070, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3440720070_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ScoreU5BU5D_t972561905* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3440720070_StaticFields, ____emptyArray_5)); }
	inline ScoreU5BU5D_t972561905* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ScoreU5BU5D_t972561905** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ScoreU5BU5D_t972561905* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3440720070_H
#ifndef LIST_1_T314435623_H
#define LIST_1_T314435623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>
struct  List_1_t314435623  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UserProfileU5BU5D_t1895532524* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t314435623, ____items_1)); }
	inline UserProfileU5BU5D_t1895532524* get__items_1() const { return ____items_1; }
	inline UserProfileU5BU5D_t1895532524** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UserProfileU5BU5D_t1895532524* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t314435623, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t314435623, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t314435623, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t314435623_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UserProfileU5BU5D_t1895532524* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t314435623_StaticFields, ____emptyArray_5)); }
	inline UserProfileU5BU5D_t1895532524* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UserProfileU5BU5D_t1895532524** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UserProfileU5BU5D_t1895532524* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T314435623_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef SOCIAL_T3745463066_H
#define SOCIAL_T3745463066_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Social
struct  Social_t3745463066  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCIAL_T3745463066_H
#ifndef ACTIVEPLATFORM_T3103617690_H
#define ACTIVEPLATFORM_T3103617690_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.ActivePlatform
struct  ActivePlatform_t3103617690  : public RuntimeObject
{
public:

public:
};

struct ActivePlatform_t3103617690_StaticFields
{
public:
	// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::_active
	RuntimeObject* ____active_0;

public:
	inline static int32_t get_offset_of__active_0() { return static_cast<int32_t>(offsetof(ActivePlatform_t3103617690_StaticFields, ____active_0)); }
	inline RuntimeObject* get__active_0() const { return ____active_0; }
	inline RuntimeObject** get_address_of__active_0() { return &____active_0; }
	inline void set__active_0(RuntimeObject* value)
	{
		____active_0 = value;
		Il2CppCodeGenWriteBarrier((&____active_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVEPLATFORM_T3103617690_H
#ifndef ACHIEVEMENTDESCRIPTION_T3217594527_H
#define ACHIEVEMENTDESCRIPTION_T3217594527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct  AchievementDescription_t3217594527  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Title
	String_t* ___m_Title_0;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Image
	Texture2D_t3840446185 * ___m_Image_1;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_AchievedDescription
	String_t* ___m_AchievedDescription_2;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_3;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Hidden
	bool ___m_Hidden_4;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Points
	int32_t ___m_Points_5;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Title_0() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_Title_0)); }
	inline String_t* get_m_Title_0() const { return ___m_Title_0; }
	inline String_t** get_address_of_m_Title_0() { return &___m_Title_0; }
	inline void set_m_Title_0(String_t* value)
	{
		___m_Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_Image_1)); }
	inline Texture2D_t3840446185 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture2D_t3840446185 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture2D_t3840446185 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_2() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_AchievedDescription_2)); }
	inline String_t* get_m_AchievedDescription_2() const { return ___m_AchievedDescription_2; }
	inline String_t** get_address_of_m_AchievedDescription_2() { return &___m_AchievedDescription_2; }
	inline void set_m_AchievedDescription_2(String_t* value)
	{
		___m_AchievedDescription_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_2), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_3() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_UnachievedDescription_3)); }
	inline String_t* get_m_UnachievedDescription_3() const { return ___m_UnachievedDescription_3; }
	inline String_t** get_address_of_m_UnachievedDescription_3() { return &___m_UnachievedDescription_3; }
	inline void set_m_UnachievedDescription_3(String_t* value)
	{
		___m_UnachievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_Hidden_4() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_Hidden_4)); }
	inline bool get_m_Hidden_4() const { return ___m_Hidden_4; }
	inline bool* get_address_of_m_Hidden_4() { return &___m_Hidden_4; }
	inline void set_m_Hidden_4(bool value)
	{
		___m_Hidden_4 = value;
	}

	inline static int32_t get_offset_of_m_Points_5() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_Points_5)); }
	inline int32_t get_m_Points_5() const { return ___m_Points_5; }
	inline int32_t* get_address_of_m_Points_5() { return &___m_Points_5; }
	inline void set_m_Points_5(int32_t value)
	{
		___m_Points_5 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENTDESCRIPTION_T3217594527_H
#ifndef LOCAL_T4068483442_H
#define LOCAL_T4068483442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Local
struct  Local_t4068483442  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile> UnityEngine.SocialPlatforms.Local::m_Friends
	List_1_t314435623 * ___m_Friends_1;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile> UnityEngine.SocialPlatforms.Local::m_Users
	List_1_t314435623 * ___m_Users_2;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription> UnityEngine.SocialPlatforms.Local::m_AchievementDescriptions
	List_1_t394701973 * ___m_AchievementDescriptions_3;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement> UnityEngine.SocialPlatforms.Local::m_Achievements
	List_1_t2037434726 * ___m_Achievements_4;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard> UnityEngine.SocialPlatforms.Local::m_Leaderboards
	List_1_t2537151505 * ___m_Leaderboards_5;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Local::m_DefaultTexture
	Texture2D_t3840446185 * ___m_DefaultTexture_6;

public:
	inline static int32_t get_offset_of_m_Friends_1() { return static_cast<int32_t>(offsetof(Local_t4068483442, ___m_Friends_1)); }
	inline List_1_t314435623 * get_m_Friends_1() const { return ___m_Friends_1; }
	inline List_1_t314435623 ** get_address_of_m_Friends_1() { return &___m_Friends_1; }
	inline void set_m_Friends_1(List_1_t314435623 * value)
	{
		___m_Friends_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Friends_1), value);
	}

	inline static int32_t get_offset_of_m_Users_2() { return static_cast<int32_t>(offsetof(Local_t4068483442, ___m_Users_2)); }
	inline List_1_t314435623 * get_m_Users_2() const { return ___m_Users_2; }
	inline List_1_t314435623 ** get_address_of_m_Users_2() { return &___m_Users_2; }
	inline void set_m_Users_2(List_1_t314435623 * value)
	{
		___m_Users_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Users_2), value);
	}

	inline static int32_t get_offset_of_m_AchievementDescriptions_3() { return static_cast<int32_t>(offsetof(Local_t4068483442, ___m_AchievementDescriptions_3)); }
	inline List_1_t394701973 * get_m_AchievementDescriptions_3() const { return ___m_AchievementDescriptions_3; }
	inline List_1_t394701973 ** get_address_of_m_AchievementDescriptions_3() { return &___m_AchievementDescriptions_3; }
	inline void set_m_AchievementDescriptions_3(List_1_t394701973 * value)
	{
		___m_AchievementDescriptions_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievementDescriptions_3), value);
	}

	inline static int32_t get_offset_of_m_Achievements_4() { return static_cast<int32_t>(offsetof(Local_t4068483442, ___m_Achievements_4)); }
	inline List_1_t2037434726 * get_m_Achievements_4() const { return ___m_Achievements_4; }
	inline List_1_t2037434726 ** get_address_of_m_Achievements_4() { return &___m_Achievements_4; }
	inline void set_m_Achievements_4(List_1_t2037434726 * value)
	{
		___m_Achievements_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Achievements_4), value);
	}

	inline static int32_t get_offset_of_m_Leaderboards_5() { return static_cast<int32_t>(offsetof(Local_t4068483442, ___m_Leaderboards_5)); }
	inline List_1_t2537151505 * get_m_Leaderboards_5() const { return ___m_Leaderboards_5; }
	inline List_1_t2537151505 ** get_address_of_m_Leaderboards_5() { return &___m_Leaderboards_5; }
	inline void set_m_Leaderboards_5(List_1_t2537151505 * value)
	{
		___m_Leaderboards_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Leaderboards_5), value);
	}

	inline static int32_t get_offset_of_m_DefaultTexture_6() { return static_cast<int32_t>(offsetof(Local_t4068483442, ___m_DefaultTexture_6)); }
	inline Texture2D_t3840446185 * get_m_DefaultTexture_6() const { return ___m_DefaultTexture_6; }
	inline Texture2D_t3840446185 ** get_address_of_m_DefaultTexture_6() { return &___m_DefaultTexture_6; }
	inline void set_m_DefaultTexture_6(Texture2D_t3840446185 * value)
	{
		___m_DefaultTexture_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_DefaultTexture_6), value);
	}
};

struct Local_t4068483442_StaticFields
{
public:
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.Local::m_LocalUser
	LocalUser_t365094499 * ___m_LocalUser_0;

public:
	inline static int32_t get_offset_of_m_LocalUser_0() { return static_cast<int32_t>(offsetof(Local_t4068483442_StaticFields, ___m_LocalUser_0)); }
	inline LocalUser_t365094499 * get_m_LocalUser_0() const { return ___m_LocalUser_0; }
	inline LocalUser_t365094499 ** get_address_of_m_LocalUser_0() { return &___m_LocalUser_0; }
	inline void set_m_LocalUser_0(LocalUser_t365094499 * value)
	{
		___m_LocalUser_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUser_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCAL_T4068483442_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef RANGE_T173988048_H
#define RANGE_T173988048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Range
struct  Range_t173988048 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t173988048, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t173988048, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGE_T173988048_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ACHIEVEMENT_T565359984_H
#define ACHIEVEMENT_T565359984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Achievement
struct  Achievement_t565359984  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Completed
	bool ___m_Completed_0;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Hidden
	bool ___m_Hidden_1;
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::m_LastReportedDate
	DateTime_t3738529785  ___m_LastReportedDate_2;
	// System.String UnityEngine.SocialPlatforms.Impl.Achievement::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_3;
	// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::<percentCompleted>k__BackingField
	double ___U3CpercentCompletedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Completed_0() { return static_cast<int32_t>(offsetof(Achievement_t565359984, ___m_Completed_0)); }
	inline bool get_m_Completed_0() const { return ___m_Completed_0; }
	inline bool* get_address_of_m_Completed_0() { return &___m_Completed_0; }
	inline void set_m_Completed_0(bool value)
	{
		___m_Completed_0 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_1() { return static_cast<int32_t>(offsetof(Achievement_t565359984, ___m_Hidden_1)); }
	inline bool get_m_Hidden_1() const { return ___m_Hidden_1; }
	inline bool* get_address_of_m_Hidden_1() { return &___m_Hidden_1; }
	inline void set_m_Hidden_1(bool value)
	{
		___m_Hidden_1 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_2() { return static_cast<int32_t>(offsetof(Achievement_t565359984, ___m_LastReportedDate_2)); }
	inline DateTime_t3738529785  get_m_LastReportedDate_2() const { return ___m_LastReportedDate_2; }
	inline DateTime_t3738529785 * get_address_of_m_LastReportedDate_2() { return &___m_LastReportedDate_2; }
	inline void set_m_LastReportedDate_2(DateTime_t3738529785  value)
	{
		___m_LastReportedDate_2 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Achievement_t565359984, ___U3CidU3Ek__BackingField_3)); }
	inline String_t* get_U3CidU3Ek__BackingField_3() const { return ___U3CidU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_3() { return &___U3CidU3Ek__BackingField_3; }
	inline void set_U3CidU3Ek__BackingField_3(String_t* value)
	{
		___U3CidU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CpercentCompletedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Achievement_t565359984, ___U3CpercentCompletedU3Ek__BackingField_4)); }
	inline double get_U3CpercentCompletedU3Ek__BackingField_4() const { return ___U3CpercentCompletedU3Ek__BackingField_4; }
	inline double* get_address_of_U3CpercentCompletedU3Ek__BackingField_4() { return &___U3CpercentCompletedU3Ek__BackingField_4; }
	inline void set_U3CpercentCompletedU3Ek__BackingField_4(double value)
	{
		___U3CpercentCompletedU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENT_T565359984_H
#ifndef SCORE_T1968645328_H
#define SCORE_T1968645328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Score
struct  Score_t1968645328  : public RuntimeObject
{
public:
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_t3738529785  ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Date_0() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___m_Date_0)); }
	inline DateTime_t3738529785  get_m_Date_0() const { return ___m_Date_0; }
	inline DateTime_t3738529785 * get_address_of_m_Date_0() { return &___m_Date_0; }
	inline void set_m_Date_0(DateTime_t3738529785  value)
	{
		___m_Date_0 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_1() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___m_FormattedValue_1)); }
	inline String_t* get_m_FormattedValue_1() const { return ___m_FormattedValue_1; }
	inline String_t** get_address_of_m_FormattedValue_1() { return &___m_FormattedValue_1; }
	inline void set_m_FormattedValue_1(String_t* value)
	{
		___m_FormattedValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_1), value);
	}

	inline static int32_t get_offset_of_m_UserID_2() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___m_UserID_2)); }
	inline String_t* get_m_UserID_2() const { return ___m_UserID_2; }
	inline String_t** get_address_of_m_UserID_2() { return &___m_UserID_2; }
	inline void set_m_UserID_2(String_t* value)
	{
		___m_UserID_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserID_2), value);
	}

	inline static int32_t get_offset_of_m_Rank_3() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___m_Rank_3)); }
	inline int32_t get_m_Rank_3() const { return ___m_Rank_3; }
	inline int32_t* get_address_of_m_Rank_3() { return &___m_Rank_3; }
	inline void set_m_Rank_3(int32_t value)
	{
		___m_Rank_3 = value;
	}

	inline static int32_t get_offset_of_U3CleaderboardIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___U3CleaderboardIDU3Ek__BackingField_4)); }
	inline String_t* get_U3CleaderboardIDU3Ek__BackingField_4() const { return ___U3CleaderboardIDU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CleaderboardIDU3Ek__BackingField_4() { return &___U3CleaderboardIDU3Ek__BackingField_4; }
	inline void set_U3CleaderboardIDU3Ek__BackingField_4(String_t* value)
	{
		___U3CleaderboardIDU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CleaderboardIDU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___U3CvalueU3Ek__BackingField_5)); }
	inline int64_t get_U3CvalueU3Ek__BackingField_5() const { return ___U3CvalueU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CvalueU3Ek__BackingField_5() { return &___U3CvalueU3Ek__BackingField_5; }
	inline void set_U3CvalueU3Ek__BackingField_5(int64_t value)
	{
		___U3CvalueU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCORE_T1968645328_H
#ifndef TIMESCOPE_T539351503_H
#define TIMESCOPE_T539351503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.TimeScope
struct  TimeScope_t539351503 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TimeScope_t539351503, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESCOPE_T539351503_H
#ifndef USERSCOPE_T604006431_H
#define USERSCOPE_T604006431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserScope
struct  UserScope_t604006431 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserScope_t604006431, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSCOPE_T604006431_H
#ifndef USERSTATE_T4177058321_H
#define USERSTATE_T4177058321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserState
struct  UserState_t4177058321 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UserState_t4177058321, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSTATE_T4177058321_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef LEADERBOARD_T1065076763_H
#define LEADERBOARD_T1065076763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct  Leaderboard_t1065076763  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	RuntimeObject* ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t527871248* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_t1281789340* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_t173988048  ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Loading_0() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_Loading_0)); }
	inline bool get_m_Loading_0() const { return ___m_Loading_0; }
	inline bool* get_address_of_m_Loading_0() { return &___m_Loading_0; }
	inline void set_m_Loading_0(bool value)
	{
		___m_Loading_0 = value;
	}

	inline static int32_t get_offset_of_m_LocalUserScore_1() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_LocalUserScore_1)); }
	inline RuntimeObject* get_m_LocalUserScore_1() const { return ___m_LocalUserScore_1; }
	inline RuntimeObject** get_address_of_m_LocalUserScore_1() { return &___m_LocalUserScore_1; }
	inline void set_m_LocalUserScore_1(RuntimeObject* value)
	{
		___m_LocalUserScore_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUserScore_1), value);
	}

	inline static int32_t get_offset_of_m_MaxRange_2() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_MaxRange_2)); }
	inline uint32_t get_m_MaxRange_2() const { return ___m_MaxRange_2; }
	inline uint32_t* get_address_of_m_MaxRange_2() { return &___m_MaxRange_2; }
	inline void set_m_MaxRange_2(uint32_t value)
	{
		___m_MaxRange_2 = value;
	}

	inline static int32_t get_offset_of_m_Scores_3() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_Scores_3)); }
	inline IScoreU5BU5D_t527871248* get_m_Scores_3() const { return ___m_Scores_3; }
	inline IScoreU5BU5D_t527871248** get_address_of_m_Scores_3() { return &___m_Scores_3; }
	inline void set_m_Scores_3(IScoreU5BU5D_t527871248* value)
	{
		___m_Scores_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Scores_3), value);
	}

	inline static int32_t get_offset_of_m_Title_4() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_Title_4)); }
	inline String_t* get_m_Title_4() const { return ___m_Title_4; }
	inline String_t** get_address_of_m_Title_4() { return &___m_Title_4; }
	inline void set_m_Title_4(String_t* value)
	{
		___m_Title_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_4), value);
	}

	inline static int32_t get_offset_of_m_UserIDs_5() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_UserIDs_5)); }
	inline StringU5BU5D_t1281789340* get_m_UserIDs_5() const { return ___m_UserIDs_5; }
	inline StringU5BU5D_t1281789340** get_address_of_m_UserIDs_5() { return &___m_UserIDs_5; }
	inline void set_m_UserIDs_5(StringU5BU5D_t1281789340* value)
	{
		___m_UserIDs_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserIDs_5), value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CuserScopeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___U3CuserScopeU3Ek__BackingField_7)); }
	inline int32_t get_U3CuserScopeU3Ek__BackingField_7() const { return ___U3CuserScopeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CuserScopeU3Ek__BackingField_7() { return &___U3CuserScopeU3Ek__BackingField_7; }
	inline void set_U3CuserScopeU3Ek__BackingField_7(int32_t value)
	{
		___U3CuserScopeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrangeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___U3CrangeU3Ek__BackingField_8)); }
	inline Range_t173988048  get_U3CrangeU3Ek__BackingField_8() const { return ___U3CrangeU3Ek__BackingField_8; }
	inline Range_t173988048 * get_address_of_U3CrangeU3Ek__BackingField_8() { return &___U3CrangeU3Ek__BackingField_8; }
	inline void set_U3CrangeU3Ek__BackingField_8(Range_t173988048  value)
	{
		___U3CrangeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CtimeScopeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___U3CtimeScopeU3Ek__BackingField_9)); }
	inline int32_t get_U3CtimeScopeU3Ek__BackingField_9() const { return ___U3CtimeScopeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CtimeScopeU3Ek__BackingField_9() { return &___U3CtimeScopeU3Ek__BackingField_9; }
	inline void set_U3CtimeScopeU3Ek__BackingField_9(int32_t value)
	{
		___U3CtimeScopeU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARD_T1065076763_H
#ifndef USERPROFILE_T3137328177_H
#define USERPROFILE_T3137328177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct  UserProfile_t3137328177  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_2;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_t3840446185 * ___m_Image_4;

public:
	inline static int32_t get_offset_of_m_UserName_0() { return static_cast<int32_t>(offsetof(UserProfile_t3137328177, ___m_UserName_0)); }
	inline String_t* get_m_UserName_0() const { return ___m_UserName_0; }
	inline String_t** get_address_of_m_UserName_0() { return &___m_UserName_0; }
	inline void set_m_UserName_0(String_t* value)
	{
		___m_UserName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserName_0), value);
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(UserProfile_t3137328177, ___m_ID_1)); }
	inline String_t* get_m_ID_1() const { return ___m_ID_1; }
	inline String_t** get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(String_t* value)
	{
		___m_ID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ID_1), value);
	}

	inline static int32_t get_offset_of_m_IsFriend_2() { return static_cast<int32_t>(offsetof(UserProfile_t3137328177, ___m_IsFriend_2)); }
	inline bool get_m_IsFriend_2() const { return ___m_IsFriend_2; }
	inline bool* get_address_of_m_IsFriend_2() { return &___m_IsFriend_2; }
	inline void set_m_IsFriend_2(bool value)
	{
		___m_IsFriend_2 = value;
	}

	inline static int32_t get_offset_of_m_State_3() { return static_cast<int32_t>(offsetof(UserProfile_t3137328177, ___m_State_3)); }
	inline int32_t get_m_State_3() const { return ___m_State_3; }
	inline int32_t* get_address_of_m_State_3() { return &___m_State_3; }
	inline void set_m_State_3(int32_t value)
	{
		___m_State_3 = value;
	}

	inline static int32_t get_offset_of_m_Image_4() { return static_cast<int32_t>(offsetof(UserProfile_t3137328177, ___m_Image_4)); }
	inline Texture2D_t3840446185 * get_m_Image_4() const { return ___m_Image_4; }
	inline Texture2D_t3840446185 ** get_address_of_m_Image_4() { return &___m_Image_4; }
	inline void set_m_Image_4(Texture2D_t3840446185 * value)
	{
		___m_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERPROFILE_T3137328177_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef ACTION_1_T269755560_H
#define ACTION_1_T269755560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<System.Boolean>
struct  Action_1_t269755560  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T269755560_H
#ifndef LOCALUSER_T365094499_H
#define LOCALUSER_T365094499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct  LocalUser_t365094499  : public UserProfile_t3137328177
{
public:
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t909679733* ___m_Friends_5;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_7;

public:
	inline static int32_t get_offset_of_m_Friends_5() { return static_cast<int32_t>(offsetof(LocalUser_t365094499, ___m_Friends_5)); }
	inline IUserProfileU5BU5D_t909679733* get_m_Friends_5() const { return ___m_Friends_5; }
	inline IUserProfileU5BU5D_t909679733** get_address_of_m_Friends_5() { return &___m_Friends_5; }
	inline void set_m_Friends_5(IUserProfileU5BU5D_t909679733* value)
	{
		___m_Friends_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Friends_5), value);
	}

	inline static int32_t get_offset_of_m_Authenticated_6() { return static_cast<int32_t>(offsetof(LocalUser_t365094499, ___m_Authenticated_6)); }
	inline bool get_m_Authenticated_6() const { return ___m_Authenticated_6; }
	inline bool* get_address_of_m_Authenticated_6() { return &___m_Authenticated_6; }
	inline void set_m_Authenticated_6(bool value)
	{
		___m_Authenticated_6 = value;
	}

	inline static int32_t get_offset_of_m_Underage_7() { return static_cast<int32_t>(offsetof(LocalUser_t365094499, ___m_Underage_7)); }
	inline bool get_m_Underage_7() const { return ___m_Underage_7; }
	inline bool* get_address_of_m_Underage_7() { return &___m_Underage_7; }
	inline void set_m_Underage_7(bool value)
	{
		___m_Underage_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALUSER_T365094499_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_t972561905  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Score_t1968645328 * m_Items[1];

public:
	inline Score_t1968645328 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Score_t1968645328 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Score_t1968645328 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Score_t1968645328 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Score_t1968645328 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Score_t1968645328 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t527871248  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t1895532524  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UserProfile_t3137328177 * m_Items[1];

public:
	inline UserProfile_t3137328177 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserProfile_t3137328177 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserProfile_t3137328177 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline UserProfile_t3137328177 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserProfile_t3137328177 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserProfile_t3137328177 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t909679733  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void List_1__ctor_m2321703786_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
extern "C" IL2CPP_METHOD_ATTR void Action_1_Invoke_m1933767679_gshared (Action_1_t269755560 * __this, bool p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
extern "C" IL2CPP_METHOD_ATTR ObjectU5BU5D_t2843939325* List_1_ToArray_m4168020446_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);

// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_get_Instance_m3727118555 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Social_get_Active_m1353875849 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_SelectSocialPlatform_m1059707725 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Local::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Local__ctor_m3461781796 (Local_t4068483442 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m89809597 (Achievement_t565359984 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_m2110138160 (Achievement_t565359984 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" IL2CPP_METHOD_ATTR bool Achievement_get_completed_m1377700980 (Achievement_t565359984 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" IL2CPP_METHOD_ATTR bool Achievement_get_hidden_m4063998500 (Achievement_t565359984 * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Achievement_get_lastReportedDate_m2200074798 (Achievement_t565359984 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m751528388 (AchievementDescription_t3217594527 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_m985811184 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_m417729785 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_m387769685 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_m690845291 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_m4273978152 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_m1497330198 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_set_id_m3990768853 (Leaderboard_t1065076763 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Range__ctor_m3975982763 (Range_t173988048 * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_set_range_m1868499957 (Leaderboard_t1065076763 * __this, Range_t173988048  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m4131851828 (Leaderboard_t1065076763 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3468042286 (Leaderboard_t1065076763 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Score__ctor_m2390363112 (Score_t1968645328 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m4258535896 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" IL2CPP_METHOD_ATTR Range_t173988048  Leaderboard_get_range_m167968592 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m4090697307 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_m4226979676 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UserProfile__ctor_m3353918255 (UserProfile_t3137328177 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_get_Now_m1277138875 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Score__ctor_m1554947855 (Score_t1968645328 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t3738529785  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m268558918 (Score_t1968645328 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Score_set_value_m935893699 (Score_t1968645328 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" IL2CPP_METHOD_ATTR int64_t Score_get_value_m3180422307 (Score_t1968645328 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m3645107971 (Score_t1968645328 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m3178143816 (UserProfile_t3137328177 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_m3063744753 (UserProfile_t3137328177 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m3838691482 (UserProfile_t3137328177 * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_m3340793320 (UserProfile_t3137328177 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::.ctor()
inline void List_1__ctor_m973695318 (List_1_t314435623 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t314435623 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::.ctor()
inline void List_1__ctor_m3689826338 (List_1_t394701973 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t394701973 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Achievement>::.ctor()
inline void List_1__ctor_m1836006746 (List_1_t2037434726 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2037434726 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>::.ctor()
inline void List_1__ctor_m1889483756 (List_1_t2537151505 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2537151505 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LocalUser__ctor_m4260307073 (LocalUser_t365094499 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Local::CreateDummyTexture(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Local_CreateDummyTexture_m3769606019 (Local_t4068483442 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Local::PopulateStaticData()
extern "C" IL2CPP_METHOD_ATTR void Local_PopulateStaticData_m916798409 (Local_t4068483442 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_m3352566618 (LocalUser_t365094499 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_m1848352351 (LocalUser_t365094499 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" IL2CPP_METHOD_ATTR void UserProfile_SetUserID_m1137218839 (UserProfile_t3137328177 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" IL2CPP_METHOD_ATTR void UserProfile_SetUserName_m1732526939 (UserProfile_t3137328177 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void UserProfile_SetImage_m418239758 (UserProfile_t3137328177 * __this, Texture2D_t3840446185 * ___image0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m1933767679 (Action_1_t269755560 * __this, bool p0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t269755560 *, bool, const RuntimeMethod*))Action_1_Invoke_m1933767679_gshared)(__this, p0, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void UserProfile__ctor_m2409346676 (UserProfile_t3137328177 * __this, String_t* ___name0, String_t* ___id1, bool ___friend2, int32_t ___state3, Texture2D_t3840446185 * ___image4, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.UserProfile>::Add(!0)
inline void List_1_Add_m1578522892 (List_1_t314435623 * __this, UserProfile_t3137328177 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t314435623 *, UserProfile_t3137328177 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AchievementDescription__ctor_m2104645942 (AchievementDescription_t3217594527 * __this, String_t* ___id0, String_t* ___title1, Texture2D_t3840446185 * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.AchievementDescription>::Add(!0)
inline void List_1_Add_m1774517840 (List_1_t394701973 * __this, AchievementDescription_t3217594527 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t394701973 *, AchievementDescription_t3217594527 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Leaderboard__ctor_m1030108446 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_m459905577 (Leaderboard_t1065076763 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::.ctor()
inline void List_1__ctor_m1850989583 (List_1_t3440720070 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3440720070 *, const RuntimeMethod*))List_1__ctor_m2321703786_gshared)(__this, method);
}
// System.DateTime System.DateTime::AddDays(System.Double)
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  DateTime_AddDays_m2583849741 (DateTime_t3738529785 * __this, double p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::Add(!0)
inline void List_1_Add_m1702244787 (List_1_t3440720070 * __this, Score_t1968645328 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t3440720070 *, Score_t1968645328 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Score>::ToArray()
inline ScoreU5BU5D_t972561905* List_1_ToArray_m2845752048 (List_1_t3440720070 * __this, const RuntimeMethod* method)
{
	return ((  ScoreU5BU5D_t972561905* (*) (List_1_t3440720070 *, const RuntimeMethod*))List_1_ToArray_m4168020446_gshared)(__this, method);
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m2163784072 (Leaderboard_t1065076763 * __this, IScoreU5BU5D_t527871248* ___scores0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.Impl.Leaderboard>::Add(!0)
inline void List_1_Add_m351770690 (List_1_t2537151505 * __this, Leaderboard_t1065076763 * p0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2537151505 *, Leaderboard_t1065076763 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_gray()
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  Color_get_gray_m1471337008 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixel(System.Int32,System.Int32,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixel_m2984741184 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, Color_t2555686324  p2, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m2271746283 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.Social::get_Active()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Social_get_Active_m1353875849 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ActivePlatform_get_Instance_m3727118555(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.Social::get_localUser()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Social_get_localUser_m4215544813 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Social_get_localUser_m4215544813_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = Social_get_Active_m1353875849(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.ISocialPlatform::get_localUser() */, ISocialPlatform_t2920057433_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		goto IL_0011;
	}

IL_0011:
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::get_Instance()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_get_Instance_m3727118555 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ActivePlatform_get_Instance_m3727118555_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ((ActivePlatform_t3103617690_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t3103617690_il2cpp_TypeInfo_var))->get__active_0();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = ActivePlatform_SelectSocialPlatform_m1059707725(NULL /*static, unused*/, /*hidden argument*/NULL);
		((ActivePlatform_t3103617690_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t3103617690_il2cpp_TypeInfo_var))->set__active_0(L_1);
	}

IL_0015:
	{
		RuntimeObject* L_2 = ((ActivePlatform_t3103617690_StaticFields*)il2cpp_codegen_static_fields_for(ActivePlatform_t3103617690_il2cpp_TypeInfo_var))->get__active_0();
		V_0 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// UnityEngine.SocialPlatforms.ISocialPlatform UnityEngine.SocialPlatforms.ActivePlatform::SelectSocialPlatform()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ActivePlatform_SelectSocialPlatform_m1059707725 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ActivePlatform_SelectSocialPlatform_m1059707725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Local_t4068483442 * L_0 = (Local_t4068483442 *)il2cpp_codegen_object_new(Local_t4068483442_il2cpp_TypeInfo_var);
		Local__ctor_m3461781796(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Achievement_ToString_m3521250266 (Achievement_t565359984 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Achievement_ToString_m3521250266_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = Achievement_get_id_m89809597(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3786252490);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		double L_5 = Achievement_get_percentCompleted_m2110138160(__this, /*hidden argument*/NULL);
		double L_6 = L_5;
		RuntimeObject * L_7 = Box(Double_t594665363_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_7);
		ObjectU5BU5D_t2843939325* L_8 = L_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral3786252490);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_9 = L_8;
		bool L_10 = Achievement_get_completed_m1377700980(__this, /*hidden argument*/NULL);
		bool L_11 = L_10;
		RuntimeObject * L_12 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_12);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_12);
		ObjectU5BU5D_t2843939325* L_13 = L_9;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteral3786252490);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_14 = L_13;
		bool L_15 = Achievement_get_hidden_m4063998500(__this, /*hidden argument*/NULL);
		bool L_16 = L_15;
		RuntimeObject * L_17 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_17);
		ObjectU5BU5D_t2843939325* L_18 = L_14;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral3786252490);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_19 = L_18;
		DateTime_t3738529785  L_20 = Achievement_get_lastReportedDate_m2200074798(__this, /*hidden argument*/NULL);
		DateTime_t3738529785  L_21 = L_20;
		RuntimeObject * L_22 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_21);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_22);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_22);
		String_t* L_23 = String_Concat_m2971454694(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0074;
	}

IL_0074:
	{
		String_t* L_24 = V_0;
		return L_24;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m89809597 (Achievement_t565359984 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_3();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
extern "C" IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_m2110138160 (Achievement_t565359984 * __this, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	{
		double L_0 = __this->get_U3CpercentCompletedU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		double L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
extern "C" IL2CPP_METHOD_ATTR bool Achievement_get_completed_m1377700980 (Achievement_t565359984 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Completed_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
extern "C" IL2CPP_METHOD_ATTR bool Achievement_get_hidden_m4063998500 (Achievement_t565359984 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Hidden_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
extern "C" IL2CPP_METHOD_ATTR DateTime_t3738529785  Achievement_get_lastReportedDate_m2200074798 (Achievement_t565359984 * __this, const RuntimeMethod* method)
{
	DateTime_t3738529785  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		DateTime_t3738529785  L_0 = __this->get_m_LastReportedDate_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		DateTime_t3738529785  L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AchievementDescription__ctor_m2104645942 (AchievementDescription_t3217594527 * __this, String_t* ___id0, String_t* ___title1, Texture2D_t3840446185 * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___id0;
		AchievementDescription_set_id_m751528388(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___title1;
		__this->set_m_Title_0(L_1);
		Texture2D_t3840446185 * L_2 = ___image2;
		__this->set_m_Image_1(L_2);
		String_t* L_3 = ___achievedDescription3;
		__this->set_m_AchievedDescription_2(L_3);
		String_t* L_4 = ___unachievedDescription4;
		__this->set_m_UnachievedDescription_3(L_4);
		bool L_5 = ___hidden5;
		__this->set_m_Hidden_4(L_5);
		int32_t L_6 = ___points6;
		__this->set_m_Points_5(L_6);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* AchievementDescription_ToString_m2063334390 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AchievementDescription_ToString_m2063334390_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = AchievementDescription_get_id_m985811184(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3786252490);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		String_t* L_5 = AchievementDescription_get_title_m417729785(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3786252490);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		String_t* L_8 = AchievementDescription_get_achievedDescription_m387769685(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_8);
		ObjectU5BU5D_t2843939325* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral3786252490);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_10 = L_9;
		String_t* L_11 = AchievementDescription_get_unachievedDescription_m690845291(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral3786252490);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_13 = L_12;
		int32_t L_14 = AchievementDescription_get_points_m4273978152(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14;
		RuntimeObject * L_16 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral3786252490);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_18 = L_17;
		bool L_19 = AchievementDescription_get_hidden_m1497330198(__this, /*hidden argument*/NULL);
		bool L_20 = L_19;
		RuntimeObject * L_21 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)L_21);
		String_t* L_22 = String_Concat_m2971454694(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_007d;
	}

IL_007d:
	{
		String_t* L_23 = V_0;
		return L_23;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_m985811184 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
extern "C" IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m751528388 (AchievementDescription_t3217594527 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
extern "C" IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_m417729785 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_Title_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
extern "C" IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_m387769685 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_AchievedDescription_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
extern "C" IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_m690845291 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UnachievedDescription_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
extern "C" IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_m1497330198 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Hidden_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
extern "C" IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_m4273978152 (AchievementDescription_t3217594527 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Points_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Leaderboard__ctor_m1030108446 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard__ctor_m1030108446_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		Leaderboard_set_id_m3990768853(__this, _stringLiteral2065339255, /*hidden argument*/NULL);
		Range_t173988048  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Range__ctor_m3975982763((&L_0), 1, ((int32_t)10), /*hidden argument*/NULL);
		Leaderboard_set_range_m1868499957(__this, L_0, /*hidden argument*/NULL);
		Leaderboard_set_userScope_m4131851828(__this, 0, /*hidden argument*/NULL);
		Leaderboard_set_timeScope_m3468042286(__this, 2, /*hidden argument*/NULL);
		__this->set_m_Loading_0((bool)0);
		Score_t1968645328 * L_1 = (Score_t1968645328 *)il2cpp_codegen_object_new(Score_t1968645328_il2cpp_TypeInfo_var);
		Score__ctor_m2390363112(L_1, _stringLiteral2065339255, (((int64_t)((int64_t)0))), /*hidden argument*/NULL);
		__this->set_m_LocalUserScore_1(L_1);
		__this->set_m_MaxRange_2(0);
		ScoreU5BU5D_t972561905* L_2 = (ScoreU5BU5D_t972561905*)SZArrayNew(ScoreU5BU5D_t972561905_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_m_Scores_3((IScoreU5BU5D_t527871248*)L_2);
		__this->set_m_Title_4(_stringLiteral2065339255);
		StringU5BU5D_t1281789340* L_3 = (StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_m_UserIDs_5(L_3);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Leaderboard_ToString_m1544604165 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Leaderboard_ToString_m1544604165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Range_t173988048  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Range_t173988048  V_1;
	memset(&V_1, 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral930699636);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral930699636);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		String_t* L_3 = Leaderboard_get_id_m4258535896(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_3);
		ObjectU5BU5D_t2843939325* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral2979315402);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral2979315402);
		ObjectU5BU5D_t2843939325* L_5 = L_4;
		String_t* L_6 = __this->get_m_Title_4();
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_6);
		ObjectU5BU5D_t2843939325* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1695920045);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral1695920045);
		ObjectU5BU5D_t2843939325* L_8 = L_7;
		bool L_9 = __this->get_m_Loading_0();
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_10);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_11);
		ObjectU5BU5D_t2843939325* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral1702585322);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral1702585322);
		ObjectU5BU5D_t2843939325* L_13 = L_12;
		Range_t173988048  L_14 = Leaderboard_get_range_m167968592(__this, /*hidden argument*/NULL);
		V_0 = L_14;
		int32_t L_15 = (&V_0)->get_from_0();
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_17);
		ObjectU5BU5D_t2843939325* L_18 = L_13;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral3452614532);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral3452614532);
		ObjectU5BU5D_t2843939325* L_19 = L_18;
		Range_t173988048  L_20 = Leaderboard_get_range_m167968592(__this, /*hidden argument*/NULL);
		V_1 = L_20;
		int32_t L_21 = (&V_1)->get_count_1();
		int32_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_23);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_23);
		ObjectU5BU5D_t2843939325* L_24 = L_19;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral3449030883);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (RuntimeObject *)_stringLiteral3449030883);
		ObjectU5BU5D_t2843939325* L_25 = L_24;
		uint32_t L_26 = __this->get_m_MaxRange_2();
		uint32_t L_27 = L_26;
		RuntimeObject * L_28 = Box(UInt32_t2560061978_il2cpp_TypeInfo_var, &L_27);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_28);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (RuntimeObject *)L_28);
		ObjectU5BU5D_t2843939325* L_29 = L_25;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral1177415910);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (RuntimeObject *)_stringLiteral1177415910);
		ObjectU5BU5D_t2843939325* L_30 = L_29;
		IScoreU5BU5D_t527871248* L_31 = __this->get_m_Scores_3();
		NullCheck(L_31);
		int32_t L_32 = (((int32_t)((int32_t)(((RuntimeArray *)L_31)->max_length))));
		RuntimeObject * L_33 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_32);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (RuntimeObject *)L_33);
		ObjectU5BU5D_t2843939325* L_34 = L_30;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral1358844784);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (RuntimeObject *)_stringLiteral1358844784);
		ObjectU5BU5D_t2843939325* L_35 = L_34;
		int32_t L_36 = Leaderboard_get_userScope_m4090697307(__this, /*hidden argument*/NULL);
		int32_t L_37 = L_36;
		RuntimeObject * L_38 = Box(UserScope_t604006431_il2cpp_TypeInfo_var, &L_37);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (RuntimeObject *)L_38);
		ObjectU5BU5D_t2843939325* L_39 = L_35;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral1488170903);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (RuntimeObject *)_stringLiteral1488170903);
		ObjectU5BU5D_t2843939325* L_40 = L_39;
		int32_t L_41 = Leaderboard_get_timeScope_m4226979676(__this, /*hidden argument*/NULL);
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(TimeScope_t539351503_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_43);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (RuntimeObject *)L_43);
		ObjectU5BU5D_t2843939325* L_44 = L_40;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral933325165);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (RuntimeObject *)_stringLiteral933325165);
		ObjectU5BU5D_t2843939325* L_45 = L_44;
		StringU5BU5D_t1281789340* L_46 = __this->get_m_UserIDs_5();
		NullCheck(L_46);
		int32_t L_47 = (((int32_t)((int32_t)(((RuntimeArray *)L_46)->max_length))));
		RuntimeObject * L_48 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_47);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_48);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (RuntimeObject *)L_48);
		String_t* L_49 = String_Concat_m2971454694(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		V_2 = L_49;
		goto IL_0104;
	}

IL_0104:
	{
		String_t* L_50 = V_2;
		return L_50;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m2163784072 (Leaderboard_t1065076763 * __this, IScoreU5BU5D_t527871248* ___scores0, const RuntimeMethod* method)
{
	{
		IScoreU5BU5D_t527871248* L_0 = ___scores0;
		__this->set_m_Scores_3(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_m459905577 (Leaderboard_t1065076763 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___title0;
		__this->set_m_Title_4(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_m4258535896 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CidU3Ek__BackingField_6();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_set_id_m3990768853 (Leaderboard_t1065076763 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
extern "C" IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m4090697307 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CuserScopeU3Ek__BackingField_7();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m4131851828 (Leaderboard_t1065076763 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CuserScopeU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
extern "C" IL2CPP_METHOD_ATTR Range_t173988048  Leaderboard_get_range_m167968592 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method)
{
	Range_t173988048  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Range_t173988048  L_0 = __this->get_U3CrangeU3Ek__BackingField_8();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Range_t173988048  L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_set_range_m1868499957 (Leaderboard_t1065076763 * __this, Range_t173988048  ___value0, const RuntimeMethod* method)
{
	{
		Range_t173988048  L_0 = ___value0;
		__this->set_U3CrangeU3Ek__BackingField_8(L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
extern "C" IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_m4226979676 (Leaderboard_t1065076763 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CtimeScopeU3Ek__BackingField_9();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
extern "C" IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3468042286 (Leaderboard_t1065076763 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CtimeScopeU3Ek__BackingField_9(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
extern "C" IL2CPP_METHOD_ATTR void LocalUser__ctor_m4260307073 (LocalUser_t365094499 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalUser__ctor_m4260307073_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UserProfile__ctor_m3353918255(__this, /*hidden argument*/NULL);
		UserProfileU5BU5D_t1895532524* L_0 = (UserProfileU5BU5D_t1895532524*)SZArrayNew(UserProfileU5BU5D_t1895532524_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_m_Friends_5((IUserProfileU5BU5D_t909679733*)L_0);
		__this->set_m_Authenticated_6((bool)0);
		__this->set_m_Underage_7((bool)0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::Authenticate(System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void LocalUser_Authenticate_m2136646640 (LocalUser_t365094499 * __this, Action_1_t269755560 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LocalUser_Authenticate_m2136646640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ActivePlatform_get_Instance_m3727118555(NULL /*static, unused*/, /*hidden argument*/NULL);
		Action_1_t269755560 * L_1 = ___callback0;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, Action_1_t269755560 * >::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>) */, ISocialPlatform_t2920057433_il2cpp_TypeInfo_var, L_0, __this, L_1);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_m3352566618 (LocalUser_t365094499 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Authenticated_6(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_m1848352351 (LocalUser_t365094499 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_Underage_7(L_0);
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_underage()
extern "C" IL2CPP_METHOD_ATTR bool LocalUser_get_underage_m4081735722 (LocalUser_t365094499 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_Underage_7();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Score__ctor_m2390363112 (Score_t1968645328 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score__ctor_m2390363112_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID0;
		int64_t L_1 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_2 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		Score__ctor_m1554947855(__this, L_0, L_1, _stringLiteral3452614544, L_2, _stringLiteral757602046, (-1), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Score__ctor_m1554947855 (Score_t1968645328 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t3738529785  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___leaderboardID0;
		Score_set_leaderboardID_m268558918(__this, L_0, /*hidden argument*/NULL);
		int64_t L_1 = ___value1;
		Score_set_value_m935893699(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___userID2;
		__this->set_m_UserID_2(L_2);
		DateTime_t3738529785  L_3 = ___date3;
		__this->set_m_Date_0(L_3);
		String_t* L_4 = ___formattedValue4;
		__this->set_m_FormattedValue_1(L_4);
		int32_t L_5 = ___rank5;
		__this->set_m_Rank_3(L_5);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* Score_ToString_m885507283 (Score_t1968645328 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Score_ToString_m885507283_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2608391305);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral2608391305);
		ObjectU5BU5D_t2843939325* L_2 = L_1;
		int32_t L_3 = __this->get_m_Rank_3();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1464936688);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteral1464936688);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		int64_t L_8 = Score_get_value_m3180422307(__this, /*hidden argument*/NULL);
		int64_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3818843126);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral3818843126);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		String_t* L_13 = Score_get_leaderboardID_m3645107971(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_13);
		ObjectU5BU5D_t2843939325* L_14 = L_12;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteral2823322644);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)_stringLiteral2823322644);
		ObjectU5BU5D_t2843939325* L_15 = L_14;
		String_t* L_16 = __this->get_m_UserID_2();
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject *)L_16);
		ObjectU5BU5D_t2843939325* L_17 = L_15;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral4281704856);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject *)_stringLiteral4281704856);
		ObjectU5BU5D_t2843939325* L_18 = L_17;
		DateTime_t3738529785  L_19 = __this->get_m_Date_0();
		DateTime_t3738529785  L_20 = L_19;
		RuntimeObject * L_21 = Box(DateTime_t3738529785_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_21);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (RuntimeObject *)L_21);
		String_t* L_22 = String_Concat_m2971454694(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		V_0 = L_22;
		goto IL_0078;
	}

IL_0078:
	{
		String_t* L_23 = V_0;
		return L_23;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m3645107971 (Score_t1968645328 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_U3CleaderboardIDU3Ek__BackingField_4();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m268558918 (Score_t1968645328 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CleaderboardIDU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" IL2CPP_METHOD_ATTR int64_t Score_get_value_m3180422307 (Score_t1968645328 * __this, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		int64_t L_0 = __this->get_U3CvalueU3Ek__BackingField_5();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int64_t L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void Score_set_value_m935893699 (Score_t1968645328 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CvalueU3Ek__BackingField_5(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
extern "C" IL2CPP_METHOD_ATTR void UserProfile__ctor_m3353918255 (UserProfile_t3137328177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserProfile__ctor_m3353918255_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set_m_UserName_0(_stringLiteral3725686153);
		__this->set_m_ID_1(_stringLiteral3452614544);
		__this->set_m_IsFriend_2((bool)0);
		__this->set_m_State_3(3);
		Texture2D_t3840446185 * L_0 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->set_m_Image_4(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void UserProfile__ctor_m2409346676 (UserProfile_t3137328177 * __this, String_t* ___name0, String_t* ___id1, bool ___friend2, int32_t ___state3, Texture2D_t3840446185 * ___image4, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_m_UserName_0(L_0);
		String_t* L_1 = ___id1;
		__this->set_m_ID_1(L_1);
		bool L_2 = ___friend2;
		__this->set_m_IsFriend_2(L_2);
		int32_t L_3 = ___state3;
		__this->set_m_State_3(L_3);
		Texture2D_t3840446185 * L_4 = ___image4;
		__this->set_m_Image_4(L_4);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
extern "C" IL2CPP_METHOD_ATTR String_t* UserProfile_ToString_m2232825484 (UserProfile_t3137328177 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UserProfile_ToString_m2232825484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		ObjectU5BU5D_t2843939325* L_0 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = UserProfile_get_id_m3178143816(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral3786252490);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_4 = L_3;
		String_t* L_5 = UserProfile_get_userName_m3063744753(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral3786252490);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		bool L_8 = UserProfile_get_isFriend_m3838691482(__this, /*hidden argument*/NULL);
		bool L_9 = L_8;
		RuntimeObject * L_10 = Box(Boolean_t97287965_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_10);
		ObjectU5BU5D_t2843939325* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral3786252490);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)_stringLiteral3786252490);
		ObjectU5BU5D_t2843939325* L_12 = L_11;
		int32_t L_13 = UserProfile_get_state_m3340793320(__this, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(UserState_t4177058321_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject *)L_15);
		String_t* L_16 = String_Concat_m2971454694(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_0058;
	}

IL_0058:
	{
		String_t* L_17 = V_0;
		return L_17;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
extern "C" IL2CPP_METHOD_ATTR void UserProfile_SetUserName_m1732526939 (UserProfile_t3137328177 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		__this->set_m_UserName_0(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
extern "C" IL2CPP_METHOD_ATTR void UserProfile_SetUserID_m1137218839 (UserProfile_t3137328177 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		__this->set_m_ID_1(L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
extern "C" IL2CPP_METHOD_ATTR void UserProfile_SetImage_m418239758 (UserProfile_t3137328177 * __this, Texture2D_t3840446185 * ___image0, const RuntimeMethod* method)
{
	{
		Texture2D_t3840446185 * L_0 = ___image0;
		__this->set_m_Image_4(L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
extern "C" IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_m3063744753 (UserProfile_t3137328177 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_UserName_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
extern "C" IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m3178143816 (UserProfile_t3137328177 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->get_m_ID_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
extern "C" IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m3838691482 (UserProfile_t3137328177 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->get_m_IsFriend_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
extern "C" IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_m3340793320 (UserProfile_t3137328177 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_State_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Local::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Local__ctor_m3461781796 (Local_t4068483442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local__ctor_m3461781796_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t314435623 * L_0 = (List_1_t314435623 *)il2cpp_codegen_object_new(List_1_t314435623_il2cpp_TypeInfo_var);
		List_1__ctor_m973695318(L_0, /*hidden argument*/List_1__ctor_m973695318_RuntimeMethod_var);
		__this->set_m_Friends_1(L_0);
		List_1_t314435623 * L_1 = (List_1_t314435623 *)il2cpp_codegen_object_new(List_1_t314435623_il2cpp_TypeInfo_var);
		List_1__ctor_m973695318(L_1, /*hidden argument*/List_1__ctor_m973695318_RuntimeMethod_var);
		__this->set_m_Users_2(L_1);
		List_1_t394701973 * L_2 = (List_1_t394701973 *)il2cpp_codegen_object_new(List_1_t394701973_il2cpp_TypeInfo_var);
		List_1__ctor_m3689826338(L_2, /*hidden argument*/List_1__ctor_m3689826338_RuntimeMethod_var);
		__this->set_m_AchievementDescriptions_3(L_2);
		List_1_t2037434726 * L_3 = (List_1_t2037434726 *)il2cpp_codegen_object_new(List_1_t2037434726_il2cpp_TypeInfo_var);
		List_1__ctor_m1836006746(L_3, /*hidden argument*/List_1__ctor_m1836006746_RuntimeMethod_var);
		__this->set_m_Achievements_4(L_3);
		List_1_t2537151505 * L_4 = (List_1_t2537151505 *)il2cpp_codegen_object_new(List_1_t2537151505_il2cpp_TypeInfo_var);
		List_1__ctor_m1889483756(L_4, /*hidden argument*/List_1__ctor_m1889483756_RuntimeMethod_var);
		__this->set_m_Leaderboards_5(L_4);
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.Local::get_localUser()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* Local_get_localUser_m1583274769 (Local_t4068483442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_get_localUser_m1583274769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Local_t4068483442_il2cpp_TypeInfo_var);
		LocalUser_t365094499 * L_0 = ((Local_t4068483442_StaticFields*)il2cpp_codegen_static_fields_for(Local_t4068483442_il2cpp_TypeInfo_var))->get_m_LocalUser_0();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		LocalUser_t365094499 * L_1 = (LocalUser_t365094499 *)il2cpp_codegen_object_new(LocalUser_t365094499_il2cpp_TypeInfo_var);
		LocalUser__ctor_m4260307073(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Local_t4068483442_il2cpp_TypeInfo_var);
		((Local_t4068483442_StaticFields*)il2cpp_codegen_static_fields_for(Local_t4068483442_il2cpp_TypeInfo_var))->set_m_LocalUser_0(L_1);
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Local_t4068483442_il2cpp_TypeInfo_var);
		LocalUser_t365094499 * L_2 = ((Local_t4068483442_StaticFields*)il2cpp_codegen_static_fields_for(Local_t4068483442_il2cpp_TypeInfo_var))->get_m_LocalUser_0();
		V_0 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
extern "C" IL2CPP_METHOD_ATTR void Local_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2207258125 (Local_t4068483442 * __this, RuntimeObject* ___user0, Action_1_t269755560 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m2207258125_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	LocalUser_t365094499 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___user0;
		V_0 = ((LocalUser_t365094499 *)CastclassClass((RuntimeObject*)L_0, LocalUser_t365094499_il2cpp_TypeInfo_var));
		Texture2D_t3840446185 * L_1 = Local_CreateDummyTexture_m3769606019(__this, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->set_m_DefaultTexture_6(L_1);
		Local_PopulateStaticData_m916798409(__this, /*hidden argument*/NULL);
		LocalUser_t365094499 * L_2 = V_0;
		NullCheck(L_2);
		LocalUser_SetAuthenticated_m3352566618(L_2, (bool)1, /*hidden argument*/NULL);
		LocalUser_t365094499 * L_3 = V_0;
		NullCheck(L_3);
		LocalUser_SetUnderage_m1848352351(L_3, (bool)0, /*hidden argument*/NULL);
		LocalUser_t365094499 * L_4 = V_0;
		NullCheck(L_4);
		UserProfile_SetUserID_m1137218839(L_4, _stringLiteral15947561, /*hidden argument*/NULL);
		LocalUser_t365094499 * L_5 = V_0;
		NullCheck(L_5);
		UserProfile_SetUserName_m1732526939(L_5, _stringLiteral774297412, /*hidden argument*/NULL);
		LocalUser_t365094499 * L_6 = V_0;
		Texture2D_t3840446185 * L_7 = __this->get_m_DefaultTexture_6();
		NullCheck(L_6);
		UserProfile_SetImage_m418239758(L_6, L_7, /*hidden argument*/NULL);
		Action_1_t269755560 * L_8 = ___callback1;
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		Action_1_t269755560 * L_9 = ___callback1;
		NullCheck(L_9);
		Action_1_Invoke_m1933767679(L_9, (bool)1, /*hidden argument*/Action_1_Invoke_m1933767679_RuntimeMethod_var);
	}

IL_005b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::PopulateStaticData()
extern "C" IL2CPP_METHOD_ATTR void Local_PopulateStaticData_m916798409 (Local_t4068483442 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_PopulateStaticData_m916798409_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_t1065076763 * V_0 = NULL;
	List_1_t3440720070 * V_1 = NULL;
	DateTime_t3738529785  V_2;
	memset(&V_2, 0, sizeof(V_2));
	DateTime_t3738529785  V_3;
	memset(&V_3, 0, sizeof(V_3));
	DateTime_t3738529785  V_4;
	memset(&V_4, 0, sizeof(V_4));
	DateTime_t3738529785  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		List_1_t314435623 * L_0 = __this->get_m_Friends_1();
		Texture2D_t3840446185 * L_1 = __this->get_m_DefaultTexture_6();
		UserProfile_t3137328177 * L_2 = (UserProfile_t3137328177 *)il2cpp_codegen_object_new(UserProfile_t3137328177_il2cpp_TypeInfo_var);
		UserProfile__ctor_m2409346676(L_2, _stringLiteral2758590827, _stringLiteral1972262697, (bool)1, 0, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Add_m1578522892(L_0, L_2, /*hidden argument*/List_1_Add_m1578522892_RuntimeMethod_var);
		List_1_t314435623 * L_3 = __this->get_m_Friends_1();
		Texture2D_t3840446185 * L_4 = __this->get_m_DefaultTexture_6();
		UserProfile_t3137328177 * L_5 = (UserProfile_t3137328177 *)il2cpp_codegen_object_new(UserProfile_t3137328177_il2cpp_TypeInfo_var);
		UserProfile__ctor_m2409346676(L_5, _stringLiteral2754897401, _stringLiteral3928577833, (bool)1, 0, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		List_1_Add_m1578522892(L_3, L_5, /*hidden argument*/List_1_Add_m1578522892_RuntimeMethod_var);
		List_1_t314435623 * L_6 = __this->get_m_Friends_1();
		Texture2D_t3840446185 * L_7 = __this->get_m_DefaultTexture_6();
		UserProfile_t3137328177 * L_8 = (UserProfile_t3137328177 *)il2cpp_codegen_object_new(UserProfile_t3137328177_il2cpp_TypeInfo_var);
		UserProfile__ctor_m2409346676(L_8, _stringLiteral808924690, _stringLiteral1589925673, (bool)1, 0, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		List_1_Add_m1578522892(L_6, L_8, /*hidden argument*/List_1_Add_m1578522892_RuntimeMethod_var);
		List_1_t314435623 * L_9 = __this->get_m_Users_2();
		Texture2D_t3840446185 * L_10 = __this->get_m_DefaultTexture_6();
		UserProfile_t3137328177 * L_11 = (UserProfile_t3137328177 *)il2cpp_codegen_object_new(UserProfile_t3137328177_il2cpp_TypeInfo_var);
		UserProfile__ctor_m2409346676(L_11, _stringLiteral1343626406, _stringLiteral3546240809, (bool)0, 3, L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		List_1_Add_m1578522892(L_9, L_11, /*hidden argument*/List_1_Add_m1578522892_RuntimeMethod_var);
		List_1_t314435623 * L_12 = __this->get_m_Users_2();
		Texture2D_t3840446185 * L_13 = __this->get_m_DefaultTexture_6();
		UserProfile_t3137328177 * L_14 = (UserProfile_t3137328177 *)il2cpp_codegen_object_new(UserProfile_t3137328177_il2cpp_TypeInfo_var);
		UserProfile__ctor_m2409346676(L_14, _stringLiteral4166618085, _stringLiteral1207588649, (bool)0, 3, L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		List_1_Add_m1578522892(L_12, L_14, /*hidden argument*/List_1_Add_m1578522892_RuntimeMethod_var);
		List_1_t394701973 * L_15 = __this->get_m_AchievementDescriptions_3();
		Texture2D_t3840446185 * L_16 = __this->get_m_DefaultTexture_6();
		AchievementDescription_t3217594527 * L_17 = (AchievementDescription_t3217594527 *)il2cpp_codegen_object_new(AchievementDescription_t3217594527_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m2104645942(L_17, _stringLiteral71334293, _stringLiteral790607520, L_16, _stringLiteral3353015368, _stringLiteral1815849347, (bool)0, ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_15);
		List_1_Add_m1774517840(L_15, L_17, /*hidden argument*/List_1_Add_m1774517840_RuntimeMethod_var);
		List_1_t394701973 * L_18 = __this->get_m_AchievementDescriptions_3();
		Texture2D_t3840446185 * L_19 = __this->get_m_DefaultTexture_6();
		AchievementDescription_t3217594527 * L_20 = (AchievementDescription_t3217594527 *)il2cpp_codegen_object_new(AchievementDescription_t3217594527_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m2104645942(L_20, _stringLiteral71334296, _stringLiteral1410607624, L_19, _stringLiteral1736209072, _stringLiteral797346979, (bool)0, ((int32_t)20), /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_m1774517840(L_18, L_20, /*hidden argument*/List_1_Add_m1774517840_RuntimeMethod_var);
		List_1_t394701973 * L_21 = __this->get_m_AchievementDescriptions_3();
		Texture2D_t3840446185 * L_22 = __this->get_m_DefaultTexture_6();
		AchievementDescription_t3217594527 * L_23 = (AchievementDescription_t3217594527 *)il2cpp_codegen_object_new(AchievementDescription_t3217594527_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_m2104645942(L_23, _stringLiteral71334295, _stringLiteral4060093497, L_22, _stringLiteral3410331484, _stringLiteral2859292443, (bool)0, ((int32_t)15), /*hidden argument*/NULL);
		NullCheck(L_21);
		List_1_Add_m1774517840(L_21, L_23, /*hidden argument*/List_1_Add_m1774517840_RuntimeMethod_var);
		Leaderboard_t1065076763 * L_24 = (Leaderboard_t1065076763 *)il2cpp_codegen_object_new(Leaderboard_t1065076763_il2cpp_TypeInfo_var);
		Leaderboard__ctor_m1030108446(L_24, /*hidden argument*/NULL);
		V_0 = L_24;
		Leaderboard_t1065076763 * L_25 = V_0;
		NullCheck(L_25);
		Leaderboard_SetTitle_m459905577(L_25, _stringLiteral2862084853, /*hidden argument*/NULL);
		Leaderboard_t1065076763 * L_26 = V_0;
		NullCheck(L_26);
		Leaderboard_set_id_m3990768853(L_26, _stringLiteral174720081, /*hidden argument*/NULL);
		List_1_t3440720070 * L_27 = (List_1_t3440720070 *)il2cpp_codegen_object_new(List_1_t3440720070_il2cpp_TypeInfo_var);
		List_1__ctor_m1850989583(L_27, /*hidden argument*/List_1__ctor_m1850989583_RuntimeMethod_var);
		V_1 = L_27;
		List_1_t3440720070 * L_28 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t3738529785_il2cpp_TypeInfo_var);
		DateTime_t3738529785  L_29 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_29;
		DateTime_t3738529785  L_30 = DateTime_AddDays_m2583849741((DateTime_t3738529785 *)(&V_2), (-1.0), /*hidden argument*/NULL);
		Score_t1968645328 * L_31 = (Score_t1968645328 *)il2cpp_codegen_object_new(Score_t1968645328_il2cpp_TypeInfo_var);
		Score__ctor_m1554947855(L_31, _stringLiteral174720081, (((int64_t)((int64_t)((int32_t)300)))), _stringLiteral1972262697, L_30, _stringLiteral3889212743, 1, /*hidden argument*/NULL);
		NullCheck(L_28);
		List_1_Add_m1702244787(L_28, L_31, /*hidden argument*/List_1_Add_m1702244787_RuntimeMethod_var);
		List_1_t3440720070 * L_32 = V_1;
		DateTime_t3738529785  L_33 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_3 = L_33;
		DateTime_t3738529785  L_34 = DateTime_AddDays_m2583849741((DateTime_t3738529785 *)(&V_3), (-1.0), /*hidden argument*/NULL);
		Score_t1968645328 * L_35 = (Score_t1968645328 *)il2cpp_codegen_object_new(Score_t1968645328_il2cpp_TypeInfo_var);
		Score__ctor_m1554947855(L_35, _stringLiteral174720081, (((int64_t)((int64_t)((int32_t)255)))), _stringLiteral3928577833, L_34, _stringLiteral2704654648, 2, /*hidden argument*/NULL);
		NullCheck(L_32);
		List_1_Add_m1702244787(L_32, L_35, /*hidden argument*/List_1_Add_m1702244787_RuntimeMethod_var);
		List_1_t3440720070 * L_36 = V_1;
		DateTime_t3738529785  L_37 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_4 = L_37;
		DateTime_t3738529785  L_38 = DateTime_AddDays_m2583849741((DateTime_t3738529785 *)(&V_4), (-1.0), /*hidden argument*/NULL);
		Score_t1968645328 * L_39 = (Score_t1968645328 *)il2cpp_codegen_object_new(Score_t1968645328_il2cpp_TypeInfo_var);
		Score__ctor_m1554947855(L_39, _stringLiteral174720081, (((int64_t)((int64_t)((int32_t)55)))), _stringLiteral1589925673, L_38, _stringLiteral2937937919, 3, /*hidden argument*/NULL);
		NullCheck(L_36);
		List_1_Add_m1702244787(L_36, L_39, /*hidden argument*/List_1_Add_m1702244787_RuntimeMethod_var);
		List_1_t3440720070 * L_40 = V_1;
		DateTime_t3738529785  L_41 = DateTime_get_Now_m1277138875(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_5 = L_41;
		DateTime_t3738529785  L_42 = DateTime_AddDays_m2583849741((DateTime_t3738529785 *)(&V_5), (-1.0), /*hidden argument*/NULL);
		Score_t1968645328 * L_43 = (Score_t1968645328 *)il2cpp_codegen_object_new(Score_t1968645328_il2cpp_TypeInfo_var);
		Score__ctor_m1554947855(L_43, _stringLiteral174720081, (((int64_t)((int64_t)((int32_t)10)))), _stringLiteral3546240809, L_42, _stringLiteral3714347010, 4, /*hidden argument*/NULL);
		NullCheck(L_40);
		List_1_Add_m1702244787(L_40, L_43, /*hidden argument*/List_1_Add_m1702244787_RuntimeMethod_var);
		Leaderboard_t1065076763 * L_44 = V_0;
		List_1_t3440720070 * L_45 = V_1;
		NullCheck(L_45);
		ScoreU5BU5D_t972561905* L_46 = List_1_ToArray_m2845752048(L_45, /*hidden argument*/List_1_ToArray_m2845752048_RuntimeMethod_var);
		NullCheck(L_44);
		Leaderboard_SetScores_m2163784072(L_44, (IScoreU5BU5D_t527871248*)(IScoreU5BU5D_t527871248*)L_46, /*hidden argument*/NULL);
		List_1_t2537151505 * L_47 = __this->get_m_Leaderboards_5();
		Leaderboard_t1065076763 * L_48 = V_0;
		NullCheck(L_47);
		List_1_Add_m351770690(L_47, L_48, /*hidden argument*/List_1_Add_m351770690_RuntimeMethod_var);
		return;
	}
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Local::CreateDummyTexture(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * Local_CreateDummyTexture_m3769606019 (Local_t4068483442 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local_CreateDummyTexture_m3769606019_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Color_t2555686324  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Texture2D_t3840446185 * V_4 = NULL;
	Color_t2555686324  G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	{
		int32_t L_0 = ___width0;
		int32_t L_1 = ___height1;
		Texture2D_t3840446185 * L_2 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_004c;
	}

IL_0010:
	{
		V_2 = 0;
		goto IL_0040;
	}

IL_0018:
	{
		int32_t L_3 = V_2;
		int32_t L_4 = V_1;
		if ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_4))) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		Color_t2555686324  L_5 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B5_0 = L_5;
		goto IL_0031;
	}

IL_002c:
	{
		Color_t2555686324  L_6 = Color_get_gray_m1471337008(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B5_0 = L_6;
	}

IL_0031:
	{
		V_3 = G_B5_0;
		Texture2D_t3840446185 * L_7 = V_0;
		int32_t L_8 = V_2;
		int32_t L_9 = V_1;
		Color_t2555686324  L_10 = V_3;
		NullCheck(L_7);
		Texture2D_SetPixel_m2984741184(L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0040:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = ___width0;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_004c:
	{
		int32_t L_15 = V_1;
		int32_t L_16 = ___height1;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_0010;
		}
	}
	{
		Texture2D_t3840446185 * L_17 = V_0;
		NullCheck(L_17);
		Texture2D_Apply_m2271746283(L_17, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_18 = V_0;
		V_4 = L_18;
		goto IL_0061;
	}

IL_0061:
	{
		Texture2D_t3840446185 * L_19 = V_4;
		return L_19;
	}
}
// System.Void UnityEngine.SocialPlatforms.Local::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Local__cctor_m4006956713 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Local__cctor_m4006956713_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Local_t4068483442_StaticFields*)il2cpp_codegen_static_fields_for(Local_t4068483442_il2cpp_TypeInfo_var))->set_m_LocalUser_0((LocalUser_t365094499 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Range__ctor_m3975982763 (Range_t173988048 * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fromValue0;
		__this->set_from_0(L_0);
		int32_t L_1 = ___valueCount1;
		__this->set_count_1(L_1);
		return;
	}
}
extern "C"  void Range__ctor_m3975982763_AdjustorThunk (RuntimeObject * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	Range_t173988048 * _thisAdjusted = reinterpret_cast<Range_t173988048 *>(__this + 1);
	Range__ctor_m3975982763(_thisAdjusted, ___fromValue0, ___valueCount1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
