extern int fn_82964628();


int fn_829675E8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_2 + (param_3 * 4 + param_4) * 4);
  if (*piVar1 == -1) {
    if (param_6 != 0) {
      iVar2 = fn_82964628(-*(double *)(*(int *)(param_5 * 4 + *(int *)(param_1 + 0x14)) + 0x20),
                            param_1,*(unsigned int *)(param_1 + 0x78));
      *piVar1 = iVar2;
      iVar2 = fn_82964628(-*(double *)(*(int *)(param_5 * 4 + *(int *)(param_1 + 0x14)) + 0x20),
                            param_1,*(unsigned int *)(param_1 + 0x78),param_3,param_4);
      if (iVar2 == -1) {
        return -1;
      }
      iVar3 = *(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14));
      *(unsigned int *)(iVar3 + 0x3c) = *(unsigned int *)(iVar3 + 0x3c) | 0x80000;
      *(int *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x14)) + 0x38) = *piVar1;
      return iVar2;
    }
    iVar3 = param_5 * 4;
    iVar2 = *(int *)(iVar3 + *(int *)(param_1 + 0x14));
    if (*(int *)(iVar2 + 0xc) == -1) {
      *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x14)) + 0xc) = param_3;
      *(int *)(*(int *)(iVar3 + *(int *)(param_1 + 0x14)) + 0x10) = param_4;
      *piVar1 = param_5;
    }
    else {
      iVar2 = fn_82964628(*(unsigned __int64 *)(iVar2 + 0x20),param_1,*(unsigned int *)(param_1 + 0x78),
                            param_3,param_4);
      *piVar1 = iVar2;
    }
  }
  return *piVar1;
}

