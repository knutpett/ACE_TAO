/* -*- C++ -*- */

//=============================================================================
/**
 *  @file CSD_ORBInitializer.h
 *
 *  $Id$
 *
 *  @author Yan Dai (dai_y@ociweb.com)
 */
//=============================================================================


#ifndef TAO_CSD_ORB_INITIALIZER_H
#define TAO_CSD_ORB_INITIALIZER_H

#include /**/ "ace/pre.h"

#include "tao/orbconf.h"

#if defined (TAO_HAS_CORBA_MESSAGING) && TAO_HAS_CORBA_MESSAGING != 0

#include "CSD_FW_Export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

//#include "tao/PortableInterceptorC.h"
#include "tao/LocalObject.h"
#include "tao/PI/ORBInitializerC.h"

// This is to remove "inherits via dominance" warnings from MSVC.
// MSVC is being a little too paranoid.
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

/// CSD ORB initializer.
class TAO_CSD_FW_Export TAO_CSD_ORBInitializer :
  public virtual PortableInterceptor::ORBInitializer,
  public virtual TAO_Local_RefCounted_Object
{
public:
  
  TAO_CSD_ORBInitializer ();

  virtual void pre_init (PortableInterceptor::ORBInitInfo_ptr info
                         ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));

  virtual void post_init (PortableInterceptor::ORBInitInfo_ptr info
                          ACE_ENV_ARG_DECL_WITH_DEFAULTS)
    ACE_THROW_SPEC ((CORBA::SystemException));
};

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#endif /* TAO_HAS_CORBA_MESSAGING && TAO_HAS_CORBA_MESSAGING != 0 */

#include /**/ "ace/post.h"

#endif /* TAO_CSD_ORB_INITIALIZER_H */
