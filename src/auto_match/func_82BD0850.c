extern int fn_82B7BD28();


void fn_82BD0850(int param_1,int *param_2,unsigned int *param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  iVar3 = *param_2;
  *param_2 = iVar3 + 1;
  if (iVar3 + 1 == 7) {
    *param_2 = 0;
    if (*param_3 == 0) {
      uVar1 = *(unsigned int *)(param_4 + 0x5b0);
      puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x24);
      *puVar2 = uVar1;
      *(unsigned int **)(param_1 + 8) = puVar2 + 1;
      puVar2[8] = 0;
      iVar3 = *(int *)(param_1 + 8);
    }
    else {
      if (*(unsigned int *)(*param_3 + 0x1c) == 0) {
        uVar1 = *(unsigned int *)(param_4 + 0x5b0);
        puVar2 = (unsigned int *)fn_82B7BD28(uVar1,0x24);
        *puVar2 = uVar1;
        *(unsigned int **)(*param_3 + 0x1c) = puVar2 + 1;
        *(unsigned int *)(*(int *)(*param_3 + 0x1c) + 0x1c) = 0;
      }
      iVar3 = *(int *)(*param_3 + 0x1c);
    }
    *param_3 = iVar3;
  }
  return;
}

