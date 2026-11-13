extern int fn_82A1DDC0();
extern int fn_82CD3A80();


void fn_82CD42A0(int param_1,__int64 param_2,__int64 param_3,int param_4,__int64 param_5,
                  __int64 param_6,__int64 param_7,__int64 param_8)

{
  unsigned char *puVar1;
  unsigned int uVar3;
  __int64 lVar2;
  unsigned char *puVar4;
  __int64 lVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  int in_stack_00000054;
  
  param_8 = param_8 - param_7;
  iVar7 = (int)param_8;
  uVar6 = *(unsigned int *)(in_stack_00000054 + 0x3904);
  uVar3 = *(int *)(in_stack_00000054 + 0x38fc) * (int)param_7;
  uVar8 = uVar6 * (int)param_7;
  lVar5 = (__int64)((int)uVar3 >> 2) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 3) != 0);
  lVar2 = (__int64)((int)uVar8 >> 2) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 3) != 0);
  param_2 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38d0) + lVar5 + param_2;
  param_3 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38d4) + lVar5 + param_3;
  lVar5 = ((unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3934) & 0x7fffffff) * 2;
  param_1 = *(int *)(in_stack_00000054 + 0x38cc) + uVar3 + param_1;
  param_4 = *(int *)(in_stack_00000054 + 0x38a8) + uVar8 + param_4;
  param_5 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38ac) + lVar2 + param_5;
  param_6 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x38b0) + lVar2 + param_6;
  if (iVar7 < 0x11) {
    lVar2 = param_8;
    if (0 < iVar7) {
      do {
        fn_82A1DDC0(param_4,param_1,*(unsigned int *)(in_stack_00000054 + 0x3890));
        lVar2 = lVar2 + -1;
        param_4 = *(int *)(in_stack_00000054 + 0x3904) + param_4;
        param_1 = *(int *)(in_stack_00000054 + 0x38fc) + param_1;
      } while (lVar2 != 0);
      if (0 < iVar7) {
        lVar2 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
        do {
          fn_82A1DDC0(param_5,param_2,*(unsigned int *)(in_stack_00000054 + 0x3898));
          lVar2 = lVar2 + -1;
          param_2 = lVar5 + param_2;
          param_5 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3938) + param_5;
        } while (lVar2 != 0);
        if (0 < iVar7) {
          lVar2 = ((param_8 - 1U & 0xffffffff) >> 1) + 1;
          do {
            fn_82A1DDC0(param_6,param_3,*(unsigned int *)(in_stack_00000054 + 0x3898));
            lVar2 = lVar2 + -1;
            param_3 = lVar5 + param_3;
            param_6 = (unsigned __int64)*(unsigned int *)(in_stack_00000054 + 0x3938) + param_6;
          } while (lVar2 != 0);
        }
      }
    }
  }
  else {
    if (0 < iVar7) {
      puVar1 = (unsigned char *)(param_4 + -1);
      puVar4 = (unsigned char *)(param_1 + -1);
      lVar2 = param_8;
      do {
        iVar7 = 0;
        if (0 < (int)uVar6) {
          do {
            puVar4 = puVar4 + 1;
            iVar7 = iVar7 + 1;
            puVar1 = puVar1 + 1;
            *puVar1 = *puVar4;
            uVar6 = *(unsigned int *)(in_stack_00000054 + 0x3904);
          } while (iVar7 < (int)uVar6);
        }
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    uVar3 = *(unsigned int *)(in_stack_00000054 + 0x3890);
    fn_82CD3A80(param_2,param_5,*(unsigned int *)(in_stack_00000054 + 0x38c0),
                  (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0),1,1,
                  (__int64)((int)uVar3 >> 1) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 1) != 0),
                  param_8);
    uVar6 = *(unsigned int *)(in_stack_00000054 + 0x3904);
    fn_82CD3A80(param_3,param_6,*(unsigned int *)(in_stack_00000054 + 0x38c0),
                  (__int64)((int)uVar6 >> 1) + (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 1) != 0));
  }
  return;
}

