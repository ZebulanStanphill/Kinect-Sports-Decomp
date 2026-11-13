void fn_82FA90B0(int param_1)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x24); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    (*(int (**)())(*piVar1 + 8))(piVar1);
  }
  *(unsigned char *)(param_1 + 0x30) = *(unsigned char *)(param_1 + 0x30) | 0x40;
  return;
}

