void fn_8285B568(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int iVar5;
  __int64 lVar6;
  int aiStack_10 [4];
  
  piVar2 = aiStack_10;
  piVar3 = (int *)(*(int *)(param_1 + 0x44) + *(int *)(param_2 + 8));
  uVar4 = 0;
  lVar6 = 2;
  aiStack_10[0] = *(int *)(param_1 + 0x34);
  aiStack_10[1] = *(unsigned int *)(param_1 + 0x38);
  do {
    if ((*(int *)(*piVar2 + 0x40) != 0) &&
       (iVar5 = *(int *)(*(int *)(*piVar2 + 0x40) + 0x44), iVar5 != 0)) {
      uVar4 = *(unsigned int *)(iVar5 + 0x44) + uVar4;
    }
    piVar2 = piVar2 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *piVar3 = (int)(piVar3 + 1);
  iVar5 = 0;
  *(unsigned char *)(piVar3 + 1) = 0;
  if ((uVar4 & 0xffffffff) != 0) {
    do {
      iVar1 = *piVar3 + iVar5;
      iVar5 = iVar5 + 1;
      *(unsigned char *)(iVar1 + 1) = 0;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    return;
  }
  return;
}

