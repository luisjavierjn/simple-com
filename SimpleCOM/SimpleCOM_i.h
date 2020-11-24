

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Tue Nov 24 00:13:32 2020
 */
/* Compiler settings for SimpleCOM.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SimpleCOM_i_h__
#define __SimpleCOM_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISimpleChatServer_FWD_DEFINED__
#define __ISimpleChatServer_FWD_DEFINED__
typedef interface ISimpleChatServer ISimpleChatServer;
#endif 	/* __ISimpleChatServer_FWD_DEFINED__ */


#ifndef __SimpleChatServer_FWD_DEFINED__
#define __SimpleChatServer_FWD_DEFINED__

#ifdef __cplusplus
typedef class SimpleChatServer SimpleChatServer;
#else
typedef struct SimpleChatServer SimpleChatServer;
#endif /* __cplusplus */

#endif 	/* __SimpleChatServer_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ISimpleChatServer_INTERFACE_DEFINED__
#define __ISimpleChatServer_INTERFACE_DEFINED__

/* interface ISimpleChatServer */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISimpleChatServer;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BA619428-BAD6-4F46-8E65-1B7B0575DEB5")
    ISimpleChatServer : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CallMe( 
            /* [in] */ BSTR clientName,
            /* [in] */ BSTR **helloMessage) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ISimpleChatServerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISimpleChatServer * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISimpleChatServer * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISimpleChatServer * This);
        
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CallMe )( 
            ISimpleChatServer * This,
            /* [in] */ BSTR clientName,
            /* [in] */ BSTR **helloMessage);
        
        END_INTERFACE
    } ISimpleChatServerVtbl;

    interface ISimpleChatServer
    {
        CONST_VTBL struct ISimpleChatServerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISimpleChatServer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISimpleChatServer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISimpleChatServer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISimpleChatServer_CallMe(This,clientName,helloMessage)	\
    ( (This)->lpVtbl -> CallMe(This,clientName,helloMessage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISimpleChatServer_INTERFACE_DEFINED__ */



#ifndef __SimpleCOMLib_LIBRARY_DEFINED__
#define __SimpleCOMLib_LIBRARY_DEFINED__

/* library SimpleCOMLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_SimpleCOMLib;

EXTERN_C const CLSID CLSID_SimpleChatServer;

#ifdef __cplusplus

class DECLSPEC_UUID("3F80789D-AD70-4A11-81B5-9D292E608276")
SimpleChatServer;
#endif
#endif /* __SimpleCOMLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


