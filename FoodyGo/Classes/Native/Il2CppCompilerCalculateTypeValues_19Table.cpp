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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Net.HttpListenerContext
struct HttpListenerContext_t506453093;
// System.Text.RegularExpressions.Match
struct Match_t3164245899;
// System.String
struct String_t;
// packt.FoodyGo.Services.GPSLocationService
struct GPSLocationService_t1467068904;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728;
// packt.FoodyGO.Mapping.GoogleMapTile
struct GoogleMapTile_t633385143;
// CUDLR.RequestContext
struct RequestContext_t2741781238;
// CUDLR.Server
struct Server_t2567140039;
// CUDLR.Server/FileHandlerDelegate
struct FileHandlerDelegate_t163686991;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Void
struct Void_t1841601450;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Threading.Thread
struct Thread_t241561612;
// System.Net.HttpListener
struct HttpListener_t4041012462;
// System.Collections.Generic.List`1<CUDLR.RouteAttribute>
struct List_1_t2546808507;
// System.Collections.Generic.Queue`1<CUDLR.RequestContext>
struct Queue_1_t2561438073;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String>
struct Func_2_t4206299577;
// UnityEngine.Application/LogCallback
struct LogCallback_t1867914413;
// packt.FoodyGo.Mapping.MapLocation
struct MapLocation_t2703670907;




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
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef REQUESTCONTEXT_T2741781238_H
#define REQUESTCONTEXT_T2741781238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.RequestContext
struct  RequestContext_t2741781238  : public RuntimeObject
{
public:
	// System.Net.HttpListenerContext CUDLR.RequestContext::context
	HttpListenerContext_t506453093 * ___context_0;
	// System.Text.RegularExpressions.Match CUDLR.RequestContext::match
	Match_t3164245899 * ___match_1;
	// System.Boolean CUDLR.RequestContext::pass
	bool ___pass_2;
	// System.String CUDLR.RequestContext::path
	String_t* ___path_3;
	// System.Int32 CUDLR.RequestContext::currentRoute
	int32_t ___currentRoute_4;

public:
	inline static int32_t get_offset_of_context_0() { return static_cast<int32_t>(offsetof(RequestContext_t2741781238, ___context_0)); }
	inline HttpListenerContext_t506453093 * get_context_0() const { return ___context_0; }
	inline HttpListenerContext_t506453093 ** get_address_of_context_0() { return &___context_0; }
	inline void set_context_0(HttpListenerContext_t506453093 * value)
	{
		___context_0 = value;
		Il2CppCodeGenWriteBarrier((&___context_0), value);
	}

	inline static int32_t get_offset_of_match_1() { return static_cast<int32_t>(offsetof(RequestContext_t2741781238, ___match_1)); }
	inline Match_t3164245899 * get_match_1() const { return ___match_1; }
	inline Match_t3164245899 ** get_address_of_match_1() { return &___match_1; }
	inline void set_match_1(Match_t3164245899 * value)
	{
		___match_1 = value;
		Il2CppCodeGenWriteBarrier((&___match_1), value);
	}

	inline static int32_t get_offset_of_pass_2() { return static_cast<int32_t>(offsetof(RequestContext_t2741781238, ___pass_2)); }
	inline bool get_pass_2() const { return ___pass_2; }
	inline bool* get_address_of_pass_2() { return &___pass_2; }
	inline void set_pass_2(bool value)
	{
		___pass_2 = value;
	}

	inline static int32_t get_offset_of_path_3() { return static_cast<int32_t>(offsetof(RequestContext_t2741781238, ___path_3)); }
	inline String_t* get_path_3() const { return ___path_3; }
	inline String_t** get_address_of_path_3() { return &___path_3; }
	inline void set_path_3(String_t* value)
	{
		___path_3 = value;
		Il2CppCodeGenWriteBarrier((&___path_3), value);
	}

	inline static int32_t get_offset_of_currentRoute_4() { return static_cast<int32_t>(offsetof(RequestContext_t2741781238, ___currentRoute_4)); }
	inline int32_t get_currentRoute_4() const { return ___currentRoute_4; }
	inline int32_t* get_address_of_currentRoute_4() { return &___currentRoute_4; }
	inline void set_currentRoute_4(int32_t value)
	{
		___currentRoute_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCONTEXT_T2741781238_H
#ifndef U3CSTARTSERVICEU3EC__ITERATOR0_T3921971721_H
#define U3CSTARTSERVICEU3EC__ITERATOR0_T3921971721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0
struct  U3CStartServiceU3Ec__Iterator0_t3921971721  : public RuntimeObject
{
public:
	// System.Int32 packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::<maxWait>__0
	int32_t ___U3CmaxWaitU3E__0_0;
	// packt.FoodyGo.Services.GPSLocationService packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::$this
	GPSLocationService_t1467068904 * ___U24this_1;
	// System.Object packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 packt.FoodyGo.Services.GPSLocationService/<StartService>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CmaxWaitU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator0_t3921971721, ___U3CmaxWaitU3E__0_0)); }
	inline int32_t get_U3CmaxWaitU3E__0_0() const { return ___U3CmaxWaitU3E__0_0; }
	inline int32_t* get_address_of_U3CmaxWaitU3E__0_0() { return &___U3CmaxWaitU3E__0_0; }
	inline void set_U3CmaxWaitU3E__0_0(int32_t value)
	{
		___U3CmaxWaitU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator0_t3921971721, ___U24this_1)); }
	inline GPSLocationService_t1467068904 * get_U24this_1() const { return ___U24this_1; }
	inline GPSLocationService_t1467068904 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(GPSLocationService_t1467068904 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator0_t3921971721, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator0_t3921971721, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator0_t3921971721, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTSERVICEU3EC__ITERATOR0_T3921971721_H
#ifndef GOOGLEMAPUTILS_T2257638562_H
#define GOOGLEMAPUTILS_T2257638562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.GoogleMapUtils
struct  GoogleMapUtils_t2257638562  : public RuntimeObject
{
public:

public:
};

struct GoogleMapUtils_t2257638562_StaticFields
{
public:
	// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::GOOGLE_OFFSET
	float ___GOOGLE_OFFSET_0;
	// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::GOOGLE_OFFSET_RADIUS
	float ___GOOGLE_OFFSET_RADIUS_1;
	// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::MATHPI_180
	float ___MATHPI_180_2;
	// System.Single packt.FoodyGO.Mapping.GoogleMapUtils::preLonToX1
	float ___preLonToX1_3;

public:
	inline static int32_t get_offset_of_GOOGLE_OFFSET_0() { return static_cast<int32_t>(offsetof(GoogleMapUtils_t2257638562_StaticFields, ___GOOGLE_OFFSET_0)); }
	inline float get_GOOGLE_OFFSET_0() const { return ___GOOGLE_OFFSET_0; }
	inline float* get_address_of_GOOGLE_OFFSET_0() { return &___GOOGLE_OFFSET_0; }
	inline void set_GOOGLE_OFFSET_0(float value)
	{
		___GOOGLE_OFFSET_0 = value;
	}

	inline static int32_t get_offset_of_GOOGLE_OFFSET_RADIUS_1() { return static_cast<int32_t>(offsetof(GoogleMapUtils_t2257638562_StaticFields, ___GOOGLE_OFFSET_RADIUS_1)); }
	inline float get_GOOGLE_OFFSET_RADIUS_1() const { return ___GOOGLE_OFFSET_RADIUS_1; }
	inline float* get_address_of_GOOGLE_OFFSET_RADIUS_1() { return &___GOOGLE_OFFSET_RADIUS_1; }
	inline void set_GOOGLE_OFFSET_RADIUS_1(float value)
	{
		___GOOGLE_OFFSET_RADIUS_1 = value;
	}

	inline static int32_t get_offset_of_MATHPI_180_2() { return static_cast<int32_t>(offsetof(GoogleMapUtils_t2257638562_StaticFields, ___MATHPI_180_2)); }
	inline float get_MATHPI_180_2() const { return ___MATHPI_180_2; }
	inline float* get_address_of_MATHPI_180_2() { return &___MATHPI_180_2; }
	inline void set_MATHPI_180_2(float value)
	{
		___MATHPI_180_2 = value;
	}

	inline static int32_t get_offset_of_preLonToX1_3() { return static_cast<int32_t>(offsetof(GoogleMapUtils_t2257638562_StaticFields, ___preLonToX1_3)); }
	inline float get_preLonToX1_3() const { return ___preLonToX1_3; }
	inline float* get_address_of_preLonToX1_3() { return &___preLonToX1_3; }
	inline void set_preLonToX1_3(float value)
	{
		___preLonToX1_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLEMAPUTILS_T2257638562_H
#ifndef U3C_REFRESHMAPTILEU3EC__ITERATOR0_T4165355993_H
#define U3C_REFRESHMAPTILEU3EC__ITERATOR0_T4165355993_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0
struct  U3C_RefreshMapTileU3Ec__Iterator0_t4165355993  : public RuntimeObject
{
public:
	// System.String packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<url>__0
	String_t* ___U3CurlU3E__0_0;
	// System.String packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<queryString>__0
	String_t* ___U3CqueryStringU3E__0_1;
	// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<usingSensor>__0
	bool ___U3CusingSensorU3E__0_2;
	// UnityEngine.Networking.UnityWebRequest packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<req>__0
	UnityWebRequest_t254341728 * ___U3CreqU3E__0_3;
	// packt.FoodyGO.Mapping.GoogleMapTile packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$this
	GoogleMapTile_t633385143 * ___U24this_4;
	// System.Object packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CurlU3E__0_0() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U3CurlU3E__0_0)); }
	inline String_t* get_U3CurlU3E__0_0() const { return ___U3CurlU3E__0_0; }
	inline String_t** get_address_of_U3CurlU3E__0_0() { return &___U3CurlU3E__0_0; }
	inline void set_U3CurlU3E__0_0(String_t* value)
	{
		___U3CurlU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CurlU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CqueryStringU3E__0_1() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U3CqueryStringU3E__0_1)); }
	inline String_t* get_U3CqueryStringU3E__0_1() const { return ___U3CqueryStringU3E__0_1; }
	inline String_t** get_address_of_U3CqueryStringU3E__0_1() { return &___U3CqueryStringU3E__0_1; }
	inline void set_U3CqueryStringU3E__0_1(String_t* value)
	{
		___U3CqueryStringU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CqueryStringU3E__0_1), value);
	}

	inline static int32_t get_offset_of_U3CusingSensorU3E__0_2() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U3CusingSensorU3E__0_2)); }
	inline bool get_U3CusingSensorU3E__0_2() const { return ___U3CusingSensorU3E__0_2; }
	inline bool* get_address_of_U3CusingSensorU3E__0_2() { return &___U3CusingSensorU3E__0_2; }
	inline void set_U3CusingSensorU3E__0_2(bool value)
	{
		___U3CusingSensorU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CreqU3E__0_3() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U3CreqU3E__0_3)); }
	inline UnityWebRequest_t254341728 * get_U3CreqU3E__0_3() const { return ___U3CreqU3E__0_3; }
	inline UnityWebRequest_t254341728 ** get_address_of_U3CreqU3E__0_3() { return &___U3CreqU3E__0_3; }
	inline void set_U3CreqU3E__0_3(UnityWebRequest_t254341728 * value)
	{
		___U3CreqU3E__0_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CreqU3E__0_3), value);
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U24this_4)); }
	inline GoogleMapTile_t633385143 * get_U24this_4() const { return ___U24this_4; }
	inline GoogleMapTile_t633385143 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(GoogleMapTile_t633385143 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_REFRESHMAPTILEU3EC__ITERATOR0_T4165355993_H
#ifndef U3CHANDLEREQUESTSU3EC__ITERATOR0_T381024681_H
#define U3CHANDLEREQUESTSU3EC__ITERATOR0_T381024681_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Server/<HandleRequests>c__Iterator0
struct  U3CHandleRequestsU3Ec__Iterator0_t381024681  : public RuntimeObject
{
public:
	// CUDLR.RequestContext CUDLR.Server/<HandleRequests>c__Iterator0::<context>__1
	RequestContext_t2741781238 * ___U3CcontextU3E__1_0;
	// System.Object CUDLR.Server/<HandleRequests>c__Iterator0::$locvar0
	RuntimeObject * ___U24locvar0_1;
	// CUDLR.Server CUDLR.Server/<HandleRequests>c__Iterator0::$this
	Server_t2567140039 * ___U24this_2;
	// System.Object CUDLR.Server/<HandleRequests>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean CUDLR.Server/<HandleRequests>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 CUDLR.Server/<HandleRequests>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CcontextU3E__1_0() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t381024681, ___U3CcontextU3E__1_0)); }
	inline RequestContext_t2741781238 * get_U3CcontextU3E__1_0() const { return ___U3CcontextU3E__1_0; }
	inline RequestContext_t2741781238 ** get_address_of_U3CcontextU3E__1_0() { return &___U3CcontextU3E__1_0; }
	inline void set_U3CcontextU3E__1_0(RequestContext_t2741781238 * value)
	{
		___U3CcontextU3E__1_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CcontextU3E__1_0), value);
	}

	inline static int32_t get_offset_of_U24locvar0_1() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t381024681, ___U24locvar0_1)); }
	inline RuntimeObject * get_U24locvar0_1() const { return ___U24locvar0_1; }
	inline RuntimeObject ** get_address_of_U24locvar0_1() { return &___U24locvar0_1; }
	inline void set_U24locvar0_1(RuntimeObject * value)
	{
		___U24locvar0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24locvar0_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t381024681, ___U24this_2)); }
	inline Server_t2567140039 * get_U24this_2() const { return ___U24this_2; }
	inline Server_t2567140039 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(Server_t2567140039 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t381024681, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t381024681, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CHandleRequestsU3Ec__Iterator0_t381024681, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CHANDLEREQUESTSU3EC__ITERATOR0_T381024681_H
#ifndef MAPLOCATION_T2703670907_H
#define MAPLOCATION_T2703670907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGo.Mapping.MapLocation
struct  MapLocation_t2703670907  : public RuntimeObject
{
public:
	// System.Single packt.FoodyGo.Mapping.MapLocation::Latitude
	float ___Latitude_0;
	// System.Single packt.FoodyGo.Mapping.MapLocation::Longitude
	float ___Longitude_1;

public:
	inline static int32_t get_offset_of_Latitude_0() { return static_cast<int32_t>(offsetof(MapLocation_t2703670907, ___Latitude_0)); }
	inline float get_Latitude_0() const { return ___Latitude_0; }
	inline float* get_address_of_Latitude_0() { return &___Latitude_0; }
	inline void set_Latitude_0(float value)
	{
		___Latitude_0 = value;
	}

	inline static int32_t get_offset_of_Longitude_1() { return static_cast<int32_t>(offsetof(MapLocation_t2703670907, ___Longitude_1)); }
	inline float get_Longitude_1() const { return ___Longitude_1; }
	inline float* get_address_of_Longitude_1() { return &___Longitude_1; }
	inline void set_Longitude_1(float value)
	{
		___Longitude_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPLOCATION_T2703670907_H
#ifndef U3CREGISTERFILEHANDLERSU3EC__ANONSTOREY1_T1818970228_H
#define U3CREGISTERFILEHANDLERSU3EC__ANONSTOREY1_T1818970228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Server/<RegisterFileHandlers>c__AnonStorey1
struct  U3CRegisterFileHandlersU3Ec__AnonStorey1_t1818970228  : public RuntimeObject
{
public:
	// CUDLR.Server/FileHandlerDelegate CUDLR.Server/<RegisterFileHandlers>c__AnonStorey1::callback
	FileHandlerDelegate_t163686991 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CRegisterFileHandlersU3Ec__AnonStorey1_t1818970228, ___callback_0)); }
	inline FileHandlerDelegate_t163686991 * get_callback_0() const { return ___callback_0; }
	inline FileHandlerDelegate_t163686991 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(FileHandlerDelegate_t163686991 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTERFILEHANDLERSU3EC__ANONSTOREY1_T1818970228_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t1328083999* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t1328083999* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t1328083999** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t1328083999* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
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
#ifndef VECTOR2_T2243707579_H
#define VECTOR2_T2243707579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2243707579 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2243707579, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2243707579_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2243707579  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2243707579  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2243707579  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2243707579  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2243707579  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2243707579  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2243707579  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2243707579  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2243707579  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2243707579 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2243707579  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___oneVector_3)); }
	inline Vector2_t2243707579  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2243707579 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2243707579  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___upVector_4)); }
	inline Vector2_t2243707579  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2243707579 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2243707579  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___downVector_5)); }
	inline Vector2_t2243707579  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2243707579 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2243707579  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___leftVector_6)); }
	inline Vector2_t2243707579  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2243707579 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2243707579  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___rightVector_7)); }
	inline Vector2_t2243707579  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2243707579 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2243707579  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2243707579  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2243707579 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2243707579  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2243707579_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2243707579  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2243707579 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2243707579  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2243707579_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_8)); }
	inline DelegateData_t1572802995 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1572802995 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1572802995 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T3022476291_H
#ifndef OBJECT_T1021602117_H
#define OBJECT_T1021602117_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t1021602117  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t1021602117, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t1021602117_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t1021602117_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t1021602117_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t1021602117_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T1021602117_H
#ifndef MAPTYPE_T2840829088_H
#define MAPTYPE_T2840829088_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.GoogleMapTile/MapType
struct  MapType_t2840829088 
{
public:
	// System.Int32 packt.FoodyGO.Mapping.GoogleMapTile/MapType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MapType_t2840829088, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPTYPE_T2840829088_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t3201952435 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t3201952435 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___prev_9)); }
	inline MulticastDelegate_t3201952435 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t3201952435 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t3201952435 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___kpm_next_10)); }
	inline MulticastDelegate_t3201952435 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t3201952435 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t3201952435 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef COMPONENT_T3819376471_H
#define COMPONENT_T3819376471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t3819376471  : public Object_t1021602117
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T3819376471_H
#ifndef BEHAVIOUR_T955675639_H
#define BEHAVIOUR_T955675639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t955675639  : public Component_t3819376471
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T955675639_H
#ifndef FILEHANDLERDELEGATE_T163686991_H
#define FILEHANDLERDELEGATE_T163686991_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Server/FileHandlerDelegate
struct  FileHandlerDelegate_t163686991  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEHANDLERDELEGATE_T163686991_H
#ifndef MONOBEHAVIOUR_T1158329972_H
#define MONOBEHAVIOUR_T1158329972_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1158329972  : public Behaviour_t955675639
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1158329972_H
#ifndef GPSLOCATIONSERVICE_T1467068904_H
#define GPSLOCATIONSERVICE_T1467068904_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGo.Services.GPSLocationService
struct  GPSLocationService_t1467068904  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean packt.FoodyGo.Services.GPSLocationService::IsServiceStarted
	bool ___IsServiceStarted_2;
	// System.Single packt.FoodyGo.Services.GPSLocationService::Latitude
	float ___Latitude_3;
	// System.Single packt.FoodyGo.Services.GPSLocationService::Longitude
	float ___Longitude_4;
	// System.Single packt.FoodyGo.Services.GPSLocationService::Altitude
	float ___Altitude_5;
	// System.Single packt.FoodyGo.Services.GPSLocationService::Accuracy
	float ___Accuracy_6;
	// System.Double packt.FoodyGo.Services.GPSLocationService::Timestamp
	double ___Timestamp_7;

public:
	inline static int32_t get_offset_of_IsServiceStarted_2() { return static_cast<int32_t>(offsetof(GPSLocationService_t1467068904, ___IsServiceStarted_2)); }
	inline bool get_IsServiceStarted_2() const { return ___IsServiceStarted_2; }
	inline bool* get_address_of_IsServiceStarted_2() { return &___IsServiceStarted_2; }
	inline void set_IsServiceStarted_2(bool value)
	{
		___IsServiceStarted_2 = value;
	}

	inline static int32_t get_offset_of_Latitude_3() { return static_cast<int32_t>(offsetof(GPSLocationService_t1467068904, ___Latitude_3)); }
	inline float get_Latitude_3() const { return ___Latitude_3; }
	inline float* get_address_of_Latitude_3() { return &___Latitude_3; }
	inline void set_Latitude_3(float value)
	{
		___Latitude_3 = value;
	}

	inline static int32_t get_offset_of_Longitude_4() { return static_cast<int32_t>(offsetof(GPSLocationService_t1467068904, ___Longitude_4)); }
	inline float get_Longitude_4() const { return ___Longitude_4; }
	inline float* get_address_of_Longitude_4() { return &___Longitude_4; }
	inline void set_Longitude_4(float value)
	{
		___Longitude_4 = value;
	}

	inline static int32_t get_offset_of_Altitude_5() { return static_cast<int32_t>(offsetof(GPSLocationService_t1467068904, ___Altitude_5)); }
	inline float get_Altitude_5() const { return ___Altitude_5; }
	inline float* get_address_of_Altitude_5() { return &___Altitude_5; }
	inline void set_Altitude_5(float value)
	{
		___Altitude_5 = value;
	}

	inline static int32_t get_offset_of_Accuracy_6() { return static_cast<int32_t>(offsetof(GPSLocationService_t1467068904, ___Accuracy_6)); }
	inline float get_Accuracy_6() const { return ___Accuracy_6; }
	inline float* get_address_of_Accuracy_6() { return &___Accuracy_6; }
	inline void set_Accuracy_6(float value)
	{
		___Accuracy_6 = value;
	}

	inline static int32_t get_offset_of_Timestamp_7() { return static_cast<int32_t>(offsetof(GPSLocationService_t1467068904, ___Timestamp_7)); }
	inline double get_Timestamp_7() const { return ___Timestamp_7; }
	inline double* get_address_of_Timestamp_7() { return &___Timestamp_7; }
	inline void set_Timestamp_7(double value)
	{
		___Timestamp_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GPSLOCATIONSERVICE_T1467068904_H
#ifndef SERVER_T2567140039_H
#define SERVER_T2567140039_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Server
struct  Server_t2567140039  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 CUDLR.Server::Port
	int32_t ___Port_2;

public:
	inline static int32_t get_offset_of_Port_2() { return static_cast<int32_t>(offsetof(Server_t2567140039, ___Port_2)); }
	inline int32_t get_Port_2() const { return ___Port_2; }
	inline int32_t* get_address_of_Port_2() { return &___Port_2; }
	inline void set_Port_2(int32_t value)
	{
		___Port_2 = value;
	}
};

struct Server_t2567140039_StaticFields
{
public:
	// System.Threading.Thread CUDLR.Server::mainThread
	Thread_t241561612 * ___mainThread_3;
	// System.String CUDLR.Server::fileRoot
	String_t* ___fileRoot_4;
	// System.Net.HttpListener CUDLR.Server::listener
	HttpListener_t4041012462 * ___listener_5;
	// System.Collections.Generic.List`1<CUDLR.RouteAttribute> CUDLR.Server::registeredRoutes
	List_1_t2546808507 * ___registeredRoutes_6;
	// System.Collections.Generic.Queue`1<CUDLR.RequestContext> CUDLR.Server::mainRequests
	Queue_1_t2561438073 * ___mainRequests_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> CUDLR.Server::fileTypes
	Dictionary_2_t3943999495 * ___fileTypes_8;
	// CUDLR.Server/FileHandlerDelegate CUDLR.Server::<>f__mg$cache0
	FileHandlerDelegate_t163686991 * ___U3CU3Ef__mgU24cache0_9;
	// CUDLR.Server/FileHandlerDelegate CUDLR.Server::<>f__mg$cache1
	FileHandlerDelegate_t163686991 * ___U3CU3Ef__mgU24cache1_10;
	// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.String,System.String>,System.String> CUDLR.Server::<>f__am$cache0
	Func_2_t4206299577 * ___U3CU3Ef__amU24cache0_11;
	// UnityEngine.Application/LogCallback CUDLR.Server::<>f__mg$cache2
	LogCallback_t1867914413 * ___U3CU3Ef__mgU24cache2_12;

public:
	inline static int32_t get_offset_of_mainThread_3() { return static_cast<int32_t>(offsetof(Server_t2567140039_StaticFields, ___mainThread_3)); }
	inline Thread_t241561612 * get_mainThread_3() const { return ___mainThread_3; }
	inline Thread_t241561612 ** get_address_of_mainThread_3() { return &___mainThread_3; }
	inline void set_mainThread_3(Thread_t241561612 * value)
	{
		___mainThread_3 = value;
		Il2CppCodeGenWriteBarrier((&___mainThread_3), value);
	}

	inline static int32_t get_offset_of_fileRoot_4() { return static_cast<int32_t>(offsetof(Server_t2567140039_StaticFields, ___fileRoot_4)); }
	inline String_t* get_fileRoot_4() const { return ___fileRoot_4; }
	inline String_t** get_address_of_fileRoot_4() { return &___fileRoot_4; }
	inline void set_fileRoot_4(String_t* value)
	{
		___fileRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&___fileRoot_4), value);
	}

	inline static int32_t get_offset_of_listener_5() { return static_cast<int32_t>(offsetof(Server_t2567140039_StaticFields, ___listener_5)); }
	inline HttpListener_t4041012462 * get_listener_5() const { return ___listener_5; }
	inline HttpListener_t4041012462 ** get_address_of_listener_5() { return &___listener_5; }
	inline void set_listener_5(HttpListener_t4041012462 * value)
	{
		___listener_5 = value;
		Il2CppCodeGenWriteBarrier((&___listener_5), value);
	}

	inline static int32_t get_offset_of_registeredRoutes_6() { return static_cast<int32_t>(offsetof(Server_t2567140039_StaticFields, ___registeredRoutes_6)); }
	inline List_1_t2546808507 * get_registeredRoutes_6() const { return ___registeredRoutes_6; }
	inline List_1_t2546808507 ** get_address_of_registeredRoutes_6() { return &___registeredRoutes_6; }
	inline void set_registeredRoutes_6(List_1_t2546808507 * value)
	{
		___registeredRoutes_6 = value;
		Il2CppCodeGenWriteBarrier((&___registeredRoutes_6), value);
	}

	inline static int32_t get_offset_of_mainRequests_7() { return static_cast<int32_t>(offsetof(Server_t2567140039_StaticFields, ___mainRequests_7)); }
	inline Queue_1_t2561438073 * get_mainRequests_7() const { return ___mainRequests_7; }
	inline Queue_1_t2561438073 ** get_address_of_mainRequests_7() { return &___mainRequests_7; }
	inline void set_mainRequests_7(Queue_1_t2561438073 * value)
	{
		___mainRequests_7 = value;
		Il2CppCodeGenWriteBarrier((&___mainRequests_7), value);
	}

	inline static int32_t get_offset_of_fileTypes_8() { return static_cast<int32_t>(offsetof(Server_t2567140039_StaticFields, ___fileTypes_8)); }
	inline Dictionary_2_t3943999495 * get_fileTypes_8() const { return ___fileTypes_8; }
	inline Dictionary_2_t3943999495 ** get_address_of_fileTypes_8() { return &___fileTypes_8; }
	inline void set_fileTypes_8(Dictionary_2_t3943999495 * value)
	{
		___fileTypes_8 = value;
		Il2CppCodeGenWriteBarrier((&___fileTypes_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_9() { return static_cast<int32_t>(offsetof(Server_t2567140039_StaticFields, ___U3CU3Ef__mgU24cache0_9)); }
	inline FileHandlerDelegate_t163686991 * get_U3CU3Ef__mgU24cache0_9() const { return ___U3CU3Ef__mgU24cache0_9; }
	inline FileHandlerDelegate_t163686991 ** get_address_of_U3CU3Ef__mgU24cache0_9() { return &___U3CU3Ef__mgU24cache0_9; }
	inline void set_U3CU3Ef__mgU24cache0_9(FileHandlerDelegate_t163686991 * value)
	{
		___U3CU3Ef__mgU24cache0_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache0_9), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_10() { return static_cast<int32_t>(offsetof(Server_t2567140039_StaticFields, ___U3CU3Ef__mgU24cache1_10)); }
	inline FileHandlerDelegate_t163686991 * get_U3CU3Ef__mgU24cache1_10() const { return ___U3CU3Ef__mgU24cache1_10; }
	inline FileHandlerDelegate_t163686991 ** get_address_of_U3CU3Ef__mgU24cache1_10() { return &___U3CU3Ef__mgU24cache1_10; }
	inline void set_U3CU3Ef__mgU24cache1_10(FileHandlerDelegate_t163686991 * value)
	{
		___U3CU3Ef__mgU24cache1_10 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache1_10), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_11() { return static_cast<int32_t>(offsetof(Server_t2567140039_StaticFields, ___U3CU3Ef__amU24cache0_11)); }
	inline Func_2_t4206299577 * get_U3CU3Ef__amU24cache0_11() const { return ___U3CU3Ef__amU24cache0_11; }
	inline Func_2_t4206299577 ** get_address_of_U3CU3Ef__amU24cache0_11() { return &___U3CU3Ef__amU24cache0_11; }
	inline void set_U3CU3Ef__amU24cache0_11(Func_2_t4206299577 * value)
	{
		___U3CU3Ef__amU24cache0_11 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_11), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache2_12() { return static_cast<int32_t>(offsetof(Server_t2567140039_StaticFields, ___U3CU3Ef__mgU24cache2_12)); }
	inline LogCallback_t1867914413 * get_U3CU3Ef__mgU24cache2_12() const { return ___U3CU3Ef__mgU24cache2_12; }
	inline LogCallback_t1867914413 ** get_address_of_U3CU3Ef__mgU24cache2_12() { return &___U3CU3Ef__mgU24cache2_12; }
	inline void set_U3CU3Ef__mgU24cache2_12(LogCallback_t1867914413 * value)
	{
		___U3CU3Ef__mgU24cache2_12 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__mgU24cache2_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVER_T2567140039_H
#ifndef GOOGLEMAPTILE_T633385143_H
#define GOOGLEMAPTILE_T633385143_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.GoogleMapTile
struct  GoogleMapTile_t633385143  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 packt.FoodyGO.Mapping.GoogleMapTile::zoomLevel
	int32_t ___zoomLevel_3;
	// packt.FoodyGO.Mapping.GoogleMapTile/MapType packt.FoodyGO.Mapping.GoogleMapTile::mapType
	int32_t ___mapType_4;
	// System.Int32 packt.FoodyGO.Mapping.GoogleMapTile::size
	int32_t ___size_5;
	// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile::doubleResolution
	bool ___doubleResolution_6;
	// packt.FoodyGo.Mapping.MapLocation packt.FoodyGO.Mapping.GoogleMapTile::worldCenterLocation
	MapLocation_t2703670907 * ___worldCenterLocation_7;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::TileOffset
	Vector2_t2243707579  ___TileOffset_8;
	// packt.FoodyGo.Mapping.MapLocation packt.FoodyGO.Mapping.GoogleMapTile::tileCenterLocation
	MapLocation_t2703670907 * ___tileCenterLocation_9;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::TopLeftCorner
	Vector2_t2243707579  ___TopLeftCorner_10;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::BottomRightCorner
	Vector2_t2243707579  ___BottomRightCorner_11;
	// packt.FoodyGo.Services.GPSLocationService packt.FoodyGO.Mapping.GoogleMapTile::gpsLocationService
	GPSLocationService_t1467068904 * ___gpsLocationService_12;
	// System.Double packt.FoodyGO.Mapping.GoogleMapTile::lastGPSUpdate
	double ___lastGPSUpdate_13;

public:
	inline static int32_t get_offset_of_zoomLevel_3() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___zoomLevel_3)); }
	inline int32_t get_zoomLevel_3() const { return ___zoomLevel_3; }
	inline int32_t* get_address_of_zoomLevel_3() { return &___zoomLevel_3; }
	inline void set_zoomLevel_3(int32_t value)
	{
		___zoomLevel_3 = value;
	}

	inline static int32_t get_offset_of_mapType_4() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___mapType_4)); }
	inline int32_t get_mapType_4() const { return ___mapType_4; }
	inline int32_t* get_address_of_mapType_4() { return &___mapType_4; }
	inline void set_mapType_4(int32_t value)
	{
		___mapType_4 = value;
	}

	inline static int32_t get_offset_of_size_5() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___size_5)); }
	inline int32_t get_size_5() const { return ___size_5; }
	inline int32_t* get_address_of_size_5() { return &___size_5; }
	inline void set_size_5(int32_t value)
	{
		___size_5 = value;
	}

	inline static int32_t get_offset_of_doubleResolution_6() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___doubleResolution_6)); }
	inline bool get_doubleResolution_6() const { return ___doubleResolution_6; }
	inline bool* get_address_of_doubleResolution_6() { return &___doubleResolution_6; }
	inline void set_doubleResolution_6(bool value)
	{
		___doubleResolution_6 = value;
	}

	inline static int32_t get_offset_of_worldCenterLocation_7() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___worldCenterLocation_7)); }
	inline MapLocation_t2703670907 * get_worldCenterLocation_7() const { return ___worldCenterLocation_7; }
	inline MapLocation_t2703670907 ** get_address_of_worldCenterLocation_7() { return &___worldCenterLocation_7; }
	inline void set_worldCenterLocation_7(MapLocation_t2703670907 * value)
	{
		___worldCenterLocation_7 = value;
		Il2CppCodeGenWriteBarrier((&___worldCenterLocation_7), value);
	}

	inline static int32_t get_offset_of_TileOffset_8() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___TileOffset_8)); }
	inline Vector2_t2243707579  get_TileOffset_8() const { return ___TileOffset_8; }
	inline Vector2_t2243707579 * get_address_of_TileOffset_8() { return &___TileOffset_8; }
	inline void set_TileOffset_8(Vector2_t2243707579  value)
	{
		___TileOffset_8 = value;
	}

	inline static int32_t get_offset_of_tileCenterLocation_9() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___tileCenterLocation_9)); }
	inline MapLocation_t2703670907 * get_tileCenterLocation_9() const { return ___tileCenterLocation_9; }
	inline MapLocation_t2703670907 ** get_address_of_tileCenterLocation_9() { return &___tileCenterLocation_9; }
	inline void set_tileCenterLocation_9(MapLocation_t2703670907 * value)
	{
		___tileCenterLocation_9 = value;
		Il2CppCodeGenWriteBarrier((&___tileCenterLocation_9), value);
	}

	inline static int32_t get_offset_of_TopLeftCorner_10() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___TopLeftCorner_10)); }
	inline Vector2_t2243707579  get_TopLeftCorner_10() const { return ___TopLeftCorner_10; }
	inline Vector2_t2243707579 * get_address_of_TopLeftCorner_10() { return &___TopLeftCorner_10; }
	inline void set_TopLeftCorner_10(Vector2_t2243707579  value)
	{
		___TopLeftCorner_10 = value;
	}

	inline static int32_t get_offset_of_BottomRightCorner_11() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___BottomRightCorner_11)); }
	inline Vector2_t2243707579  get_BottomRightCorner_11() const { return ___BottomRightCorner_11; }
	inline Vector2_t2243707579 * get_address_of_BottomRightCorner_11() { return &___BottomRightCorner_11; }
	inline void set_BottomRightCorner_11(Vector2_t2243707579  value)
	{
		___BottomRightCorner_11 = value;
	}

	inline static int32_t get_offset_of_gpsLocationService_12() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___gpsLocationService_12)); }
	inline GPSLocationService_t1467068904 * get_gpsLocationService_12() const { return ___gpsLocationService_12; }
	inline GPSLocationService_t1467068904 ** get_address_of_gpsLocationService_12() { return &___gpsLocationService_12; }
	inline void set_gpsLocationService_12(GPSLocationService_t1467068904 * value)
	{
		___gpsLocationService_12 = value;
		Il2CppCodeGenWriteBarrier((&___gpsLocationService_12), value);
	}

	inline static int32_t get_offset_of_lastGPSUpdate_13() { return static_cast<int32_t>(offsetof(GoogleMapTile_t633385143, ___lastGPSUpdate_13)); }
	inline double get_lastGPSUpdate_13() const { return ___lastGPSUpdate_13; }
	inline double* get_address_of_lastGPSUpdate_13() { return &___lastGPSUpdate_13; }
	inline void set_lastGPSUpdate_13(double value)
	{
		___lastGPSUpdate_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GOOGLEMAPTILE_T633385143_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1900 = { sizeof (RequestContext_t2741781238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1900[5] = 
{
	RequestContext_t2741781238::get_offset_of_context_0(),
	RequestContext_t2741781238::get_offset_of_match_1(),
	RequestContext_t2741781238::get_offset_of_pass_2(),
	RequestContext_t2741781238::get_offset_of_path_3(),
	RequestContext_t2741781238::get_offset_of_currentRoute_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1901 = { sizeof (Server_t2567140039), -1, sizeof(Server_t2567140039_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1901[11] = 
{
	Server_t2567140039::get_offset_of_Port_2(),
	Server_t2567140039_StaticFields::get_offset_of_mainThread_3(),
	Server_t2567140039_StaticFields::get_offset_of_fileRoot_4(),
	Server_t2567140039_StaticFields::get_offset_of_listener_5(),
	Server_t2567140039_StaticFields::get_offset_of_registeredRoutes_6(),
	Server_t2567140039_StaticFields::get_offset_of_mainRequests_7(),
	Server_t2567140039_StaticFields::get_offset_of_fileTypes_8(),
	Server_t2567140039_StaticFields::get_offset_of_U3CU3Ef__mgU24cache0_9(),
	Server_t2567140039_StaticFields::get_offset_of_U3CU3Ef__mgU24cache1_10(),
	Server_t2567140039_StaticFields::get_offset_of_U3CU3Ef__amU24cache0_11(),
	Server_t2567140039_StaticFields::get_offset_of_U3CU3Ef__mgU24cache2_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1902 = { sizeof (FileHandlerDelegate_t163686991), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1903 = { sizeof (U3CRegisterFileHandlersU3Ec__AnonStorey1_t1818970228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1903[1] = 
{
	U3CRegisterFileHandlersU3Ec__AnonStorey1_t1818970228::get_offset_of_callback_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1904 = { sizeof (U3CHandleRequestsU3Ec__Iterator0_t381024681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1904[6] = 
{
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U3CcontextU3E__1_0(),
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U24locvar0_1(),
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U24this_2(),
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U24current_3(),
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U24disposing_4(),
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1905 = { sizeof (MapLocation_t2703670907), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1905[2] = 
{
	MapLocation_t2703670907::get_offset_of_Latitude_0(),
	MapLocation_t2703670907::get_offset_of_Longitude_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1906 = { sizeof (GoogleMapTile_t633385143), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1906[12] = 
{
	0,
	GoogleMapTile_t633385143::get_offset_of_zoomLevel_3(),
	GoogleMapTile_t633385143::get_offset_of_mapType_4(),
	GoogleMapTile_t633385143::get_offset_of_size_5(),
	GoogleMapTile_t633385143::get_offset_of_doubleResolution_6(),
	GoogleMapTile_t633385143::get_offset_of_worldCenterLocation_7(),
	GoogleMapTile_t633385143::get_offset_of_TileOffset_8(),
	GoogleMapTile_t633385143::get_offset_of_tileCenterLocation_9(),
	GoogleMapTile_t633385143::get_offset_of_TopLeftCorner_10(),
	GoogleMapTile_t633385143::get_offset_of_BottomRightCorner_11(),
	GoogleMapTile_t633385143::get_offset_of_gpsLocationService_12(),
	GoogleMapTile_t633385143::get_offset_of_lastGPSUpdate_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1907 = { sizeof (MapType_t2840829088)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1907[5] = 
{
	MapType_t2840829088::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1908 = { sizeof (U3C_RefreshMapTileU3Ec__Iterator0_t4165355993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1908[8] = 
{
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U3CurlU3E__0_0(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U3CqueryStringU3E__0_1(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U3CusingSensorU3E__0_2(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U3CreqU3E__0_3(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U24this_4(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U24current_5(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U24disposing_6(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U24PC_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1909 = { sizeof (GoogleMapUtils_t2257638562), -1, sizeof(GoogleMapUtils_t2257638562_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1909[4] = 
{
	GoogleMapUtils_t2257638562_StaticFields::get_offset_of_GOOGLE_OFFSET_0(),
	GoogleMapUtils_t2257638562_StaticFields::get_offset_of_GOOGLE_OFFSET_RADIUS_1(),
	GoogleMapUtils_t2257638562_StaticFields::get_offset_of_MATHPI_180_2(),
	GoogleMapUtils_t2257638562_StaticFields::get_offset_of_preLonToX1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1910 = { sizeof (GPSLocationService_t1467068904), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1910[6] = 
{
	GPSLocationService_t1467068904::get_offset_of_IsServiceStarted_2(),
	GPSLocationService_t1467068904::get_offset_of_Latitude_3(),
	GPSLocationService_t1467068904::get_offset_of_Longitude_4(),
	GPSLocationService_t1467068904::get_offset_of_Altitude_5(),
	GPSLocationService_t1467068904::get_offset_of_Accuracy_6(),
	GPSLocationService_t1467068904::get_offset_of_Timestamp_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1911 = { sizeof (U3CStartServiceU3Ec__Iterator0_t3921971721), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1911[5] = 
{
	U3CStartServiceU3Ec__Iterator0_t3921971721::get_offset_of_U3CmaxWaitU3E__0_0(),
	U3CStartServiceU3Ec__Iterator0_t3921971721::get_offset_of_U24this_1(),
	U3CStartServiceU3Ec__Iterator0_t3921971721::get_offset_of_U24current_2(),
	U3CStartServiceU3Ec__Iterator0_t3921971721::get_offset_of_U24disposing_3(),
	U3CStartServiceU3Ec__Iterator0_t3921971721::get_offset_of_U24PC_4(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
