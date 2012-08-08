// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.1.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:152

#ifndef _TAO_IDL_TESTC_K47ZXW_H_
#define _TAO_IDL_TESTC_K47ZXW_H_

#include /**/ "ace/pre.h"


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 1 || TAO_BETA_VERSION != 3
#error This file should be regenerated with TAO_IDL
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO 

// TAO_IDL - Generated from
// be/be_visitor_root/root_ch.cpp:160
TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:38

namespace Test
{

  // TAO_IDL - Generated from
  // be/be_interface.cpp:750

#if !defined (_TEST_SERVER__VAR_OUT_CH_)
#define _TEST_SERVER__VAR_OUT_CH_

  class Server;
  typedef Server *Server_ptr;

  typedef
    TAO_Objref_Var_T<
        Server
      >
    Server_var;
  
  typedef
    TAO_Objref_Out_T<
        Server
      >
    Server_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_interface/interface_ch.cpp:43

  class  Server
    : public virtual ::CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Server>;

    // TAO_IDL - Generated from
    // be/be_type.cpp:307

    typedef Server_ptr _ptr_type;
    typedef Server_var _var_type;
    typedef Server_out _out_type;

    // The static operations.
    static Server_ptr _duplicate (Server_ptr obj);

    static void _tao_release (Server_ptr obj);

    static Server_ptr _narrow (::CORBA::Object_ptr obj);
    static Server_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Server_ptr _nil (void);

    virtual void shutdown (
      void);

    // TAO_IDL - Generated from
    // be/be_visitor_interface/interface_ch.cpp:140

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Server (void);

    // Concrete non-local interface only.
    Server (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Server (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~Server (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    Server (const Server &);

    void operator= (const Server &);
  };

// TAO_IDL - Generated from
// be/be_visitor_module/module_ch.cpp:67

} // module Test

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:68

TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:147

#if !defined (_TEST_SERVER__ARG_TRAITS_)
#define _TEST_SERVER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::Test::Server>
    : public
        Object_Arg_Traits_T<
            ::Test::Server_ptr,
            ::Test::Server_var,
            ::Test::Server_out,
            TAO::Objref_Traits<Test::Server>,
            TAO::Any_Insert_Policy_Noop
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_traits.cpp:62

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_TEST_SERVER__TRAITS_)
#define _TEST_SERVER__TRAITS_

  template<>
  struct  Objref_Traits< ::Test::Server>
  {
    static ::Test::Server_ptr duplicate (
        ::Test::Server_ptr p);
    static void release (
        ::Test::Server_ptr p);
    static ::Test::Server_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::Test::Server_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_visitor_interface/cdr_op_ch.cpp:44

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const Test::Server_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, Test::Server_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be/be_codegen.cpp:1703
#if defined (__ACE_INLINE__)
#include "TestC.inl"
#endif /* defined INLINE */

#include /**/ "ace/post.h"

#endif /* ifndef */
