// @(#)corbacom.cpp	1.1 95/08/31
// Copyright 1994-1995 by Sun Microsystems Inc.
// All Rights Reserved
//
// ORB:		support for primitive data types
//

#include	<assert.h>
#include	<limits.h>
#include	<string.h>
#include	<orb.hh>

#if	defined (HAVE_WIDEC_H)
#	include <widec.h>
#endif


//
// String utility support; this can need to be integrated with
// the ORB's own memory allocation subsystem.
//
CORBA_String
CORBA_string_alloc (CORBA_ULong len)
{
    return new CORBA_Char [(size_t)(len + 1)];
}

CORBA_String
CORBA_string_copy (const CORBA_Char *const str)
{
    if (!str)
	return 0;

    CORBA_String	retval = CORBA_string_alloc (strlen (str));

    return ACE_OS::strcpy (retval, str);
}

CORBA_String
CORBA_string_dup (const CORBA_Char *const str)
{
  return CORBA_string_copy(str);
}

void
CORBA_string_free (CORBA_Char *const str)
{
    delete []str;
}

// ----------------------------------------------------------------------
// String_var type
// ----------------------------------------------------------------------

CORBA_String_var::CORBA_String_var()
{
  this->ptr_ = 0;
}

CORBA_String_var::~CORBA_String_var()
{
  if (this->ptr_ != 0){
    CORBA_string_free(this->ptr_);
  }
}

CORBA_String_var::CORBA_String_var(char* p)
{
  // argument is consumed. p should never be NULL
  if (this->ptr_ != p){
    if (this->ptr_ != 0){
      CORBA_string_free(this->ptr_);
    }
    this->ptr_ = p;
  }
}

CORBA_String_var::CORBA_String_var(const char* p)
    : ptr_((char *)p)
{
  if (this->ptr_ != 0){
    CORBA_string_free(this->ptr_);
  }
  this->ptr_ = CORBA_string_dup(p);
}

CORBA_String_var::CORBA_String_var(const CORBA_String_var& r)
{
  if (this->ptr_ != 0){
    CORBA_string_free(this->ptr_);
  }
  this->ptr_ = CORBA_string_dup(r.ptr_);
}

CORBA_String_var&
CORBA_String_var::operator=(char* p)
{
  if (this->ptr_ != p){
    if (this->ptr_ != 0){
      CORBA_string_free(this->ptr_);
    }
    this->ptr_ = p;
  }
  return *this;
}

CORBA_String_var&
CORBA_String_var::operator=(const char* p)
{
  if (this->ptr_ != 0){
    CORBA_string_free(this->ptr_);
  }
  this->ptr_ = CORBA_string_dup(p);

  return *this;
}

CORBA_String_var&
CORBA_String_var::operator=(const CORBA_String_var& r)
{
  if (this->ptr_ != 0){
    CORBA_string_free(this->ptr_);
  }
  this->ptr_ = CORBA_string_dup(r.ptr_);
  return *this;
}

CORBA_Char& CORBA_String_var::operator[](CORBA_ULong index)
{
  // we need to verify bounds else raise some exception
  return this->ptr_[index];
}

CORBA_Char CORBA_String_var::operator[](CORBA_ULong index) const
{
  // we need to verify bounds else raise some exception
  return this->ptr_[index];
}

#if	!defined (HAVE_WIDEC_H)
//
// NOTE:  assuming that these don't exist unless they're declared in
// that header file ...
//

extern "C" unsigned
wslen (const CORBA_WChar *str)
{
    unsigned len = 0;

    while (*str++)
	len++;
    return len;
}

extern "C" CORBA_WChar *
wscpy (CORBA_WChar *dest, const CORBA_WChar *src)
{
    CORBA_WChar	*retval = dest;

    while ((*dest++ = *src++) != 0)
	continue;
    return retval;
}

#endif	// HAVE_WIDEC_H

//
// Wide Character string utility support; this can need to be
// integrated with the ORB's own memory allocation subsystem.
//
CORBA_WString
CORBA_wstring_alloc (CORBA_ULong len)
{
    return new CORBA_WChar [(size_t) (len + 1)];
}

CORBA_WString
CORBA_wstring_copy (const CORBA_WChar *const str)
{
    if (*str)
	return 0;

    CORBA_WString	retval = CORBA_wstring_alloc (wslen (str));
    return wscpy (retval, str);
}

void
CORBA_wstring_free (CORBA_WChar *const str)
{
    delete str;
}

