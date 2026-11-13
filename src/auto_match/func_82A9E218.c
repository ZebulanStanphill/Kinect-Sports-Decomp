extern int fn_82A9CF38();


void fn_82A9E218(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  if (*(int *)(param_1 + 0x90) >= 0) {
    iVar1 = *(int *)(param_1 + 100);
    if (*(unsigned int *)(iVar1 + 4) <= param_2) {
      uVar3 = param_2 + 1;
      if (uVar3 > *(unsigned int *)(iVar1 + 8)) {
        fn_82A9CF38(iVar1,uVar3,(int *)(param_1 + 0x90));
      }
      *(unsigned int *)(iVar1 + 4) = uVar3;
      if (*(int *)(param_1 + 0x90) < 0) {
        return;
      }
    }
    puVar2 = (unsigned int *)(param_2 * 8 + **(int **)(param_1 + 100));
    *puVar2 = param_3;
    puVar2[1] = puVar2[1] | 0x80000000;
  }
  return;
}

