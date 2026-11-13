extern unsigned int *auStack_50;
extern int fn_82F68CC0();


unsigned __int64 fn_82EE6048(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int auStack_50 [20];
  
  if (((param_3 & 0xffffffff) == 0) || ((int)param_4 == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else if (((unsigned __int64)*(unsigned int *)(param_1 + 0x18) < (param_2 + param_4 & 0xffffffff)) ||
          ((param_2 + param_4 & 0xffffffff) < (param_4 & 0xffffffff))) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    auStack_50[0] = 0;
    uVar5 = 0;
    puVar4 = (unsigned int *)(-(unsigned int)(param_1 + 4U != *(unsigned int *)(param_1 + 4)) & *(unsigned int *)(param_1 + 4));
    while ((puVar4 != (unsigned int *)0x0 && ((param_4 & 0xffffffff) != 0))) {
      uVar1 = *puVar4;
      (**(int (***)())(*(int *)puVar4[2] + 0x14))((int *)puVar4[2],auStack_50,0);
      if ((param_2 & 0xffffffff) <= (puVar4[4] + uVar5 & 0xffffffff)) {
        lVar3 = 0;
        if ((uVar5 & 0xffffffff) < (param_2 & 0xffffffff)) {
          lVar3 = param_2 - uVar5;
        }
        uVar6 = (unsigned __int64)puVar4[4] - lVar3;
        if ((param_4 & 0xffffffff) <= (uVar6 & 0xffffffff)) {
          uVar6 = param_4;
        }
        fn_82F68CC0(param_3,(unsigned __int64)puVar4[3] + lVar3 + (unsigned __int64)auStack_50[0],uVar6);
        param_3 = uVar6 + param_3;
        param_4 = param_4 - uVar6;
      }
      uVar5 = puVar4[4] + uVar5;
      puVar4 = (unsigned int *)(-(unsigned int)(param_1 + 4U != uVar1) & uVar1);
    }
    uVar2 = 0;
  }
  return uVar2;
}

