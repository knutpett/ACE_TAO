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
// be\be_codegen.cpp:291


#include "IORManip_Loader.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:69

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from 
// be\be_visitor_exception/exception_cs.cpp:63

TAO_IOP::EmptyProfileList::EmptyProfileList (void)
  : CORBA::UserException (
        "IDL:TAO_IOP/EmptyProfileList:1.0",
        "EmptyProfileList"
      )
{
}

TAO_IOP::EmptyProfileList::~EmptyProfileList (void)
{
}

TAO_IOP::EmptyProfileList::EmptyProfileList (const ::TAO_IOP::EmptyProfileList &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

TAO_IOP::EmptyProfileList&
TAO_IOP::EmptyProfileList::operator= (const ::TAO_IOP::EmptyProfileList &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void TAO_IOP::EmptyProfileList::_tao_any_destructor (void *_tao_void_pointer)
{
  EmptyProfileList *_tao_tmp_pointer =
    static_cast<EmptyProfileList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

TAO_IOP::EmptyProfileList *
TAO_IOP::EmptyProfileList::_downcast (CORBA::Exception *_tao_excp)
{
  return dynamic_cast<EmptyProfileList *> (_tao_excp);
}

const TAO_IOP::EmptyProfileList *
TAO_IOP::EmptyProfileList::_downcast (CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const EmptyProfileList *> (_tao_excp);
}

CORBA::Exception *TAO_IOP::EmptyProfileList::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::TAO_IOP::EmptyProfileList, 0);
  return retval;
}

CORBA::Exception *
TAO_IOP::EmptyProfileList::_tao_duplicate (void) const
{
  CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::TAO_IOP::EmptyProfileList (*this),
      0
    );
  return result;
}

void TAO_IOP::EmptyProfileList::_raise (void) const
{
  TAO_RAISE (*this);
}

void TAO_IOP::EmptyProfileList::_tao_encode (
    TAO_OutputCDR &cdr
    ACE_ENV_ARG_DECL
  ) const
{
  if (cdr << *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

void TAO_IOP::EmptyProfileList::_tao_decode (
    TAO_InputCDR &cdr
    ACE_ENV_ARG_DECL
  )
{
  if (cdr >> *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr TAO_IOP::EmptyProfileList::_tao_type (void) const
{
  return ::TAO_IOP::_tc_EmptyProfileList;
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/exception_cs.cpp:63

TAO_IOP::NotFound::NotFound (void)
  : CORBA::UserException (
        "IDL:TAO_IOP/NotFound:1.0",
        "NotFound"
      )
{
}

TAO_IOP::NotFound::~NotFound (void)
{
}

TAO_IOP::NotFound::NotFound (const ::TAO_IOP::NotFound &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

TAO_IOP::NotFound&
TAO_IOP::NotFound::operator= (const ::TAO_IOP::NotFound &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void TAO_IOP::NotFound::_tao_any_destructor (void *_tao_void_pointer)
{
  NotFound *_tao_tmp_pointer =
    static_cast<NotFound *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

TAO_IOP::NotFound *
TAO_IOP::NotFound::_downcast (CORBA::Exception *_tao_excp)
{
  return dynamic_cast<NotFound *> (_tao_excp);
}

const TAO_IOP::NotFound *
TAO_IOP::NotFound::_downcast (CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const NotFound *> (_tao_excp);
}

CORBA::Exception *TAO_IOP::NotFound::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::TAO_IOP::NotFound, 0);
  return retval;
}

CORBA::Exception *
TAO_IOP::NotFound::_tao_duplicate (void) const
{
  CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::TAO_IOP::NotFound (*this),
      0
    );
  return result;
}

void TAO_IOP::NotFound::_raise (void) const
{
  TAO_RAISE (*this);
}

void TAO_IOP::NotFound::_tao_encode (
    TAO_OutputCDR &cdr
    ACE_ENV_ARG_DECL
  ) const
{
  if (cdr << *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

void TAO_IOP::NotFound::_tao_decode (
    TAO_InputCDR &cdr
    ACE_ENV_ARG_DECL
  )
{
  if (cdr >> *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr TAO_IOP::NotFound::_tao_type (void) const
{
  return ::TAO_IOP::_tc_NotFound;
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/exception_cs.cpp:63

TAO_IOP::Duplicate::Duplicate (void)
  : CORBA::UserException (
        "IDL:TAO_IOP/Duplicate:1.0",
        "Duplicate"
      )
{
}

TAO_IOP::Duplicate::~Duplicate (void)
{
}

TAO_IOP::Duplicate::Duplicate (const ::TAO_IOP::Duplicate &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

TAO_IOP::Duplicate&
TAO_IOP::Duplicate::operator= (const ::TAO_IOP::Duplicate &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void TAO_IOP::Duplicate::_tao_any_destructor (void *_tao_void_pointer)
{
  Duplicate *_tao_tmp_pointer =
    static_cast<Duplicate *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

TAO_IOP::Duplicate *
TAO_IOP::Duplicate::_downcast (CORBA::Exception *_tao_excp)
{
  return dynamic_cast<Duplicate *> (_tao_excp);
}

const TAO_IOP::Duplicate *
TAO_IOP::Duplicate::_downcast (CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const Duplicate *> (_tao_excp);
}

CORBA::Exception *TAO_IOP::Duplicate::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::TAO_IOP::Duplicate, 0);
  return retval;
}

CORBA::Exception *
TAO_IOP::Duplicate::_tao_duplicate (void) const
{
  CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::TAO_IOP::Duplicate (*this),
      0
    );
  return result;
}

void TAO_IOP::Duplicate::_raise (void) const
{
  TAO_RAISE (*this);
}

void TAO_IOP::Duplicate::_tao_encode (
    TAO_OutputCDR &cdr
    ACE_ENV_ARG_DECL
  ) const
{
  if (cdr << *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

void TAO_IOP::Duplicate::_tao_decode (
    TAO_InputCDR &cdr
    ACE_ENV_ARG_DECL
  )
{
  if (cdr >> *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr TAO_IOP::Duplicate::_tao_type (void) const
{
  return ::TAO_IOP::_tc_Duplicate;
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/exception_cs.cpp:63

TAO_IOP::Invalid_IOR::Invalid_IOR (void)
  : CORBA::UserException (
        "IDL:TAO_IOP/Invalid_IOR:1.0",
        "Invalid_IOR"
      )
{
}

TAO_IOP::Invalid_IOR::~Invalid_IOR (void)
{
}

TAO_IOP::Invalid_IOR::Invalid_IOR (const ::TAO_IOP::Invalid_IOR &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

TAO_IOP::Invalid_IOR&
TAO_IOP::Invalid_IOR::operator= (const ::TAO_IOP::Invalid_IOR &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void TAO_IOP::Invalid_IOR::_tao_any_destructor (void *_tao_void_pointer)
{
  Invalid_IOR *_tao_tmp_pointer =
    static_cast<Invalid_IOR *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

TAO_IOP::Invalid_IOR *
TAO_IOP::Invalid_IOR::_downcast (CORBA::Exception *_tao_excp)
{
  return dynamic_cast<Invalid_IOR *> (_tao_excp);
}

const TAO_IOP::Invalid_IOR *
TAO_IOP::Invalid_IOR::_downcast (CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const Invalid_IOR *> (_tao_excp);
}

CORBA::Exception *TAO_IOP::Invalid_IOR::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::TAO_IOP::Invalid_IOR, 0);
  return retval;
}

CORBA::Exception *
TAO_IOP::Invalid_IOR::_tao_duplicate (void) const
{
  CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::TAO_IOP::Invalid_IOR (*this),
      0
    );
  return result;
}

void TAO_IOP::Invalid_IOR::_raise (void) const
{
  TAO_RAISE (*this);
}

void TAO_IOP::Invalid_IOR::_tao_encode (
    TAO_OutputCDR &cdr
    ACE_ENV_ARG_DECL
  ) const
{
  if (cdr << *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

void TAO_IOP::Invalid_IOR::_tao_decode (
    TAO_InputCDR &cdr
    ACE_ENV_ARG_DECL
  )
{
  if (cdr >> *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr TAO_IOP::Invalid_IOR::_tao_type (void) const
{
  return ::TAO_IOP::_tc_Invalid_IOR;
}

// TAO_IDL - Generated from 
// be\be_visitor_exception/exception_cs.cpp:63

TAO_IOP::MultiProfileList::MultiProfileList (void)
  : CORBA::UserException (
        "IDL:TAO_IOP/MultiProfileList:1.0",
        "MultiProfileList"
      )
{
}

TAO_IOP::MultiProfileList::~MultiProfileList (void)
{
}

TAO_IOP::MultiProfileList::MultiProfileList (const ::TAO_IOP::MultiProfileList &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

TAO_IOP::MultiProfileList&
TAO_IOP::MultiProfileList::operator= (const ::TAO_IOP::MultiProfileList &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void TAO_IOP::MultiProfileList::_tao_any_destructor (void *_tao_void_pointer)
{
  MultiProfileList *_tao_tmp_pointer =
    static_cast<MultiProfileList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

TAO_IOP::MultiProfileList *
TAO_IOP::MultiProfileList::_downcast (CORBA::Exception *_tao_excp)
{
  return dynamic_cast<MultiProfileList *> (_tao_excp);
}

const TAO_IOP::MultiProfileList *
TAO_IOP::MultiProfileList::_downcast (CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const MultiProfileList *> (_tao_excp);
}

CORBA::Exception *TAO_IOP::MultiProfileList::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::TAO_IOP::MultiProfileList, 0);
  return retval;
}

CORBA::Exception *
TAO_IOP::MultiProfileList::_tao_duplicate (void) const
{
  CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::TAO_IOP::MultiProfileList (*this),
      0
    );
  return result;
}

void TAO_IOP::MultiProfileList::_raise (void) const
{
  TAO_RAISE (*this);
}

void TAO_IOP::MultiProfileList::_tao_encode (
    TAO_OutputCDR &cdr
    ACE_ENV_ARG_DECL
  ) const
{
  if (cdr << *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

void TAO_IOP::MultiProfileList::_tao_decode (
    TAO_InputCDR &cdr
    ACE_ENV_ARG_DECL
  )
{
  if (cdr >> *this)
    {
      return;
    }
  
  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr TAO_IOP::MultiProfileList::_tao_type (void) const
{
  return ::TAO_IOP::_tc_MultiProfileList;
}

// TAO_IDL - Generated from
// be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for TAO_IOP::TAO_IOR_Property.

TAO_IOP::TAO_IOR_Property_ptr
TAO::Objref_Traits<TAO_IOP::TAO_IOR_Property>::duplicate (
    TAO_IOP::TAO_IOR_Property_ptr p
  )
{
  return TAO_IOP::TAO_IOR_Property::_duplicate (p);
}

void
TAO::Objref_Traits<TAO_IOP::TAO_IOR_Property>::release (
    TAO_IOP::TAO_IOR_Property_ptr p
  )
{
  CORBA::release (p);
}

TAO_IOP::TAO_IOR_Property_ptr
TAO::Objref_Traits<TAO_IOP::TAO_IOR_Property>::nil (void)
{
  return TAO_IOP::TAO_IOR_Property::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<TAO_IOP::TAO_IOR_Property>::marshal (
    TAO_IOP::TAO_IOR_Property_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

TAO_IOP::TAO_IOR_Property::TAO_IOR_Property (void)
{}

TAO_IOP::TAO_IOR_Property::~TAO_IOR_Property (void)
{}

void 
TAO_IOP::TAO_IOR_Property::_tao_any_destructor (void *_tao_void_pointer)
{
  TAO_IOR_Property *_tao_tmp_pointer =
    static_cast<TAO_IOR_Property *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

TAO_IOP::TAO_IOR_Property_ptr
TAO_IOP::TAO_IOR_Property::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return TAO_IOR_Property::_nil ();
    }
  
  TAO_IOR_Property_ptr proxy =
    dynamic_cast<TAO_IOR_Property_ptr> (_tao_objref);
  
  return TAO_IOR_Property::_duplicate (proxy);
}

TAO_IOP::TAO_IOR_Property_ptr
TAO_IOP::TAO_IOR_Property::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return TAO_IOR_Property::_nil ();
    }
  
  TAO_IOR_Property_ptr proxy =
    dynamic_cast<TAO_IOR_Property_ptr> (_tao_objref);
  
  return TAO_IOR_Property::_duplicate (proxy);
}

TAO_IOP::TAO_IOR_Property_ptr
TAO_IOP::TAO_IOR_Property::_duplicate (TAO_IOR_Property_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
TAO_IOP::TAO_IOR_Property::_tao_release (TAO_IOR_Property_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
TAO_IOP::TAO_IOR_Property::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:TAO_IOP/TAO_IOR_Property:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* TAO_IOP::TAO_IOR_Property::_interface_repository_id (void) const
{
  return "IDL:TAO_IOP/TAO_IOR_Property:1.0";
}

CORBA::Boolean
TAO_IOP::TAO_IOR_Property::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from
// be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for TAO_IOP::TAO_IOR_Manipulation.

TAO_IOP::TAO_IOR_Manipulation_ptr
TAO::Objref_Traits<TAO_IOP::TAO_IOR_Manipulation>::duplicate (
    TAO_IOP::TAO_IOR_Manipulation_ptr p
  )
{
  return TAO_IOP::TAO_IOR_Manipulation::_duplicate (p);
}

void
TAO::Objref_Traits<TAO_IOP::TAO_IOR_Manipulation>::release (
    TAO_IOP::TAO_IOR_Manipulation_ptr p
  )
{
  CORBA::release (p);
}

TAO_IOP::TAO_IOR_Manipulation_ptr
TAO::Objref_Traits<TAO_IOP::TAO_IOR_Manipulation>::nil (void)
{
  return TAO_IOP::TAO_IOR_Manipulation::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<TAO_IOP::TAO_IOR_Manipulation>::marshal (
    TAO_IOP::TAO_IOR_Manipulation_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from 
// be\be_visitor_sequence/sequence_cs.cpp:65

#if !defined (_TAO_IOP_TAO_IOR_MANIPULATION_IORLIST_CS_)
#define _TAO_IOP_TAO_IOR_MANIPULATION_IORLIST_CS_

TAO_IOP::TAO_IOR_Manipulation::IORList::IORList (void)
{}

TAO_IOP::TAO_IOR_Manipulation::IORList::IORList (
    CORBA::ULong max
  )
  : TAO_Unbounded_Pseudo_Sequence<
        CORBA::Object
      >
    (max)
{}

TAO_IOP::TAO_IOR_Manipulation::IORList::IORList (
    CORBA::ULong max,
    CORBA::ULong length,
    CORBA::Object_ptr * buffer,
    CORBA::Boolean release
  )
  : TAO_Unbounded_Pseudo_Sequence<
        CORBA::Object
      >
    (max, length, buffer, release)
{}

TAO_IOP::TAO_IOR_Manipulation::IORList::IORList (
    const IORList &seq
  )
  : TAO_Unbounded_Pseudo_Sequence<
        CORBA::Object
      >
    (seq)
{}

TAO_IOP::TAO_IOR_Manipulation::IORList::~IORList (void)
{}

void TAO_IOP::TAO_IOR_Manipulation::IORList::_tao_any_destructor (
    void * _tao_void_pointer
  )
{
  IORList * _tao_tmp_pointer =
    static_cast<IORList *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

#endif /* end #if !defined */

TAO_IOP::TAO_IOR_Manipulation::TAO_IOR_Manipulation (void)
{}

TAO_IOP::TAO_IOR_Manipulation::~TAO_IOR_Manipulation (void)
{}

void 
TAO_IOP::TAO_IOR_Manipulation::_tao_any_destructor (void *_tao_void_pointer)
{
  TAO_IOR_Manipulation *_tao_tmp_pointer =
    static_cast<TAO_IOR_Manipulation *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

TAO_IOP::TAO_IOR_Manipulation_ptr
TAO_IOP::TAO_IOR_Manipulation::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return TAO_IOR_Manipulation::_nil ();
    }
  
  TAO_IOR_Manipulation_ptr proxy =
    dynamic_cast<TAO_IOR_Manipulation_ptr> (_tao_objref);
  
  return TAO_IOR_Manipulation::_duplicate (proxy);
}

TAO_IOP::TAO_IOR_Manipulation_ptr
TAO_IOP::TAO_IOR_Manipulation::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (CORBA::is_nil (_tao_objref))
    {
      return TAO_IOR_Manipulation::_nil ();
    }
  
  TAO_IOR_Manipulation_ptr proxy =
    dynamic_cast<TAO_IOR_Manipulation_ptr> (_tao_objref);
  
  return TAO_IOR_Manipulation::_duplicate (proxy);
}

TAO_IOP::TAO_IOR_Manipulation_ptr
TAO_IOP::TAO_IOR_Manipulation::_duplicate (TAO_IOR_Manipulation_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
TAO_IOP::TAO_IOR_Manipulation::_tao_release (TAO_IOR_Manipulation_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
TAO_IOP::TAO_IOR_Manipulation::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:TAO_IOP/TAO_IOR_Manipulation:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* TAO_IOP::TAO_IOR_Manipulation::_interface_repository_id (void) const
{
  return "IDL:TAO_IOP/TAO_IOR_Manipulation:1.0";
}

CORBA::Boolean
TAO_IOP::TAO_IOR_Manipulation::marshal (TAO_OutputCDR &)
{
  return false;
}

// TAO_IDL - Generated from
// be\be_visitor_exception/cdr_op_cs.cpp:60

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO_IOP::EmptyProfileList &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

CORBA::Boolean operator>> (
    TAO_InputCDR &,
    TAO_IOP::EmptyProfileList&
  )
{
  return true;
}

// TAO_IDL - Generated from
// be\be_visitor_exception/cdr_op_cs.cpp:60

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO_IOP::NotFound &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

CORBA::Boolean operator>> (
    TAO_InputCDR &,
    TAO_IOP::NotFound&
  )
{
  return true;
}

// TAO_IDL - Generated from
// be\be_visitor_exception/cdr_op_cs.cpp:60

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO_IOP::Duplicate &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

CORBA::Boolean operator>> (
    TAO_InputCDR &,
    TAO_IOP::Duplicate&
  )
{
  return true;
}

// TAO_IDL - Generated from
// be\be_visitor_exception/cdr_op_cs.cpp:60

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO_IOP::Invalid_IOR &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

CORBA::Boolean operator>> (
    TAO_InputCDR &,
    TAO_IOP::Invalid_IOR&
  )
{
  return true;
}

// TAO_IDL - Generated from
// be\be_visitor_exception/cdr_op_cs.cpp:60

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const TAO_IOP::MultiProfileList &_tao_aggregate
  )
{
  // Marshal the repository ID.
  return (strm << _tao_aggregate._rep_id ());
}

CORBA::Boolean operator>> (
    TAO_InputCDR &,
    TAO_IOP::MultiProfileList&
  )
{
  return true;
}
