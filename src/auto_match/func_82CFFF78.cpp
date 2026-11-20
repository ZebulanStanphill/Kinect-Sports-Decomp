#include "havok/hkClass.h"

extern "C" unsigned int *fn_82CFFF78(unsigned int *param_1, unsigned int *param_2)
{
  unsigned int uVar1;
  unsigned int uVar2;

  uVar2 = (unsigned int)&((const hkClassMember *)param_2[1])->getStructClass();
  uVar1 = *param_2;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return param_1;
}
