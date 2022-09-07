#!/bin/bash
set -e

D=$PWD

export MPC_ROOT=$D/MPC
export ACE_ROOT=$D/ACE_TAO/ACE
export TAO_ROOT=$D/ACE_TAO/TAO

export CC=/usr/bin/gcc-9
export CXX=/usr/bin/g++-9

(cd $ACE_ROOT/apps/gperf; make)

echo "-------------------"
echo "Building $TAO_ROOT"
echo "-------------------"
cd $TAO_ROOT
#$ACE_ROOT/bin/mwc.pl -type gnuace TAO_ACE.mwc

echo '#include "ace/config-linux.h"' > $ACE_ROOT/ace/config.h
echo 'include $(ACE_ROOT)/include/makeinclude/platform_linux.GNU' > $ACE_ROOT/include/makeinclude/platform_macros.GNU
#echo 'CCFLAGS+=-Wno-old-style-cast' >> $ACE_ROOT/include/makeinclude/platform_macros.GNU
#echo 'CCFLAGS+=-Wno-unused-variable' >> $ACE_ROOT/include/makeinclude/platform_macros.GNU
#echo 'CCFLAGS+=-w' >> $ACE_ROOT/include/makeinclude/platform_macros.GNU
echo 'CCFLAGS+=-Wno-zero-as-null-pointer-constant' >> $ACE_ROOT/include/makeinclude/platform_macros.GNU
echo 'CCFLAGS+=-Wno-extra-semi' >> $ACE_ROOT/include/makeinclude/platform_macros.GNU
echo 'CCFLAGS+=-Wsuggest-override' >> $ACE_ROOT/include/makeinclude/platform_macros.GNU

make -j8

echo "-------------------"
echo "Building tests"
echo "-------------------"
cd $TAO_ROOT/tests/
#$ACE_ROOT/bin/mwc.pl -type gnuace tests.mwc
make -j8

echo "-------------------"
echo "Annotations"
echo "-------------------"

#make clean
cd $TAO_ROOT/tests/IDLv4/annotations
make -j8

export LD_LIBRARY_PATH=$TAO_ROOT/TAO_IDL:$ACE_ROOT/lib
ldd /home/knutps/src/knutps_ace_tao/ACE_TAO/ACE/bin/tao_idl

echo "-------------------"
echo "Running tests"
echo "-------------------"
./run_test.pl && echo success

echo Done
