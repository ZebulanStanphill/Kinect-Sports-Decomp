#include "havok/hkTransform.h"

typedef int (*Fn_82D6B118)(void *, int *, int *, unsigned);

extern "C" void fn_82D6B118(int *param_1,int *param_2,int *param_3,unsigned param_4)

{
  int iVar1;
  struct {int data[2]; const hkTransform *buffer; int *object;} context;
  hkTransform auStack_70;
  
  iVar1 = *param_1;
  auStack_70.setMul(*(const hkTransform *)param_1[2],*(const hkTransform *)(iVar1 + 0x30));
  context.object = param_1;
  context.buffer = &auStack_70;
  context.data[0] = *(int *)(iVar1 + 0x14);
  context.data[1] = 0;
  (*(Fn_82D6B118 *)((unsigned int)*(unsigned char *)((*(int *)(context.data[0] + 0xc) + 0xd) * 0x20 +
                               *(int *)(*param_2 + 0xc) + *param_3) * 0x14 + *param_3 + 0x9a8))
            (&context,param_2,param_3,param_4);
  return;
}
