extern unsigned int *auStack_a0;
extern int fn_82A396A8();
extern int fn_82A396F0();
extern int fn_82F68CC0();


void fn_82A36D38(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  short *psVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int auStack_a0 [40];
  
  psVar2 = (short *)param_4;
  uVar7 = (unsigned __int64)*param_3;
  uVar8 = 0;
  uVar10 = 0;
  if (*psVar2 == 0) {
    uVar10 = param_6 - param_7;
    if (uVar7 <= (param_6 - param_7 & 0xffffffff)) {
      uVar10 = uVar7;
    }
    fn_82F68CC0(param_2,param_4 + param_7 + 2,uVar10);
  }
  else {
    if (((((param_4 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x3000)) &&
         ((param_5 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x3004))) &&
        ((param_6 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 0x3008))) &&
       ((unsigned __int64)*(unsigned int *)(param_1 + 0x300c) <= (param_7 & 0xffffffff))) {
      uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x301c);
      lVar4 = param_7 - *(unsigned int *)(param_1 + 0x300c);
      uVar9 = *(unsigned int *)(param_1 + 0x3010);
      uVar1 = uVar5 - lVar4;
      uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3014);
      param_4 = uVar9 + param_4;
      uVar1 = (((uVar1 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar1 == 0) & uVar1;
      uVar12 = *(unsigned int *)(param_1 + 0x3018) + uVar5;
      uVar10 = uVar1;
      if (uVar7 <= (uVar1 & 0xffffffff)) {
        uVar10 = uVar7;
      }
      uVar1 = uVar12 - uVar1;
      fn_82F68CC0(param_2,(unsigned __int64)*(unsigned int *)(param_1 + 0x3020) +
                           (unsigned __int64)*(unsigned int *)(param_1 + 0x3018) + lVar4,uVar10);
      param_2 = uVar10 + param_2;
      uVar11 = param_5 - uVar9;
      uVar6 = uVar10;
      uVar9 = (unsigned int)(uVar5 != 0);
    }
    else {
      fn_82A396A8(param_1 + 0x14);
      uVar12 = (unsigned __int64)auStack_a0[0];
      uVar6 = (unsigned __int64)auStack_a0[0];
      uVar1 = (unsigned __int64)auStack_a0[0];
      uVar11 = param_5;
      uVar9 = auStack_a0[0];
    }
    for (; (1 < (uVar11 & 0xffffffff) && ((uVar10 & 0xffffffff) < uVar7)); uVar10 = uVar6 + uVar10)
    {
      auStack_a0[0] = 0;
      uVar5 = (unsigned __int64)*(unsigned short *)param_4;
      if (uVar5 == 0) break;
      uVar12 = param_6 - uVar8;
      if (0x7fff < (uVar12 & 0xffffffff)) {
        uVar12 = 0x8000;
      }
      uVar6 = param_7 - uVar8;
      uVar1 = uVar12;
      if (((((uVar6 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar6 == 0) & uVar6 & 0xffffffff) <
          (uVar12 & 0xffffffff)) {
        uVar1 = (((uVar6 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(uVar6 == 0) & uVar6;
      }
      uVar6 = uVar7 - uVar10;
      if ((uVar12 - uVar1 & 0xffffffff) < (uVar7 - uVar10 & 0xffffffff)) {
        uVar6 = uVar12 - uVar1;
      }
      uVar9 = -(unsigned int)(uVar6 < uVar12) & 1;
      uVar3 = param_2;
      if (uVar9 != 0) {
        uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3020);
      }
      fn_82A396F0(param_1 + 0x14,uVar12,param_4 + 2,uVar5,uVar3,uVar12,auStack_a0);
      if (uVar9 != 0) {
        fn_82F68CC0(param_2,*(unsigned int *)(param_1 + 0x3020) + uVar1,uVar6);
      }
      uVar8 = uVar12 + uVar8;
      param_2 = uVar6 + param_2;
      param_4 = uVar5 + param_4 + 2;
      uVar11 = (uVar11 - 2) - uVar5;
    }
    *(short **)(param_1 + 0x3000) = psVar2;
    *(int *)(param_1 + 0x3004) = (int)param_5;
    *(int *)(param_1 + 0x3008) = (int)param_6;
    *(int *)(param_1 + 0x300c) = (int)uVar10 + (int)param_7;
    *(int *)(param_1 + 0x3010) = (int)(unsigned short *)param_4 - (int)psVar2;
    *(int *)(param_1 + 0x3014) = (int)uVar8;
    if (uVar9 == 0) {
      *(unsigned int *)(param_1 + 0x3018) = 0;
      *(unsigned int *)(param_1 + 0x301c) = 0;
    }
    else {
      *(int *)(param_1 + 0x3018) = (int)uVar1 + (int)uVar6;
      *(int *)(param_1 + 0x301c) = ((int)uVar12 - (int)uVar1) - (int)uVar6;
    }
  }
  *param_3 = (unsigned int)uVar10;
  return;
}

