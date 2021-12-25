

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for ia2_api_all.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "ia2_api_all.h"

#define TYPE_FORMAT_STRING_SIZE   1903                              
#define PROC_FORMAT_STRING_SIZE   5239                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   3            

typedef struct _ia2_api_all_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_TYPE_FORMAT_STRING;

typedef struct _ia2_api_all_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_PROC_FORMAT_STRING;

typedef struct _ia2_api_all_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } ia2_api_all_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const ia2_api_all_MIDL_TYPE_FORMAT_STRING ia2_api_all__MIDL_TypeFormatString;
extern const ia2_api_all_MIDL_PROC_FORMAT_STRING ia2_api_all__MIDL_ProcFormatString;
extern const ia2_api_all_MIDL_EXPR_FORMAT_STRING ia2_api_all__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleRelation_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleRelation_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleAction_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleAction_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessible2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessible2_2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessible2_3_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessible2_3_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleComponent_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleComponent_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleValue_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleValue_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleText_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleText_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleText2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleText2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleEditableText_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleEditableText_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleHyperlink_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHyperlink_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleHypertext_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleHypertext2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleTable_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTable_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleTable2_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTable2_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleTableCell_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleTableCell_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleImage_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleImage_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleApplication_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleApplication_ProxyInfo;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IAccessibleDocument_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IAccessibleDocument_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
//#error You need Windows Vista or later to run this stub because it uses these features:
//#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
//#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
//#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const ia2_api_all_MIDL_PROC_FORMAT_STRING ia2_api_all__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_appName */


	/* Procedure get_description */


	/* Procedure get_relationType */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 18 */	NdrFcShort( 0x1 ),	/* 1 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */


	/* Parameter description */


	/* Parameter relationType */

/* 24 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */


	/* Return value */


	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_appVersion */


	/* Procedure get_localizedRelationType */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x4 ),	/* 4 */
/* 44 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 52 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 54 */	NdrFcShort( 0x1 ),	/* 1 */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter version */


	/* Parameter localizedRelationType */

/* 60 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */


	/* Return value */

/* 66 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnIndex */


	/* Procedure get_caretOffset */


	/* Procedure get_background */


	/* Procedure get_nTargets */

/* 72 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 74 */	NdrFcLong( 0x0 ),	/* 0 */
/* 78 */	NdrFcShort( 0x5 ),	/* 5 */
/* 80 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 82 */	NdrFcShort( 0x0 ),	/* 0 */
/* 84 */	NdrFcShort( 0x24 ),	/* 36 */
/* 86 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 88 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 90 */	NdrFcShort( 0x0 ),	/* 0 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter columnIndex */


	/* Parameter offset */


	/* Parameter background */


	/* Parameter nTargets */

/* 96 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 98 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */


	/* Return value */


	/* Return value */

/* 102 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 104 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 106 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_target */

/* 108 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcShort( 0x6 ),	/* 6 */
/* 116 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 118 */	NdrFcShort( 0x8 ),	/* 8 */
/* 120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 122 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 124 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 126 */	NdrFcShort( 0x0 ),	/* 0 */
/* 128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter targetIndex */

/* 132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 134 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter target */

/* 138 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 140 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 142 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 146 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_targets */

/* 150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x7 ),	/* 7 */
/* 158 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 160 */	NdrFcShort( 0x8 ),	/* 8 */
/* 162 */	NdrFcShort( 0x24 ),	/* 36 */
/* 164 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 166 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 168 */	NdrFcShort( 0x1 ),	/* 1 */
/* 170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxTargets */

/* 174 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 178 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter targets */

/* 180 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 184 */	NdrFcShort( 0x52 ),	/* Type Offset=82 */

	/* Parameter nTargets */

/* 186 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 188 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 190 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 192 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 194 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 196 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnExtent */


	/* Procedure nActions */

/* 198 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 200 */	NdrFcLong( 0x0 ),	/* 0 */
/* 204 */	NdrFcShort( 0x3 ),	/* 3 */
/* 206 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 208 */	NdrFcShort( 0x0 ),	/* 0 */
/* 210 */	NdrFcShort( 0x24 ),	/* 36 */
/* 212 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 214 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nColumnsSpanned */


	/* Parameter nActions */

/* 222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 224 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 230 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure doAction */

/* 234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 240 */	NdrFcShort( 0x4 ),	/* 4 */
/* 242 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 248 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 250 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter actionIndex */

/* 258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 264 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 268 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnDescription */


	/* Procedure get_description */

/* 270 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 272 */	NdrFcLong( 0x0 ),	/* 0 */
/* 276 */	NdrFcShort( 0x5 ),	/* 5 */
/* 278 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 280 */	NdrFcShort( 0x8 ),	/* 8 */
/* 282 */	NdrFcShort( 0x8 ),	/* 8 */
/* 284 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 286 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 288 */	NdrFcShort( 0x1 ),	/* 1 */
/* 290 */	NdrFcShort( 0x0 ),	/* 0 */
/* 292 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */


	/* Parameter actionIndex */

/* 294 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 296 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 298 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */


	/* Parameter description */

/* 300 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 302 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 304 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */


	/* Return value */

/* 306 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 308 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_keyBinding */

/* 312 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 314 */	NdrFcLong( 0x0 ),	/* 0 */
/* 318 */	NdrFcShort( 0x6 ),	/* 6 */
/* 320 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 322 */	NdrFcShort( 0x10 ),	/* 16 */
/* 324 */	NdrFcShort( 0x24 ),	/* 36 */
/* 326 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 328 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 330 */	NdrFcShort( 0x1 ),	/* 1 */
/* 332 */	NdrFcShort( 0x0 ),	/* 0 */
/* 334 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter actionIndex */

/* 336 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 338 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 340 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nMaxBindings */

/* 342 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 344 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 346 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter keyBindings */

/* 348 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 350 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 352 */	NdrFcShort( 0x7c ),	/* Type Offset=124 */

	/* Parameter nBindings */

/* 354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 356 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 362 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_name */

/* 366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 372 */	NdrFcShort( 0x7 ),	/* 7 */
/* 374 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 378 */	NdrFcShort( 0x8 ),	/* 8 */
/* 380 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 382 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 384 */	NdrFcShort( 0x1 ),	/* 1 */
/* 386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter actionIndex */

/* 390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter name */

/* 396 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 400 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedName */

/* 408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 414 */	NdrFcShort( 0x8 ),	/* 8 */
/* 416 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 418 */	NdrFcShort( 0x8 ),	/* 8 */
/* 420 */	NdrFcShort( 0x8 ),	/* 8 */
/* 422 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 424 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 426 */	NdrFcShort( 0x1 ),	/* 1 */
/* 428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter actionIndex */

/* 432 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter localizedName */

/* 438 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 442 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 444 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 446 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 448 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRelations */

/* 450 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 452 */	NdrFcLong( 0x0 ),	/* 0 */
/* 456 */	NdrFcShort( 0x1c ),	/* 28 */
/* 458 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 462 */	NdrFcShort( 0x24 ),	/* 36 */
/* 464 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 466 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRelations */

/* 474 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 476 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 480 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 482 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 484 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relation */

/* 486 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 488 */	NdrFcLong( 0x0 ),	/* 0 */
/* 492 */	NdrFcShort( 0x1d ),	/* 29 */
/* 494 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 496 */	NdrFcShort( 0x8 ),	/* 8 */
/* 498 */	NdrFcShort( 0x8 ),	/* 8 */
/* 500 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 502 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 506 */	NdrFcShort( 0x0 ),	/* 0 */
/* 508 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter relationIndex */

/* 510 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 512 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter relation */

/* 516 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 518 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 520 */	NdrFcShort( 0xae ),	/* Type Offset=174 */

	/* Return value */

/* 522 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 524 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 526 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relations */

/* 528 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 530 */	NdrFcLong( 0x0 ),	/* 0 */
/* 534 */	NdrFcShort( 0x1e ),	/* 30 */
/* 536 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 538 */	NdrFcShort( 0x8 ),	/* 8 */
/* 540 */	NdrFcShort( 0x24 ),	/* 36 */
/* 542 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 544 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 546 */	NdrFcShort( 0x1 ),	/* 1 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxRelations */

/* 552 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 554 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter relations */

/* 558 */	NdrFcShort( 0x113 ),	/* Flags:  must size, must free, out, simple ref, */
/* 560 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 562 */	NdrFcShort( 0xc8 ),	/* Type Offset=200 */

	/* Parameter nRelations */

/* 564 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 566 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 568 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 570 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 572 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 574 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure role */

/* 576 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 578 */	NdrFcLong( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x1f ),	/* 31 */
/* 584 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	NdrFcShort( 0x24 ),	/* 36 */
/* 590 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 592 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 596 */	NdrFcShort( 0x0 ),	/* 0 */
/* 598 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter role */

/* 600 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 602 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 606 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 608 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 610 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollTo */

/* 612 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 614 */	NdrFcLong( 0x0 ),	/* 0 */
/* 618 */	NdrFcShort( 0x20 ),	/* 32 */
/* 620 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 622 */	NdrFcShort( 0x6 ),	/* 6 */
/* 624 */	NdrFcShort( 0x8 ),	/* 8 */
/* 626 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 628 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 634 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter scrollType */

/* 636 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 638 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 640 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 644 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollToPoint */

/* 648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 654 */	NdrFcShort( 0x21 ),	/* 33 */
/* 656 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 658 */	NdrFcShort( 0x16 ),	/* 22 */
/* 660 */	NdrFcShort( 0x8 ),	/* 8 */
/* 662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 664 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter coordinateType */

/* 672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 676 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 678 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 684 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 690 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 692 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 694 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_groupPosition */

/* 696 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 698 */	NdrFcLong( 0x0 ),	/* 0 */
/* 702 */	NdrFcShort( 0x22 ),	/* 34 */
/* 704 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x5c ),	/* 92 */
/* 710 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 712 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 714 */	NdrFcShort( 0x0 ),	/* 0 */
/* 716 */	NdrFcShort( 0x0 ),	/* 0 */
/* 718 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter groupLevel */

/* 720 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 722 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 724 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter similarItemsInGroup */

/* 726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 728 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter positionInGroup */

/* 732 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 734 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_states */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0x23 ),	/* 35 */
/* 752 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x24 ),	/* 36 */
/* 758 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 760 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter states */

/* 768 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 770 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 772 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 774 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 776 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_extendedRole */

/* 780 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 786 */	NdrFcShort( 0x24 ),	/* 36 */
/* 788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 790 */	NdrFcShort( 0x0 ),	/* 0 */
/* 792 */	NdrFcShort( 0x8 ),	/* 8 */
/* 794 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 796 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 798 */	NdrFcShort( 0x1 ),	/* 1 */
/* 800 */	NdrFcShort( 0x0 ),	/* 0 */
/* 802 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter extendedRole */

/* 804 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 806 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 808 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 810 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 812 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedExtendedRole */

/* 816 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 818 */	NdrFcLong( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x25 ),	/* 37 */
/* 824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 826 */	NdrFcShort( 0x0 ),	/* 0 */
/* 828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 830 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 832 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 834 */	NdrFcShort( 0x1 ),	/* 1 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter localizedExtendedRole */

/* 840 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 842 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 844 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 846 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 848 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 850 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nExtendedStates */

/* 852 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 854 */	NdrFcLong( 0x0 ),	/* 0 */
/* 858 */	NdrFcShort( 0x26 ),	/* 38 */
/* 860 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 862 */	NdrFcShort( 0x0 ),	/* 0 */
/* 864 */	NdrFcShort( 0x24 ),	/* 36 */
/* 866 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 868 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 870 */	NdrFcShort( 0x0 ),	/* 0 */
/* 872 */	NdrFcShort( 0x0 ),	/* 0 */
/* 874 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nExtendedStates */

/* 876 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 878 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 880 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 882 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 884 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 886 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_extendedStates */

/* 888 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 890 */	NdrFcLong( 0x0 ),	/* 0 */
/* 894 */	NdrFcShort( 0x27 ),	/* 39 */
/* 896 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 898 */	NdrFcShort( 0x8 ),	/* 8 */
/* 900 */	NdrFcShort( 0x24 ),	/* 36 */
/* 902 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 904 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 906 */	NdrFcShort( 0x1 ),	/* 1 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxExtendedStates */

/* 912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 914 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter extendedStates */

/* 918 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 920 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 922 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter nExtendedStates */

/* 924 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 926 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 930 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 932 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 934 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_localizedExtendedStates */

/* 936 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 942 */	NdrFcShort( 0x28 ),	/* 40 */
/* 944 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 946 */	NdrFcShort( 0x8 ),	/* 8 */
/* 948 */	NdrFcShort( 0x24 ),	/* 36 */
/* 950 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 952 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 954 */	NdrFcShort( 0x1 ),	/* 1 */
/* 956 */	NdrFcShort( 0x0 ),	/* 0 */
/* 958 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxLocalizedExtendedStates */

/* 960 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 962 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 964 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter localizedExtendedStates */

/* 966 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 968 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 970 */	NdrFcShort( 0xf2 ),	/* Type Offset=242 */

	/* Parameter nLocalizedExtendedStates */

/* 972 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 974 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 976 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 978 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 980 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_uniqueID */

/* 984 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 986 */	NdrFcLong( 0x0 ),	/* 0 */
/* 990 */	NdrFcShort( 0x29 ),	/* 41 */
/* 992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x24 ),	/* 36 */
/* 998 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1000 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter uniqueID */

/* 1008 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1010 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1012 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1014 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1016 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1018 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_windowHandle */

/* 1020 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1022 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1026 */	NdrFcShort( 0x2a ),	/* 42 */
/* 1028 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1034 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1036 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1038 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1040 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1042 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter windowHandle */

/* 1044 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1046 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1048 */	NdrFcShort( 0x140 ),	/* Type Offset=320 */

	/* Return value */

/* 1050 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1052 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1054 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_indexInParent */

/* 1056 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1058 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1062 */	NdrFcShort( 0x2b ),	/* 43 */
/* 1064 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1070 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1072 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter indexInParent */

/* 1080 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1082 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1086 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1088 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1090 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_locale */

/* 1092 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1098 */	NdrFcShort( 0x2c ),	/* 44 */
/* 1100 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1102 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1106 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1108 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter locale */

/* 1116 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1118 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1120 */	NdrFcShort( 0x14e ),	/* Type Offset=334 */

	/* Return value */

/* 1122 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1124 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributes */

/* 1128 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1130 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1134 */	NdrFcShort( 0x2d ),	/* 45 */
/* 1136 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1142 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1144 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1146 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1150 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter attributes */

/* 1152 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1154 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1156 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 1158 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1160 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1162 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attribute */

/* 1164 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1166 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1170 */	NdrFcShort( 0x2e ),	/* 46 */
/* 1172 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1174 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1176 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1178 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 1180 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1182 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1186 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 1188 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1190 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1192 */	NdrFcShort( 0x168 ),	/* Type Offset=360 */

	/* Parameter attribute */

/* 1194 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1196 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1198 */	NdrFcShort( 0x5d4 ),	/* Type Offset=1492 */

	/* Return value */

/* 1200 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1202 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1204 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_accessibleWithCaret */

/* 1206 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1208 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1212 */	NdrFcShort( 0x2f ),	/* 47 */
/* 1214 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1216 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1218 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1220 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1222 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */

/* 1230 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 1232 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1234 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Parameter caretOffset */

/* 1236 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1238 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1240 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1244 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_relationTargetsOfType */

/* 1248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1254 */	NdrFcShort( 0x30 ),	/* 48 */
/* 1256 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1260 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1262 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 1264 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 1266 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter type */

/* 1272 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1276 */	NdrFcShort( 0x168 ),	/* Type Offset=360 */

	/* Parameter maxTargets */

/* 1278 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter targets */

/* 1284 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1286 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1288 */	NdrFcShort( 0x5de ),	/* Type Offset=1502 */

	/* Parameter nTargets */

/* 1290 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1292 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1294 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1296 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1298 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1300 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectionRanges */

/* 1302 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1304 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1308 */	NdrFcShort( 0x31 ),	/* 49 */
/* 1310 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1316 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 1318 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1320 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1322 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1324 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ranges */

/* 1326 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 1328 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1330 */	NdrFcShort( 0x610 ),	/* Type Offset=1552 */

	/* Parameter nRanges */

/* 1332 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1334 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1336 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1338 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1340 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1342 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_locationInParent */

/* 1344 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1346 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1350 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1352 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1354 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1356 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1358 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1360 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1366 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 1368 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1370 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1372 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 1374 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1376 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1378 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1380 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1382 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_foreground */

/* 1386 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1392 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1396 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1398 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1400 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1402 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1406 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1408 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter foreground */

/* 1410 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1412 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1414 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1416 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1418 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1420 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_currentValue */

/* 1422 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1424 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1428 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1430 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1432 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1434 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1436 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1438 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1440 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1442 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1444 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter currentValue */

/* 1446 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1448 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1450 */	NdrFcShort( 0x5d4 ),	/* Type Offset=1492 */

	/* Return value */

/* 1452 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1454 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1456 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCurrentValue */

/* 1458 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1460 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1464 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1466 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1468 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1470 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1472 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 1474 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1480 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter value */

/* 1482 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 1484 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1486 */	NdrFcShort( 0x65a ),	/* Type Offset=1626 */

	/* Return value */

/* 1488 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1490 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1492 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_maximumValue */

/* 1494 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1496 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0x5 ),	/* 5 */
/* 1502 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1504 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1506 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1508 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1510 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1512 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1516 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maximumValue */

/* 1518 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1520 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1522 */	NdrFcShort( 0x5d4 ),	/* Type Offset=1492 */

	/* Return value */

/* 1524 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1526 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1528 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_minimumValue */

/* 1530 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1532 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1536 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1538 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1540 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1544 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 1546 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1548 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1552 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter minimumValue */

/* 1554 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 1556 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1558 */	NdrFcShort( 0x5d4 ),	/* Type Offset=1492 */

	/* Return value */

/* 1560 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1562 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1564 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure copyText */


	/* Procedure addSelection */

/* 1566 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1568 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1572 */	NdrFcShort( 0x3 ),	/* 3 */
/* 1574 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1576 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1578 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1580 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 1582 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1584 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1588 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */


	/* Parameter startOffset */

/* 1590 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1592 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1594 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */


	/* Parameter endOffset */

/* 1596 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1598 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1602 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1604 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1606 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributes */

/* 1608 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1610 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1614 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1616 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1618 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1620 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1622 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x5,		/* 5 */
/* 1624 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1626 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1630 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 1632 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1634 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1636 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 1638 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1640 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 1644 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1646 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1648 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter textAttributes */

/* 1650 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1652 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1654 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 1656 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1658 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1660 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_characterExtents */

/* 1662 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1664 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1668 */	NdrFcShort( 0x6 ),	/* 6 */
/* 1670 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 1672 */	NdrFcShort( 0xe ),	/* 14 */
/* 1674 */	NdrFcShort( 0x78 ),	/* 120 */
/* 1676 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 1678 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1680 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1682 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1684 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 1686 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1688 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1690 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordType */

/* 1692 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1694 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1696 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 1698 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1700 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1702 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 1704 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1706 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 1710 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1712 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter height */

/* 1716 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1718 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1720 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1722 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1724 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1726 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRows */


	/* Procedure get_nSelections */

/* 1728 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1730 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1734 */	NdrFcShort( 0x7 ),	/* 7 */
/* 1736 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1738 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1740 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1742 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 1744 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1746 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1748 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1750 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowCount */


	/* Parameter nSelections */

/* 1752 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1754 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1756 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 1758 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1760 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1762 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_offsetAtPoint */

/* 1764 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1766 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1770 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1772 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1774 */	NdrFcShort( 0x16 ),	/* 22 */
/* 1776 */	NdrFcShort( 0x24 ),	/* 36 */
/* 1778 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 1780 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1784 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1786 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 1788 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1790 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1792 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 1794 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1796 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1798 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordType */

/* 1800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1802 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1804 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter offset */

/* 1806 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1808 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1812 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1814 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1816 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selection */

/* 1818 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1820 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1824 */	NdrFcShort( 0x9 ),	/* 9 */
/* 1826 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1828 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1830 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1832 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 1834 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 1836 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1840 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter selectionIndex */

/* 1842 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1844 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1846 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 1848 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1850 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1852 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 1854 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1856 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1862 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_text */

/* 1866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1872 */	NdrFcShort( 0xa ),	/* 10 */
/* 1874 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1876 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1878 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1880 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 1882 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */

/* 1890 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1894 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 1896 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 1902 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1904 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1906 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 1908 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1910 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1912 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textBeforeOffset */

/* 1914 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1916 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1920 */	NdrFcShort( 0xb ),	/* 11 */
/* 1922 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1924 */	NdrFcShort( 0xe ),	/* 14 */
/* 1926 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1928 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 1930 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1932 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1934 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1936 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 1938 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1940 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 1944 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1946 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1948 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 1950 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1952 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1954 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 1956 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 1958 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 1962 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 1964 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 1966 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 1968 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1970 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 1972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textAfterOffset */

/* 1974 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1980 */	NdrFcShort( 0xc ),	/* 12 */
/* 1982 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 1984 */	NdrFcShort( 0xe ),	/* 14 */
/* 1986 */	NdrFcShort( 0x40 ),	/* 64 */
/* 1988 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 1990 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 1992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1996 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 1998 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2000 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 2004 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2006 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2008 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2010 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2012 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2014 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2016 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2018 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2020 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2022 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2024 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2026 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 2028 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2030 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2032 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_textAtOffset */

/* 2034 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2036 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2040 */	NdrFcShort( 0xd ),	/* 13 */
/* 2042 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2044 */	NdrFcShort( 0xe ),	/* 14 */
/* 2046 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2048 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x6,		/* 6 */
/* 2050 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2052 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2054 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2056 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2058 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2060 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2062 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter boundaryType */

/* 2064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2066 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2068 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2070 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2072 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2078 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2082 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2084 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2086 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 2088 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2090 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2092 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure removeSelection */

/* 2094 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2096 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2100 */	NdrFcShort( 0xe ),	/* 14 */
/* 2102 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2104 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2106 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2108 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2110 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2116 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter selectionIndex */

/* 2118 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2120 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2126 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setCaretOffset */

/* 2130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2136 */	NdrFcShort( 0xf ),	/* 15 */
/* 2138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2140 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2144 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2146 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2148 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2154 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2158 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setSelection */

/* 2166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2172 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2174 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2176 */	NdrFcShort( 0x18 ),	/* 24 */
/* 2178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2180 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2182 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter selectionIndex */

/* 2190 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2194 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter startOffset */

/* 2196 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2204 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2208 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2210 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nCharacters */

/* 2214 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2220 */	NdrFcShort( 0x11 ),	/* 17 */
/* 2222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2224 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2226 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2228 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2230 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2234 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2236 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nCharacters */

/* 2238 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2240 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2242 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2244 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2246 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2248 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollSubstringTo */

/* 2250 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2252 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2256 */	NdrFcShort( 0x12 ),	/* 18 */
/* 2258 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2260 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2262 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2264 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 2266 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2270 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2272 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startIndex */

/* 2274 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2276 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2278 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endIndex */

/* 2280 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2282 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2284 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter scrollType */

/* 2286 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2288 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2290 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Return value */

/* 2292 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2294 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2296 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure scrollSubstringToPoint */

/* 2298 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2300 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2304 */	NdrFcShort( 0x13 ),	/* 19 */
/* 2306 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2308 */	NdrFcShort( 0x26 ),	/* 38 */
/* 2310 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2312 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 2314 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2318 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2320 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startIndex */

/* 2322 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2324 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2326 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endIndex */

/* 2328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2330 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter coordinateType */

/* 2334 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2336 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2338 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 2340 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2342 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2344 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 2346 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2348 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2350 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2352 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2354 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2356 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_newText */

/* 2358 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2364 */	NdrFcShort( 0x14 ),	/* 20 */
/* 2366 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2368 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2370 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2372 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2374 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2376 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter newText */

/* 2382 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2384 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2386 */	NdrFcShort( 0x668 ),	/* Type Offset=1640 */

	/* Return value */

/* 2388 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2390 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2392 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_oldText */

/* 2394 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2396 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2400 */	NdrFcShort( 0x15 ),	/* 21 */
/* 2402 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2404 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2406 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2408 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 2410 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2412 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2416 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter oldText */

/* 2418 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2420 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2422 */	NdrFcShort( 0x668 ),	/* Type Offset=1640 */

	/* Return value */

/* 2424 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2426 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2428 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_attributeRange */

/* 2430 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2432 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2436 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2438 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 2440 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2442 */	NdrFcShort( 0x40 ),	/* 64 */
/* 2444 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 2446 */	0x8,		/* 8 */
			0x47,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, has range on conformance */
/* 2448 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2450 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2452 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2454 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2456 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2458 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter filter */

/* 2460 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 2462 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2464 */	NdrFcShort( 0x168 ),	/* Type Offset=360 */

	/* Parameter startOffset */

/* 2466 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2468 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2470 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2472 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2474 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2476 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attributeValues */

/* 2478 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 2480 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2482 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 2484 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2486 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 2488 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure deleteText */

/* 2490 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2492 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2496 */	NdrFcShort( 0x4 ),	/* 4 */
/* 2498 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2500 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2502 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2504 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2506 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2508 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2512 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */

/* 2514 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2516 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2518 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2520 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2522 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2524 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2526 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2528 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2530 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure insertText */

/* 2532 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2534 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2538 */	NdrFcShort( 0x5 ),	/* 5 */
/* 2540 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2542 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2544 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2546 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 2548 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2550 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2552 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2554 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2556 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2558 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2560 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2562 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2564 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2566 */	NdrFcShort( 0x168 ),	/* Type Offset=360 */

	/* Return value */

/* 2568 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2570 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2572 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure cutText */

/* 2574 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2576 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2580 */	NdrFcShort( 0x6 ),	/* 6 */
/* 2582 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2584 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2586 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2588 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 2590 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2592 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2594 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2596 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */

/* 2598 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2600 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2602 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2604 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2606 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2608 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2610 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2612 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2614 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure pasteText */

/* 2616 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2618 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2622 */	NdrFcShort( 0x7 ),	/* 7 */
/* 2624 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2626 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2628 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2630 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2632 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2634 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2636 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2638 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter offset */

/* 2640 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2642 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2644 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2646 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2648 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2650 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure replaceText */

/* 2652 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2654 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2660 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2662 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2664 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2666 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2668 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2670 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2672 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2674 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */

/* 2676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2678 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2682 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2684 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter text */

/* 2688 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2690 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2692 */	NdrFcShort( 0x168 ),	/* Type Offset=360 */

	/* Return value */

/* 2694 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2696 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2698 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure setAttributes */

/* 2700 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2702 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2706 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2708 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 2710 */	NdrFcShort( 0x10 ),	/* 16 */
/* 2712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2714 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 2716 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 2718 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2720 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2722 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter startOffset */

/* 2724 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2726 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2728 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter endOffset */

/* 2730 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2732 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2734 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter attributes */

/* 2736 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 2738 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2740 */	NdrFcShort( 0x168 ),	/* Type Offset=360 */

	/* Return value */

/* 2742 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2744 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2746 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchor */

/* 2748 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2750 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2754 */	NdrFcShort( 0x9 ),	/* 9 */
/* 2756 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2758 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2760 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2762 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2764 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2766 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2768 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2770 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2772 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2774 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2776 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter anchor */

/* 2778 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2780 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2782 */	NdrFcShort( 0x5d4 ),	/* Type Offset=1492 */

	/* Return value */

/* 2784 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2786 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2788 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchorTarget */

/* 2790 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2792 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2796 */	NdrFcShort( 0xa ),	/* 10 */
/* 2798 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2802 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2804 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2806 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 2808 */	NdrFcShort( 0x1 ),	/* 1 */
/* 2810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2812 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 2814 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 2816 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2818 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter anchorTarget */

/* 2820 */	NdrFcShort( 0x4113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=16 */
/* 2822 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2824 */	NdrFcShort( 0x5d4 ),	/* Type Offset=1492 */

	/* Return value */

/* 2826 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2828 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2830 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nRows */


	/* Procedure get_startIndex */

/* 2832 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2834 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2838 */	NdrFcShort( 0xb ),	/* 11 */
/* 2840 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2842 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2844 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2846 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2848 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2854 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowCount */


	/* Parameter index */

/* 2856 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2858 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2860 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2862 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2864 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2866 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedChildren */


	/* Procedure get_endIndex */

/* 2868 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2870 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2874 */	NdrFcShort( 0xc ),	/* 12 */
/* 2876 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2878 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2880 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2882 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2884 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2890 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cellCount */


	/* Parameter index */

/* 2892 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2894 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2896 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 2898 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2900 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2902 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_valid */

/* 2904 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2906 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2910 */	NdrFcShort( 0xd ),	/* 13 */
/* 2912 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2914 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2916 */	NdrFcShort( 0x21 ),	/* 33 */
/* 2918 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2920 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2922 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2924 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2926 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter valid */

/* 2928 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2930 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2932 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 2934 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2936 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2938 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nHyperlinks */

/* 2940 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2942 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2946 */	NdrFcShort( 0x16 ),	/* 22 */
/* 2948 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 2950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2952 */	NdrFcShort( 0x24 ),	/* 36 */
/* 2954 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 2956 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2958 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2960 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2962 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hyperlinkCount */

/* 2964 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 2966 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 2968 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 2970 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 2972 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 2974 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlink */

/* 2976 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 2978 */	NdrFcLong( 0x0 ),	/* 0 */
/* 2982 */	NdrFcShort( 0x17 ),	/* 23 */
/* 2984 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 2986 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2988 */	NdrFcShort( 0x8 ),	/* 8 */
/* 2990 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 2992 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 2994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 2998 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 3000 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3002 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3004 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hyperlink */

/* 3006 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3008 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3010 */	NdrFcShort( 0x680 ),	/* Type Offset=1664 */

	/* Return value */

/* 3012 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3014 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlinkIndex */

/* 3018 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3020 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3024 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3026 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3030 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3032 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3034 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3036 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3038 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3040 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter charIndex */

/* 3042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3044 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter hyperlinkIndex */

/* 3048 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3050 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3054 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3056 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3058 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_hyperlinks */

/* 3060 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3062 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3066 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3068 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3070 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3072 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3074 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3076 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3078 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3080 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3082 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hyperlinks */

/* 3084 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3086 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3088 */	NdrFcShort( 0x696 ),	/* Type Offset=1686 */

	/* Parameter nHyperlinks */

/* 3090 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3092 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3094 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3096 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3098 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3100 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_cellAt */


	/* Procedure get_accessibleAt */

/* 3102 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3104 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3108 */	NdrFcShort( 0x3 ),	/* 3 */
/* 3110 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3112 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3114 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3116 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3118 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3120 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3122 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3124 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */


	/* Parameter row */

/* 3126 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3128 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */


	/* Parameter column */

/* 3132 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3134 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3136 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cell */


	/* Parameter accessible */

/* 3138 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3140 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3142 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */


	/* Return value */

/* 3144 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3146 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3148 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_caption */


	/* Procedure get_caption */

/* 3150 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3152 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3156 */	NdrFcShort( 0x4 ),	/* 4 */
/* 3158 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3160 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3162 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3164 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3166 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3168 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3170 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3172 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */


	/* Parameter accessible */

/* 3174 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3176 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3178 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */


	/* Return value */

/* 3180 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3182 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3184 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_childIndex */

/* 3186 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3188 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3192 */	NdrFcShort( 0x5 ),	/* 5 */
/* 3194 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3196 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3198 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3200 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3202 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3204 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3206 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3208 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowIndex */

/* 3210 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3212 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3214 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnIndex */

/* 3216 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3218 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3220 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cellIndex */

/* 3222 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3224 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3226 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3228 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3230 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3232 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnDescription */

/* 3234 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3240 */	NdrFcShort( 0x6 ),	/* 6 */
/* 3242 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3246 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3248 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3250 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3252 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3254 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3256 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 3258 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3260 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3262 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 3264 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3266 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3268 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 3270 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnExtentAt */

/* 3276 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3282 */	NdrFcShort( 0x7 ),	/* 7 */
/* 3284 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3286 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3288 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3290 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3292 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3296 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3298 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 3300 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3302 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3304 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 3306 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3308 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3310 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nColumnsSpanned */

/* 3312 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3314 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3316 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3318 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3320 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3322 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnHeader */

/* 3324 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3326 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3330 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3332 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3334 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3336 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3338 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3340 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3342 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3344 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3346 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessibleTable */

/* 3348 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3350 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3352 */	NdrFcShort( 0x6c8 ),	/* Type Offset=1736 */

	/* Parameter startingRowIndex */

/* 3354 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3356 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3358 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3360 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3362 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3364 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnIndex */

/* 3366 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3368 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3372 */	NdrFcShort( 0x9 ),	/* 9 */
/* 3374 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3376 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3378 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3380 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3382 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3386 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3388 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cellIndex */

/* 3390 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3392 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnIndex */

/* 3396 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3398 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3400 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3402 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3404 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3406 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedRows */


	/* Procedure get_nColumns */

/* 3408 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3410 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3414 */	NdrFcShort( 0xa ),	/* 10 */
/* 3416 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3420 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3422 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3424 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3426 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3428 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3430 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowCount */


	/* Parameter columnCount */

/* 3432 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3434 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3436 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 3438 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3440 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3442 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedColumns */

/* 3444 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3446 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3450 */	NdrFcShort( 0xd ),	/* 13 */
/* 3452 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3454 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3456 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3458 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3460 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3462 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3464 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3466 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter columnCount */

/* 3468 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3470 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3472 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3474 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3476 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3478 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedRows */

/* 3480 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3482 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3486 */	NdrFcShort( 0xe ),	/* 14 */
/* 3488 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3490 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3492 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3494 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 3496 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3500 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3502 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowCount */

/* 3504 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3506 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3508 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3510 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3512 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3514 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowDescription */

/* 3516 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3518 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3522 */	NdrFcShort( 0xf ),	/* 15 */
/* 3524 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3526 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3528 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3530 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3532 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3534 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3536 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3538 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 3540 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3542 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3544 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 3546 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 3548 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3550 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 3552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3554 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowExtentAt */

/* 3558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3564 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3566 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3568 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3570 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3572 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3574 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3580 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 3582 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3584 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3586 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 3588 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3590 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3592 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter nRowsSpanned */

/* 3594 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3596 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3598 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3600 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3602 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3604 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowHeader */

/* 3606 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3612 */	NdrFcShort( 0x11 ),	/* 17 */
/* 3614 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3616 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3618 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3620 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 3622 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3624 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3626 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3628 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessibleTable */

/* 3630 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3632 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3634 */	NdrFcShort( 0x6c8 ),	/* Type Offset=1736 */

	/* Parameter startingColumnIndex */

/* 3636 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3638 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3640 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3642 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3644 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3646 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowIndex */

/* 3648 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3650 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3654 */	NdrFcShort( 0x12 ),	/* 18 */
/* 3656 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3658 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3660 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3662 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3664 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3666 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3668 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3670 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cellIndex */

/* 3672 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3674 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3676 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowIndex */

/* 3678 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3680 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3682 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3684 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3686 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3688 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedChildren */

/* 3690 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3692 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3696 */	NdrFcShort( 0x13 ),	/* 19 */
/* 3698 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3702 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3704 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3706 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3708 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxChildren */

/* 3714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3716 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter children */

/* 3720 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3722 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3724 */	NdrFcShort( 0x6de ),	/* Type Offset=1758 */

	/* Parameter nChildren */

/* 3726 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3728 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3730 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3732 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3734 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedColumns */

/* 3738 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3740 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3744 */	NdrFcShort( 0x14 ),	/* 20 */
/* 3746 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3748 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3750 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3752 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3754 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3756 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3758 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3760 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxColumns */

/* 3762 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3764 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3766 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columns */

/* 3768 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3770 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3772 */	NdrFcShort( 0x6de ),	/* Type Offset=1758 */

	/* Parameter nColumns */

/* 3774 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3776 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3778 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3780 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3782 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3784 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedRows */

/* 3786 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3788 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3792 */	NdrFcShort( 0x15 ),	/* 21 */
/* 3794 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3796 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3798 */	NdrFcShort( 0x24 ),	/* 36 */
/* 3800 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x4,		/* 4 */
/* 3802 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 3804 */	NdrFcShort( 0x1 ),	/* 1 */
/* 3806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3808 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter maxRows */

/* 3810 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3812 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3814 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rows */

/* 3816 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 3818 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3820 */	NdrFcShort( 0x6de ),	/* Type Offset=1758 */

	/* Parameter nRows */

/* 3822 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3824 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3826 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 3828 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3830 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3832 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_summary */

/* 3834 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3836 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3840 */	NdrFcShort( 0x16 ),	/* 22 */
/* 3842 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3846 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3848 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 3850 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3852 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3856 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */

/* 3858 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 3860 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3862 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 3864 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3866 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3868 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isColumnSelected */

/* 3870 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3872 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3876 */	NdrFcShort( 0x17 ),	/* 23 */
/* 3878 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3880 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3882 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3884 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3886 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3888 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3890 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3892 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 3894 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3896 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3898 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 3900 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3902 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3904 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3906 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3908 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isRowSelected */

/* 3912 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3914 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3918 */	NdrFcShort( 0x18 ),	/* 24 */
/* 3920 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 3922 */	NdrFcShort( 0x8 ),	/* 8 */
/* 3924 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3926 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 3928 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3930 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3932 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3934 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 3936 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3938 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3940 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 3942 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3944 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3946 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3948 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3950 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3952 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isSelected */

/* 3954 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 3956 */	NdrFcLong( 0x0 ),	/* 0 */
/* 3960 */	NdrFcShort( 0x19 ),	/* 25 */
/* 3962 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 3964 */	NdrFcShort( 0x10 ),	/* 16 */
/* 3966 */	NdrFcShort( 0x21 ),	/* 33 */
/* 3968 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 3970 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 3972 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3974 */	NdrFcShort( 0x0 ),	/* 0 */
/* 3976 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 3978 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3980 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 3982 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 3984 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 3986 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 3988 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 3990 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 3992 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 3994 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 3996 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 3998 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4000 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectRow */

/* 4002 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4004 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4008 */	NdrFcShort( 0x1a ),	/* 26 */
/* 4010 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4012 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4014 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4016 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4018 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4020 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4024 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4026 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4028 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4030 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4032 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4034 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4036 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectColumn */

/* 4038 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4040 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4044 */	NdrFcShort( 0x1b ),	/* 27 */
/* 4046 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4048 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4050 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4052 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4054 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4056 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4060 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 4062 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4064 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4066 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4068 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4070 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4072 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectRow */

/* 4074 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4076 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4080 */	NdrFcShort( 0x1c ),	/* 28 */
/* 4082 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4084 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4086 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4088 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4090 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4092 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4094 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4096 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4098 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4100 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4102 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4104 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4106 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectColumn */

/* 4110 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4112 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4116 */	NdrFcShort( 0x1d ),	/* 29 */
/* 4118 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4120 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4122 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4124 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4126 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4132 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 4134 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4136 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4138 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4140 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4142 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4144 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowColumnExtentsAtIndex */

/* 4146 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4152 */	NdrFcShort( 0x1e ),	/* 30 */
/* 4154 */	NdrFcShort( 0x20 ),	/* x86 Stack size/offset = 32 */
/* 4156 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4158 */	NdrFcShort( 0x91 ),	/* 145 */
/* 4160 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x7,		/* 7 */
/* 4162 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4166 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4168 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter index */

/* 4170 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4172 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter row */

/* 4176 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4178 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4180 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 4182 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4184 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4186 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowExtents */

/* 4188 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4190 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4192 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnExtents */

/* 4194 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4196 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4198 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4200 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4202 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 4204 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4206 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4208 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4210 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_modelChange */

/* 4212 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4214 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4218 */	NdrFcShort( 0x1f ),	/* 31 */
/* 4220 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4224 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4226 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4228 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4232 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4234 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter modelChange */

/* 4236 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4238 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4240 */	NdrFcShort( 0x710 ),	/* Type Offset=1808 */

	/* Return value */

/* 4242 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4244 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4246 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowExtent */


	/* Procedure get_nColumns */

/* 4248 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4250 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4254 */	NdrFcShort( 0x6 ),	/* 6 */
/* 4256 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4258 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4260 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4262 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4264 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter nRowsSpanned */


	/* Parameter columnCount */

/* 4272 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4274 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4276 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4280 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowIndex */


	/* Procedure get_nSelectedCells */

/* 4284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4290 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4292 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4294 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4296 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4300 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4306 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rowIndex */


	/* Parameter cellCount */

/* 4308 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4310 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4312 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 4314 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4316 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4318 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_nSelectedColumns */

/* 4320 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4322 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4326 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4328 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4330 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4332 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4334 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4336 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4340 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4342 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter columnCount */

/* 4344 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4346 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4352 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowDescription */

/* 4356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4362 */	NdrFcShort( 0xb ),	/* 11 */
/* 4364 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4366 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4370 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4372 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4374 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4378 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4380 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4382 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4384 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter description */

/* 4386 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 4388 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4390 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 4392 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4394 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4396 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedCells */

/* 4398 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4400 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4404 */	NdrFcShort( 0xc ),	/* 12 */
/* 4406 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4408 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4410 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4412 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4414 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4416 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cells */

/* 4422 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4424 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4426 */	NdrFcShort( 0x71e ),	/* Type Offset=1822 */

	/* Parameter nSelectedCells */

/* 4428 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4430 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4432 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4434 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4436 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4438 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedColumns */

/* 4440 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4442 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4446 */	NdrFcShort( 0xd ),	/* 13 */
/* 4448 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4450 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4452 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4454 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4456 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4458 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4460 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4462 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter selectedColumns */

/* 4464 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4466 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4468 */	NdrFcShort( 0x750 ),	/* Type Offset=1872 */

	/* Parameter nColumns */

/* 4470 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4472 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4474 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4476 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4478 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4480 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_selectedRows */

/* 4482 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4484 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4488 */	NdrFcShort( 0xe ),	/* 14 */
/* 4490 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4492 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4494 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4496 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4498 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4500 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4502 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4504 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter selectedRows */

/* 4506 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4508 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4510 */	NdrFcShort( 0x750 ),	/* Type Offset=1872 */

	/* Parameter nRows */

/* 4512 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4514 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4516 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4518 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4520 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4522 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_summary */

/* 4524 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4530 */	NdrFcShort( 0xf ),	/* 15 */
/* 4532 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4536 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4538 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4540 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4542 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4544 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4546 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */

/* 4548 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 4550 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4552 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 4554 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4556 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4558 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isColumnSelected */

/* 4560 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4562 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4566 */	NdrFcShort( 0x10 ),	/* 16 */
/* 4568 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4572 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4574 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4576 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 4584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4586 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4590 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4592 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4594 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4596 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4598 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4600 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isRowSelected */

/* 4602 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4604 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4608 */	NdrFcShort( 0x11 ),	/* 17 */
/* 4610 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4612 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4614 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4616 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 4618 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4620 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4622 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4624 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4626 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4628 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4630 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4632 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4634 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4636 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4638 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4640 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4642 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectRow */

/* 4644 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4646 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4650 */	NdrFcShort( 0x12 ),	/* 18 */
/* 4652 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4654 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4656 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4658 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4660 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4662 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4664 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4666 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4668 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4670 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4672 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4674 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4676 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4678 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure selectColumn */

/* 4680 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4682 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4686 */	NdrFcShort( 0x13 ),	/* 19 */
/* 4688 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4690 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4692 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4694 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4696 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4702 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 4704 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4706 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4708 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4710 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4712 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4714 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectRow */

/* 4716 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4718 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4722 */	NdrFcShort( 0x14 ),	/* 20 */
/* 4724 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4726 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4728 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4730 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4732 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4734 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4736 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4738 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4740 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4742 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4744 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4746 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4748 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4750 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure unselectColumn */

/* 4752 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4754 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4758 */	NdrFcShort( 0x15 ),	/* 21 */
/* 4760 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4762 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4764 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4766 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4768 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4770 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4772 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4774 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter column */

/* 4776 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 4778 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4780 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4782 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4784 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4786 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_modelChange */

/* 4788 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4790 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4794 */	NdrFcShort( 0x16 ),	/* 22 */
/* 4796 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4798 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4800 */	NdrFcShort( 0x8 ),	/* 8 */
/* 4802 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 4804 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4806 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4808 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4810 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter modelChange */

/* 4812 */	NdrFcShort( 0x6113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=24 */
/* 4814 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4816 */	NdrFcShort( 0x710 ),	/* Type Offset=1808 */

	/* Return value */

/* 4818 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4820 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4822 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_columnHeaderCells */

/* 4824 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4826 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4830 */	NdrFcShort( 0x4 ),	/* 4 */
/* 4832 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4836 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4838 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4840 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4842 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4844 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4846 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cellAccessibles */

/* 4848 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4850 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4852 */	NdrFcShort( 0x71e ),	/* Type Offset=1822 */

	/* Parameter nColumnHeaderCells */

/* 4854 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4856 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4858 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4860 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4862 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4864 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowHeaderCells */

/* 4866 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4868 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4872 */	NdrFcShort( 0x7 ),	/* 7 */
/* 4874 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4876 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4878 */	NdrFcShort( 0x24 ),	/* 36 */
/* 4880 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x3,		/* 3 */
/* 4882 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 4884 */	NdrFcShort( 0x1 ),	/* 1 */
/* 4886 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4888 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter cellAccessibles */

/* 4890 */	NdrFcShort( 0x2013 ),	/* Flags:  must size, must free, out, srv alloc size=8 */
/* 4892 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4894 */	NdrFcShort( 0x71e ),	/* Type Offset=1822 */

	/* Parameter nRowHeaderCells */

/* 4896 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4898 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4900 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 4902 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4904 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4906 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_isSelected */

/* 4908 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4910 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4914 */	NdrFcShort( 0x9 ),	/* 9 */
/* 4916 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4918 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4920 */	NdrFcShort( 0x21 ),	/* 33 */
/* 4922 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 4924 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4926 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4928 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4930 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter isSelected */

/* 4932 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4934 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4936 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4938 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 4940 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4942 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_rowColumnExtents */

/* 4944 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 4946 */	NdrFcLong( 0x0 ),	/* 0 */
/* 4950 */	NdrFcShort( 0xa ),	/* 10 */
/* 4952 */	NdrFcShort( 0x1c ),	/* x86 Stack size/offset = 28 */
/* 4954 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4956 */	NdrFcShort( 0x91 ),	/* 145 */
/* 4958 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x6,		/* 6 */
/* 4960 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 4962 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4964 */	NdrFcShort( 0x0 ),	/* 0 */
/* 4966 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter row */

/* 4968 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4970 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 4972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter column */

/* 4974 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4976 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 4978 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rowExtents */

/* 4980 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4982 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 4984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter columnExtents */

/* 4986 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4988 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 4990 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter isSelected */

/* 4992 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 4994 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 4996 */	0x3,		/* FC_SMALL */
			0x0,		/* 0 */

	/* Return value */

/* 4998 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5000 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 5002 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_table */

/* 5004 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5006 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5010 */	NdrFcShort( 0xb ),	/* 11 */
/* 5012 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5014 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5016 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5018 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5020 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5022 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5024 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5026 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter table */

/* 5028 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5030 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5032 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 5034 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5036 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5038 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_imagePosition */

/* 5040 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5042 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5046 */	NdrFcShort( 0x4 ),	/* 4 */
/* 5048 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 5050 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5052 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5054 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 5056 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5058 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5060 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5062 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter coordinateType */

/* 5064 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 5066 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5068 */	0xd,		/* FC_ENUM16 */
			0x0,		/* 0 */

	/* Parameter x */

/* 5070 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5072 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5074 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter y */

/* 5076 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5078 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5080 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5082 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5084 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5086 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_imageSize */

/* 5088 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5090 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5094 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5096 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 5098 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5100 */	NdrFcShort( 0x40 ),	/* 64 */
/* 5102 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x3,		/* 3 */
/* 5104 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5110 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter height */

/* 5112 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5114 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5116 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter width */

/* 5118 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 5120 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5122 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 5124 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5126 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5128 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toolkitName */

/* 5130 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5132 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5136 */	NdrFcShort( 0x5 ),	/* 5 */
/* 5138 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5144 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5146 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5148 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5150 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5152 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter name */

/* 5154 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5156 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5158 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5160 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5162 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_toolkitVersion */

/* 5166 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5168 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5172 */	NdrFcShort( 0x6 ),	/* 6 */
/* 5174 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5178 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5180 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5182 */	0x8,		/* 8 */
			0x43,		/* Ext Flags:  new corr desc, clt corr check, has range on conformance */
/* 5184 */	NdrFcShort( 0x1 ),	/* 1 */
/* 5186 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5188 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter version */

/* 5190 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 5192 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5194 */	NdrFcShort( 0x2a ),	/* Type Offset=42 */

	/* Return value */

/* 5196 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5198 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_anchorTarget */

/* 5202 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 5204 */	NdrFcLong( 0x0 ),	/* 0 */
/* 5208 */	NdrFcShort( 0x3 ),	/* 3 */
/* 5210 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 5212 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5214 */	NdrFcShort( 0x8 ),	/* 8 */
/* 5216 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 5218 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 5220 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5222 */	NdrFcShort( 0x0 ),	/* 0 */
/* 5224 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter accessible */

/* 5226 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 5228 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 5230 */	NdrFcShort( 0x38 ),	/* Type Offset=56 */

	/* Return value */

/* 5232 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 5234 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 5236 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const ia2_api_all_MIDL_TYPE_FORMAT_STRING ia2_api_all__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/*  4 */	NdrFcShort( 0x26 ),	/* Offset= 38 (42) */
/*  6 */	
			0x13, 0x0,	/* FC_OP */
/*  8 */	NdrFcShort( 0x18 ),	/* Offset= 24 (32) */
/* 10 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 12 */	NdrFcShort( 0x2 ),	/* 2 */
/* 14 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 16 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 18 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 20 */	0x0 , 
			0x0,		/* 0 */
/* 22 */	NdrFcLong( 0x0 ),	/* 0 */
/* 26 */	NdrFcLong( 0x0 ),	/* 0 */
/* 30 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 32 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 34 */	NdrFcShort( 0x8 ),	/* 8 */
/* 36 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (10) */
/* 38 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 40 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 42 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 44 */	NdrFcShort( 0x0 ),	/* 0 */
/* 46 */	NdrFcShort( 0x4 ),	/* 4 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0xffd4 ),	/* Offset= -44 (6) */
/* 52 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 54 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 56 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 58 */	NdrFcShort( 0x2 ),	/* Offset= 2 (60) */
/* 60 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 62 */	NdrFcLong( 0x0 ),	/* 0 */
/* 66 */	NdrFcShort( 0x0 ),	/* 0 */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 72 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 74 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 76 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 78 */	
			0x11, 0x0,	/* FC_RP */
/* 80 */	NdrFcShort( 0x2 ),	/* Offset= 2 (82) */
/* 82 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 84 */	NdrFcShort( 0x0 ),	/* 0 */
/* 86 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 88 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 90 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 92 */	0x0 , 
			0x0,		/* 0 */
/* 94 */	NdrFcLong( 0x0 ),	/* 0 */
/* 98 */	NdrFcLong( 0x0 ),	/* 0 */
/* 102 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 104 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 106 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 108 */	0x0 , 
			0x0,		/* 0 */
/* 110 */	NdrFcLong( 0x0 ),	/* 0 */
/* 114 */	NdrFcLong( 0x0 ),	/* 0 */
/* 118 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 120 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (60) */
/* 122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 124 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 130 */	NdrFcShort( 0x2 ),	/* Offset= 2 (132) */
/* 132 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 134 */	NdrFcShort( 0x0 ),	/* 0 */
/* 136 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 138 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 140 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 142 */	0x0 , 
			0x0,		/* 0 */
/* 144 */	NdrFcLong( 0x0 ),	/* 0 */
/* 148 */	NdrFcLong( 0x0 ),	/* 0 */
/* 152 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 154 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 156 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 158 */	0x0 , 
			0x0,		/* 0 */
/* 160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 164 */	NdrFcLong( 0x0 ),	/* 0 */
/* 168 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 170 */	NdrFcShort( 0xff80 ),	/* Offset= -128 (42) */
/* 172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 174 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 176 */	NdrFcShort( 0x2 ),	/* Offset= 2 (178) */
/* 178 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 180 */	NdrFcLong( 0x7cdf86ee ),	/* 2095023854 */
/* 184 */	NdrFcShort( 0xc3da ),	/* -15398 */
/* 186 */	NdrFcShort( 0x496a ),	/* 18794 */
/* 188 */	0xbd,		/* 189 */
			0xa4,		/* 164 */
/* 190 */	0x28,		/* 40 */
			0x1b,		/* 27 */
/* 192 */	0x33,		/* 51 */
			0x6e,		/* 110 */
/* 194 */	0x1f,		/* 31 */
			0xdc,		/* 220 */
/* 196 */	
			0x11, 0x0,	/* FC_RP */
/* 198 */	NdrFcShort( 0x2 ),	/* Offset= 2 (200) */
/* 200 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 202 */	NdrFcShort( 0x0 ),	/* 0 */
/* 204 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 206 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 208 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 210 */	0x0 , 
			0x0,		/* 0 */
/* 212 */	NdrFcLong( 0x0 ),	/* 0 */
/* 216 */	NdrFcLong( 0x0 ),	/* 0 */
/* 220 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 222 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 224 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 226 */	0x0 , 
			0x0,		/* 0 */
/* 228 */	NdrFcLong( 0x0 ),	/* 0 */
/* 232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 236 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 238 */	NdrFcShort( 0xffc4 ),	/* Offset= -60 (178) */
/* 240 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 242 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 244 */	NdrFcShort( 0x2 ),	/* Offset= 2 (246) */
/* 246 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 248 */	NdrFcShort( 0x2 ),	/* Offset= 2 (250) */
/* 250 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 252 */	NdrFcShort( 0x0 ),	/* 0 */
/* 254 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 256 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 258 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 260 */	0x0 , 
			0x0,		/* 0 */
/* 262 */	NdrFcLong( 0x0 ),	/* 0 */
/* 266 */	NdrFcLong( 0x0 ),	/* 0 */
/* 270 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 272 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 274 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 276 */	0x0 , 
			0x0,		/* 0 */
/* 278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 282 */	NdrFcLong( 0x0 ),	/* 0 */
/* 286 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 288 */	NdrFcShort( 0xff0a ),	/* Offset= -246 (42) */
/* 290 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 292 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 294 */	NdrFcShort( 0x1a ),	/* Offset= 26 (320) */
/* 296 */	
			0x13, 0x0,	/* FC_OP */
/* 298 */	NdrFcShort( 0x2 ),	/* Offset= 2 (300) */
/* 300 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 302 */	NdrFcShort( 0x4 ),	/* 4 */
/* 304 */	NdrFcShort( 0x2 ),	/* 2 */
/* 306 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 310 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 312 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 316 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 318 */	NdrFcShort( 0xffff ),	/* Offset= -1 (317) */
/* 320 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 322 */	NdrFcShort( 0x1 ),	/* 1 */
/* 324 */	NdrFcShort( 0x4 ),	/* 4 */
/* 326 */	NdrFcShort( 0x0 ),	/* 0 */
/* 328 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (296) */
/* 330 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 332 */	NdrFcShort( 0x2 ),	/* Offset= 2 (334) */
/* 334 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 336 */	NdrFcShort( 0xc ),	/* 12 */
/* 338 */	NdrFcShort( 0x0 ),	/* 0 */
/* 340 */	NdrFcShort( 0x0 ),	/* Offset= 0 (340) */
/* 342 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 344 */	NdrFcShort( 0xfed2 ),	/* Offset= -302 (42) */
/* 346 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 348 */	NdrFcShort( 0xfece ),	/* Offset= -306 (42) */
/* 350 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 352 */	NdrFcShort( 0xfeca ),	/* Offset= -310 (42) */
/* 354 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 356 */	
			0x12, 0x0,	/* FC_UP */
/* 358 */	NdrFcShort( 0xfeba ),	/* Offset= -326 (32) */
/* 360 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x4 ),	/* 4 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (356) */
/* 370 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 372 */	NdrFcShort( 0x460 ),	/* Offset= 1120 (1492) */
/* 374 */	
			0x13, 0x0,	/* FC_OP */
/* 376 */	NdrFcShort( 0x448 ),	/* Offset= 1096 (1472) */
/* 378 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 380 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 382 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 384 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 386 */	0x0 , 
			0x0,		/* 0 */
/* 388 */	NdrFcLong( 0x0 ),	/* 0 */
/* 392 */	NdrFcLong( 0x0 ),	/* 0 */
/* 396 */	NdrFcShort( 0x2 ),	/* Offset= 2 (398) */
/* 398 */	NdrFcShort( 0x10 ),	/* 16 */
/* 400 */	NdrFcShort( 0x2f ),	/* 47 */
/* 402 */	NdrFcLong( 0x14 ),	/* 20 */
/* 406 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 408 */	NdrFcLong( 0x3 ),	/* 3 */
/* 412 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 414 */	NdrFcLong( 0x11 ),	/* 17 */
/* 418 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 420 */	NdrFcLong( 0x2 ),	/* 2 */
/* 424 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 426 */	NdrFcLong( 0x4 ),	/* 4 */
/* 430 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 432 */	NdrFcLong( 0x5 ),	/* 5 */
/* 436 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 438 */	NdrFcLong( 0xb ),	/* 11 */
/* 442 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 444 */	NdrFcLong( 0xa ),	/* 10 */
/* 448 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 450 */	NdrFcLong( 0x6 ),	/* 6 */
/* 454 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (686) */
/* 456 */	NdrFcLong( 0x7 ),	/* 7 */
/* 460 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 462 */	NdrFcLong( 0x8 ),	/* 8 */
/* 466 */	NdrFcShort( 0xfe34 ),	/* Offset= -460 (6) */
/* 468 */	NdrFcLong( 0xd ),	/* 13 */
/* 472 */	NdrFcShort( 0xfe64 ),	/* Offset= -412 (60) */
/* 474 */	NdrFcLong( 0x9 ),	/* 9 */
/* 478 */	NdrFcShort( 0xd6 ),	/* Offset= 214 (692) */
/* 480 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 484 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (710) */
/* 486 */	NdrFcLong( 0x24 ),	/* 36 */
/* 490 */	NdrFcShort( 0x38c ),	/* Offset= 908 (1398) */
/* 492 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 496 */	NdrFcShort( 0x386 ),	/* Offset= 902 (1398) */
/* 498 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 502 */	NdrFcShort( 0x384 ),	/* Offset= 900 (1402) */
/* 504 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 508 */	NdrFcShort( 0x382 ),	/* Offset= 898 (1406) */
/* 510 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 514 */	NdrFcShort( 0x380 ),	/* Offset= 896 (1410) */
/* 516 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 520 */	NdrFcShort( 0x37e ),	/* Offset= 894 (1414) */
/* 522 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 526 */	NdrFcShort( 0x37c ),	/* Offset= 892 (1418) */
/* 528 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 532 */	NdrFcShort( 0x37a ),	/* Offset= 890 (1422) */
/* 534 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 538 */	NdrFcShort( 0x364 ),	/* Offset= 868 (1406) */
/* 540 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 544 */	NdrFcShort( 0x362 ),	/* Offset= 866 (1410) */
/* 546 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 550 */	NdrFcShort( 0x36c ),	/* Offset= 876 (1426) */
/* 552 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 556 */	NdrFcShort( 0x362 ),	/* Offset= 866 (1422) */
/* 558 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 562 */	NdrFcShort( 0x364 ),	/* Offset= 868 (1430) */
/* 564 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 568 */	NdrFcShort( 0x362 ),	/* Offset= 866 (1434) */
/* 570 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 574 */	NdrFcShort( 0x360 ),	/* Offset= 864 (1438) */
/* 576 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 580 */	NdrFcShort( 0x35e ),	/* Offset= 862 (1442) */
/* 582 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 586 */	NdrFcShort( 0x35c ),	/* Offset= 860 (1446) */
/* 588 */	NdrFcLong( 0x10 ),	/* 16 */
/* 592 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 594 */	NdrFcLong( 0x12 ),	/* 18 */
/* 598 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 600 */	NdrFcLong( 0x13 ),	/* 19 */
/* 604 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 606 */	NdrFcLong( 0x15 ),	/* 21 */
/* 610 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 612 */	NdrFcLong( 0x16 ),	/* 22 */
/* 616 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 618 */	NdrFcLong( 0x17 ),	/* 23 */
/* 622 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 624 */	NdrFcLong( 0xe ),	/* 14 */
/* 628 */	NdrFcShort( 0x33a ),	/* Offset= 826 (1454) */
/* 630 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 634 */	NdrFcShort( 0x33e ),	/* Offset= 830 (1464) */
/* 636 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 640 */	NdrFcShort( 0x33c ),	/* Offset= 828 (1468) */
/* 642 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 646 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (1406) */
/* 648 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 652 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (1410) */
/* 654 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 658 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (1414) */
/* 660 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 664 */	NdrFcShort( 0x2ea ),	/* Offset= 746 (1410) */
/* 666 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 670 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (1410) */
/* 672 */	NdrFcLong( 0x0 ),	/* 0 */
/* 676 */	NdrFcShort( 0x0 ),	/* Offset= 0 (676) */
/* 678 */	NdrFcLong( 0x1 ),	/* 1 */
/* 682 */	NdrFcShort( 0x0 ),	/* Offset= 0 (682) */
/* 684 */	NdrFcShort( 0xffff ),	/* Offset= -1 (683) */
/* 686 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 688 */	NdrFcShort( 0x8 ),	/* 8 */
/* 690 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 692 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 694 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x0 ),	/* 0 */
/* 702 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 704 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 706 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 708 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 710 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 712 */	NdrFcShort( 0x2 ),	/* Offset= 2 (714) */
/* 714 */	
			0x13, 0x0,	/* FC_OP */
/* 716 */	NdrFcShort( 0x298 ),	/* Offset= 664 (1380) */
/* 718 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x49,		/* 73 */
/* 720 */	NdrFcShort( 0x18 ),	/* 24 */
/* 722 */	NdrFcShort( 0xa ),	/* 10 */
/* 724 */	NdrFcLong( 0x8 ),	/* 8 */
/* 728 */	NdrFcShort( 0x64 ),	/* Offset= 100 (828) */
/* 730 */	NdrFcLong( 0xd ),	/* 13 */
/* 734 */	NdrFcShort( 0x9c ),	/* Offset= 156 (890) */
/* 736 */	NdrFcLong( 0x9 ),	/* 9 */
/* 740 */	NdrFcShort( 0xd0 ),	/* Offset= 208 (948) */
/* 742 */	NdrFcLong( 0xc ),	/* 12 */
/* 746 */	NdrFcShort( 0x104 ),	/* Offset= 260 (1006) */
/* 748 */	NdrFcLong( 0x24 ),	/* 36 */
/* 752 */	NdrFcShort( 0x174 ),	/* Offset= 372 (1124) */
/* 754 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 758 */	NdrFcShort( 0x190 ),	/* Offset= 400 (1158) */
/* 760 */	NdrFcLong( 0x10 ),	/* 16 */
/* 764 */	NdrFcShort( 0x1b4 ),	/* Offset= 436 (1200) */
/* 766 */	NdrFcLong( 0x2 ),	/* 2 */
/* 770 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1242) */
/* 772 */	NdrFcLong( 0x3 ),	/* 3 */
/* 776 */	NdrFcShort( 0x1fc ),	/* Offset= 508 (1284) */
/* 778 */	NdrFcLong( 0x14 ),	/* 20 */
/* 782 */	NdrFcShort( 0x220 ),	/* Offset= 544 (1326) */
/* 784 */	NdrFcShort( 0xffff ),	/* Offset= -1 (783) */
/* 786 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 788 */	NdrFcShort( 0x4 ),	/* 4 */
/* 790 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 796 */	0x0 , 
			0x0,		/* 0 */
/* 798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 802 */	NdrFcLong( 0x0 ),	/* 0 */
/* 806 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 808 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 810 */	NdrFcShort( 0x4 ),	/* 4 */
/* 812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 814 */	NdrFcShort( 0x1 ),	/* 1 */
/* 816 */	NdrFcShort( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0x0 ),	/* 0 */
/* 820 */	0x13, 0x0,	/* FC_OP */
/* 822 */	NdrFcShort( 0xfcea ),	/* Offset= -790 (32) */
/* 824 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 826 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 828 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 830 */	NdrFcShort( 0x8 ),	/* 8 */
/* 832 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 834 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 836 */	NdrFcShort( 0x4 ),	/* 4 */
/* 838 */	NdrFcShort( 0x4 ),	/* 4 */
/* 840 */	0x11, 0x0,	/* FC_RP */
/* 842 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (786) */
/* 844 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 846 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 848 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 850 */	NdrFcShort( 0x0 ),	/* 0 */
/* 852 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 854 */	NdrFcShort( 0x0 ),	/* 0 */
/* 856 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 858 */	0x0 , 
			0x0,		/* 0 */
/* 860 */	NdrFcLong( 0x0 ),	/* 0 */
/* 864 */	NdrFcLong( 0x0 ),	/* 0 */
/* 868 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 872 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 874 */	0x0 , 
			0x0,		/* 0 */
/* 876 */	NdrFcLong( 0x0 ),	/* 0 */
/* 880 */	NdrFcLong( 0x0 ),	/* 0 */
/* 884 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 886 */	NdrFcShort( 0xfcc6 ),	/* Offset= -826 (60) */
/* 888 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 890 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 894 */	NdrFcShort( 0x0 ),	/* 0 */
/* 896 */	NdrFcShort( 0x6 ),	/* Offset= 6 (902) */
/* 898 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 900 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 902 */	
			0x11, 0x0,	/* FC_RP */
/* 904 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (848) */
/* 906 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 908 */	NdrFcShort( 0x0 ),	/* 0 */
/* 910 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 912 */	NdrFcShort( 0x0 ),	/* 0 */
/* 914 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 916 */	0x0 , 
			0x0,		/* 0 */
/* 918 */	NdrFcLong( 0x0 ),	/* 0 */
/* 922 */	NdrFcLong( 0x0 ),	/* 0 */
/* 926 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 930 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 932 */	0x0 , 
			0x0,		/* 0 */
/* 934 */	NdrFcLong( 0x0 ),	/* 0 */
/* 938 */	NdrFcLong( 0x0 ),	/* 0 */
/* 942 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 944 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (692) */
/* 946 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 948 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 950 */	NdrFcShort( 0x8 ),	/* 8 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x6 ),	/* Offset= 6 (960) */
/* 956 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 958 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 960 */	
			0x11, 0x0,	/* FC_RP */
/* 962 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (906) */
/* 964 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 966 */	NdrFcShort( 0x4 ),	/* 4 */
/* 968 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 970 */	NdrFcShort( 0x0 ),	/* 0 */
/* 972 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 974 */	0x0 , 
			0x0,		/* 0 */
/* 976 */	NdrFcLong( 0x0 ),	/* 0 */
/* 980 */	NdrFcLong( 0x0 ),	/* 0 */
/* 984 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 986 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 988 */	NdrFcShort( 0x4 ),	/* 4 */
/* 990 */	NdrFcShort( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x1 ),	/* 1 */
/* 994 */	NdrFcShort( 0x0 ),	/* 0 */
/* 996 */	NdrFcShort( 0x0 ),	/* 0 */
/* 998 */	0x13, 0x0,	/* FC_OP */
/* 1000 */	NdrFcShort( 0x1d8 ),	/* Offset= 472 (1472) */
/* 1002 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1004 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1006 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1008 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1012 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1018) */
/* 1014 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1016 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1018 */	
			0x11, 0x0,	/* FC_RP */
/* 1020 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (964) */
/* 1022 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1024 */	NdrFcLong( 0x2f ),	/* 47 */
/* 1028 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 1034 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1036 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 1038 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 1040 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1042 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1044 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1046 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1048 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1050 */	0x0 , 
			0x0,		/* 0 */
/* 1052 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1060 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1062 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1064 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1066 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1068 */	NdrFcShort( 0xa ),	/* Offset= 10 (1078) */
/* 1070 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1072 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1074 */	NdrFcShort( 0xffcc ),	/* Offset= -52 (1022) */
/* 1076 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 1078 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1080 */	NdrFcShort( 0xffd8 ),	/* Offset= -40 (1040) */
/* 1082 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1084 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1086 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1088 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1090 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1092 */	0x0 , 
			0x0,		/* 0 */
/* 1094 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1098 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1102 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1104 */	
			0x48,		/* FC_VARIABLE_REPEAT */
			0x49,		/* FC_FIXED_OFFSET */
/* 1106 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1110 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1112 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1114 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1116 */	0x13, 0x0,	/* FC_OP */
/* 1118 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1062) */
/* 1120 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1122 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1124 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1126 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1128 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1130 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1136) */
/* 1132 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1134 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1136 */	
			0x11, 0x0,	/* FC_RP */
/* 1138 */	NdrFcShort( 0xffc8 ),	/* Offset= -56 (1082) */
/* 1140 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 1142 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1144 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1146 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1148 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1150 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 1152 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1154 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (1140) */
			0x5b,		/* FC_END */
/* 1158 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1160 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1162 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1164 */	NdrFcShort( 0xa ),	/* Offset= 10 (1174) */
/* 1166 */	0x8,		/* FC_LONG */
			0x36,		/* FC_POINTER */
/* 1168 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1170 */	NdrFcShort( 0xffe8 ),	/* Offset= -24 (1146) */
/* 1172 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1174 */	
			0x11, 0x0,	/* FC_RP */
/* 1176 */	NdrFcShort( 0xfeb8 ),	/* Offset= -328 (848) */
/* 1178 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 1180 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1182 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1184 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1186 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1188 */	0x0 , 
			0x0,		/* 0 */
/* 1190 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1194 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1198 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 1200 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1202 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1204 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1206 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1208 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1210 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1212 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1214 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1178) */
/* 1216 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1218 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1220 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 1222 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1224 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1228 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1230 */	0x0 , 
			0x0,		/* 0 */
/* 1232 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1236 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1240 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 1242 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1244 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1246 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1248 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1250 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1252 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1254 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1256 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1220) */
/* 1258 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1260 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1262 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1264 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1266 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1270 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1272 */	0x0 , 
			0x0,		/* 0 */
/* 1274 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1278 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1282 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1284 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1286 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1288 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1290 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1292 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1294 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1296 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1298 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1262) */
/* 1300 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1302 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1304 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 1306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1308 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 1310 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1312 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1314 */	0x0 , 
			0x0,		/* 0 */
/* 1316 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1320 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1324 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1326 */	
			0x16,		/* FC_PSTRUCT */
			0x3,		/* 3 */
/* 1328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1330 */	
			0x4b,		/* FC_PP */
			0x5c,		/* FC_PAD */
/* 1332 */	
			0x46,		/* FC_NO_REPEAT */
			0x5c,		/* FC_PAD */
/* 1334 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1336 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1338 */	0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1340 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (1304) */
/* 1342 */	
			0x5b,		/* FC_END */

			0x8,		/* FC_LONG */
/* 1344 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1346 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 1348 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1350 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1352 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1354 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1356 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1358 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 1360 */	NdrFcShort( 0xffd8 ),	/* -40 */
/* 1362 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1364 */	0x0 , 
			0x0,		/* 0 */
/* 1366 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1370 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1374 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1376 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1346) */
/* 1378 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1380 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1382 */	NdrFcShort( 0x28 ),	/* 40 */
/* 1384 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (1354) */
/* 1386 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1386) */
/* 1388 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1390 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1392 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1394 */	NdrFcShort( 0xfd5c ),	/* Offset= -676 (718) */
/* 1396 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1398 */	
			0x13, 0x0,	/* FC_OP */
/* 1400 */	NdrFcShort( 0xfeae ),	/* Offset= -338 (1062) */
/* 1402 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1404 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 1406 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1408 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 1410 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1412 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 1414 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1416 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 1418 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1420 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 1422 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1424 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 1426 */	
			0x13, 0x0,	/* FC_OP */
/* 1428 */	NdrFcShort( 0xfd1a ),	/* Offset= -742 (686) */
/* 1430 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1432 */	NdrFcShort( 0xfa6e ),	/* Offset= -1426 (6) */
/* 1434 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1436 */	NdrFcShort( 0xfaa0 ),	/* Offset= -1376 (60) */
/* 1438 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1440 */	NdrFcShort( 0xfd14 ),	/* Offset= -748 (692) */
/* 1442 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1444 */	NdrFcShort( 0xfd22 ),	/* Offset= -734 (710) */
/* 1446 */	
			0x13, 0x10,	/* FC_OP [pointer_deref] */
/* 1448 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1450) */
/* 1450 */	
			0x13, 0x0,	/* FC_OP */
/* 1452 */	NdrFcShort( 0x14 ),	/* Offset= 20 (1472) */
/* 1454 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 1456 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1458 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 1460 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 1462 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 1464 */	
			0x13, 0x0,	/* FC_OP */
/* 1466 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1454) */
/* 1468 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 1470 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 1472 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 1474 */	NdrFcShort( 0x20 ),	/* 32 */
/* 1476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1478 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1478) */
/* 1480 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1482 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1484 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 1486 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1488 */	NdrFcShort( 0xfbaa ),	/* Offset= -1110 (378) */
/* 1490 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1492 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1494 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1496 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1498 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1500 */	NdrFcShort( 0xfb9a ),	/* Offset= -1126 (374) */
/* 1502 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1504 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1506) */
/* 1506 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1508 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1510) */
/* 1510 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1512 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1514 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1516 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 1518 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1520 */	0x0 , 
			0x0,		/* 0 */
/* 1522 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1526 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1530 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1534 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1536 */	0x0 , 
			0x0,		/* 0 */
/* 1538 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1542 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1546 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1548 */	NdrFcShort( 0xfa30 ),	/* Offset= -1488 (60) */
/* 1550 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1552 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1554 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1556) */
/* 1556 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1558 */	NdrFcShort( 0x16 ),	/* Offset= 22 (1580) */
/* 1560 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1562 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1564 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1566 */	NdrFcShort( 0xe ),	/* Offset= 14 (1580) */
/* 1568 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1570 */	NdrFcShort( 0xfa1a ),	/* Offset= -1510 (60) */
/* 1572 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 1574 */	0x0,		/* 0 */
			NdrFcShort( 0xfa15 ),	/* Offset= -1515 (60) */
			0x8,		/* FC_LONG */
/* 1578 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1580 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1582 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1584 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1586 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1588 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1590 */	0x0 , 
			0x0,		/* 0 */
/* 1592 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1596 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1600 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1604 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1606 */	0x0 , 
			0x0,		/* 0 */
/* 1608 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1612 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1616 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1618 */	NdrFcShort( 0xffc6 ),	/* Offset= -58 (1560) */
/* 1620 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1622 */	
			0x12, 0x0,	/* FC_UP */
/* 1624 */	NdrFcShort( 0xff68 ),	/* Offset= -152 (1472) */
/* 1626 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1628 */	NdrFcShort( 0x2 ),	/* 2 */
/* 1630 */	NdrFcShort( 0x10 ),	/* 16 */
/* 1632 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1634 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1622) */
/* 1636 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1638 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1640) */
/* 1640 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1642 */	NdrFcShort( 0xc ),	/* 12 */
/* 1644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1646 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1646) */
/* 1648 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1650 */	NdrFcShort( 0xf9b8 ),	/* Offset= -1608 (42) */
/* 1652 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1654 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1656 */	
			0x11, 0x0,	/* FC_RP */
/* 1658 */	NdrFcShort( 0xfaee ),	/* Offset= -1298 (360) */
/* 1660 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 1662 */	0x3,		/* FC_SMALL */
			0x5c,		/* FC_PAD */
/* 1664 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1666 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1668) */
/* 1668 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1670 */	NdrFcLong( 0x1c20f2b ),	/* 29495083 */
/* 1674 */	NdrFcShort( 0x3dd2 ),	/* 15826 */
/* 1676 */	NdrFcShort( 0x400f ),	/* 16399 */
/* 1678 */	0x94,		/* 148 */
			0x9f,		/* 159 */
/* 1680 */	0xad,		/* 173 */
			0x0,		/* 0 */
/* 1682 */	0xbd,		/* 189 */
			0xab,		/* 171 */
/* 1684 */	0x1d,		/* 29 */
			0x41,		/* 65 */
/* 1686 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1688 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1690) */
/* 1690 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1692 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1694) */
/* 1694 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1696 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1698 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1700 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1702 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1704 */	0x0 , 
			0x0,		/* 0 */
/* 1706 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1710 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1714 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1718 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1720 */	0x0 , 
			0x0,		/* 0 */
/* 1722 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1726 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1730 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1732 */	NdrFcShort( 0xffc0 ),	/* Offset= -64 (1668) */
/* 1734 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1736 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/* 1738 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1740) */
/* 1740 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 1742 */	NdrFcLong( 0x35ad8070 ),	/* 900563056 */
/* 1746 */	NdrFcShort( 0xc20c ),	/* -15860 */
/* 1748 */	NdrFcShort( 0x4fb4 ),	/* 20404 */
/* 1750 */	0xb0,		/* 176 */
			0x94,		/* 148 */
/* 1752 */	0xf4,		/* 244 */
			0xf7,		/* 247 */
/* 1754 */	0x27,		/* 39 */
			0x5d,		/* 93 */
/* 1756 */	0xd4,		/* 212 */
			0x69,		/* 105 */
/* 1758 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1760 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1762) */
/* 1762 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1764 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1766) */
/* 1766 */	
			0x1c,		/* FC_CVARRAY */
			0x3,		/* 3 */
/* 1768 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1770 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x0,		/*  */
/* 1772 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 1774 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 1776 */	0x0 , 
			0x0,		/* 0 */
/* 1778 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1782 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1786 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1788 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 1790 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1792 */	0x0 , 
			0x0,		/* 0 */
/* 1794 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1798 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1802 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1804 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1806 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1808) */
/* 1808 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 1810 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1812 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1814 */	NdrFcShort( 0x0 ),	/* Offset= 0 (1814) */
/* 1816 */	0xd,		/* FC_ENUM16 */
			0x8,		/* FC_LONG */
/* 1818 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 1820 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 1822 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1824 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1826) */
/* 1826 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1828 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1830) */
/* 1830 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 1832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1834 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1836 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1838 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1840 */	0x0 , 
			0x0,		/* 0 */
/* 1842 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1846 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1850 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 1854 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1856 */	0x0 , 
			0x0,		/* 0 */
/* 1858 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1862 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1866 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 1868 */	NdrFcShort( 0xf8f0 ),	/* Offset= -1808 (60) */
/* 1870 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 1872 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 1874 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1876) */
/* 1876 */	
			0x13, 0x20,	/* FC_OP [maybenull_sizeis] */
/* 1878 */	NdrFcShort( 0x2 ),	/* Offset= 2 (1880) */
/* 1880 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 1882 */	NdrFcShort( 0x4 ),	/* 4 */
/* 1884 */	0x28,		/* Corr desc:  parameter, FC_LONG */
			0x54,		/* FC_DEREFERENCE */
/* 1886 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 1888 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 1890 */	0x0 , 
			0x0,		/* 0 */
/* 1892 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1896 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1900 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            },
            {
            HWND_UserSize
            ,HWND_UserMarshal
            ,HWND_UserUnmarshal
            ,HWND_UserFree
            },
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            }

        };



/* Standard interface: __MIDL_itf_ia2_api_all_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAccessibleRelation, ver. 0.0,
   GUID={0x7CDF86EE,0xC3DA,0x496a,{0xBD,0xA4,0x28,0x1B,0x33,0x6E,0x1F,0xDC}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleRelation_FormatStringOffsetTable[] =
    {
    0,
    36,
    72,
    108,
    150
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleRelation_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleRelation_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleRelation_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleRelation_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(8) _IAccessibleRelationProxyVtbl = 
{
    &IAccessibleRelation_ProxyInfo,
    &IID_IAccessibleRelation,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_relationType */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_localizedRelationType */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_nTargets */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_target */ ,
    (void *) (INT_PTR) -1 /* IAccessibleRelation::get_targets */
};

const CInterfaceStubVtbl _IAccessibleRelationStubVtbl =
{
    &IID_IAccessibleRelation,
    &IAccessibleRelation_ServerInfo,
    8,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0001, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleAction, ver. 0.0,
   GUID={0xB70D9F59,0x3B5A,0x4dba,{0xAB,0x9E,0x22,0x01,0x2F,0x60,0x7D,0xF5}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleAction_FormatStringOffsetTable[] =
    {
    198,
    234,
    270,
    312,
    366,
    408
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleAction_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleAction_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleAction_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleAction_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IAccessibleActionProxyVtbl = 
{
    &IAccessibleAction_ProxyInfo,
    &IID_IAccessibleAction,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::nActions */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::doAction */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_keyBinding */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_name */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_localizedName */
};

const CInterfaceStubVtbl _IAccessibleActionStubVtbl =
{
    &IID_IAccessibleAction,
    &IAccessibleAction_ServerInfo,
    9,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0002, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IAccessible, ver. 0.0,
   GUID={0x618736e0,0x3c3d,0x11cf,{0x81,0x0c,0x00,0xaa,0x00,0x38,0x9b,0x71}} */


/* Object interface: IAccessible2, ver. 0.0,
   GUID={0xE89F726E,0xC4F4,0x4c19,{0xBB,0x19,0xB6,0x47,0xD7,0xFA,0x84,0x78}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    450,
    486,
    528,
    576,
    612,
    648,
    696,
    744,
    780,
    816,
    852,
    888,
    936,
    984,
    1020,
    1056,
    1092,
    1128
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(46) _IAccessible2ProxyVtbl = 
{
    &IAccessible2_ProxyInfo,
    &IID_IAccessible2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */
};


static const PRPC_STUB_FUNCTION IAccessible2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2StubVtbl =
{
    &IID_IAccessible2,
    &IAccessible2_ServerInfo,
    46,
    &IAccessible2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Object interface: IAccessible2_2, ver. 0.0,
   GUID={0x6C9430E9,0x299D,0x4E6F,{0xBD,0x01,0xA8,0x2A,0x1E,0x88,0xD3,0xFF}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_2_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    450,
    486,
    528,
    576,
    612,
    648,
    696,
    744,
    780,
    816,
    852,
    888,
    936,
    984,
    1020,
    1056,
    1092,
    1128,
    1164,
    1206,
    1248
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(49) _IAccessible2_2ProxyVtbl = 
{
    &IAccessible2_2_ProxyInfo,
    &IID_IAccessible2_2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_attribute */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_accessibleWithCaret */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_relationTargetsOfType */
};


static const PRPC_STUB_FUNCTION IAccessible2_2_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2_2StubVtbl =
{
    &IID_IAccessible2_2,
    &IAccessible2_2_ServerInfo,
    49,
    &IAccessible2_2_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0004, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessible2_3, ver. 0.0,
   GUID={0x5BE18059,0x762E,0x4E73,{0x94,0x76,0xAB,0xA2,0x94,0xFE,0xD4,0x11}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessible2_3_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    450,
    486,
    528,
    576,
    612,
    648,
    696,
    744,
    780,
    816,
    852,
    888,
    936,
    984,
    1020,
    1056,
    1092,
    1128,
    1164,
    1206,
    1248,
    1302
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessible2_3_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_3_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessible2_3_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessible2_3_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(50) _IAccessible2_3ProxyVtbl = 
{
    &IAccessible2_3_ProxyInfo,
    &IID_IAccessible2_3,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    0 /* IAccessible::get_accParent */ ,
    0 /* IAccessible::get_accChildCount */ ,
    0 /* IAccessible::get_accChild */ ,
    0 /* IAccessible::get_accName */ ,
    0 /* IAccessible::get_accValue */ ,
    0 /* IAccessible::get_accDescription */ ,
    0 /* IAccessible::get_accRole */ ,
    0 /* IAccessible::get_accState */ ,
    0 /* IAccessible::get_accHelp */ ,
    0 /* IAccessible::get_accHelpTopic */ ,
    0 /* IAccessible::get_accKeyboardShortcut */ ,
    0 /* IAccessible::get_accFocus */ ,
    0 /* IAccessible::get_accSelection */ ,
    0 /* IAccessible::get_accDefaultAction */ ,
    0 /* IAccessible::accSelect */ ,
    0 /* IAccessible::accLocation */ ,
    0 /* IAccessible::accNavigate */ ,
    0 /* IAccessible::accHitTest */ ,
    0 /* IAccessible::accDoDefaultAction */ ,
    0 /* IAccessible::put_accName */ ,
    0 /* IAccessible::put_accValue */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nRelations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relation */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_relations */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::role */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollTo */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::scrollToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_groupPosition */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_states */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedRole */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_nExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_extendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_localizedExtendedStates */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_uniqueID */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_windowHandle */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_indexInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_locale */ ,
    (void *) (INT_PTR) -1 /* IAccessible2::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_attribute */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_accessibleWithCaret */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_2::get_relationTargetsOfType */ ,
    (void *) (INT_PTR) -1 /* IAccessible2_3::get_selectionRanges */
};


static const PRPC_STUB_FUNCTION IAccessible2_3_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IAccessible2_3StubVtbl =
{
    &IID_IAccessible2_3,
    &IAccessible2_3_ServerInfo,
    50,
    &IAccessible2_3_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0005, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleComponent, ver. 0.0,
   GUID={0x1546D4B0,0x4C98,0x4bda,{0x89,0xAE,0x9A,0x64,0x74,0x8B,0xDD,0xE4}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleComponent_FormatStringOffsetTable[] =
    {
    1344,
    1386,
    72
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleComponent_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleComponent_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleComponent_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IAccessibleComponentProxyVtbl = 
{
    &IAccessibleComponent_ProxyInfo,
    &IID_IAccessibleComponent,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_locationInParent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_foreground */ ,
    (void *) (INT_PTR) -1 /* IAccessibleComponent::get_background */
};

const CInterfaceStubVtbl _IAccessibleComponentStubVtbl =
{
    &IID_IAccessibleComponent,
    &IAccessibleComponent_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleValue, ver. 0.0,
   GUID={0x35855B5B,0xC566,0x4fd0,{0xA7,0xB1,0xE6,0x54,0x65,0x60,0x03,0x94}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleValue_FormatStringOffsetTable[] =
    {
    1422,
    1458,
    1494,
    1530
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleValue_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleValue_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleValue_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleValue_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IAccessibleValueProxyVtbl = 
{
    &IAccessibleValue_ProxyInfo,
    &IID_IAccessibleValue,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_currentValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::setCurrentValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_maximumValue */ ,
    (void *) (INT_PTR) -1 /* IAccessibleValue::get_minimumValue */
};

const CInterfaceStubVtbl _IAccessibleValueStubVtbl =
{
    &IID_IAccessibleValue,
    &IAccessibleValue_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0007, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleText, ver. 0.0,
   GUID={0x24FD2FFB,0x3AAD,0x4a08,{0x83,0x35,0xA3,0xAD,0x89,0xC0,0xFB,0x4B}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleText_FormatStringOffsetTable[] =
    {
    1566,
    1608,
    72,
    1662,
    1728,
    1764,
    1818,
    1866,
    1914,
    1974,
    2034,
    2094,
    2130,
    2166,
    2214,
    2250,
    2298,
    2358,
    2394
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleText_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleText_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(22) _IAccessibleTextProxyVtbl = 
{
    &IAccessibleText_ProxyInfo,
    &IID_IAccessibleText,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */
};

const CInterfaceStubVtbl _IAccessibleTextStubVtbl =
{
    &IID_IAccessibleText,
    &IAccessibleText_ServerInfo,
    22,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleText2, ver. 0.0,
   GUID={0x9690A9CC,0x5C80,0x4DF5,{0x85,0x2E,0x2D,0x5A,0xE4,0x18,0x9A,0x54}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleText2_FormatStringOffsetTable[] =
    {
    1566,
    1608,
    72,
    1662,
    1728,
    1764,
    1818,
    1866,
    1914,
    1974,
    2034,
    2094,
    2130,
    2166,
    2214,
    2250,
    2298,
    2358,
    2394,
    2430
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleText2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleText2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleText2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IAccessibleText2ProxyVtbl = 
{
    &IAccessibleText2_ProxyInfo,
    &IID_IAccessibleText2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText2::get_attributeRange */
};

const CInterfaceStubVtbl _IAccessibleText2StubVtbl =
{
    &IID_IAccessibleText2,
    &IAccessibleText2_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleEditableText, ver. 0.0,
   GUID={0xA59AA09A,0x7011,0x4b65,{0x93,0x9D,0x32,0xB1,0xFB,0x55,0x47,0xE3}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleEditableText_FormatStringOffsetTable[] =
    {
    1566,
    2490,
    2532,
    2574,
    2616,
    2652,
    2700
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleEditableText_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleEditableText_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleEditableText_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleEditableText_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(10) _IAccessibleEditableTextProxyVtbl = 
{
    &IAccessibleEditableText_ProxyInfo,
    &IID_IAccessibleEditableText,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::copyText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::deleteText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::insertText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::cutText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::pasteText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::replaceText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleEditableText::setAttributes */
};

const CInterfaceStubVtbl _IAccessibleEditableTextStubVtbl =
{
    &IID_IAccessibleEditableText,
    &IAccessibleEditableText_ServerInfo,
    10,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHyperlink, ver. 0.0,
   GUID={0x01C20F2B,0x3DD2,0x400f,{0x94,0x9F,0xAD,0x00,0xBD,0xAB,0x1D,0x41}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHyperlink_FormatStringOffsetTable[] =
    {
    198,
    234,
    270,
    312,
    366,
    408,
    2748,
    2790,
    2832,
    2868,
    2904
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHyperlink_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHyperlink_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHyperlink_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHyperlink_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(14) _IAccessibleHyperlinkProxyVtbl = 
{
    &IAccessibleHyperlink_ProxyInfo,
    &IID_IAccessibleHyperlink,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::nActions */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::doAction */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_keyBinding */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_name */ ,
    (void *) (INT_PTR) -1 /* IAccessibleAction::get_localizedName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_anchor */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_anchorTarget */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_startIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_endIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHyperlink::get_valid */
};

const CInterfaceStubVtbl _IAccessibleHyperlinkStubVtbl =
{
    &IID_IAccessibleHyperlink,
    &IAccessibleHyperlink_ServerInfo,
    14,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHypertext, ver. 0.0,
   GUID={0x6B4F8BBF,0xF1F2,0x418a,{0xB3,0x5E,0xA1,0x95,0xBC,0x41,0x03,0xB9}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHypertext_FormatStringOffsetTable[] =
    {
    1566,
    1608,
    72,
    1662,
    1728,
    1764,
    1818,
    1866,
    1914,
    1974,
    2034,
    2094,
    2130,
    2166,
    2214,
    2250,
    2298,
    2358,
    2394,
    2940,
    2976,
    3018
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHypertext_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(25) _IAccessibleHypertextProxyVtbl = 
{
    &IAccessibleHypertext_ProxyInfo,
    &IID_IAccessibleHypertext,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_nHyperlinks */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlink */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlinkIndex */
};

const CInterfaceStubVtbl _IAccessibleHypertextStubVtbl =
{
    &IID_IAccessibleHypertext,
    &IAccessibleHypertext_ServerInfo,
    25,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleHypertext2, ver. 0.0,
   GUID={0xCF64D89F,0x8287,0x4B44,{0x85,0x01,0xA8,0x27,0x45,0x3A,0x60,0x77}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleHypertext2_FormatStringOffsetTable[] =
    {
    1566,
    1608,
    72,
    1662,
    1728,
    1764,
    1818,
    1866,
    1914,
    1974,
    2034,
    2094,
    2130,
    2166,
    2214,
    2250,
    2298,
    2358,
    2394,
    2940,
    2976,
    3018,
    3060
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleHypertext2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleHypertext2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleHypertext2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(26) _IAccessibleHypertext2ProxyVtbl = 
{
    &IAccessibleHypertext2_ProxyInfo,
    &IID_IAccessibleHypertext2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleText::addSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_attributes */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_caretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_characterExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nSelections */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_offsetAtPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_selection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_text */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textBeforeOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAfterOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_textAtOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::removeSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setCaretOffset */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::setSelection */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_nCharacters */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringTo */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::scrollSubstringToPoint */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_newText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleText::get_oldText */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_nHyperlinks */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlink */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext::get_hyperlinkIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleHypertext2::get_hyperlinks */
};

const CInterfaceStubVtbl _IAccessibleHypertext2StubVtbl =
{
    &IID_IAccessibleHypertext2,
    &IAccessibleHypertext2_ServerInfo,
    26,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTable, ver. 0.0,
   GUID={0x35AD8070,0xC20C,0x4fb4,{0xB0,0x94,0xF4,0xF7,0x27,0x5D,0xD4,0x69}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTable_FormatStringOffsetTable[] =
    {
    3102,
    3150,
    3186,
    3234,
    3276,
    3324,
    3366,
    3408,
    2832,
    2868,
    3444,
    3480,
    3516,
    3558,
    3606,
    3648,
    3690,
    3738,
    3786,
    3834,
    3870,
    3912,
    3954,
    4002,
    4038,
    4074,
    4110,
    4146,
    4212
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTable_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTable_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(32) _IAccessibleTableProxyVtbl = 
{
    &IAccessibleTable_ProxyInfo,
    &IID_IAccessibleTable,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_accessibleAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_caption */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_childIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnExtentAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnHeader */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_columnIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedChildren */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_nSelectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowExtentAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowHeader */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedChildren */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_selectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_summary */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isColumnSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isRowSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_isSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::selectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::selectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::unselectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::unselectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_rowColumnExtentsAtIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable::get_modelChange */
};

const CInterfaceStubVtbl _IAccessibleTableStubVtbl =
{
    &IID_IAccessibleTable,
    &IAccessibleTable_ServerInfo,
    32,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTable2, ver. 0.0,
   GUID={0x6167f295,0x06f0,0x4cdd,{0xa1,0xfa,0x02,0xe2,0x51,0x53,0xd8,0x69}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTable2_FormatStringOffsetTable[] =
    {
    3102,
    3150,
    270,
    4248,
    1728,
    4284,
    4320,
    3408,
    4356,
    4398,
    4440,
    4482,
    4524,
    4560,
    4602,
    4644,
    4680,
    4716,
    4752,
    4788
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTable2_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable2_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTable2_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTable2_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(23) _IAccessibleTable2ProxyVtbl = 
{
    &IAccessibleTable2_ProxyInfo,
    &IID_IAccessibleTable2,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_cellAt */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_caption */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_columnDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_nSelectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_rowDescription */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedColumns */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_selectedRows */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_summary */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_isColumnSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_isRowSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::selectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::selectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::unselectRow */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::unselectColumn */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTable2::get_modelChange */
};

const CInterfaceStubVtbl _IAccessibleTable2StubVtbl =
{
    &IID_IAccessibleTable2,
    &IAccessibleTable2_ServerInfo,
    23,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleTableCell, ver. 0.0,
   GUID={0x594116B1,0xC99F,0x4847,{0xAD,0x06,0x0A,0x7A,0x86,0xEC,0xE6,0x45}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleTableCell_FormatStringOffsetTable[] =
    {
    198,
    4824,
    72,
    4248,
    4866,
    4284,
    4908,
    4944,
    5004
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleTableCell_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTableCell_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleTableCell_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleTableCell_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(12) _IAccessibleTableCellProxyVtbl = 
{
    &IAccessibleTableCell_ProxyInfo,
    &IID_IAccessibleTableCell,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnExtent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnHeaderCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_columnIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowExtent */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowHeaderCells */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowIndex */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_isSelected */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_rowColumnExtents */ ,
    (void *) (INT_PTR) -1 /* IAccessibleTableCell::get_table */
};

const CInterfaceStubVtbl _IAccessibleTableCellStubVtbl =
{
    &IID_IAccessibleTableCell,
    &IAccessibleTableCell_ServerInfo,
    12,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleImage, ver. 0.0,
   GUID={0xFE5ABB3D,0x615E,0x4f7b,{0x90,0x9F,0x5F,0x0E,0xDA,0x9E,0x8D,0xDE}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleImage_FormatStringOffsetTable[] =
    {
    0,
    5040,
    5088
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleImage_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleImage_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleImage_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleImage_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(6) _IAccessibleImageProxyVtbl = 
{
    &IAccessibleImage_ProxyInfo,
    &IID_IAccessibleImage,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_description */ ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_imagePosition */ ,
    (void *) (INT_PTR) -1 /* IAccessibleImage::get_imageSize */
};

const CInterfaceStubVtbl _IAccessibleImageStubVtbl =
{
    &IID_IAccessibleImage,
    &IAccessibleImage_ServerInfo,
    6,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0017, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IAccessibleApplication, ver. 0.0,
   GUID={0xD49DED83,0x5B25,0x43F4,{0x9B,0x95,0x93,0xB4,0x45,0x95,0x97,0x9E}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleApplication_FormatStringOffsetTable[] =
    {
    0,
    36,
    5130,
    5166
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleApplication_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleApplication_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleApplication_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(7) _IAccessibleApplicationProxyVtbl = 
{
    &IAccessibleApplication_ProxyInfo,
    &IID_IAccessibleApplication,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_appName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_appVersion */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_toolkitName */ ,
    (void *) (INT_PTR) -1 /* IAccessibleApplication::get_toolkitVersion */
};

const CInterfaceStubVtbl _IAccessibleApplicationStubVtbl =
{
    &IID_IAccessibleApplication,
    &IAccessibleApplication_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IAccessibleDocument, ver. 0.0,
   GUID={0xC48C7FCF,0x4AB5,0x4056,{0xAF,0xA6,0x90,0x2D,0x6E,0x1D,0x11,0x49}} */

#pragma code_seg(".orpc")
static const unsigned short IAccessibleDocument_FormatStringOffsetTable[] =
    {
    5202
    };

static const MIDL_STUBLESS_PROXY_INFO IAccessibleDocument_ProxyInfo =
    {
    &Object_StubDesc,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IAccessibleDocument_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    ia2_api_all__MIDL_ProcFormatString.Format,
    &IAccessibleDocument_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(4) _IAccessibleDocumentProxyVtbl = 
{
    &IAccessibleDocument_ProxyInfo,
    &IID_IAccessibleDocument,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IAccessibleDocument::get_anchorTarget */
};

const CInterfaceStubVtbl _IAccessibleDocumentStubVtbl =
{
    &IID_IAccessibleDocument,
    &IAccessibleDocument_ServerInfo,
    4,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Standard interface: __MIDL_itf_ia2_api_all_0000_0019, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    ia2_api_all__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _ia2_api_all_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IAccessibleHyperlinkProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleImageProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2_3ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleActionProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleValueProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTableProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleApplicationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTable2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleEditableTextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleHypertext2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleComponentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTableCellProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleHypertextProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleText2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleDocumentProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessible2_2ProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleRelationProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IAccessibleTextProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _ia2_api_all_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IAccessibleHyperlinkStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleImageStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2_3StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleActionStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleValueStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTableStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleApplicationStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTable2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleEditableTextStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleHypertext2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleComponentStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTableCellStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleHypertextStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleText2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleDocumentStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessible2_2StubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleRelationStubVtbl,
    ( CInterfaceStubVtbl *) &_IAccessibleTextStubVtbl,
    0
};

PCInterfaceName const _ia2_api_all_InterfaceNamesList[] = 
{
    "IAccessibleHyperlink",
    "IAccessibleImage",
    "IAccessible2_3",
    "IAccessibleAction",
    "IAccessibleValue",
    "IAccessible2",
    "IAccessibleTable",
    "IAccessibleApplication",
    "IAccessibleTable2",
    "IAccessibleEditableText",
    "IAccessibleHypertext2",
    "IAccessibleComponent",
    "IAccessibleTableCell",
    "IAccessibleHypertext",
    "IAccessibleText2",
    "IAccessibleDocument",
    "IAccessible2_2",
    "IAccessibleRelation",
    "IAccessibleText",
    0
};

const IID *  const _ia2_api_all_BaseIIDList[] = 
{
    0,
    0,
    &IID_IAccessible,
    0,
    0,
    &IID_IAccessible,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    &IID_IAccessible,
    0,
    0,
    0
};


#define _ia2_api_all_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _ia2_api_all, pIID, n)

int __stdcall _ia2_api_all_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _ia2_api_all, 19, 16 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 8 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 4 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _ia2_api_all, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _ia2_api_all, 19, *pIndex )
    
}

const ExtendedProxyFileInfo ia2_api_all_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _ia2_api_all_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _ia2_api_all_StubVtblList,
    (const PCInterfaceName * ) & _ia2_api_all_InterfaceNamesList,
    (const IID ** ) & _ia2_api_all_BaseIIDList,
    & _ia2_api_all_IID_Lookup, 
    19,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

