void fn_82D01778(int param_1,int *param_2,int (**param_3)(),unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  if (param_2 != (int *)0x0) {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
    do {
      uVar3 = (unsigned __int64)(unsigned int)param_2[2];
      uVar2 = (__int64)param_2[3] * (__int64)(int)uVar1 + uVar3;
      if (uVar3 < (uVar2 & 0xffffffff)) {
        do {
          (*param_3)(uVar3,uVar1,0,param_4,param_5);
          uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 4);
          uVar3 = uVar1 + uVar3;
        } while ((uVar3 & 0xffffffff) < (uVar2 & 0xffffffff));
      }
      param_2 = (int *)*param_2;
    } while (param_2 != (int *)0x0);
  }
  return;
}

