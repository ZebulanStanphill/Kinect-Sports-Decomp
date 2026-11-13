extern int fn_82AC3838();
extern int fn_82AC3AA0();
extern int fn_82AC3BA8();
extern int fn_82AC3CC8();
extern int fn_82AC3E38();


unsigned int fn_82AC3FB0(int param_1,unsigned __int64 param_2,char param_3,char param_4,char param_5,
                  unsigned __int64 param_6,unsigned int *param_7,unsigned __int64 param_8)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  int *in_stack_00000054;
  
  if ((unsigned __int64)*param_7 <= (param_2 & 0x7fffffff) << 1) {
    return 0x80004005;
  }
  iVar1 = *in_stack_00000054;
  if (param_4 != '\0') {
    in_stack_00000054[iVar1 * 4 + 3] = in_stack_00000054[iVar1 * 4 + 3] & 0xffffeebf;
  }
  uVar3 = in_stack_00000054[iVar1 * 4 + 3];
  if (param_5 == '\0') {
    if ((uVar3 & 0x200) == 0) {
      in_stack_00000054[iVar1 * 4 + 3] = uVar3 & 0xffffefff;
    }
    uVar4 = 2;
    uVar3 = (unsigned int)((param_6 & 0xffffffff) << 8) & 0x100 | 0x200 |
            in_stack_00000054[iVar1 * 4 + 3] & 0xfffffeffU;
  }
  else {
    uVar4 = 3;
    uVar3 = uVar3 & 0xffffecff;
  }
  in_stack_00000054[iVar1 * 4 + 3] = uVar3;
  lVar5 = 0;
  do {
    iVar2 = (int)(((param_2 & 0x7fffffff) * 2 + lVar5 + 1 & 0x3fffffff) << 2);
    uVar3 = *(unsigned int *)(iVar2 + (int)param_7) >> 0x1e;
    if ((uVar3 != 0) && (uVar3 != uVar4)) {
      return 0x80004005;
    }
    lVar5 = lVar5 + 1;
    *(unsigned int *)(iVar2 + (int)param_7) = uVar4 << 0x1e | *(unsigned int *)(iVar2 + (int)param_7) & 0x3fffffff;
  } while ((int)lVar5 < 2);
  if (param_3 == '\0') {
    if (param_5 != '\0') goto LAB_82ac40b0;
  }
  else {
    if (param_5 == '\0') {
      return 0x80004005;
    }
LAB_82ac40b0:
    if ((param_3 != '\0') && ((*(unsigned int *)((int)param_2 * 0xc + param_1) & 0x1f) != 0)) {
      return 0x80004005;
    }
    if (param_5 != '\0') {
      if ((*(unsigned int *)((int)param_2 * 0xc + param_1) & 0x1f) != 0) {
        uVar3 = fn_82AC3838(param_1,param_2,param_8);
        goto LAB_82ac4160;
      }
      if (param_5 != '\0') {
        uVar3 = fn_82AC3AA0(param_1,param_2,param_3,param_8);
        goto LAB_82ac4160;
      }
    }
  }
  uVar3 = fn_82AC3E38(param_1,param_2,param_8,in_stack_00000054);
  if ((-1 < (int)uVar3) && (uVar3 = fn_82AC3BA8(param_1,param_2,param_6,param_8), -1 < (int)uVar3)
     ) {
    uVar3 = fn_82AC3CC8(param_1);
    uVar3 = (int)uVar3 >> 0x1f & uVar3;
  }
LAB_82ac4160:
  if (-1 < (int)uVar3) {
    if (param_5 != '\0') {
      in_stack_00000054[iVar1 * 4 + 3] = in_stack_00000054[iVar1 * 4 + 3] | 0x40;
    }
    return 0;
  }
  return uVar3;
}

