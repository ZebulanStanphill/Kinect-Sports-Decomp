extern unsigned int lbl_82167FA0;


void fn_82294C78(__int64 *param_1,int param_2,__int64 param_3,int param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = **(unsigned int **)(param_2 + 0x24);
  if ((uVar1 != 0) && (*(unsigned int *)(param_2 + 0x3c) < uVar1)) {
    *(unsigned int *)(param_2 + 0x3c) = uVar1;
  }
  lVar3 = lbl_82167FA0;
  if (((param_5 & 1) != 0) && (iVar5 = **(int **)(param_2 + 0x20), iVar5 != 0)) {
    if (param_4 == 2) {
      iVar4 = *(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10);
LAB_82294cf0:
      param_3 = ((__int64)iVar4 >> 1) + param_3;
    }
    else if (param_4 == 1) {
      if ((param_5 & 2) == 0) {
        iVar4 = iVar5 - **(int **)(param_2 + 0x10);
        goto LAB_82294cf0;
      }
LAB_82294d08:
      param_3 = lbl_82167FA0;
    }
    else if (param_4 != 0) goto LAB_82294d08;
    if ((-1 < param_3) &&
       (param_3 <= (__int64)(*(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10)) >> 1)) {
      iVar5 = (**(int **)(param_2 + 0x10) - iVar5 >> 1) + (int)param_3;
      **(int **)(param_2 + 0x30) = **(int **)(param_2 + 0x30) - iVar5;
      **(int **)(param_2 + 0x20) = iVar5 * 2 + **(int **)(param_2 + 0x20);
      lVar3 = param_3;
      if ((param_5 & 2) != 0) {
        iVar5 = **(int **)(param_2 + 0x24);
        if (iVar5 != 0) {
          iVar4 = **(int **)(param_2 + 0x34);
          iVar2 = **(int **)(param_2 + 0x20);
          **(int **)(param_2 + 0x24) = iVar2;
          **(int **)(param_2 + 0x34) = (iVar4 * 2 + iVar5) - iVar2 >> 1;
        }
      }
    }
    goto LAB_82294e98;
  }
  if (((param_5 & 2) == 0) || (uVar1 = **(unsigned int **)(param_2 + 0x24), uVar1 == 0)) {
    lVar3 = param_3;
    if (param_3 != 0) {
      lVar3 = lbl_82167FA0;
    }
    goto LAB_82294e98;
  }
  if (param_4 == 2) {
    iVar5 = *(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10);
LAB_82294e04:
    param_3 = ((__int64)iVar5 >> 1) + param_3;
  }
  else {
    if (param_4 == 1) {
      iVar5 = uVar1 - **(int **)(param_2 + 0x10);
      goto LAB_82294e04;
    }
    if (param_4 != 0) {
      param_3 = lbl_82167FA0;
    }
  }
  if ((-1 < param_3) &&
     (param_3 <= (__int64)(*(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10)) >> 1)) {
    iVar5 = ((int)(**(int **)(param_2 + 0x10) - uVar1) >> 1) + (int)param_3;
    **(int **)(param_2 + 0x34) = **(int **)(param_2 + 0x34) - iVar5;
    **(int **)(param_2 + 0x24) = iVar5 * 2 + **(int **)(param_2 + 0x24);
    lVar3 = param_3;
  }
LAB_82294e98:
  *param_1 = lVar3;
  param_1[1] = 0;
  *(unsigned int *)(param_1 + 2) = 0;
  return;
}

