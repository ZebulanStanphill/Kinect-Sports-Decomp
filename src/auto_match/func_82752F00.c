unsigned __int64 fn_82752F00(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  
  uVar1 = param_2[1];
  iVar3 = *param_1;
  if (((-(unsigned int)((uVar1 & 0x300) != 0) & 0x300 | uVar1 & 0x10 | 3) &
      (*(unsigned int *)(*(int *)(*(int *)(iVar3 + 0x14) + 0xc) + 0x14) | *(unsigned int *)(iVar3 + 8))) ==
      (uVar1 & 0x313)) {
    puVar2 = (unsigned int *)(*(unsigned int *)(iVar3 + 0xc) & 0xfffffffc);
    if ((*puVar2 & 0x7fffffff) == 0) {
      puVar2 = (unsigned int *)(**(int (***)())(**(int **)(*(int *)(iVar3 + 0x14) + 0xc) + 0x3c))();
    }
    else {
      puVar2 = puVar2 + 2;
    }
    iVar3 = thunk_FUN_82f65ac0(puVar2,*param_2);
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

