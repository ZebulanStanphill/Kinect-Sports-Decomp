extern unsigned int lbl_82167FA0;


void fn_8223D570(__int64 *param_1,int param_2,__int64 param_3,int param_4,unsigned __int64 param_5)

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
LAB_8223d5e8:
      param_3 = iVar4 + param_3;
    }
    else if (param_4 == 1) {
      if ((param_5 & 2) == 0) {
        iVar4 = iVar5 - **(int **)(param_2 + 0x10);
        goto LAB_8223d5e8;
      }
LAB_8223d5fc:
      param_3 = lbl_82167FA0;
    }
    else if (param_4 != 0) goto LAB_8223d5fc;
    if ((-1 < param_3) && (param_3 <= *(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10))) {
      iVar5 = ((int)param_3 - iVar5) + **(int **)(param_2 + 0x10);
      **(int **)(param_2 + 0x30) = **(int **)(param_2 + 0x30) - iVar5;
      **(int **)(param_2 + 0x20) = **(int **)(param_2 + 0x20) + iVar5;
      lVar3 = param_3;
      if ((param_5 & 2) != 0) {
        iVar5 = **(int **)(param_2 + 0x24);
        if (iVar5 != 0) {
          iVar4 = **(int **)(param_2 + 0x34);
          iVar2 = **(int **)(param_2 + 0x20);
          **(int **)(param_2 + 0x24) = iVar2;
          **(int **)(param_2 + 0x34) = (iVar4 + iVar5) - iVar2;
        }
      }
    }
    goto LAB_8223d760;
  }
  if (((param_5 & 2) == 0) || (uVar1 = **(unsigned int **)(param_2 + 0x24), uVar1 == 0)) {
    lVar3 = param_3;
    if (param_3 != 0) {
      lVar3 = lbl_82167FA0;
    }
    goto LAB_8223d760;
  }
  if (param_4 == 2) {
    iVar5 = *(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10);
LAB_8223d6dc:
    param_3 = iVar5 + param_3;
  }
  else {
    if (param_4 == 1) {
      iVar5 = uVar1 - **(int **)(param_2 + 0x10);
      goto LAB_8223d6dc;
    }
    if (param_4 != 0) {
      param_3 = lbl_82167FA0;
    }
  }
  if ((-1 < param_3) && (param_3 <= *(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10))) {
    iVar5 = ((int)param_3 - uVar1) + **(int **)(param_2 + 0x10);
    **(int **)(param_2 + 0x34) = **(int **)(param_2 + 0x34) - iVar5;
    **(int **)(param_2 + 0x24) = **(int **)(param_2 + 0x24) + iVar5;
    lVar3 = param_3;
  }
LAB_8223d760:
  *param_1 = lVar3;
  param_1[1] = 0;
  *(unsigned int *)(param_1 + 2) = 0;
  return;
}

