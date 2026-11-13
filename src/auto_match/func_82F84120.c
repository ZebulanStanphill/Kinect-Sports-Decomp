extern int fn_82A28568();
extern int fn_82A2A360();
extern int fn_82F68240();
extern int fn_82F800C8();
extern int iRam83263614;


unsigned __int64 fn_82F84120(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int *puVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar5;
  
  if (((param_1 & 0xffffffff) == 0) ||
     (trapWord(6,param_1,0), (param_2 & 0xffffffff) <= 0xfffff000 / (param_1 & 0xffffffff))) {
    uVar5 = (__int64)(int)param_1 * (__int64)(int)param_2;
    if (uVar5 == 0) {
      uVar5 = 1;
    }
    do {
      uVar1 = 0;
      if ((uVar5 & 0xffffffff) < 0xfffff001) {
        uVar2 = fn_82A2A360(0);
        uVar1 = fn_82A28568(uVar2,8,uVar5);
        if ((uVar1 & 0xffffffff) != 0) {
          return uVar1;
        }
      }
      if (iRam83263614 == 0) {
        if (param_3 != (unsigned int *)0x0) {
          *param_3 = 0xc;
          return uVar1;
        }
        return uVar1;
      }
      iVar4 = fn_82F800C8(uVar5);
    } while (iVar4 != 0);
    if (param_3 != (unsigned int *)0x0) {
      *param_3 = 0xc;
    }
  }
  else {
    puVar3 = (unsigned int *)fn_82F68240();
    *puVar3 = 0xc;
  }
  return 0;
}

