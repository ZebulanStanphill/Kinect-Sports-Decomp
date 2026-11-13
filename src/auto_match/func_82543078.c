extern int fn_828116B8();


unsigned __int64 fn_82543078(int param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    if ((*(int *)param_3[1] != -1) && (uVar3 = 0, *param_3 != 0)) {
      iVar4 = 0;
      do {
        iVar1 = fn_828116B8(*(unsigned int *)
                              ((*(int *)(param_1 + 0xabb8) + 2) * 4 + *(int *)(param_2 + 4)),
                             *(unsigned int *)(iVar4 + param_3[1]));
        if (iVar1 == 0) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < *param_3);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    if (*param_3 != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(iVar4 + param_3[1]) == *(int *)(param_1 + 0x38)) {
          uVar2 = 1;
        }
        else if ((*(int *)(iVar4 + param_3[1]) != -1) &&
                (iVar1 = fn_828116B8(*(unsigned int *)
                                       ((*(int *)(param_1 + 0xabb8) + 2) * 4 + *(int *)(param_2 + 4)
                                       )), iVar1 == 0)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < *param_3);
    }
  }
  return uVar2;
}

