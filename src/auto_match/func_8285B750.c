void fn_8285B750(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  int iVar9;
  __int64 lVar10;
  int aiStack_20 [4];
  
  uVar8 = 0;
  iVar1 = *(int *)(param_1 + 0x44);
  piVar7 = aiStack_20;
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = *(int *)(param_3 + 8);
  aiStack_20[0] = *(int *)(param_1 + 0x34);
  lVar10 = 2;
  aiStack_20[1] = *(unsigned int *)(param_1 + 0x38);
  do {
    if ((*(int *)(*piVar7 + 0x40) != 0) &&
       (iVar9 = *(int *)(*(int *)(*piVar7 + 0x40) + 0x44), iVar9 != 0)) {
      uVar8 = *(unsigned int *)(iVar9 + 0x44) + uVar8;
    }
    piVar7 = piVar7 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar9 = 0;
  **(unsigned char **)(iVar3 + iVar1) = **(unsigned char **)(iVar2 + iVar1);
  uVar6 = uVar8 & 0xffffffff;
  while (uVar6 != 0) {
    iVar4 = *(int *)(iVar2 + iVar1) + iVar9;
    iVar5 = *(int *)(iVar3 + iVar1) + iVar9;
    iVar9 = iVar9 + 1;
    *(unsigned char *)(iVar5 + 1) = *(unsigned char *)(iVar4 + 1);
    uVar8 = uVar8 - 1;
    uVar6 = uVar8;
  }
  return;
}

