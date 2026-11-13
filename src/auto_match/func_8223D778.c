extern unsigned int lbl_82167FA0;


void fn_8223D778(__int64 *param_1,int param_2,__int64 param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  
  param_3 = param_4 + param_3;
  uVar1 = **(unsigned int **)(param_2 + 0x24);
  if ((uVar1 != 0) && (*(unsigned int *)(param_2 + 0x3c) < uVar1)) {
    *(unsigned int *)(param_2 + 0x3c) = uVar1;
  }
  lVar5 = param_3;
  if (param_3 != lbl_82167FA0) {
    lVar5 = lbl_82167FA0;
    if (((param_6 & 1) == 0) || (**(int **)(param_2 + 0x20) == 0)) {
      if (((param_6 & 2) != 0) &&
         (((uVar1 = **(unsigned int **)(param_2 + 0x24), uVar1 != 0 && (-1 < param_3)) &&
          (param_3 <= *(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10))))) {
        iVar4 = ((int)param_3 - uVar1) + **(int **)(param_2 + 0x10);
        **(int **)(param_2 + 0x34) = **(int **)(param_2 + 0x34) - iVar4;
        **(int **)(param_2 + 0x24) = **(int **)(param_2 + 0x24) + iVar4;
        lVar5 = param_3;
      }
    }
    else if ((-1 < param_3) && (param_3 <= *(int *)(param_2 + 0x3c) - **(int **)(param_2 + 0x10))) {
      iVar4 = ((int)param_3 - **(int **)(param_2 + 0x20)) + **(int **)(param_2 + 0x10);
      **(int **)(param_2 + 0x30) = **(int **)(param_2 + 0x30) - iVar4;
      **(int **)(param_2 + 0x20) = **(int **)(param_2 + 0x20) + iVar4;
      lVar5 = param_3;
      if ((param_6 & 2) != 0) {
        iVar4 = **(int **)(param_2 + 0x24);
        if (iVar4 != 0) {
          iVar2 = **(int **)(param_2 + 0x34);
          iVar3 = **(int **)(param_2 + 0x20);
          **(int **)(param_2 + 0x24) = iVar3;
          **(int **)(param_2 + 0x34) = (iVar2 + iVar4) - iVar3;
        }
      }
    }
  }
  *param_1 = lVar5;
  param_1[1] = 0;
  *(unsigned int *)(param_1 + 2) = 0;
  return;
}

