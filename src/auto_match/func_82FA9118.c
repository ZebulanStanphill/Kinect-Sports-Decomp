void fn_82FA9118(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x24);
  *(unsigned char *)(param_1 + 0x30) = *(unsigned char *)(param_1 + 0x30) & 0xbf;
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    (*(int (**)())(*piVar1 + 0xc))(piVar1);
  }
  return;
}

