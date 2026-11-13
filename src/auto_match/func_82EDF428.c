extern int fn_82F68CC0();


void fn_82EDF428(__int64 param_1,__int64 param_2,__int64 param_3,__int64 param_4,
                  __int64 param_5,__int64 param_6,__int64 param_7,__int64 param_8)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  int in_stack_00000054;
  
  param_8 = param_8 - param_7;
  uVar2 = (__int64)*(int *)(in_stack_00000054 + 0x391c) * (__int64)(int)param_7;
  uVar1 = (__int64)*(int *)(in_stack_00000054 + 0x3924) * (__int64)(int)param_7;
  lVar4 = (__int64)((int)uVar2 >> 2) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 3) != 0);
  lVar3 = (__int64)((int)uVar1 >> 2) + (unsigned __int64)((int)uVar1 < 0 && (uVar1 & 3) != 0);
  param_1 = *(unsigned int *)(in_stack_00000054 + 0x38c8) + uVar2 + param_1;
  param_3 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38d0) + lVar4 + param_3;
  param_2 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38cc) + lVar4 + param_2;
  param_4 = *(unsigned int *)(in_stack_00000054 + 0x38a4) + uVar1 + param_4;
  param_5 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38a8) + lVar3 + param_5;
  param_6 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38ac) + lVar3 + param_6;
  lVar3 = param_8;
  if (0 < param_8) {
    do {
      fn_82F68CC0(param_4,param_1,*(unsigned int *)(in_stack_00000054 + 0x388c));
      lVar3 = lVar3 + -1;
      param_4 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3924) + param_4;
      param_1 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x391c) + param_1;
    } while (lVar3 != 0);
  }
  if (0 < (int)param_8) {
    lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
    do {
      fn_82F68CC0(param_5,param_2,*(unsigned int *)(in_stack_00000054 + 0x3894));
      lVar3 = lVar3 + -1;
      param_5 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3958) + param_5;
      param_2 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3954) + param_2;
    } while (lVar3 != 0);
    if (0 < (int)param_8) {
      lVar3 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
      do {
        fn_82F68CC0(param_6,param_3,*(unsigned int *)(in_stack_00000054 + 0x3894));
        lVar3 = lVar3 + -1;
        param_6 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3958) + param_6;
        param_3 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3954) + param_3;
      } while (lVar3 != 0);
    }
  }
  return;
}

