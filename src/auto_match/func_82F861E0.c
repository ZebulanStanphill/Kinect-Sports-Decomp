extern int fn_82F68240();
extern int fn_82F691F0();
extern int fn_82F70530();
extern int fn_82F70620();


__int64 fn_82F861E0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  
  uVar3 = 0;
  if (((param_2 & 0xffffffff) == 0) ||
     (trapWord(6,param_2,0), (param_3 & 0xffffffff) <= 0xfffff000 / (param_2 & 0xffffffff))) {
    uVar4 = (__int64)(int)param_2 * (__int64)(int)param_3;
    if ((param_1 & 0xffffffff) != 0) {
      uVar3 = fn_82F70620(param_1);
    }
    lVar1 = fn_82F70530(param_1,uVar4);
    if ((lVar1 != 0) && ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3 + lVar1,0,uVar4 - uVar3);
    }
  }
  else {
    puVar2 = (unsigned int *)fn_82F68240();
    lVar1 = 0;
    *puVar2 = 0xc;
  }
  return lVar1;
}

