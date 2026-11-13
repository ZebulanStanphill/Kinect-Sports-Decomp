unsigned __int64 fn_829D3EC8(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = -1;
  iVar5 = 0;
  iVar8 = -1;
  uVar6 = 0;
  if (*(unsigned int *)(param_1 + 4) != 0) {
    piVar4 = (int *)(param_1 + 4);
    do {
      iVar2 = iVar5;
      iVar3 = iVar7;
      iVar1 = iVar8;
      if (((piVar4[1] == 0) || (iVar2 = iVar8, iVar3 = iVar5, iVar1 = iVar7, piVar4[1] == 1)) &&
         (iVar7 = iVar3, iVar8 = iVar2, iVar1 != -1)) {
        return 0;
      }
      piVar4 = piVar4 + 2;
      uVar6 = uVar6 + 1;
      iVar5 = *piVar4 + iVar5;
    } while (uVar6 < *(unsigned int *)(param_1 + 4));
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar8;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar7;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar5;
  }
  return 1;
}

