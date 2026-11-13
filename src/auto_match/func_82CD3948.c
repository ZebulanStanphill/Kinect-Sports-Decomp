extern int memcpy();


void fn_82CD3948(__int64 param_1, int param_2, int param_3, __int64 param_4, int param_5, int param_6, __int64 param_7, __int64 param_8, int in_stack_00000054)

{
  unsigned char uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;

  
  param_8 = param_8 - param_7;
  uVar3 = (__int64)*(int *)(in_stack_00000054 + 0x38fc) * (__int64)(int)param_7;
  uVar2 = (__int64)*(int *)(in_stack_00000054 + 0x3904) * (__int64)(int)param_7;
  iVar5 = ((int)uVar3 >> 2) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 3) != 0);
  iVar4 = ((int)uVar2 >> 2) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 3) != 0);
  param_1 = *(unsigned int *)(in_stack_00000054 + 0x38cc) + uVar3 + param_1;
  param_4 = *(unsigned int *)(in_stack_00000054 + 0x38a8) + uVar2 + param_4;
  param_2 = *(int *)(in_stack_00000054 + 0x38d0) + iVar5 + param_2;
  param_3 = *(int *)(in_stack_00000054 + 0x38d4) + iVar5 + param_3;
  param_5 = *(int *)(in_stack_00000054 + 0x38ac) + iVar4 + param_5;
  param_6 = *(int *)(in_stack_00000054 + 0x38b0) + iVar4 + param_6;
  lVar6 = param_8;
  if (0 < param_8) {
    do {
      memcpy(param_4,param_1,*(unsigned int *)(in_stack_00000054 + 0x3890));
      lVar6 = lVar6 + -1;
      param_4 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3904) + param_4;
      param_1 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38fc) + param_1;
    } while (lVar6 != 0);
  }
  if (0 < (int)param_8) {
    iVar4 = *(int *)(in_stack_00000054 + 0x3898);
    lVar6 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
    do {
      iVar5 = 0;
      if (0 < iVar4) {
        do {
          uVar1 = *(unsigned char *)((iVar5 >> 1) + param_2);
          *(unsigned char *)(param_5 + 1 + iVar5) = uVar1;
          *(unsigned char *)(param_5 + iVar5) = uVar1;
          uVar1 = *(unsigned char *)((iVar5 >> 1) + param_3);
          *(unsigned char *)(param_6 + 1 + iVar5) = uVar1;
          *(unsigned char *)(iVar5 + param_6) = uVar1;
          iVar5 = iVar5 + 2;
          iVar4 = *(int *)(in_stack_00000054 + 0x3898);
        } while (iVar5 < iVar4);
      }
      iVar5 = *(int *)(in_stack_00000054 + 0x3934) * 2;
      param_5 = *(int *)(in_stack_00000054 + 0x3938) + param_5;
      param_6 = *(int *)(in_stack_00000054 + 0x3938) + param_6;
      param_2 = iVar5 + param_2;
      param_3 = iVar5 + param_3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

