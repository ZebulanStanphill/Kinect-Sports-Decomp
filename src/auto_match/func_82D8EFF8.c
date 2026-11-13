void fn_82D8EFF8(unsigned int *param_1,int *param_2,int *param_3,int *param_4)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  
  iVar4 = 0;
  if (0 < param_2[1]) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(*param_2 + iVar5);
      iVar3 = *(int *)(*(int *)*param_1 + iVar5) * 4;
      *(unsigned int *)(*param_3 + iVar3) = 1;
      uVar1 = *(unsigned short *)(iVar2 + 0xb0);
      uVar6 = 1;
      if (uVar1 != 0) {
        uVar6 = (unsigned int)uVar1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      *(unsigned int *)(iVar3 + *param_4) = *(int *)(iVar3 + *param_4) + uVar6;
    } while (iVar4 < param_2[1]);
  }
  return;
}

