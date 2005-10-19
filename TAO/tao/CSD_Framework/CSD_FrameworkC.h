// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:154

#ifndef _TAO_IDL_ORIG_CSD_FRAMEWORKC_H_
#define _TAO_IDL_ORIG_CSD_FRAMEWORKC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "CSD_FW_Export.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Environment.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"

#include "tao/PortableServer/PortableServer.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_CSD_FW_Export

// TAO_IDL - Generated from
// c:\csd\code\doc\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:49

namespace CSD_Framework
{
  
  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:646

#if !defined (_CSD_FRAMEWORK_STRATEGY__VAR_OUT_CH_)
#define _CSD_FRAMEWORK_STRATEGY__VAR_OUT_CH_
  
  class Strategy;
  typedef Strategy *Strategy_ptr;
  
  typedef
    TAO_Objref_Var_T<
        Strategy
      >
    Strategy_var;
  
  typedef
    TAO_Objref_Out_T<
        Strategy
      >
    Strategy_out;

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // c:\csd\code\doc\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:54

#if !defined (_CSD_FRAMEWORK_STRATEGY_CH_)
#define _CSD_FRAMEWORK_STRATEGY_CH_
  
  class TAO_CSD_FW_Export Strategy
    : public virtual ::CORBA::Object
  {
  public:
    typedef Strategy_ptr _ptr_type;
    typedef Strategy_var _var_type;
    
    // The static operations.
    static Strategy_ptr _duplicate (Strategy_ptr obj);
    
    static void _tao_release (Strategy_ptr obj);
    
    static Strategy_ptr _narrow (
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static Strategy_ptr _unchecked_narrow (
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static Strategy_ptr _nil (void)
    {
      return static_cast<Strategy_ptr> (0);
    }
    
    
    
    // TAO_IDL - Generated from
    // c:\csd\code\doc\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:46
    
    virtual ::CORBA::Boolean apply_to (
        ::PortableServer::POA_ptr p
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException
      )) = 0;
    
    // TAO_IDL - Generated from
    // c:\csd\code\doc\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:210
    
    virtual ::CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    Strategy (void);
    
    virtual ~Strategy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Strategy (const Strategy &);
    
    void operator= (const Strategy &);
  };

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:646

#if !defined (_CSD_FRAMEWORK_POA__VAR_OUT_CH_)
#define _CSD_FRAMEWORK_POA__VAR_OUT_CH_
  
  class POA;
  typedef POA *POA_ptr;
  
  typedef
    TAO_Objref_Var_T<
        POA
      >
    POA_var;
  
  typedef
    TAO_Objref_Out_T<
        POA
      >
    POA_out;

#endif /* end #if !defined */
  
  // TAO_IDL - Generated from
  // c:\csd\code\doc\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:54

#if !defined (_CSD_FRAMEWORK_POA_CH_)
#define _CSD_FRAMEWORK_POA_CH_
  
  class TAO_CSD_FW_Export POA
    : public virtual ::PortableServer::POA
  {
  public:
    typedef POA_ptr _ptr_type;
    typedef POA_var _var_type;
    
    // The static operations.
    static POA_ptr _duplicate (POA_ptr obj);
    
    static void _tao_release (POA_ptr obj);
    
    static POA_ptr _narrow (
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static POA_ptr _unchecked_narrow (
        ::CORBA::Object_ptr obj
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    static POA_ptr _nil (void)
    {
      return static_cast<POA_ptr> (0);
    }
    
    
    
    // TAO_IDL - Generated from
    // c:\csd\code\doc\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_ch.cpp:46
    
    virtual void set_csd_strategy (
        ::CSD_Framework::Strategy_ptr s
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      )
      ACE_THROW_SPEC ((
        ::CORBA::SystemException
      )) = 0;
    
    // TAO_IDL - Generated from
    // c:\csd\code\doc\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:210
    
    virtual ::CORBA::Boolean _is_a (
        const char *type_id
        ACE_ENV_ARG_DECL_WITH_DEFAULTS
      );
    
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    POA (void);
    
    virtual ~POA (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    POA (const POA &);
    
    void operator= (const POA &);
  };

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\csd\code\doc\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:78

} // module CSD_Framework

// TAO_IDL - Generated from
// .\be\be_visitor_traits.cpp:61

// Traits specializations.
namespace TAO
{

#if !defined (_CSD_FRAMEWORK_STRATEGY__TRAITS_)
#define _CSD_FRAMEWORK_STRATEGY__TRAITS_
  
  template<>
  struct TAO_CSD_FW_Export Objref_Traits< ::CSD_Framework::Strategy>
  {
    static ::CSD_Framework::Strategy_ptr duplicate (
        ::CSD_Framework::Strategy_ptr
      );
    static void release (
        ::CSD_Framework::Strategy_ptr
      );
    static ::CSD_Framework::Strategy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        ::CSD_Framework::Strategy_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */

#if !defined (_CSD_FRAMEWORK_POA__TRAITS_)
#define _CSD_FRAMEWORK_POA__TRAITS_
  
  template<>
  struct TAO_CSD_FW_Export Objref_Traits< ::CSD_Framework::POA>
  {
    static ::CSD_Framework::POA_ptr duplicate (
        ::CSD_Framework::POA_ptr
      );
    static void release (
        ::CSD_Framework::POA_ptr
      );
    static ::CSD_Framework::POA_ptr nil (void);
    static ::CORBA::Boolean marshal (
        ::CSD_Framework::POA_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}

#include /**/ "ace/post.h"

#endif /* ifndef */


