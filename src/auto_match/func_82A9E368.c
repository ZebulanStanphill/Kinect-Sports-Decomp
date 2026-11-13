extern int fn_82A9A548();


void fn_82A9E368(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  
  if (*(int *)(param_1 + 0x90) >= 0) {
    iVar1 = *(int *)(param_1 + 0x78);
    if (*(unsigned int *)(iVar1 + 4) <= param_2) {
      uVar3 = param_2 + 1;
      if (uVar3 > *(unsigned int *)(iVar1 + 8)) {
        fn_82A9A548(iVar1,uVar3,(int *)(param_1 + 0x90));
      }
      *(unsigned int *)(iVar1 + 4) = uVar3;
      if (*(int *)(param_1 + 0x90) < 0) {
        return;
      }
    }
    puVar2 = (unsigned int *)(param_2 * 0x18 + **(int **)(param_1 + 0x78));
    *puVar2 = param_2;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
  }
  return;
}

