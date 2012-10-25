// -*- C++ -*-

//=============================================================================
/**
 *  @file
 *
 *  $Id$
 *
 *   Header file for Loading DynamicTP Configurations.
 *
 *
 *  @author
 */
//=============================================================================

#ifndef TAO_DYNAMIC_TP_CONFIG_H
#define TAO_DYNAMIC_TP_CONFIG_H
#include /**/ "ace/pre.h"

#include "tao/orbconf.h"

#if defined (TAO_HAS_CORBA_MESSAGING) && TAO_HAS_CORBA_MESSAGING != 0

#include "tao/Dynamic_TP/dynamic_tp_export.h"
#include "ace/Service_Object.h"
#include "ace/Service_Config.h"
#include "ace/RB_Tree.h"
#include "ace/Synch.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

class TAO_Dynamic_TP_Export TAO_Dynamic_TP_Config : public ACE_Service_Object
{
public:
  enum TP_Lifespan {
    TP_INFINITE,
    TP_IDLE,
    TP_FIXED
  };

  struct TP_Definition {
    int min_threads_;
    int init_threads_;
    int max_threads_;
    size_t stack_size_;
    TP_Lifespan lifespan_;
    time_t timeout_;
    size_t queue_depth_;
 };

  typedef ACE_RB_Tree<ACE_CString, TP_Definition, ACE_Less_Than<ACE_CString>, ACE_Null_Mutex> TP_Definitions;

  /// Constructor.
  TAO_Dynamic_TP_Config (void);

  /// Destructor.
  virtual ~TAO_Dynamic_TP_Config (void);

  /// Read a definition parameter set from the supplied args.
  /// There must be a -TPName argument, which, if replicated will cause the set to be ignored, unless -TPOverwrite is also set
  /// constriants: min threads <= initial threads <= max_threads.
  /// defaults: min threads = initial = max = 5
  /// default lifespan = infinite
  /// idle timeout is in secondes, default = 60
  /// default stack size = 0, system defined default used.
  /// queue depth is in number of messages, default is infinite
  /// Init can be called multiple times,
  virtual int init (int argc, ACE_TCHAR* []);

  /// initializes the supplied set value with the configuration associated with the name, or returns false.
  bool find (const ACE_CString& name, TP_Definition &entry) const;

private:
  int parse_long (int &curarg, int argc, ACE_TCHAR* argv[], const ACE_TCHAR *match, long &value);
  int parse_bool (int &curarg, int argc, ACE_TCHAR* argv[], const ACE_TCHAR *match, bool &value);
  int parse_string (int &curarg, int argc, ACE_TCHAR* argv[], const ACE_TCHAR *match, ACE_TCHAR *&value);
  void report_option_value_error (const ACE_TCHAR* option_name,
                                  const ACE_TCHAR* option_value);

  TP_Definitions definitions_;

};


ACE_STATIC_SVC_DECLARE_EXPORT (TAO_Dynamic_TP, TAO_Dynamic_TP_Config)
ACE_FACTORY_DECLARE (TAO_Dynamic_TP, TAO_Dynamic_TP_Config)

TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* (TAO_HAS_CORBA_MESSAGING) && TAO_HAS_CORBA_MESSAGING != 0 */

#include /**/ "ace/post.h"
#endif /* TAO_DYNAMIC_TP_CONFIG_H */
