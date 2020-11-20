// This may look like C, but it's really -*- C++ -*-

//=============================================================================
/**
 *  @file    ClientTask.h
 *
 *  @author  Tim Bradley <bradley_t@ociweb.com>
 */
//=============================================================================

#ifndef CLIENT_TASK_H
#define CLIENT_TASK_H

#include "FooC.h"
#include "CallbackC.h"
#include "ace/Task.h"

class ClientTask : public ACE_Task_Base
{
  public:

    ClientTask(Foo_ptr foo,
               Callback_ptr callback);

    virtual ~ClientTask();

    virtual int open(void* x = nullptr);
    virtual int svc();
    virtual int close(u_long);

  private:
    Foo_var foo_;
    Callback_var callback_;
};

#endif
