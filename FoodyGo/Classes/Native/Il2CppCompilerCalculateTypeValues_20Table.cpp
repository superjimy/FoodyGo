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
// CUDLR.RequestContext
struct RequestContext_t2741781238;
// CUDLR.Server
struct Server_t2567140039;
// CUDLR.Server/FileHandlerDelegate
struct FileHandlerDelegate_t163686991;
// packt.FoodyGO.Services.GPSLocationService
struct GPSLocationService_t157925672;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t254341728;
// packt.FoodyGO.Mapping.GoogleMapTile
struct GoogleMapTile_t633385143;
// packt.FoodyGO.Database.Monster[]
struct MonsterU5BU5D_t3152714719;
// packt.FoodyGO.Services.MonsterService
struct MonsterService_t364432899;
// CUDLR.CommandTree
struct CommandTree_t1477375563;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1398341365;
// System.Collections.Generic.Queue`1<CUDLR.QueuedCommand>
struct Queue_1_t3624819811;
// CUDLR.CommandAttribute/CallbackSimple
struct CallbackSimple_t4016878319;
// System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree>
struct Dictionary_2_t3392154825;
// CUDLR.CommandAttribute
struct CommandAttribute_t3787907257;
// System.String[]
struct StringU5BU5D_t1642385972;
// CUDLR.CommandAttribute/Callback
struct Callback_t2457543545;
// System.Void
struct Void_t1841601450;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// CUDLR.RouteAttribute/Callback
struct Callback_t2384261931;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// packt.FoodyGO.Mapping.MapLocation
struct MapLocation_t1597838523;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// UnityStandardAssets.Utility.WaypointCircuit
struct WaypointCircuit_t2375210762;
// UnityEngine.Transform
struct Transform_t3275118058;
// packt.FoodyGO.Services.GPSLocationService/OnRedrawEvent
struct OnRedrawEvent_t1033359881;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;
// packt.FoodyGO.Mapping.MapEnvelope
struct MapEnvelope_t4045462396;
// System.Collections.Generic.List`1<packt.FoodyGO.Database.Monster>
struct List_1_t1968956518;
// UnityEngine.Texture
struct Texture_t2243626319;
// UnityEngine.UI.RawImage
struct RawImage_t2749640213;
// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t1249311527;
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
#ifndef U3CMODULEU3E_T3783534238_H
#define U3CMODULEU3E_T3783534238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3783534238 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T3783534238_H
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
#ifndef MAPLOCATION_T1597838523_H
#define MAPLOCATION_T1597838523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.MapLocation
struct  MapLocation_t1597838523  : public RuntimeObject
{
public:
	// System.Single packt.FoodyGO.Mapping.MapLocation::Latitude
	float ___Latitude_0;
	// System.Single packt.FoodyGO.Mapping.MapLocation::Longitude
	float ___Longitude_1;

public:
	inline static int32_t get_offset_of_Latitude_0() { return static_cast<int32_t>(offsetof(MapLocation_t1597838523, ___Latitude_0)); }
	inline float get_Latitude_0() const { return ___Latitude_0; }
	inline float* get_address_of_Latitude_0() { return &___Latitude_0; }
	inline void set_Latitude_0(float value)
	{
		___Latitude_0 = value;
	}

	inline static int32_t get_offset_of_Longitude_1() { return static_cast<int32_t>(offsetof(MapLocation_t1597838523, ___Longitude_1)); }
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
#endif // MAPLOCATION_T1597838523_H
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
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T542643598_H
#ifndef MAPENVELOPE_T4045462396_H
#define MAPENVELOPE_T4045462396_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.MapEnvelope
struct  MapEnvelope_t4045462396  : public RuntimeObject
{
public:
	// System.Single packt.FoodyGO.Mapping.MapEnvelope::lon1
	float ___lon1_0;
	// System.Single packt.FoodyGO.Mapping.MapEnvelope::lon2
	float ___lon2_1;
	// System.Single packt.FoodyGO.Mapping.MapEnvelope::lat1
	float ___lat1_2;
	// System.Single packt.FoodyGO.Mapping.MapEnvelope::lat2
	float ___lat2_3;

public:
	inline static int32_t get_offset_of_lon1_0() { return static_cast<int32_t>(offsetof(MapEnvelope_t4045462396, ___lon1_0)); }
	inline float get_lon1_0() const { return ___lon1_0; }
	inline float* get_address_of_lon1_0() { return &___lon1_0; }
	inline void set_lon1_0(float value)
	{
		___lon1_0 = value;
	}

	inline static int32_t get_offset_of_lon2_1() { return static_cast<int32_t>(offsetof(MapEnvelope_t4045462396, ___lon2_1)); }
	inline float get_lon2_1() const { return ___lon2_1; }
	inline float* get_address_of_lon2_1() { return &___lon2_1; }
	inline void set_lon2_1(float value)
	{
		___lon2_1 = value;
	}

	inline static int32_t get_offset_of_lat1_2() { return static_cast<int32_t>(offsetof(MapEnvelope_t4045462396, ___lat1_2)); }
	inline float get_lat1_2() const { return ___lat1_2; }
	inline float* get_address_of_lat1_2() { return &___lat1_2; }
	inline void set_lat1_2(float value)
	{
		___lat1_2 = value;
	}

	inline static int32_t get_offset_of_lat2_3() { return static_cast<int32_t>(offsetof(MapEnvelope_t4045462396, ___lat2_3)); }
	inline float get_lat2_3() const { return ___lat2_3; }
	inline float* get_address_of_lat2_3() { return &___lat2_3; }
	inline void set_lat2_3(float value)
	{
		___lat2_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAPENVELOPE_T4045462396_H
#ifndef U3CSTARTSERVICEU3EC__ITERATOR1_T1844591556_H
#define U3CSTARTSERVICEU3EC__ITERATOR1_T1844591556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1
struct  U3CStartServiceU3Ec__Iterator1_t1844591556  : public RuntimeObject
{
public:
	// System.Int32 packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1::<maxWait>__0
	int32_t ___U3CmaxWaitU3E__0_0;
	// packt.FoodyGO.Services.GPSLocationService packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1::$this
	GPSLocationService_t157925672 * ___U24this_1;
	// System.Object packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1::$disposing
	bool ___U24disposing_3;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService/<StartService>c__Iterator1::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_U3CmaxWaitU3E__0_0() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator1_t1844591556, ___U3CmaxWaitU3E__0_0)); }
	inline int32_t get_U3CmaxWaitU3E__0_0() const { return ___U3CmaxWaitU3E__0_0; }
	inline int32_t* get_address_of_U3CmaxWaitU3E__0_0() { return &___U3CmaxWaitU3E__0_0; }
	inline void set_U3CmaxWaitU3E__0_0(int32_t value)
	{
		___U3CmaxWaitU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator1_t1844591556, ___U24this_1)); }
	inline GPSLocationService_t157925672 * get_U24this_1() const { return ___U24this_1; }
	inline GPSLocationService_t157925672 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(GPSLocationService_t157925672 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator1_t1844591556, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator1_t1844591556, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CStartServiceU3Ec__Iterator1_t1844591556, ___U24PC_4)); }
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
#endif // U3CSTARTSERVICEU3EC__ITERATOR1_T1844591556_H
#ifndef MATHG_T1397383893_H
#define MATHG_T1397383893_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Mapping.MathG
struct  MathG_t1397383893  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHG_T1397383893_H
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
	// System.String packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<queryString>__0
	String_t* ___U3CqueryStringU3E__0_0;
	// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<usingSensor>__0
	bool ___U3CusingSensorU3E__0_1;
	// UnityEngine.Networking.UnityWebRequest packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::<req>__0
	UnityWebRequest_t254341728 * ___U3CreqU3E__0_2;
	// packt.FoodyGO.Mapping.GoogleMapTile packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$this
	GoogleMapTile_t633385143 * ___U24this_3;
	// System.Object packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 packt.FoodyGO.Mapping.GoogleMapTile/<_RefreshMapTile>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CqueryStringU3E__0_0() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U3CqueryStringU3E__0_0)); }
	inline String_t* get_U3CqueryStringU3E__0_0() const { return ___U3CqueryStringU3E__0_0; }
	inline String_t** get_address_of_U3CqueryStringU3E__0_0() { return &___U3CqueryStringU3E__0_0; }
	inline void set_U3CqueryStringU3E__0_0(String_t* value)
	{
		___U3CqueryStringU3E__0_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CqueryStringU3E__0_0), value);
	}

	inline static int32_t get_offset_of_U3CusingSensorU3E__0_1() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U3CusingSensorU3E__0_1)); }
	inline bool get_U3CusingSensorU3E__0_1() const { return ___U3CusingSensorU3E__0_1; }
	inline bool* get_address_of_U3CusingSensorU3E__0_1() { return &___U3CusingSensorU3E__0_1; }
	inline void set_U3CusingSensorU3E__0_1(bool value)
	{
		___U3CusingSensorU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CreqU3E__0_2() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U3CreqU3E__0_2)); }
	inline UnityWebRequest_t254341728 * get_U3CreqU3E__0_2() const { return ___U3CreqU3E__0_2; }
	inline UnityWebRequest_t254341728 ** get_address_of_U3CreqU3E__0_2() { return &___U3CreqU3E__0_2; }
	inline void set_U3CreqU3E__0_2(UnityWebRequest_t254341728 * value)
	{
		___U3CreqU3E__0_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CreqU3E__0_2), value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U24this_3)); }
	inline GoogleMapTile_t633385143 * get_U24this_3() const { return ___U24this_3; }
	inline GoogleMapTile_t633385143 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GoogleMapTile_t633385143 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3C_RefreshMapTileU3Ec__Iterator0_t4165355993, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3C_REFRESHMAPTILEU3EC__ITERATOR0_T4165355993_H
#ifndef U3CCLEANUPMONSTERSU3EC__ITERATOR0_T1399923046_H
#define U3CCLEANUPMONSTERSU3EC__ITERATOR0_T1399923046_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0
struct  U3CCleanupMonstersU3Ec__Iterator0_t1399923046  : public RuntimeObject
{
public:
	// System.Double packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::<now>__1
	double ___U3CnowU3E__1_0;
	// packt.FoodyGO.Database.Monster[] packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::<list>__1
	MonsterU5BU5D_t3152714719* ___U3ClistU3E__1_1;
	// packt.FoodyGO.Services.MonsterService packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::$this
	MonsterService_t364432899 * ___U24this_2;
	// System.Object packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 packt.FoodyGO.Services.MonsterService/<CleanupMonsters>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CnowU3E__1_0() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1399923046, ___U3CnowU3E__1_0)); }
	inline double get_U3CnowU3E__1_0() const { return ___U3CnowU3E__1_0; }
	inline double* get_address_of_U3CnowU3E__1_0() { return &___U3CnowU3E__1_0; }
	inline void set_U3CnowU3E__1_0(double value)
	{
		___U3CnowU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U3ClistU3E__1_1() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1399923046, ___U3ClistU3E__1_1)); }
	inline MonsterU5BU5D_t3152714719* get_U3ClistU3E__1_1() const { return ___U3ClistU3E__1_1; }
	inline MonsterU5BU5D_t3152714719** get_address_of_U3ClistU3E__1_1() { return &___U3ClistU3E__1_1; }
	inline void set_U3ClistU3E__1_1(MonsterU5BU5D_t3152714719* value)
	{
		___U3ClistU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClistU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1399923046, ___U24this_2)); }
	inline MonsterService_t364432899 * get_U24this_2() const { return ___U24this_2; }
	inline MonsterService_t364432899 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(MonsterService_t364432899 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1399923046, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1399923046, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CCleanupMonstersU3Ec__Iterator0_t1399923046, ___U24PC_5)); }
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
#endif // U3CCLEANUPMONSTERSU3EC__ITERATOR0_T1399923046_H
#ifndef EPOCH_T1174559313_H
#define EPOCH_T1174559313_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGo.Utils.Epoch
struct  Epoch_t1174559313  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EPOCH_T1174559313_H
#ifndef U3CSTARTSIMULATIONSERVICEU3EC__ITERATOR0_T957775792_H
#define U3CSTARTSIMULATIONSERVICEU3EC__ITERATOR0_T957775792_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.GPSLocationService/<StartSimulationService>c__Iterator0
struct  U3CStartSimulationServiceU3Ec__Iterator0_t957775792  : public RuntimeObject
{
public:
	// packt.FoodyGO.Services.GPSLocationService packt.FoodyGO.Services.GPSLocationService/<StartSimulationService>c__Iterator0::$this
	GPSLocationService_t157925672 * ___U24this_0;
	// System.Object packt.FoodyGO.Services.GPSLocationService/<StartSimulationService>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean packt.FoodyGO.Services.GPSLocationService/<StartSimulationService>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService/<StartSimulationService>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartSimulationServiceU3Ec__Iterator0_t957775792, ___U24this_0)); }
	inline GPSLocationService_t157925672 * get_U24this_0() const { return ___U24this_0; }
	inline GPSLocationService_t157925672 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(GPSLocationService_t157925672 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartSimulationServiceU3Ec__Iterator0_t957775792, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartSimulationServiceU3Ec__Iterator0_t957775792, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartSimulationServiceU3Ec__Iterator0_t957775792, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTSIMULATIONSERVICEU3EC__ITERATOR0_T957775792_H
#ifndef GAMEOBJECTROUTES_T2873037207_H
#define GAMEOBJECTROUTES_T2873037207_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameObjectRoutes
struct  GameObjectRoutes_t2873037207  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTROUTES_T2873037207_H
#ifndef GAMEOBJECTCOMMANDS_T3502278349_H
#define GAMEOBJECTCOMMANDS_T3502278349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameObjectCommands
struct  GameObjectCommands_t3502278349  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECTCOMMANDS_T3502278349_H
#ifndef CONSOLE_T2866211989_H
#define CONSOLE_T2866211989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Console
struct  Console_t2866211989  : public RuntimeObject
{
public:
	// CUDLR.CommandTree CUDLR.Console::m_commands
	CommandTree_t1477375563 * ___m_commands_4;
	// System.Collections.Generic.List`1<System.String> CUDLR.Console::m_output
	List_1_t1398341365 * ___m_output_5;
	// System.Collections.Generic.List`1<System.String> CUDLR.Console::m_history
	List_1_t1398341365 * ___m_history_6;
	// System.String CUDLR.Console::m_help
	String_t* ___m_help_7;
	// System.Collections.Generic.Queue`1<CUDLR.QueuedCommand> CUDLR.Console::m_commandQueue
	Queue_1_t3624819811 * ___m_commandQueue_8;

public:
	inline static int32_t get_offset_of_m_commands_4() { return static_cast<int32_t>(offsetof(Console_t2866211989, ___m_commands_4)); }
	inline CommandTree_t1477375563 * get_m_commands_4() const { return ___m_commands_4; }
	inline CommandTree_t1477375563 ** get_address_of_m_commands_4() { return &___m_commands_4; }
	inline void set_m_commands_4(CommandTree_t1477375563 * value)
	{
		___m_commands_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_commands_4), value);
	}

	inline static int32_t get_offset_of_m_output_5() { return static_cast<int32_t>(offsetof(Console_t2866211989, ___m_output_5)); }
	inline List_1_t1398341365 * get_m_output_5() const { return ___m_output_5; }
	inline List_1_t1398341365 ** get_address_of_m_output_5() { return &___m_output_5; }
	inline void set_m_output_5(List_1_t1398341365 * value)
	{
		___m_output_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_output_5), value);
	}

	inline static int32_t get_offset_of_m_history_6() { return static_cast<int32_t>(offsetof(Console_t2866211989, ___m_history_6)); }
	inline List_1_t1398341365 * get_m_history_6() const { return ___m_history_6; }
	inline List_1_t1398341365 ** get_address_of_m_history_6() { return &___m_history_6; }
	inline void set_m_history_6(List_1_t1398341365 * value)
	{
		___m_history_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_history_6), value);
	}

	inline static int32_t get_offset_of_m_help_7() { return static_cast<int32_t>(offsetof(Console_t2866211989, ___m_help_7)); }
	inline String_t* get_m_help_7() const { return ___m_help_7; }
	inline String_t** get_address_of_m_help_7() { return &___m_help_7; }
	inline void set_m_help_7(String_t* value)
	{
		___m_help_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_help_7), value);
	}

	inline static int32_t get_offset_of_m_commandQueue_8() { return static_cast<int32_t>(offsetof(Console_t2866211989, ___m_commandQueue_8)); }
	inline Queue_1_t3624819811 * get_m_commandQueue_8() const { return ___m_commandQueue_8; }
	inline Queue_1_t3624819811 ** get_address_of_m_commandQueue_8() { return &___m_commandQueue_8; }
	inline void set_m_commandQueue_8(Queue_1_t3624819811 * value)
	{
		___m_commandQueue_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_commandQueue_8), value);
	}
};

struct Console_t2866211989_StaticFields
{
public:
	// CUDLR.Console CUDLR.Console::instance
	Console_t2866211989 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(Console_t2866211989_StaticFields, ___instance_3)); }
	inline Console_t2866211989 * get_instance_3() const { return ___instance_3; }
	inline Console_t2866211989 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(Console_t2866211989 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier((&___instance_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLE_T2866211989_H
#ifndef U3CREGISTERATTRIBUTESU3EC__ANONSTOREY0_T2901168351_H
#define U3CREGISTERATTRIBUTESU3EC__ANONSTOREY0_T2901168351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.Console/<RegisterAttributes>c__AnonStorey0
struct  U3CRegisterAttributesU3Ec__AnonStorey0_t2901168351  : public RuntimeObject
{
public:
	// CUDLR.CommandAttribute/CallbackSimple CUDLR.Console/<RegisterAttributes>c__AnonStorey0::cbs
	CallbackSimple_t4016878319 * ___cbs_0;

public:
	inline static int32_t get_offset_of_cbs_0() { return static_cast<int32_t>(offsetof(U3CRegisterAttributesU3Ec__AnonStorey0_t2901168351, ___cbs_0)); }
	inline CallbackSimple_t4016878319 * get_cbs_0() const { return ___cbs_0; }
	inline CallbackSimple_t4016878319 ** get_address_of_cbs_0() { return &___cbs_0; }
	inline void set_cbs_0(CallbackSimple_t4016878319 * value)
	{
		___cbs_0 = value;
		Il2CppCodeGenWriteBarrier((&___cbs_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CREGISTERATTRIBUTESU3EC__ANONSTOREY0_T2901168351_H
#ifndef COMMANDTREE_T1477375563_H
#define COMMANDTREE_T1477375563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.CommandTree
struct  CommandTree_t1477375563  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,CUDLR.CommandTree> CUDLR.CommandTree::m_subcommands
	Dictionary_2_t3392154825 * ___m_subcommands_0;
	// CUDLR.CommandAttribute CUDLR.CommandTree::m_command
	CommandAttribute_t3787907257 * ___m_command_1;

public:
	inline static int32_t get_offset_of_m_subcommands_0() { return static_cast<int32_t>(offsetof(CommandTree_t1477375563, ___m_subcommands_0)); }
	inline Dictionary_2_t3392154825 * get_m_subcommands_0() const { return ___m_subcommands_0; }
	inline Dictionary_2_t3392154825 ** get_address_of_m_subcommands_0() { return &___m_subcommands_0; }
	inline void set_m_subcommands_0(Dictionary_2_t3392154825 * value)
	{
		___m_subcommands_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_subcommands_0), value);
	}

	inline static int32_t get_offset_of_m_command_1() { return static_cast<int32_t>(offsetof(CommandTree_t1477375563, ___m_command_1)); }
	inline CommandAttribute_t3787907257 * get_m_command_1() const { return ___m_command_1; }
	inline CommandAttribute_t3787907257 ** get_address_of_m_command_1() { return &___m_command_1; }
	inline void set_m_command_1(CommandAttribute_t3787907257 * value)
	{
		___m_command_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_command_1), value);
	}
};

struct CommandTree_t1477375563_StaticFields
{
public:
	// System.String[] CUDLR.CommandTree::emptyArgs
	StringU5BU5D_t1642385972* ___emptyArgs_2;

public:
	inline static int32_t get_offset_of_emptyArgs_2() { return static_cast<int32_t>(offsetof(CommandTree_t1477375563_StaticFields, ___emptyArgs_2)); }
	inline StringU5BU5D_t1642385972* get_emptyArgs_2() const { return ___emptyArgs_2; }
	inline StringU5BU5D_t1642385972** get_address_of_emptyArgs_2() { return &___emptyArgs_2; }
	inline void set_emptyArgs_2(StringU5BU5D_t1642385972* value)
	{
		___emptyArgs_2 = value;
		Il2CppCodeGenWriteBarrier((&___emptyArgs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDTREE_T1477375563_H
#ifndef RESPONSEEXTENSION_T3614192300_H
#define RESPONSEEXTENSION_T3614192300_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResponseExtension
struct  ResponseExtension_t3614192300  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESPONSEEXTENSION_T3614192300_H
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
#ifndef COMMANDATTRIBUTE_T3787907257_H
#define COMMANDATTRIBUTE_T3787907257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.CommandAttribute
struct  CommandAttribute_t3787907257  : public Attribute_t542643598
{
public:
	// System.String CUDLR.CommandAttribute::m_command
	String_t* ___m_command_0;
	// System.String CUDLR.CommandAttribute::m_help
	String_t* ___m_help_1;
	// System.Boolean CUDLR.CommandAttribute::m_runOnMainThread
	bool ___m_runOnMainThread_2;
	// CUDLR.CommandAttribute/Callback CUDLR.CommandAttribute::m_callback
	Callback_t2457543545 * ___m_callback_3;

public:
	inline static int32_t get_offset_of_m_command_0() { return static_cast<int32_t>(offsetof(CommandAttribute_t3787907257, ___m_command_0)); }
	inline String_t* get_m_command_0() const { return ___m_command_0; }
	inline String_t** get_address_of_m_command_0() { return &___m_command_0; }
	inline void set_m_command_0(String_t* value)
	{
		___m_command_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_command_0), value);
	}

	inline static int32_t get_offset_of_m_help_1() { return static_cast<int32_t>(offsetof(CommandAttribute_t3787907257, ___m_help_1)); }
	inline String_t* get_m_help_1() const { return ___m_help_1; }
	inline String_t** get_address_of_m_help_1() { return &___m_help_1; }
	inline void set_m_help_1(String_t* value)
	{
		___m_help_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_help_1), value);
	}

	inline static int32_t get_offset_of_m_runOnMainThread_2() { return static_cast<int32_t>(offsetof(CommandAttribute_t3787907257, ___m_runOnMainThread_2)); }
	inline bool get_m_runOnMainThread_2() const { return ___m_runOnMainThread_2; }
	inline bool* get_address_of_m_runOnMainThread_2() { return &___m_runOnMainThread_2; }
	inline void set_m_runOnMainThread_2(bool value)
	{
		___m_runOnMainThread_2 = value;
	}

	inline static int32_t get_offset_of_m_callback_3() { return static_cast<int32_t>(offsetof(CommandAttribute_t3787907257, ___m_callback_3)); }
	inline Callback_t2457543545 * get_m_callback_3() const { return ___m_callback_3; }
	inline Callback_t2457543545 ** get_address_of_m_callback_3() { return &___m_callback_3; }
	inline void set_m_callback_3(Callback_t2457543545 * value)
	{
		___m_callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_callback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMMANDATTRIBUTE_T3787907257_H
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
#ifndef QUEUEDCOMMAND_T3805162976_H
#define QUEUEDCOMMAND_T3805162976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.QueuedCommand
struct  QueuedCommand_t3805162976 
{
public:
	// CUDLR.CommandAttribute CUDLR.QueuedCommand::command
	CommandAttribute_t3787907257 * ___command_0;
	// System.String[] CUDLR.QueuedCommand::args
	StringU5BU5D_t1642385972* ___args_1;

public:
	inline static int32_t get_offset_of_command_0() { return static_cast<int32_t>(offsetof(QueuedCommand_t3805162976, ___command_0)); }
	inline CommandAttribute_t3787907257 * get_command_0() const { return ___command_0; }
	inline CommandAttribute_t3787907257 ** get_address_of_command_0() { return &___command_0; }
	inline void set_command_0(CommandAttribute_t3787907257 * value)
	{
		___command_0 = value;
		Il2CppCodeGenWriteBarrier((&___command_0), value);
	}

	inline static int32_t get_offset_of_args_1() { return static_cast<int32_t>(offsetof(QueuedCommand_t3805162976, ___args_1)); }
	inline StringU5BU5D_t1642385972* get_args_1() const { return ___args_1; }
	inline StringU5BU5D_t1642385972** get_address_of_args_1() { return &___args_1; }
	inline void set_args_1(StringU5BU5D_t1642385972* value)
	{
		___args_1 = value;
		Il2CppCodeGenWriteBarrier((&___args_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of CUDLR.QueuedCommand
struct QueuedCommand_t3805162976_marshaled_pinvoke
{
	CommandAttribute_t3787907257 * ___command_0;
	char** ___args_1;
};
// Native definition for COM marshalling of CUDLR.QueuedCommand
struct QueuedCommand_t3805162976_marshaled_com
{
	CommandAttribute_t3787907257 * ___command_0;
	Il2CppChar** ___args_1;
};
#endif // QUEUEDCOMMAND_T3805162976_H
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
#ifndef VECTOR3_T2243707580_H
#define VECTOR3_T2243707580_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t2243707580 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t2243707580, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t2243707580_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t2243707580  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t2243707580  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t2243707580  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t2243707580  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t2243707580  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t2243707580  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t2243707580  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t2243707580  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t2243707580  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t2243707580  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___zeroVector_4)); }
	inline Vector3_t2243707580  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t2243707580 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t2243707580  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___oneVector_5)); }
	inline Vector3_t2243707580  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t2243707580 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t2243707580  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___upVector_6)); }
	inline Vector3_t2243707580  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t2243707580 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t2243707580  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___downVector_7)); }
	inline Vector3_t2243707580  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t2243707580 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t2243707580  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___leftVector_8)); }
	inline Vector3_t2243707580  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t2243707580 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t2243707580  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___rightVector_9)); }
	inline Vector3_t2243707580  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t2243707580 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t2243707580  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___forwardVector_10)); }
	inline Vector3_t2243707580  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t2243707580 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t2243707580  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___backVector_11)); }
	inline Vector3_t2243707580  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t2243707580 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t2243707580  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t2243707580  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t2243707580 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t2243707580  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t2243707580_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t2243707580  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t2243707580 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t2243707580  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T2243707580_H
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
#ifndef ROUTEATTRIBUTE_T3177687375_H
#define ROUTEATTRIBUTE_T3177687375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.RouteAttribute
struct  RouteAttribute_t3177687375  : public Attribute_t542643598
{
public:
	// System.Text.RegularExpressions.Regex CUDLR.RouteAttribute::m_route
	Regex_t1803876613 * ___m_route_0;
	// System.Text.RegularExpressions.Regex CUDLR.RouteAttribute::m_methods
	Regex_t1803876613 * ___m_methods_1;
	// System.Boolean CUDLR.RouteAttribute::m_runOnMainThread
	bool ___m_runOnMainThread_2;
	// CUDLR.RouteAttribute/Callback CUDLR.RouteAttribute::m_callback
	Callback_t2384261931 * ___m_callback_3;

public:
	inline static int32_t get_offset_of_m_route_0() { return static_cast<int32_t>(offsetof(RouteAttribute_t3177687375, ___m_route_0)); }
	inline Regex_t1803876613 * get_m_route_0() const { return ___m_route_0; }
	inline Regex_t1803876613 ** get_address_of_m_route_0() { return &___m_route_0; }
	inline void set_m_route_0(Regex_t1803876613 * value)
	{
		___m_route_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_route_0), value);
	}

	inline static int32_t get_offset_of_m_methods_1() { return static_cast<int32_t>(offsetof(RouteAttribute_t3177687375, ___m_methods_1)); }
	inline Regex_t1803876613 * get_m_methods_1() const { return ___m_methods_1; }
	inline Regex_t1803876613 ** get_address_of_m_methods_1() { return &___m_methods_1; }
	inline void set_m_methods_1(Regex_t1803876613 * value)
	{
		___m_methods_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_methods_1), value);
	}

	inline static int32_t get_offset_of_m_runOnMainThread_2() { return static_cast<int32_t>(offsetof(RouteAttribute_t3177687375, ___m_runOnMainThread_2)); }
	inline bool get_m_runOnMainThread_2() const { return ___m_runOnMainThread_2; }
	inline bool* get_address_of_m_runOnMainThread_2() { return &___m_runOnMainThread_2; }
	inline void set_m_runOnMainThread_2(bool value)
	{
		___m_runOnMainThread_2 = value;
	}

	inline static int32_t get_offset_of_m_callback_3() { return static_cast<int32_t>(offsetof(RouteAttribute_t3177687375, ___m_callback_3)); }
	inline Callback_t2384261931 * get_m_callback_3() const { return ___m_callback_3; }
	inline Callback_t2384261931 ** get_address_of_m_callback_3() { return &___m_callback_3; }
	inline void set_m_callback_3(Callback_t2384261931 * value)
	{
		___m_callback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_callback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROUTEATTRIBUTE_T3177687375_H
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
#ifndef ROUTEPOINT_T318924311_H
#define ROUTEPOINT_T318924311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint
struct  RoutePoint_t318924311 
{
public:
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::position
	Vector3_t2243707580  ___position_0;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointCircuit/RoutePoint::direction
	Vector3_t2243707580  ___direction_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(RoutePoint_t318924311, ___position_0)); }
	inline Vector3_t2243707580  get_position_0() const { return ___position_0; }
	inline Vector3_t2243707580 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t2243707580  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_direction_1() { return static_cast<int32_t>(offsetof(RoutePoint_t318924311, ___direction_1)); }
	inline Vector3_t2243707580  get_direction_1() const { return ___direction_1; }
	inline Vector3_t2243707580 * get_address_of_direction_1() { return &___direction_1; }
	inline void set_direction_1(Vector3_t2243707580  value)
	{
		___direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROUTEPOINT_T318924311_H
#ifndef MONSTER_T2599835386_H
#define MONSTER_T2599835386_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Database.Monster
struct  Monster_t2599835386  : public RuntimeObject
{
public:
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Database.Monster::location
	MapLocation_t1597838523 * ___location_0;
	// UnityEngine.Vector3 packt.FoodyGO.Database.Monster::position
	Vector3_t2243707580  ___position_1;
	// System.Double packt.FoodyGO.Database.Monster::spawnTimestamp
	double ___spawnTimestamp_2;
	// System.Double packt.FoodyGO.Database.Monster::lastHeardTimestamp
	double ___lastHeardTimestamp_3;
	// System.Double packt.FoodyGO.Database.Monster::lastSeenTimestamp
	double ___lastSeenTimestamp_4;
	// UnityEngine.GameObject packt.FoodyGO.Database.Monster::gameObject
	GameObject_t1756533147 * ___gameObject_5;
	// System.Int32 packt.FoodyGO.Database.Monster::footstepRange
	int32_t ___footstepRange_6;

public:
	inline static int32_t get_offset_of_location_0() { return static_cast<int32_t>(offsetof(Monster_t2599835386, ___location_0)); }
	inline MapLocation_t1597838523 * get_location_0() const { return ___location_0; }
	inline MapLocation_t1597838523 ** get_address_of_location_0() { return &___location_0; }
	inline void set_location_0(MapLocation_t1597838523 * value)
	{
		___location_0 = value;
		Il2CppCodeGenWriteBarrier((&___location_0), value);
	}

	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(Monster_t2599835386, ___position_1)); }
	inline Vector3_t2243707580  get_position_1() const { return ___position_1; }
	inline Vector3_t2243707580 * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t2243707580  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_spawnTimestamp_2() { return static_cast<int32_t>(offsetof(Monster_t2599835386, ___spawnTimestamp_2)); }
	inline double get_spawnTimestamp_2() const { return ___spawnTimestamp_2; }
	inline double* get_address_of_spawnTimestamp_2() { return &___spawnTimestamp_2; }
	inline void set_spawnTimestamp_2(double value)
	{
		___spawnTimestamp_2 = value;
	}

	inline static int32_t get_offset_of_lastHeardTimestamp_3() { return static_cast<int32_t>(offsetof(Monster_t2599835386, ___lastHeardTimestamp_3)); }
	inline double get_lastHeardTimestamp_3() const { return ___lastHeardTimestamp_3; }
	inline double* get_address_of_lastHeardTimestamp_3() { return &___lastHeardTimestamp_3; }
	inline void set_lastHeardTimestamp_3(double value)
	{
		___lastHeardTimestamp_3 = value;
	}

	inline static int32_t get_offset_of_lastSeenTimestamp_4() { return static_cast<int32_t>(offsetof(Monster_t2599835386, ___lastSeenTimestamp_4)); }
	inline double get_lastSeenTimestamp_4() const { return ___lastSeenTimestamp_4; }
	inline double* get_address_of_lastSeenTimestamp_4() { return &___lastSeenTimestamp_4; }
	inline void set_lastSeenTimestamp_4(double value)
	{
		___lastSeenTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_gameObject_5() { return static_cast<int32_t>(offsetof(Monster_t2599835386, ___gameObject_5)); }
	inline GameObject_t1756533147 * get_gameObject_5() const { return ___gameObject_5; }
	inline GameObject_t1756533147 ** get_address_of_gameObject_5() { return &___gameObject_5; }
	inline void set_gameObject_5(GameObject_t1756533147 * value)
	{
		___gameObject_5 = value;
		Il2CppCodeGenWriteBarrier((&___gameObject_5), value);
	}

	inline static int32_t get_offset_of_footstepRange_6() { return static_cast<int32_t>(offsetof(Monster_t2599835386, ___footstepRange_6)); }
	inline int32_t get_footstepRange_6() const { return ___footstepRange_6; }
	inline int32_t* get_address_of_footstepRange_6() { return &___footstepRange_6; }
	inline void set_footstepRange_6(int32_t value)
	{
		___footstepRange_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONSTER_T2599835386_H
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
#ifndef PROGRESSSTYLE_T1659392090_H
#define PROGRESSSTYLE_T1659392090_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle
struct  ProgressStyle_t1659392090 
{
public:
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProgressStyle_t1659392090, ___value___1)); }
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
#endif // PROGRESSSTYLE_T1659392090_H
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
#ifndef CALLBACK_T2457543545_H
#define CALLBACK_T2457543545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.CommandAttribute/Callback
struct  Callback_t2457543545  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACK_T2457543545_H
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
#ifndef CALLBACKSIMPLE_T4016878319_H
#define CALLBACKSIMPLE_T4016878319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.CommandAttribute/CallbackSimple
struct  CallbackSimple_t4016878319  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKSIMPLE_T4016878319_H
#ifndef CALLBACK_T2384261931_H
#define CALLBACK_T2384261931_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CUDLR.RouteAttribute/Callback
struct  Callback_t2384261931  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACK_T2384261931_H
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
#ifndef ONREDRAWEVENT_T1033359881_H
#define ONREDRAWEVENT_T1033359881_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.GPSLocationService/OnRedrawEvent
struct  OnRedrawEvent_t1033359881  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONREDRAWEVENT_T1033359881_H
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
#ifndef WAYPOINTPROGRESSTRACKER_T2206407592_H
#define WAYPOINTPROGRESSTRACKER_T2206407592_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Utility.WaypointProgressTracker
struct  WaypointProgressTracker_t2206407592  : public MonoBehaviour_t1158329972
{
public:
	// UnityStandardAssets.Utility.WaypointCircuit UnityStandardAssets.Utility.WaypointProgressTracker::circuit
	WaypointCircuit_t2375210762 * ___circuit_2;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetOffset
	float ___lookAheadForTargetOffset_3;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForTargetFactor
	float ___lookAheadForTargetFactor_4;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedOffset
	float ___lookAheadForSpeedOffset_5;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::lookAheadForSpeedFactor
	float ___lookAheadForSpeedFactor_6;
	// UnityStandardAssets.Utility.WaypointProgressTracker/ProgressStyle UnityStandardAssets.Utility.WaypointProgressTracker::progressStyle
	int32_t ___progressStyle_7;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::pointToPointThreshold
	float ___pointToPointThreshold_8;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<targetPoint>k__BackingField
	RoutePoint_t318924311  ___U3CtargetPointU3Ek__BackingField_9;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<speedPoint>k__BackingField
	RoutePoint_t318924311  ___U3CspeedPointU3Ek__BackingField_10;
	// UnityStandardAssets.Utility.WaypointCircuit/RoutePoint UnityStandardAssets.Utility.WaypointProgressTracker::<progressPoint>k__BackingField
	RoutePoint_t318924311  ___U3CprogressPointU3Ek__BackingField_11;
	// UnityEngine.Transform UnityStandardAssets.Utility.WaypointProgressTracker::target
	Transform_t3275118058 * ___target_12;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::progressDistance
	float ___progressDistance_13;
	// System.Int32 UnityStandardAssets.Utility.WaypointProgressTracker::progressNum
	int32_t ___progressNum_14;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.WaypointProgressTracker::lastPosition
	Vector3_t2243707580  ___lastPosition_15;
	// System.Single UnityStandardAssets.Utility.WaypointProgressTracker::speed
	float ___speed_16;

public:
	inline static int32_t get_offset_of_circuit_2() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___circuit_2)); }
	inline WaypointCircuit_t2375210762 * get_circuit_2() const { return ___circuit_2; }
	inline WaypointCircuit_t2375210762 ** get_address_of_circuit_2() { return &___circuit_2; }
	inline void set_circuit_2(WaypointCircuit_t2375210762 * value)
	{
		___circuit_2 = value;
		Il2CppCodeGenWriteBarrier((&___circuit_2), value);
	}

	inline static int32_t get_offset_of_lookAheadForTargetOffset_3() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___lookAheadForTargetOffset_3)); }
	inline float get_lookAheadForTargetOffset_3() const { return ___lookAheadForTargetOffset_3; }
	inline float* get_address_of_lookAheadForTargetOffset_3() { return &___lookAheadForTargetOffset_3; }
	inline void set_lookAheadForTargetOffset_3(float value)
	{
		___lookAheadForTargetOffset_3 = value;
	}

	inline static int32_t get_offset_of_lookAheadForTargetFactor_4() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___lookAheadForTargetFactor_4)); }
	inline float get_lookAheadForTargetFactor_4() const { return ___lookAheadForTargetFactor_4; }
	inline float* get_address_of_lookAheadForTargetFactor_4() { return &___lookAheadForTargetFactor_4; }
	inline void set_lookAheadForTargetFactor_4(float value)
	{
		___lookAheadForTargetFactor_4 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedOffset_5() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___lookAheadForSpeedOffset_5)); }
	inline float get_lookAheadForSpeedOffset_5() const { return ___lookAheadForSpeedOffset_5; }
	inline float* get_address_of_lookAheadForSpeedOffset_5() { return &___lookAheadForSpeedOffset_5; }
	inline void set_lookAheadForSpeedOffset_5(float value)
	{
		___lookAheadForSpeedOffset_5 = value;
	}

	inline static int32_t get_offset_of_lookAheadForSpeedFactor_6() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___lookAheadForSpeedFactor_6)); }
	inline float get_lookAheadForSpeedFactor_6() const { return ___lookAheadForSpeedFactor_6; }
	inline float* get_address_of_lookAheadForSpeedFactor_6() { return &___lookAheadForSpeedFactor_6; }
	inline void set_lookAheadForSpeedFactor_6(float value)
	{
		___lookAheadForSpeedFactor_6 = value;
	}

	inline static int32_t get_offset_of_progressStyle_7() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___progressStyle_7)); }
	inline int32_t get_progressStyle_7() const { return ___progressStyle_7; }
	inline int32_t* get_address_of_progressStyle_7() { return &___progressStyle_7; }
	inline void set_progressStyle_7(int32_t value)
	{
		___progressStyle_7 = value;
	}

	inline static int32_t get_offset_of_pointToPointThreshold_8() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___pointToPointThreshold_8)); }
	inline float get_pointToPointThreshold_8() const { return ___pointToPointThreshold_8; }
	inline float* get_address_of_pointToPointThreshold_8() { return &___pointToPointThreshold_8; }
	inline void set_pointToPointThreshold_8(float value)
	{
		___pointToPointThreshold_8 = value;
	}

	inline static int32_t get_offset_of_U3CtargetPointU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___U3CtargetPointU3Ek__BackingField_9)); }
	inline RoutePoint_t318924311  get_U3CtargetPointU3Ek__BackingField_9() const { return ___U3CtargetPointU3Ek__BackingField_9; }
	inline RoutePoint_t318924311 * get_address_of_U3CtargetPointU3Ek__BackingField_9() { return &___U3CtargetPointU3Ek__BackingField_9; }
	inline void set_U3CtargetPointU3Ek__BackingField_9(RoutePoint_t318924311  value)
	{
		___U3CtargetPointU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CspeedPointU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___U3CspeedPointU3Ek__BackingField_10)); }
	inline RoutePoint_t318924311  get_U3CspeedPointU3Ek__BackingField_10() const { return ___U3CspeedPointU3Ek__BackingField_10; }
	inline RoutePoint_t318924311 * get_address_of_U3CspeedPointU3Ek__BackingField_10() { return &___U3CspeedPointU3Ek__BackingField_10; }
	inline void set_U3CspeedPointU3Ek__BackingField_10(RoutePoint_t318924311  value)
	{
		___U3CspeedPointU3Ek__BackingField_10 = value;
	}

	inline static int32_t get_offset_of_U3CprogressPointU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___U3CprogressPointU3Ek__BackingField_11)); }
	inline RoutePoint_t318924311  get_U3CprogressPointU3Ek__BackingField_11() const { return ___U3CprogressPointU3Ek__BackingField_11; }
	inline RoutePoint_t318924311 * get_address_of_U3CprogressPointU3Ek__BackingField_11() { return &___U3CprogressPointU3Ek__BackingField_11; }
	inline void set_U3CprogressPointU3Ek__BackingField_11(RoutePoint_t318924311  value)
	{
		___U3CprogressPointU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_target_12() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___target_12)); }
	inline Transform_t3275118058 * get_target_12() const { return ___target_12; }
	inline Transform_t3275118058 ** get_address_of_target_12() { return &___target_12; }
	inline void set_target_12(Transform_t3275118058 * value)
	{
		___target_12 = value;
		Il2CppCodeGenWriteBarrier((&___target_12), value);
	}

	inline static int32_t get_offset_of_progressDistance_13() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___progressDistance_13)); }
	inline float get_progressDistance_13() const { return ___progressDistance_13; }
	inline float* get_address_of_progressDistance_13() { return &___progressDistance_13; }
	inline void set_progressDistance_13(float value)
	{
		___progressDistance_13 = value;
	}

	inline static int32_t get_offset_of_progressNum_14() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___progressNum_14)); }
	inline int32_t get_progressNum_14() const { return ___progressNum_14; }
	inline int32_t* get_address_of_progressNum_14() { return &___progressNum_14; }
	inline void set_progressNum_14(int32_t value)
	{
		___progressNum_14 = value;
	}

	inline static int32_t get_offset_of_lastPosition_15() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___lastPosition_15)); }
	inline Vector3_t2243707580  get_lastPosition_15() const { return ___lastPosition_15; }
	inline Vector3_t2243707580 * get_address_of_lastPosition_15() { return &___lastPosition_15; }
	inline void set_lastPosition_15(Vector3_t2243707580  value)
	{
		___lastPosition_15 = value;
	}

	inline static int32_t get_offset_of_speed_16() { return static_cast<int32_t>(offsetof(WaypointProgressTracker_t2206407592, ___speed_16)); }
	inline float get_speed_16() const { return ___speed_16; }
	inline float* get_address_of_speed_16() { return &___speed_16; }
	inline void set_speed_16(float value)
	{
		___speed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAYPOINTPROGRESSTRACKER_T2206407592_H
#ifndef GPSLOCATIONSERVICE_T157925672_H
#define GPSLOCATIONSERVICE_T157925672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.GPSLocationService
struct  GPSLocationService_t157925672  : public MonoBehaviour_t1158329972
{
public:
	// packt.FoodyGO.Services.GPSLocationService/OnRedrawEvent packt.FoodyGO.Services.GPSLocationService::OnMapRedraw
	OnRedrawEvent_t1033359881 * ___OnMapRedraw_2;
	// System.Single packt.FoodyGO.Services.GPSLocationService::DesiredAccuracyInMeters
	float ___DesiredAccuracyInMeters_3;
	// System.Single packt.FoodyGO.Services.GPSLocationService::UpdateAccuracyInMeters
	float ___UpdateAccuracyInMeters_4;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService::MapTileScale
	int32_t ___MapTileScale_5;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService::MapTileSizePixels
	int32_t ___MapTileSizePixels_6;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService::MapTileZoomLevel
	int32_t ___MapTileZoomLevel_7;
	// System.Boolean packt.FoodyGO.Services.GPSLocationService::Simulating
	bool ___Simulating_8;
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Services.GPSLocationService::StartCoordinates
	MapLocation_t1597838523 * ___StartCoordinates_9;
	// System.Single packt.FoodyGO.Services.GPSLocationService::Rate
	float ___Rate_10;
	// UnityEngine.Vector2[] packt.FoodyGO.Services.GPSLocationService::SimulationOffsets
	Vector2U5BU5D_t686124026* ___SimulationOffsets_11;
	// System.Int32 packt.FoodyGO.Services.GPSLocationService::simulationIndex
	int32_t ___simulationIndex_12;
	// System.Boolean packt.FoodyGO.Services.GPSLocationService::IsServiceStarted
	bool ___IsServiceStarted_13;
	// System.Single packt.FoodyGO.Services.GPSLocationService::Latitude
	float ___Latitude_14;
	// System.Single packt.FoodyGO.Services.GPSLocationService::Longitude
	float ___Longitude_15;
	// System.Single packt.FoodyGO.Services.GPSLocationService::Altitude
	float ___Altitude_16;
	// System.Single packt.FoodyGO.Services.GPSLocationService::Accuracy
	float ___Accuracy_17;
	// System.Double packt.FoodyGO.Services.GPSLocationService::Timestamp
	double ___Timestamp_18;
	// System.Double packt.FoodyGO.Services.GPSLocationService::PlayerTimestamp
	double ___PlayerTimestamp_19;
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Services.GPSLocationService::mapCenter
	MapLocation_t1597838523 * ___mapCenter_20;
	// packt.FoodyGO.Mapping.MapEnvelope packt.FoodyGO.Services.GPSLocationService::mapEnvelope
	MapEnvelope_t4045462396 * ___mapEnvelope_21;
	// UnityEngine.Vector3 packt.FoodyGO.Services.GPSLocationService::mapWorldCenter
	Vector3_t2243707580  ___mapWorldCenter_22;
	// UnityEngine.Vector2 packt.FoodyGO.Services.GPSLocationService::mapScale
	Vector2_t2243707579  ___mapScale_23;

public:
	inline static int32_t get_offset_of_OnMapRedraw_2() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___OnMapRedraw_2)); }
	inline OnRedrawEvent_t1033359881 * get_OnMapRedraw_2() const { return ___OnMapRedraw_2; }
	inline OnRedrawEvent_t1033359881 ** get_address_of_OnMapRedraw_2() { return &___OnMapRedraw_2; }
	inline void set_OnMapRedraw_2(OnRedrawEvent_t1033359881 * value)
	{
		___OnMapRedraw_2 = value;
		Il2CppCodeGenWriteBarrier((&___OnMapRedraw_2), value);
	}

	inline static int32_t get_offset_of_DesiredAccuracyInMeters_3() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___DesiredAccuracyInMeters_3)); }
	inline float get_DesiredAccuracyInMeters_3() const { return ___DesiredAccuracyInMeters_3; }
	inline float* get_address_of_DesiredAccuracyInMeters_3() { return &___DesiredAccuracyInMeters_3; }
	inline void set_DesiredAccuracyInMeters_3(float value)
	{
		___DesiredAccuracyInMeters_3 = value;
	}

	inline static int32_t get_offset_of_UpdateAccuracyInMeters_4() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___UpdateAccuracyInMeters_4)); }
	inline float get_UpdateAccuracyInMeters_4() const { return ___UpdateAccuracyInMeters_4; }
	inline float* get_address_of_UpdateAccuracyInMeters_4() { return &___UpdateAccuracyInMeters_4; }
	inline void set_UpdateAccuracyInMeters_4(float value)
	{
		___UpdateAccuracyInMeters_4 = value;
	}

	inline static int32_t get_offset_of_MapTileScale_5() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___MapTileScale_5)); }
	inline int32_t get_MapTileScale_5() const { return ___MapTileScale_5; }
	inline int32_t* get_address_of_MapTileScale_5() { return &___MapTileScale_5; }
	inline void set_MapTileScale_5(int32_t value)
	{
		___MapTileScale_5 = value;
	}

	inline static int32_t get_offset_of_MapTileSizePixels_6() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___MapTileSizePixels_6)); }
	inline int32_t get_MapTileSizePixels_6() const { return ___MapTileSizePixels_6; }
	inline int32_t* get_address_of_MapTileSizePixels_6() { return &___MapTileSizePixels_6; }
	inline void set_MapTileSizePixels_6(int32_t value)
	{
		___MapTileSizePixels_6 = value;
	}

	inline static int32_t get_offset_of_MapTileZoomLevel_7() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___MapTileZoomLevel_7)); }
	inline int32_t get_MapTileZoomLevel_7() const { return ___MapTileZoomLevel_7; }
	inline int32_t* get_address_of_MapTileZoomLevel_7() { return &___MapTileZoomLevel_7; }
	inline void set_MapTileZoomLevel_7(int32_t value)
	{
		___MapTileZoomLevel_7 = value;
	}

	inline static int32_t get_offset_of_Simulating_8() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___Simulating_8)); }
	inline bool get_Simulating_8() const { return ___Simulating_8; }
	inline bool* get_address_of_Simulating_8() { return &___Simulating_8; }
	inline void set_Simulating_8(bool value)
	{
		___Simulating_8 = value;
	}

	inline static int32_t get_offset_of_StartCoordinates_9() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___StartCoordinates_9)); }
	inline MapLocation_t1597838523 * get_StartCoordinates_9() const { return ___StartCoordinates_9; }
	inline MapLocation_t1597838523 ** get_address_of_StartCoordinates_9() { return &___StartCoordinates_9; }
	inline void set_StartCoordinates_9(MapLocation_t1597838523 * value)
	{
		___StartCoordinates_9 = value;
		Il2CppCodeGenWriteBarrier((&___StartCoordinates_9), value);
	}

	inline static int32_t get_offset_of_Rate_10() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___Rate_10)); }
	inline float get_Rate_10() const { return ___Rate_10; }
	inline float* get_address_of_Rate_10() { return &___Rate_10; }
	inline void set_Rate_10(float value)
	{
		___Rate_10 = value;
	}

	inline static int32_t get_offset_of_SimulationOffsets_11() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___SimulationOffsets_11)); }
	inline Vector2U5BU5D_t686124026* get_SimulationOffsets_11() const { return ___SimulationOffsets_11; }
	inline Vector2U5BU5D_t686124026** get_address_of_SimulationOffsets_11() { return &___SimulationOffsets_11; }
	inline void set_SimulationOffsets_11(Vector2U5BU5D_t686124026* value)
	{
		___SimulationOffsets_11 = value;
		Il2CppCodeGenWriteBarrier((&___SimulationOffsets_11), value);
	}

	inline static int32_t get_offset_of_simulationIndex_12() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___simulationIndex_12)); }
	inline int32_t get_simulationIndex_12() const { return ___simulationIndex_12; }
	inline int32_t* get_address_of_simulationIndex_12() { return &___simulationIndex_12; }
	inline void set_simulationIndex_12(int32_t value)
	{
		___simulationIndex_12 = value;
	}

	inline static int32_t get_offset_of_IsServiceStarted_13() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___IsServiceStarted_13)); }
	inline bool get_IsServiceStarted_13() const { return ___IsServiceStarted_13; }
	inline bool* get_address_of_IsServiceStarted_13() { return &___IsServiceStarted_13; }
	inline void set_IsServiceStarted_13(bool value)
	{
		___IsServiceStarted_13 = value;
	}

	inline static int32_t get_offset_of_Latitude_14() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___Latitude_14)); }
	inline float get_Latitude_14() const { return ___Latitude_14; }
	inline float* get_address_of_Latitude_14() { return &___Latitude_14; }
	inline void set_Latitude_14(float value)
	{
		___Latitude_14 = value;
	}

	inline static int32_t get_offset_of_Longitude_15() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___Longitude_15)); }
	inline float get_Longitude_15() const { return ___Longitude_15; }
	inline float* get_address_of_Longitude_15() { return &___Longitude_15; }
	inline void set_Longitude_15(float value)
	{
		___Longitude_15 = value;
	}

	inline static int32_t get_offset_of_Altitude_16() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___Altitude_16)); }
	inline float get_Altitude_16() const { return ___Altitude_16; }
	inline float* get_address_of_Altitude_16() { return &___Altitude_16; }
	inline void set_Altitude_16(float value)
	{
		___Altitude_16 = value;
	}

	inline static int32_t get_offset_of_Accuracy_17() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___Accuracy_17)); }
	inline float get_Accuracy_17() const { return ___Accuracy_17; }
	inline float* get_address_of_Accuracy_17() { return &___Accuracy_17; }
	inline void set_Accuracy_17(float value)
	{
		___Accuracy_17 = value;
	}

	inline static int32_t get_offset_of_Timestamp_18() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___Timestamp_18)); }
	inline double get_Timestamp_18() const { return ___Timestamp_18; }
	inline double* get_address_of_Timestamp_18() { return &___Timestamp_18; }
	inline void set_Timestamp_18(double value)
	{
		___Timestamp_18 = value;
	}

	inline static int32_t get_offset_of_PlayerTimestamp_19() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___PlayerTimestamp_19)); }
	inline double get_PlayerTimestamp_19() const { return ___PlayerTimestamp_19; }
	inline double* get_address_of_PlayerTimestamp_19() { return &___PlayerTimestamp_19; }
	inline void set_PlayerTimestamp_19(double value)
	{
		___PlayerTimestamp_19 = value;
	}

	inline static int32_t get_offset_of_mapCenter_20() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___mapCenter_20)); }
	inline MapLocation_t1597838523 * get_mapCenter_20() const { return ___mapCenter_20; }
	inline MapLocation_t1597838523 ** get_address_of_mapCenter_20() { return &___mapCenter_20; }
	inline void set_mapCenter_20(MapLocation_t1597838523 * value)
	{
		___mapCenter_20 = value;
		Il2CppCodeGenWriteBarrier((&___mapCenter_20), value);
	}

	inline static int32_t get_offset_of_mapEnvelope_21() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___mapEnvelope_21)); }
	inline MapEnvelope_t4045462396 * get_mapEnvelope_21() const { return ___mapEnvelope_21; }
	inline MapEnvelope_t4045462396 ** get_address_of_mapEnvelope_21() { return &___mapEnvelope_21; }
	inline void set_mapEnvelope_21(MapEnvelope_t4045462396 * value)
	{
		___mapEnvelope_21 = value;
		Il2CppCodeGenWriteBarrier((&___mapEnvelope_21), value);
	}

	inline static int32_t get_offset_of_mapWorldCenter_22() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___mapWorldCenter_22)); }
	inline Vector3_t2243707580  get_mapWorldCenter_22() const { return ___mapWorldCenter_22; }
	inline Vector3_t2243707580 * get_address_of_mapWorldCenter_22() { return &___mapWorldCenter_22; }
	inline void set_mapWorldCenter_22(Vector3_t2243707580  value)
	{
		___mapWorldCenter_22 = value;
	}

	inline static int32_t get_offset_of_mapScale_23() { return static_cast<int32_t>(offsetof(GPSLocationService_t157925672, ___mapScale_23)); }
	inline Vector2_t2243707579  get_mapScale_23() const { return ___mapScale_23; }
	inline Vector2_t2243707579 * get_address_of_mapScale_23() { return &___mapScale_23; }
	inline void set_mapScale_23(Vector2_t2243707579  value)
	{
		___mapScale_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GPSLOCATIONSERVICE_T157925672_H
#ifndef MONSTERSERVICE_T364432899_H
#define MONSTERSERVICE_T364432899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Services.MonsterService
struct  MonsterService_t364432899  : public MonoBehaviour_t1158329972
{
public:
	// packt.FoodyGO.Services.GPSLocationService packt.FoodyGO.Services.MonsterService::gpsLocationService
	GPSLocationService_t157925672 * ___gpsLocationService_2;
	// UnityEngine.GameObject packt.FoodyGO.Services.MonsterService::monsterPrefab
	GameObject_t1756533147 * ___monsterPrefab_3;
	// System.Double packt.FoodyGO.Services.MonsterService::lastTimestamp
	double ___lastTimestamp_4;
	// System.Single packt.FoodyGO.Services.MonsterService::monsterSpawnRate
	float ___monsterSpawnRate_5;
	// System.Single packt.FoodyGO.Services.MonsterService::latitudeSpawnOffset
	float ___latitudeSpawnOffset_6;
	// System.Single packt.FoodyGO.Services.MonsterService::longitudeSpawnOffset
	float ___longitudeSpawnOffset_7;
	// System.Single packt.FoodyGO.Services.MonsterService::monsterHearDistance
	float ___monsterHearDistance_8;
	// System.Single packt.FoodyGO.Services.MonsterService::monsterSeeDistance
	float ___monsterSeeDistance_9;
	// System.Single packt.FoodyGO.Services.MonsterService::monsterLifetimeSeconds
	float ___monsterLifetimeSeconds_10;
	// System.Single packt.FoodyGO.Services.MonsterService::oneStepRange
	float ___oneStepRange_11;
	// System.Single packt.FoodyGO.Services.MonsterService::twoStepRange
	float ___twoStepRange_12;
	// System.Single packt.FoodyGO.Services.MonsterService::threeStepRange
	float ___threeStepRange_13;
	// System.Collections.Generic.List`1<packt.FoodyGO.Database.Monster> packt.FoodyGO.Services.MonsterService::monsters
	List_1_t1968956518 * ___monsters_14;

public:
	inline static int32_t get_offset_of_gpsLocationService_2() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___gpsLocationService_2)); }
	inline GPSLocationService_t157925672 * get_gpsLocationService_2() const { return ___gpsLocationService_2; }
	inline GPSLocationService_t157925672 ** get_address_of_gpsLocationService_2() { return &___gpsLocationService_2; }
	inline void set_gpsLocationService_2(GPSLocationService_t157925672 * value)
	{
		___gpsLocationService_2 = value;
		Il2CppCodeGenWriteBarrier((&___gpsLocationService_2), value);
	}

	inline static int32_t get_offset_of_monsterPrefab_3() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___monsterPrefab_3)); }
	inline GameObject_t1756533147 * get_monsterPrefab_3() const { return ___monsterPrefab_3; }
	inline GameObject_t1756533147 ** get_address_of_monsterPrefab_3() { return &___monsterPrefab_3; }
	inline void set_monsterPrefab_3(GameObject_t1756533147 * value)
	{
		___monsterPrefab_3 = value;
		Il2CppCodeGenWriteBarrier((&___monsterPrefab_3), value);
	}

	inline static int32_t get_offset_of_lastTimestamp_4() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___lastTimestamp_4)); }
	inline double get_lastTimestamp_4() const { return ___lastTimestamp_4; }
	inline double* get_address_of_lastTimestamp_4() { return &___lastTimestamp_4; }
	inline void set_lastTimestamp_4(double value)
	{
		___lastTimestamp_4 = value;
	}

	inline static int32_t get_offset_of_monsterSpawnRate_5() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___monsterSpawnRate_5)); }
	inline float get_monsterSpawnRate_5() const { return ___monsterSpawnRate_5; }
	inline float* get_address_of_monsterSpawnRate_5() { return &___monsterSpawnRate_5; }
	inline void set_monsterSpawnRate_5(float value)
	{
		___monsterSpawnRate_5 = value;
	}

	inline static int32_t get_offset_of_latitudeSpawnOffset_6() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___latitudeSpawnOffset_6)); }
	inline float get_latitudeSpawnOffset_6() const { return ___latitudeSpawnOffset_6; }
	inline float* get_address_of_latitudeSpawnOffset_6() { return &___latitudeSpawnOffset_6; }
	inline void set_latitudeSpawnOffset_6(float value)
	{
		___latitudeSpawnOffset_6 = value;
	}

	inline static int32_t get_offset_of_longitudeSpawnOffset_7() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___longitudeSpawnOffset_7)); }
	inline float get_longitudeSpawnOffset_7() const { return ___longitudeSpawnOffset_7; }
	inline float* get_address_of_longitudeSpawnOffset_7() { return &___longitudeSpawnOffset_7; }
	inline void set_longitudeSpawnOffset_7(float value)
	{
		___longitudeSpawnOffset_7 = value;
	}

	inline static int32_t get_offset_of_monsterHearDistance_8() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___monsterHearDistance_8)); }
	inline float get_monsterHearDistance_8() const { return ___monsterHearDistance_8; }
	inline float* get_address_of_monsterHearDistance_8() { return &___monsterHearDistance_8; }
	inline void set_monsterHearDistance_8(float value)
	{
		___monsterHearDistance_8 = value;
	}

	inline static int32_t get_offset_of_monsterSeeDistance_9() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___monsterSeeDistance_9)); }
	inline float get_monsterSeeDistance_9() const { return ___monsterSeeDistance_9; }
	inline float* get_address_of_monsterSeeDistance_9() { return &___monsterSeeDistance_9; }
	inline void set_monsterSeeDistance_9(float value)
	{
		___monsterSeeDistance_9 = value;
	}

	inline static int32_t get_offset_of_monsterLifetimeSeconds_10() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___monsterLifetimeSeconds_10)); }
	inline float get_monsterLifetimeSeconds_10() const { return ___monsterLifetimeSeconds_10; }
	inline float* get_address_of_monsterLifetimeSeconds_10() { return &___monsterLifetimeSeconds_10; }
	inline void set_monsterLifetimeSeconds_10(float value)
	{
		___monsterLifetimeSeconds_10 = value;
	}

	inline static int32_t get_offset_of_oneStepRange_11() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___oneStepRange_11)); }
	inline float get_oneStepRange_11() const { return ___oneStepRange_11; }
	inline float* get_address_of_oneStepRange_11() { return &___oneStepRange_11; }
	inline void set_oneStepRange_11(float value)
	{
		___oneStepRange_11 = value;
	}

	inline static int32_t get_offset_of_twoStepRange_12() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___twoStepRange_12)); }
	inline float get_twoStepRange_12() const { return ___twoStepRange_12; }
	inline float* get_address_of_twoStepRange_12() { return &___twoStepRange_12; }
	inline void set_twoStepRange_12(float value)
	{
		___twoStepRange_12 = value;
	}

	inline static int32_t get_offset_of_threeStepRange_13() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___threeStepRange_13)); }
	inline float get_threeStepRange_13() const { return ___threeStepRange_13; }
	inline float* get_address_of_threeStepRange_13() { return &___threeStepRange_13; }
	inline void set_threeStepRange_13(float value)
	{
		___threeStepRange_13 = value;
	}

	inline static int32_t get_offset_of_monsters_14() { return static_cast<int32_t>(offsetof(MonsterService_t364432899, ___monsters_14)); }
	inline List_1_t1968956518 * get_monsters_14() const { return ___monsters_14; }
	inline List_1_t1968956518 ** get_address_of_monsters_14() { return &___monsters_14; }
	inline void set_monsters_14(List_1_t1968956518 * value)
	{
		___monsters_14 = value;
		Il2CppCodeGenWriteBarrier((&___monsters_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONSTERSERVICE_T364432899_H
#ifndef FOOTSTEPTRACKER_T2623363944_H
#define FOOTSTEPTRACKER_T2623363944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.UI.FootstepTracker
struct  FootstepTracker_t2623363944  : public MonoBehaviour_t1158329972
{
public:
	// packt.FoodyGO.Services.MonsterService packt.FoodyGO.UI.FootstepTracker::monsterService
	MonsterService_t364432899 * ___monsterService_2;
	// UnityEngine.Texture packt.FoodyGO.UI.FootstepTracker::oneFootstep
	Texture_t2243626319 * ___oneFootstep_3;
	// UnityEngine.Texture packt.FoodyGO.UI.FootstepTracker::twoFootsteps
	Texture_t2243626319 * ___twoFootsteps_4;
	// UnityEngine.Texture packt.FoodyGO.UI.FootstepTracker::threeFootsteps
	Texture_t2243626319 * ___threeFootsteps_5;
	// UnityEngine.UI.RawImage packt.FoodyGO.UI.FootstepTracker::image
	RawImage_t2749640213 * ___image_6;

public:
	inline static int32_t get_offset_of_monsterService_2() { return static_cast<int32_t>(offsetof(FootstepTracker_t2623363944, ___monsterService_2)); }
	inline MonsterService_t364432899 * get_monsterService_2() const { return ___monsterService_2; }
	inline MonsterService_t364432899 ** get_address_of_monsterService_2() { return &___monsterService_2; }
	inline void set_monsterService_2(MonsterService_t364432899 * value)
	{
		___monsterService_2 = value;
		Il2CppCodeGenWriteBarrier((&___monsterService_2), value);
	}

	inline static int32_t get_offset_of_oneFootstep_3() { return static_cast<int32_t>(offsetof(FootstepTracker_t2623363944, ___oneFootstep_3)); }
	inline Texture_t2243626319 * get_oneFootstep_3() const { return ___oneFootstep_3; }
	inline Texture_t2243626319 ** get_address_of_oneFootstep_3() { return &___oneFootstep_3; }
	inline void set_oneFootstep_3(Texture_t2243626319 * value)
	{
		___oneFootstep_3 = value;
		Il2CppCodeGenWriteBarrier((&___oneFootstep_3), value);
	}

	inline static int32_t get_offset_of_twoFootsteps_4() { return static_cast<int32_t>(offsetof(FootstepTracker_t2623363944, ___twoFootsteps_4)); }
	inline Texture_t2243626319 * get_twoFootsteps_4() const { return ___twoFootsteps_4; }
	inline Texture_t2243626319 ** get_address_of_twoFootsteps_4() { return &___twoFootsteps_4; }
	inline void set_twoFootsteps_4(Texture_t2243626319 * value)
	{
		___twoFootsteps_4 = value;
		Il2CppCodeGenWriteBarrier((&___twoFootsteps_4), value);
	}

	inline static int32_t get_offset_of_threeFootsteps_5() { return static_cast<int32_t>(offsetof(FootstepTracker_t2623363944, ___threeFootsteps_5)); }
	inline Texture_t2243626319 * get_threeFootsteps_5() const { return ___threeFootsteps_5; }
	inline Texture_t2243626319 ** get_address_of_threeFootsteps_5() { return &___threeFootsteps_5; }
	inline void set_threeFootsteps_5(Texture_t2243626319 * value)
	{
		___threeFootsteps_5 = value;
		Il2CppCodeGenWriteBarrier((&___threeFootsteps_5), value);
	}

	inline static int32_t get_offset_of_image_6() { return static_cast<int32_t>(offsetof(FootstepTracker_t2623363944, ___image_6)); }
	inline RawImage_t2749640213 * get_image_6() const { return ___image_6; }
	inline RawImage_t2749640213 ** get_address_of_image_6() { return &___image_6; }
	inline void set_image_6(RawImage_t2749640213 * value)
	{
		___image_6 = value;
		Il2CppCodeGenWriteBarrier((&___image_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOOTSTEPTRACKER_T2623363944_H
#ifndef MONSTERCONTROLLER_T982996358_H
#define MONSTERCONTROLLER_T982996358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Controllers.MonsterController
struct  MonsterController_t982996358  : public MonoBehaviour_t1158329972
{
public:
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Controllers.MonsterController::location
	MapLocation_t1597838523 * ___location_2;

public:
	inline static int32_t get_offset_of_location_2() { return static_cast<int32_t>(offsetof(MonsterController_t982996358, ___location_2)); }
	inline MapLocation_t1597838523 * get_location_2() const { return ___location_2; }
	inline MapLocation_t1597838523 ** get_address_of_location_2() { return &___location_2; }
	inline void set_location_2(MapLocation_t1597838523 * value)
	{
		___location_2 = value;
		Il2CppCodeGenWriteBarrier((&___location_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONSTERCONTROLLER_T982996358_H
#ifndef CHARACTERGPSCOMPASSCONTROLLER_T355398859_H
#define CHARACTERGPSCOMPASSCONTROLLER_T355398859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// packt.FoodyGO.Controllers.CharacterGPSCompassController
struct  CharacterGPSCompassController_t355398859  : public MonoBehaviour_t1158329972
{
public:
	// packt.FoodyGO.Services.GPSLocationService packt.FoodyGO.Controllers.CharacterGPSCompassController::gpsLocationService
	GPSLocationService_t157925672 * ___gpsLocationService_2;
	// System.Double packt.FoodyGO.Controllers.CharacterGPSCompassController::lastTimestamp
	double ___lastTimestamp_3;
	// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter packt.FoodyGO.Controllers.CharacterGPSCompassController::thirdPersonCharacter
	ThirdPersonCharacter_t1249311527 * ___thirdPersonCharacter_4;
	// UnityEngine.Vector3 packt.FoodyGO.Controllers.CharacterGPSCompassController::target
	Vector3_t2243707580  ___target_5;

public:
	inline static int32_t get_offset_of_gpsLocationService_2() { return static_cast<int32_t>(offsetof(CharacterGPSCompassController_t355398859, ___gpsLocationService_2)); }
	inline GPSLocationService_t157925672 * get_gpsLocationService_2() const { return ___gpsLocationService_2; }
	inline GPSLocationService_t157925672 ** get_address_of_gpsLocationService_2() { return &___gpsLocationService_2; }
	inline void set_gpsLocationService_2(GPSLocationService_t157925672 * value)
	{
		___gpsLocationService_2 = value;
		Il2CppCodeGenWriteBarrier((&___gpsLocationService_2), value);
	}

	inline static int32_t get_offset_of_lastTimestamp_3() { return static_cast<int32_t>(offsetof(CharacterGPSCompassController_t355398859, ___lastTimestamp_3)); }
	inline double get_lastTimestamp_3() const { return ___lastTimestamp_3; }
	inline double* get_address_of_lastTimestamp_3() { return &___lastTimestamp_3; }
	inline void set_lastTimestamp_3(double value)
	{
		___lastTimestamp_3 = value;
	}

	inline static int32_t get_offset_of_thirdPersonCharacter_4() { return static_cast<int32_t>(offsetof(CharacterGPSCompassController_t355398859, ___thirdPersonCharacter_4)); }
	inline ThirdPersonCharacter_t1249311527 * get_thirdPersonCharacter_4() const { return ___thirdPersonCharacter_4; }
	inline ThirdPersonCharacter_t1249311527 ** get_address_of_thirdPersonCharacter_4() { return &___thirdPersonCharacter_4; }
	inline void set_thirdPersonCharacter_4(ThirdPersonCharacter_t1249311527 * value)
	{
		___thirdPersonCharacter_4 = value;
		Il2CppCodeGenWriteBarrier((&___thirdPersonCharacter_4), value);
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(CharacterGPSCompassController_t355398859, ___target_5)); }
	inline Vector3_t2243707580  get_target_5() const { return ___target_5; }
	inline Vector3_t2243707580 * get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Vector3_t2243707580  value)
	{
		___target_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARACTERGPSCOMPASSCONTROLLER_T355398859_H
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
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Mapping.GoogleMapTile::worldCenterLocation
	MapLocation_t1597838523 * ___worldCenterLocation_7;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::TileOffset
	Vector2_t2243707579  ___TileOffset_8;
	// packt.FoodyGO.Mapping.MapLocation packt.FoodyGO.Mapping.GoogleMapTile::tileCenterLocation
	MapLocation_t1597838523 * ___tileCenterLocation_9;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::TopLeftCorner
	Vector2_t2243707579  ___TopLeftCorner_10;
	// UnityEngine.Vector2 packt.FoodyGO.Mapping.GoogleMapTile::BottomRightCorner
	Vector2_t2243707579  ___BottomRightCorner_11;
	// packt.FoodyGO.Services.GPSLocationService packt.FoodyGO.Mapping.GoogleMapTile::gpsLocationService
	GPSLocationService_t157925672 * ___gpsLocationService_12;
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
	inline MapLocation_t1597838523 * get_worldCenterLocation_7() const { return ___worldCenterLocation_7; }
	inline MapLocation_t1597838523 ** get_address_of_worldCenterLocation_7() { return &___worldCenterLocation_7; }
	inline void set_worldCenterLocation_7(MapLocation_t1597838523 * value)
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
	inline MapLocation_t1597838523 * get_tileCenterLocation_9() const { return ___tileCenterLocation_9; }
	inline MapLocation_t1597838523 ** get_address_of_tileCenterLocation_9() { return &___tileCenterLocation_9; }
	inline void set_tileCenterLocation_9(MapLocation_t1597838523 * value)
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
	inline GPSLocationService_t157925672 * get_gpsLocationService_12() const { return ___gpsLocationService_12; }
	inline GPSLocationService_t157925672 ** get_address_of_gpsLocationService_12() { return &___gpsLocationService_12; }
	inline void set_gpsLocationService_12(GPSLocationService_t157925672 * value)
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2000 = { sizeof (RoutePoint_t318924311)+ sizeof (RuntimeObject), sizeof(RoutePoint_t318924311 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2000[2] = 
{
	RoutePoint_t318924311::get_offset_of_position_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	RoutePoint_t318924311::get_offset_of_direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2001 = { sizeof (WaypointProgressTracker_t2206407592), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2001[15] = 
{
	WaypointProgressTracker_t2206407592::get_offset_of_circuit_2(),
	WaypointProgressTracker_t2206407592::get_offset_of_lookAheadForTargetOffset_3(),
	WaypointProgressTracker_t2206407592::get_offset_of_lookAheadForTargetFactor_4(),
	WaypointProgressTracker_t2206407592::get_offset_of_lookAheadForSpeedOffset_5(),
	WaypointProgressTracker_t2206407592::get_offset_of_lookAheadForSpeedFactor_6(),
	WaypointProgressTracker_t2206407592::get_offset_of_progressStyle_7(),
	WaypointProgressTracker_t2206407592::get_offset_of_pointToPointThreshold_8(),
	WaypointProgressTracker_t2206407592::get_offset_of_U3CtargetPointU3Ek__BackingField_9(),
	WaypointProgressTracker_t2206407592::get_offset_of_U3CspeedPointU3Ek__BackingField_10(),
	WaypointProgressTracker_t2206407592::get_offset_of_U3CprogressPointU3Ek__BackingField_11(),
	WaypointProgressTracker_t2206407592::get_offset_of_target_12(),
	WaypointProgressTracker_t2206407592::get_offset_of_progressDistance_13(),
	WaypointProgressTracker_t2206407592::get_offset_of_progressNum_14(),
	WaypointProgressTracker_t2206407592::get_offset_of_lastPosition_15(),
	WaypointProgressTracker_t2206407592::get_offset_of_speed_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2002 = { sizeof (ProgressStyle_t1659392090)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2002[3] = 
{
	ProgressStyle_t1659392090::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2003 = { sizeof (U3CModuleU3E_t3783534238), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2004 = { sizeof (GameObjectCommands_t3502278349), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2005 = { sizeof (GameObjectRoutes_t2873037207), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2006 = { sizeof (CommandAttribute_t3787907257), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2006[4] = 
{
	CommandAttribute_t3787907257::get_offset_of_m_command_0(),
	CommandAttribute_t3787907257::get_offset_of_m_help_1(),
	CommandAttribute_t3787907257::get_offset_of_m_runOnMainThread_2(),
	CommandAttribute_t3787907257::get_offset_of_m_callback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2007 = { sizeof (CallbackSimple_t4016878319), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2008 = { sizeof (Callback_t2457543545), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2009 = { sizeof (RouteAttribute_t3177687375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2009[4] = 
{
	RouteAttribute_t3177687375::get_offset_of_m_route_0(),
	RouteAttribute_t3177687375::get_offset_of_m_methods_1(),
	RouteAttribute_t3177687375::get_offset_of_m_runOnMainThread_2(),
	RouteAttribute_t3177687375::get_offset_of_m_callback_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2010 = { sizeof (Callback_t2384261931), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2011 = { sizeof (QueuedCommand_t3805162976)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2011[2] = 
{
	QueuedCommand_t3805162976::get_offset_of_command_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	QueuedCommand_t3805162976::get_offset_of_args_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2012 = { sizeof (Console_t2866211989), -1, sizeof(Console_t2866211989_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2012[9] = 
{
	0,
	0,
	0,
	Console_t2866211989_StaticFields::get_offset_of_instance_3(),
	Console_t2866211989::get_offset_of_m_commands_4(),
	Console_t2866211989::get_offset_of_m_output_5(),
	Console_t2866211989::get_offset_of_m_history_6(),
	Console_t2866211989::get_offset_of_m_help_7(),
	Console_t2866211989::get_offset_of_m_commandQueue_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2013 = { sizeof (U3CRegisterAttributesU3Ec__AnonStorey0_t2901168351), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2013[1] = 
{
	U3CRegisterAttributesU3Ec__AnonStorey0_t2901168351::get_offset_of_cbs_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2014 = { sizeof (CommandTree_t1477375563), -1, sizeof(CommandTree_t1477375563_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2014[3] = 
{
	CommandTree_t1477375563::get_offset_of_m_subcommands_0(),
	CommandTree_t1477375563::get_offset_of_m_command_1(),
	CommandTree_t1477375563_StaticFields::get_offset_of_emptyArgs_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2015 = { sizeof (ResponseExtension_t3614192300), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2016 = { sizeof (RequestContext_t2741781238), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2016[5] = 
{
	RequestContext_t2741781238::get_offset_of_context_0(),
	RequestContext_t2741781238::get_offset_of_match_1(),
	RequestContext_t2741781238::get_offset_of_pass_2(),
	RequestContext_t2741781238::get_offset_of_path_3(),
	RequestContext_t2741781238::get_offset_of_currentRoute_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2017 = { sizeof (Server_t2567140039), -1, sizeof(Server_t2567140039_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2017[11] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2018 = { sizeof (FileHandlerDelegate_t163686991), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2019 = { sizeof (U3CRegisterFileHandlersU3Ec__AnonStorey1_t1818970228), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2019[1] = 
{
	U3CRegisterFileHandlersU3Ec__AnonStorey1_t1818970228::get_offset_of_callback_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2020 = { sizeof (U3CHandleRequestsU3Ec__Iterator0_t381024681), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2020[6] = 
{
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U3CcontextU3E__1_0(),
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U24locvar0_1(),
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U24this_2(),
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U24current_3(),
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U24disposing_4(),
	U3CHandleRequestsU3Ec__Iterator0_t381024681::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2021 = { sizeof (CharacterGPSCompassController_t355398859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2021[4] = 
{
	CharacterGPSCompassController_t355398859::get_offset_of_gpsLocationService_2(),
	CharacterGPSCompassController_t355398859::get_offset_of_lastTimestamp_3(),
	CharacterGPSCompassController_t355398859::get_offset_of_thirdPersonCharacter_4(),
	CharacterGPSCompassController_t355398859::get_offset_of_target_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2022 = { sizeof (MonsterController_t982996358), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2022[1] = 
{
	MonsterController_t982996358::get_offset_of_location_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2023 = { sizeof (Monster_t2599835386), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2023[7] = 
{
	Monster_t2599835386::get_offset_of_location_0(),
	Monster_t2599835386::get_offset_of_position_1(),
	Monster_t2599835386::get_offset_of_spawnTimestamp_2(),
	Monster_t2599835386::get_offset_of_lastHeardTimestamp_3(),
	Monster_t2599835386::get_offset_of_lastSeenTimestamp_4(),
	Monster_t2599835386::get_offset_of_gameObject_5(),
	Monster_t2599835386::get_offset_of_footstepRange_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2024 = { sizeof (MapLocation_t1597838523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2024[2] = 
{
	MapLocation_t1597838523::get_offset_of_Latitude_0(),
	MapLocation_t1597838523::get_offset_of_Longitude_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2025 = { sizeof (MapEnvelope_t4045462396), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2025[4] = 
{
	MapEnvelope_t4045462396::get_offset_of_lon1_0(),
	MapEnvelope_t4045462396::get_offset_of_lon2_1(),
	MapEnvelope_t4045462396::get_offset_of_lat1_2(),
	MapEnvelope_t4045462396::get_offset_of_lat2_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2026 = { sizeof (GoogleMapTile_t633385143), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2026[12] = 
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
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2027 = { sizeof (MapType_t2840829088)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2027[5] = 
{
	MapType_t2840829088::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2028 = { sizeof (U3C_RefreshMapTileU3Ec__Iterator0_t4165355993), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2028[7] = 
{
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U3CqueryStringU3E__0_0(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U3CusingSensorU3E__0_1(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U3CreqU3E__0_2(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U24this_3(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U24current_4(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U24disposing_5(),
	U3C_RefreshMapTileU3Ec__Iterator0_t4165355993::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2029 = { sizeof (GoogleMapUtils_t2257638562), -1, sizeof(GoogleMapUtils_t2257638562_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2029[4] = 
{
	GoogleMapUtils_t2257638562_StaticFields::get_offset_of_GOOGLE_OFFSET_0(),
	GoogleMapUtils_t2257638562_StaticFields::get_offset_of_GOOGLE_OFFSET_RADIUS_1(),
	GoogleMapUtils_t2257638562_StaticFields::get_offset_of_MATHPI_180_2(),
	GoogleMapUtils_t2257638562_StaticFields::get_offset_of_preLonToX1_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2030 = { sizeof (MathG_t1397383893), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2031 = { sizeof (GPSLocationService_t157925672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2031[22] = 
{
	GPSLocationService_t157925672::get_offset_of_OnMapRedraw_2(),
	GPSLocationService_t157925672::get_offset_of_DesiredAccuracyInMeters_3(),
	GPSLocationService_t157925672::get_offset_of_UpdateAccuracyInMeters_4(),
	GPSLocationService_t157925672::get_offset_of_MapTileScale_5(),
	GPSLocationService_t157925672::get_offset_of_MapTileSizePixels_6(),
	GPSLocationService_t157925672::get_offset_of_MapTileZoomLevel_7(),
	GPSLocationService_t157925672::get_offset_of_Simulating_8(),
	GPSLocationService_t157925672::get_offset_of_StartCoordinates_9(),
	GPSLocationService_t157925672::get_offset_of_Rate_10(),
	GPSLocationService_t157925672::get_offset_of_SimulationOffsets_11(),
	GPSLocationService_t157925672::get_offset_of_simulationIndex_12(),
	GPSLocationService_t157925672::get_offset_of_IsServiceStarted_13(),
	GPSLocationService_t157925672::get_offset_of_Latitude_14(),
	GPSLocationService_t157925672::get_offset_of_Longitude_15(),
	GPSLocationService_t157925672::get_offset_of_Altitude_16(),
	GPSLocationService_t157925672::get_offset_of_Accuracy_17(),
	GPSLocationService_t157925672::get_offset_of_Timestamp_18(),
	GPSLocationService_t157925672::get_offset_of_PlayerTimestamp_19(),
	GPSLocationService_t157925672::get_offset_of_mapCenter_20(),
	GPSLocationService_t157925672::get_offset_of_mapEnvelope_21(),
	GPSLocationService_t157925672::get_offset_of_mapWorldCenter_22(),
	GPSLocationService_t157925672::get_offset_of_mapScale_23(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2032 = { sizeof (OnRedrawEvent_t1033359881), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2033 = { sizeof (U3CStartSimulationServiceU3Ec__Iterator0_t957775792), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2033[4] = 
{
	U3CStartSimulationServiceU3Ec__Iterator0_t957775792::get_offset_of_U24this_0(),
	U3CStartSimulationServiceU3Ec__Iterator0_t957775792::get_offset_of_U24current_1(),
	U3CStartSimulationServiceU3Ec__Iterator0_t957775792::get_offset_of_U24disposing_2(),
	U3CStartSimulationServiceU3Ec__Iterator0_t957775792::get_offset_of_U24PC_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2034 = { sizeof (U3CStartServiceU3Ec__Iterator1_t1844591556), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2034[5] = 
{
	U3CStartServiceU3Ec__Iterator1_t1844591556::get_offset_of_U3CmaxWaitU3E__0_0(),
	U3CStartServiceU3Ec__Iterator1_t1844591556::get_offset_of_U24this_1(),
	U3CStartServiceU3Ec__Iterator1_t1844591556::get_offset_of_U24current_2(),
	U3CStartServiceU3Ec__Iterator1_t1844591556::get_offset_of_U24disposing_3(),
	U3CStartServiceU3Ec__Iterator1_t1844591556::get_offset_of_U24PC_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2035 = { sizeof (MonsterService_t364432899), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2035[13] = 
{
	MonsterService_t364432899::get_offset_of_gpsLocationService_2(),
	MonsterService_t364432899::get_offset_of_monsterPrefab_3(),
	MonsterService_t364432899::get_offset_of_lastTimestamp_4(),
	MonsterService_t364432899::get_offset_of_monsterSpawnRate_5(),
	MonsterService_t364432899::get_offset_of_latitudeSpawnOffset_6(),
	MonsterService_t364432899::get_offset_of_longitudeSpawnOffset_7(),
	MonsterService_t364432899::get_offset_of_monsterHearDistance_8(),
	MonsterService_t364432899::get_offset_of_monsterSeeDistance_9(),
	MonsterService_t364432899::get_offset_of_monsterLifetimeSeconds_10(),
	MonsterService_t364432899::get_offset_of_oneStepRange_11(),
	MonsterService_t364432899::get_offset_of_twoStepRange_12(),
	MonsterService_t364432899::get_offset_of_threeStepRange_13(),
	MonsterService_t364432899::get_offset_of_monsters_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2036 = { sizeof (U3CCleanupMonstersU3Ec__Iterator0_t1399923046), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2036[6] = 
{
	U3CCleanupMonstersU3Ec__Iterator0_t1399923046::get_offset_of_U3CnowU3E__1_0(),
	U3CCleanupMonstersU3Ec__Iterator0_t1399923046::get_offset_of_U3ClistU3E__1_1(),
	U3CCleanupMonstersU3Ec__Iterator0_t1399923046::get_offset_of_U24this_2(),
	U3CCleanupMonstersU3Ec__Iterator0_t1399923046::get_offset_of_U24current_3(),
	U3CCleanupMonstersU3Ec__Iterator0_t1399923046::get_offset_of_U24disposing_4(),
	U3CCleanupMonstersU3Ec__Iterator0_t1399923046::get_offset_of_U24PC_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2037 = { sizeof (FootstepTracker_t2623363944), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2037[5] = 
{
	FootstepTracker_t2623363944::get_offset_of_monsterService_2(),
	FootstepTracker_t2623363944::get_offset_of_oneFootstep_3(),
	FootstepTracker_t2623363944::get_offset_of_twoFootsteps_4(),
	FootstepTracker_t2623363944::get_offset_of_threeFootsteps_5(),
	FootstepTracker_t2623363944::get_offset_of_image_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2038 = { sizeof (Epoch_t1174559313), -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
