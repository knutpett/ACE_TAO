// $Id$

// This file was automatically generated by the Scheduler_Factory.
// Before editing the file please consider generating it again.

#include "orbsvcs/Scheduler_Factory.h"


// There were no scheduling anomalies.


static ACE_Scheduler_Factory::POD_RT_Info infos[] = {
 {"high_20_S" , 1, 5000, 5000, 5000,   500000,  static_cast<RtecScheduler::Criticality_t> (3),  static_cast<RtecScheduler::Importance_t> (1),  0, 1,  15, 11, 0, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"low_20_S"  , 2, 5000, 5000, 5000,   500000,  static_cast<RtecScheduler::Criticality_t> (1),  static_cast<RtecScheduler::Importance_t> (3),  0, 1,   2, 11, 1, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"high_10_S" , 3, 10000, 10000, 10000,  1000000,  static_cast<RtecScheduler::Criticality_t> (3),  static_cast<RtecScheduler::Importance_t> (1),  0, 1,  15, 8, 0, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"low_10_S"  , 4, 10000, 10000, 10000,  1000000,  static_cast<RtecScheduler::Criticality_t> (1),  static_cast<RtecScheduler::Importance_t> (3),  0, 1,   2, 8, 1, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"high_05_S" , 5, 20000, 20000, 20000,  2000000,  static_cast<RtecScheduler::Criticality_t> (3),  static_cast<RtecScheduler::Importance_t> (1),  0, 1,  15, 5, 0, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"low_05_S"  , 6, 20000, 20000, 20000,  2000000,  static_cast<RtecScheduler::Criticality_t> (1),  static_cast<RtecScheduler::Importance_t> (3),  0, 1,   2, 5, 1, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"high_01_S" , 7, 100000, 100000, 100000, 10000000,  static_cast<RtecScheduler::Criticality_t> (3),  static_cast<RtecScheduler::Importance_t> (1),  0, 0,  15, 2, 0, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"low_01_S"  , 8, 100000, 100000, 100000, 10000000,  static_cast<RtecScheduler::Criticality_t> (1),  static_cast<RtecScheduler::Importance_t> (3),  0, 0,   2, 2, 1, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"high_20_C" , 9, 0, 0, 0,        0,  static_cast<RtecScheduler::Criticality_t> (3),  static_cast<RtecScheduler::Importance_t> (1),  0, 0,  15, 9, 0, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"low_20_C"  , 10, 0, 0, 0,        0,  static_cast<RtecScheduler::Criticality_t> (1),  static_cast<RtecScheduler::Importance_t> (3),  0, 0,   2, 9, 1, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"high_10_C" , 11, 0, 0, 0,        0,  static_cast<RtecScheduler::Criticality_t> (3),  static_cast<RtecScheduler::Importance_t> (1),  0, 0,  15, 6, 0, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"low_10_C"  , 12, 0, 0, 0,        0,  static_cast<RtecScheduler::Criticality_t> (1),  static_cast<RtecScheduler::Importance_t> (3),  0, 0,   2, 6, 1, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"high_05_C" , 13, 0, 0, 0,        0,  static_cast<RtecScheduler::Criticality_t> (3),  static_cast<RtecScheduler::Importance_t> (1),  0, 0,  15, 3, 0, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"low_05_C"  , 14, 0, 0, 0,        0,  static_cast<RtecScheduler::Criticality_t> (1),  static_cast<RtecScheduler::Importance_t> (3),  0, 0,   2, 3, 1, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"high_01_C" , 15, 0, 0, 0,        0,  static_cast<RtecScheduler::Criticality_t> (3),  static_cast<RtecScheduler::Importance_t> (1),  0, 0,  15, 0, 0, static_cast<RtecScheduler::Info_Type_t> (0)}
,
 {"low_01_C"  , 16, 0, 0, 0,        0,  static_cast<RtecScheduler::Criticality_t> (1),  static_cast<RtecScheduler::Importance_t> (3),  0, 0,   2, 0, 1, static_cast<RtecScheduler::Info_Type_t> (0)}

};

static int infos_size = sizeof(infos)/sizeof(infos[0]);


static ACE_Scheduler_Factory::POD_Config_Info configs[] = {
  {          0,         15, (RtecScheduler::Dispatching_Type_t) 2 },
  {          1,          2, (RtecScheduler::Dispatching_Type_t) 2 }
};

static int configs_size = sizeof(configs)/sizeof(configs[0]);


// This sets up Scheduler_Factory to use the runtime version.
int scheduler_factory_setup = 
  ACE_Scheduler_Factory::use_runtime (configs_size, configs, infos_size, infos);

// EOF
