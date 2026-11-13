extern int fn_82FAAD70();


void fn_82FAD2E8(int param_1)
{
  unsigned int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 4);
    if (piVar2[0x10] != 0) {
      fn_82FAAD70(piVar2,0);
    }
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      if (*(unsigned int *)(iVar1 + 4) == 0) {
        *(unsigned int *)(param_1 + 4) = 0;
        *(unsigned int *)(param_1 + 8) = 0;
      }
      else {
        *(unsigned int *)(param_1 + 4) = *(unsigned int *)(*(int *)(param_1 + 4) + 4);
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
    }
    (*(void (*)(int *))(*(int *)(*piVar2 + 8)))(piVar2);
    iVar1 = *(int *)(param_1 + 0xc);
  }
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  return;
}
