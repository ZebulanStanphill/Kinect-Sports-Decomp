extern int memcpy();


void fn_82E4E558(__int64 param_1, __int64 param_2, __int64 param_3, __int64 param_4, __int64 param_5, __int64 param_6, unsigned int param_7, unsigned int param_8, int in_stack_00000054)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;

  
  uVar6 = (__int64)(int)param_7 * (__int64)*(int *)(in_stack_00000054 + 0x388c);
  uVar2 = (__int64)*(int *)(in_stack_00000054 + 0x38b0) * (__int64)(int)param_7;
  lVar5 = (__int64)((int)uVar6 >> 2) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 3) != 0);
  param_1 = uVar2 + param_1;
  lVar3 = (__int64)((int)uVar2 >> 2) + (unsigned __int64)((int)uVar2 < 0 && (uVar2 & 3) != 0);
  param_2 = lVar3 + param_2;
  lVar1 = (__int64)((int)param_7 >> 1) + (unsigned __int64)((int)param_7 < 0 && (param_7 & 1) != 0);
  lVar3 = lVar3 + param_3;
  lVar4 = (__int64)((int)param_8 >> 1) + (unsigned __int64)((int)param_8 < 0 && (param_8 & 1) != 0);
  param_4 = uVar6 + param_4;
  param_5 = lVar5 + param_5;
  lVar5 = lVar5 + param_6;
  if ((int)lVar1 < (int)lVar4) {
    lVar4 = lVar4 - lVar1;
    do {
      memcpy(param_4,param_1,*(unsigned int *)(in_stack_00000054 + 0x388c));
      param_4 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x388c) + param_4;
      param_1 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38b0) + param_1;
      memcpy(param_4,param_1);
      param_1 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38b0) + param_1;
      param_4 = param_4 + (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x388c);
      memcpy(param_5,param_2,*(unsigned int *)(in_stack_00000054 + 0x3894));
      memcpy(lVar5,lVar3,*(unsigned int *)(in_stack_00000054 + 0x3894));
      lVar4 = lVar4 + -1;
      param_2 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38b8) + param_2;
      lVar3 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38b8) + lVar3;
      param_5 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3894) + param_5;
      lVar5 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3894) + lVar5;
    } while (lVar4 != 0);
  }
  return;
}

