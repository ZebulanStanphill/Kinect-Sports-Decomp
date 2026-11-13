int fn_82DF4498(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    piVar2 = *(int **)(param_1 + 0x2c);
    do {
      if ((*(unsigned char *)(*piVar2 + 0xc) & 1) == 0) {
        return *piVar2;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x30));
  }
  return 0;
}

