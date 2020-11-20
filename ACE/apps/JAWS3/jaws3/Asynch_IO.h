/* -*- c++ -*- */
#ifndef JAWS_ASYNCH_IO_H
#define JAWS_ASYNCH_IO_H

#include "ace/Asynch_IO.h"
#include "ace/Message_Block.h"
#include "ace/Singleton.h"
#include "ace/Time_Value.h"

#include "jaws3/Export.h"
#include "jaws3/Jaws_IO.h"
#include "jaws3/Event_Result.h"

class JAWS_Asynch_IO;

class JAWS_Export JAWS_Asynch_IO : public JAWS_IO_Impl
{
public:

  static JAWS_Asynch_IO * instance (void)
  {
    return ACE_Singleton<JAWS_Asynch_IO, ACE_SYNCH_MUTEX>::instance ();
  }

  void send ( ACE_HANDLE handle
            , ACE_Message_Block *mb
            , JAWS_Event_Completer *completer
            , void *act = nullptr
            );

  void recv ( ACE_HANDLE handle
            , ACE_Message_Block *mb
            , JAWS_Event_Completer *completer
            , void *act = nullptr
            );

  void transmit ( ACE_HANDLE handle
                , ACE_HANDLE source
                , JAWS_Event_Completer *completer
                , void *act = nullptr
                , ACE_Message_Block *header = nullptr
                , ACE_Message_Block *trailer = nullptr
                );

  void send ( ACE_HANDLE handle
            , ACE_Message_Block *mb
            , JAWS_Event_Completer *completer
            , const ACE_Time_Value &tv
            , void *act = nullptr
            );

  void recv ( ACE_HANDLE handle
            , ACE_Message_Block *mb
            , JAWS_Event_Completer *completer
            , const ACE_Time_Value &tv
            , void *act = nullptr
            );

  void transmit ( ACE_HANDLE handle
                , ACE_HANDLE source
                , JAWS_Event_Completer *completer
                , const ACE_Time_Value &tv
                , void *act = nullptr
                , ACE_Message_Block *header = nullptr
                , ACE_Message_Block *trailer = nullptr
                );

};

#endif /* JAWS_ASYNCH_IO_H */
