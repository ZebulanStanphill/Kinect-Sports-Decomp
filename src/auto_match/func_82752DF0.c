unsigned __int64 fn_82752DF0(int *param_1,int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  
  iVar5 = *param_1;
  iVar1 = *param_2;
  if (iVar5 == iVar1) {
    uVar2 = 1;
  }
  else {
    if ((((*(unsigned int *)(*(int *)(*(int *)(iVar1 + 0x14) + 0xc) + 0x14) | *(unsigned int *)(iVar1 + 8)) ^
         (*(unsigned int *)(*(int *)(*(int *)(iVar5 + 0x14) + 0xc) + 0x14) | *(unsigned int *)(iVar5 + 8))) & 0x313)
        == 0) {
      puVar3 = (unsigned int *)(*(unsigned int *)(iVar1 + 0xc) & 0xfffffffc);
      if ((*puVar3 & 0x7fffffff) == 0) {
        puVar3 = (unsigned int *)(**(int (***)())(**(int **)(*(int *)(iVar1 + 0x14) + 0xc) + 0x3c))();
      }
      else {
        puVar3 = puVar3 + 2;
      }
      puVar4 = (unsigned int *)(*(unsigned int *)(*param_1 + 0xc) & 0xfffffffc);
      if ((*puVar4 & 0x7fffffff) == 0) {
        puVar4 = (unsigned int *)(**(int (***)())(**(int **)(*(int *)(*param_1 + 0x14) + 0xc) + 0x3c))();
      }
      else {
        puVar4 = puVar4 + 2;
      }
      iVar5 = thunk_FUN_82f65ac0(puVar4,puVar3);
      if (iVar5 == 0) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

