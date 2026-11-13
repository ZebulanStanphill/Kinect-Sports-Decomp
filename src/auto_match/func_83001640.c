void fn_83001640(int param_1,unsigned char param_2,unsigned char param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 != 0) {
    *(unsigned char *)(iVar2 + 0x3d) = *(unsigned char *)(iVar2 + 0x3d) & ~param_3 | param_2;
  }
  piVar1 = *(int **)(param_1 + 0x54);
  if (piVar1 == (int *)0x0) {
    return;
  }
  iVar2 = *piVar1;
  if (iVar2 == piVar1[1]) {
    return;
  }
  do {
    piVar1 = (int *)(iVar2 + 4);
    iVar2 = iVar2 + 8;
    *(unsigned char *)(*piVar1 + 0x3d) = *(unsigned char *)(*piVar1 + 0x3d) & ~param_3 | param_2;
  } while (iVar2 != *(int *)(*(int *)(param_1 + 0x54) + 4));
  return;
}

