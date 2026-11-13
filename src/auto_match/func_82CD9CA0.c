extern int fn_82A1F248();
extern int fn_82CAEDF0();
extern int fn_82CAF0C0();


void fn_82CD9CA0(__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                  __int64 param_5,__int64 param_6,__int64 param_7,__int64 param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  int in_stack_00000054;
  
  param_8 = param_8 - param_7;
  uVar12 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3904);
  lVar3 = (__int64)*(int *)(in_stack_00000054 + 0x38fc) * (__int64)(int)param_7;
  lVar13 = (__int64)(int)*(unsigned int *)(in_stack_00000054 + 0x3904) * (__int64)(int)param_7;
  lVar5 = (__int64)((int)lVar3 >> 2);
  lVar4 = (__int64)((int)lVar13 >> 2);
  uVar11 = *(unsigned int *)(in_stack_00000054 + 0x3890);
  param_3 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38d4) + lVar5 + param_3;
  param_1 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38cc) + lVar3 + param_1;
  param_2 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38d0) + lVar5 + param_2;
  param_4 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38a8) + lVar13 + param_4;
  param_5 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38ac) + lVar4 + param_5;
  param_6 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38b0) + lVar4 + param_6;
  if (*(int *)(in_stack_00000054 + 0x34) == 0) {
    uVar6 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3938);
    uVar7 = *(unsigned int *)(in_stack_00000054 + 0x3898);
    uVar9 = uVar6;
    uVar10 = uVar7;
  }
  else {
    uVar7 = *(unsigned int *)(in_stack_00000054 + 0x3920);
    uVar12 = (unsigned __int64)uVar7;
    if ((int)uVar7 <= (int)uVar11) {
      uVar11 = uVar7;
    }
    uVar7 = *(unsigned int *)(in_stack_00000054 + 0x3898);
    uVar1 = *(unsigned int *)(in_stack_00000054 + 0x3924);
    uVar9 = (unsigned __int64)uVar1;
    uVar10 = uVar7;
    if ((int)uVar1 <= (int)uVar7) {
      uVar10 = uVar1;
    }
    uVar6 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3928);
    if ((int)*(unsigned int *)(in_stack_00000054 + 0x3928) <= (int)uVar7) {
      uVar7 = *(unsigned int *)(in_stack_00000054 + 0x3928);
    }
  }
  uVar2 = fn_82A1F248(param_4);
  iVar8 = (int)param_8;
  if (((~uVar2 & 0x400) == 0) || ((~uVar2 & 0x200) == 0)) {
    lVar3 = param_8;
    if (0 < iVar8) {
      do {
        fn_82CAF0C0(param_4,param_1,uVar11);
        lVar3 = lVar3 + -1;
        param_4 = uVar12 + param_4;
        param_1 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38fc) + param_1;
      } while (lVar3 != 0);
    }
  }
  else {
    lVar3 = param_8;
    if (0 < iVar8) {
      do {
        fn_82CAEDF0(param_4,param_1,uVar11);
        lVar3 = lVar3 + -1;
        param_4 = uVar12 + param_4;
        param_1 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38fc) + param_1;
      } while (lVar3 != 0);
    }
  }
  uVar12 = fn_82A1F248(param_5);
  if (((~uVar12 & 0x400) == 0) || ((~uVar12 & 0x200) == 0)) {
    if (0 < iVar8) {
      lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
      do {
        fn_82CAF0C0(param_5,param_2,uVar10);
        lVar3 = lVar3 + -1;
        param_5 = uVar9 + param_5;
        param_2 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3934) + param_2;
      } while (lVar3 != 0);
    }
  }
  else if (0 < iVar8) {
    lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
    do {
      fn_82CAEDF0(param_5,param_2,uVar10);
      lVar3 = lVar3 + -1;
      param_5 = uVar9 + param_5;
      param_2 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3934) + param_2;
    } while (lVar3 != 0);
  }
  uVar12 = fn_82A1F248(param_6);
  if (((~uVar12 & 0x400) == 0) || ((~uVar12 & 0x200) == 0)) {
    if (0 < iVar8) {
      lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
      do {
        fn_82CAF0C0(param_6,param_3,uVar7);
        lVar3 = lVar3 + -1;
        param_6 = uVar6 + param_6;
        param_3 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3934) + param_3;
      } while (lVar3 != 0);
    }
  }
  else if (0 < iVar8) {
    lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
    do {
      fn_82CAEDF0(param_6,param_3,uVar7);
      lVar3 = lVar3 + -1;
      param_6 = uVar6 + param_6;
      param_3 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3934) + param_3;
    } while (lVar3 != 0);
  }
  return;
}

