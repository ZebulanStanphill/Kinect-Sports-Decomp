extern unsigned int lbl_82167FA0;


void fn_82294EB0(__int64 *param_1,int param_2,__int64 param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  
  param_3 = param_4 + param_3;
  uVar1 = **(unsigned int **)(param_2 + 0x24);
  if ((uVar1 != 0) && (*(unsigned int *)(param_2 + 0x3c) < uVar1)) {
    *(unsigned int *)(param_2 + 0x3c) = uVar1;
  }
  lVar4 = param_3;
  if (param_3 != lbl_82167FA0) {
    lVar4 = lbl_82167FA0;
    if (((param_6 & 1) == 0) || (**(int **)(param_2 + 0x20) == 0)) {
      if (((param_6 & 2) != 0) &&
         (((uVar1 = **(unsigned int **)(param_2 + 0x24), uVar1 != 0 && (-1 < param_3)) &&
          (param_3 <= (__int64)(*(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10)) >> 1)))) {
        iVar5 = ((int)(**(int **)(param_2 + 0x10) - uVar1) >> 1) + (int)param_3;
        **(int **)(param_2 + 0x34) = **(int **)(param_2 + 0x34) - iVar5;
        **(int **)(param_2 + 0x24) = iVar5 * 2 + **(int **)(param_2 + 0x24);
        lVar4 = param_3;
      }
    }
    else if ((-1 < param_3) &&
            (param_3 <= (__int64)(*(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10)) >> 1)) {
      iVar5 = (**(int **)(param_2 + 0x10) - **(int **)(param_2 + 0x20) >> 1) + (int)param_3;
      **(int **)(param_2 + 0x30) = **(int **)(param_2 + 0x30) - iVar5;
      **(int **)(param_2 + 0x20) = iVar5 * 2 + **(int **)(param_2 + 0x20);
      lVar4 = param_3;
      if ((param_6 & 2) != 0) {
        iVar5 = **(int **)(param_2 + 0x24);
        if (iVar5 != 0) {
          iVar2 = **(int **)(param_2 + 0x34);
          iVar3 = **(int **)(param_2 + 0x20);
          **(int **)(param_2 + 0x24) = iVar3;
          **(int **)(param_2 + 0x34) = (iVar2 * 2 + iVar5) - iVar3 >> 1;
        }
      }
    }
  }
  *param_1 = lVar4;
  param_1[1] = 0;
  *(unsigned int *)(param_1 + 2) = 0;
  return;
}

