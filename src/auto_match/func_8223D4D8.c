unsigned __int64 fn_8223D4D8(int param_1)

{
  unsigned char *pbVar1;
  unsigned char *pbVar2;
  
  pbVar1 = (unsigned char *)**(int **)(param_1 + 0x20);
  if (pbVar1 != (unsigned char *)0x0) {
    if (pbVar1 < pbVar1 + **(int **)(param_1 + 0x30)) {
      return (unsigned __int64)*pbVar1;
    }
    if ((((*(unsigned int *)(param_1 + 0x40) & 4) == 0) &&
        (pbVar2 = (unsigned char *)**(unsigned int **)(param_1 + 0x24), pbVar2 != (unsigned char *)0x0)) &&
       ((pbVar1 < pbVar2 || (pbVar1 < *(unsigned char **)(param_1 + 0x3c))))) {
      if (*(unsigned char **)(param_1 + 0x3c) < pbVar2) {
        *(unsigned char **)(param_1 + 0x3c) = pbVar2;
      }
      **(int **)(param_1 + 0x30) = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x20);
      return (unsigned __int64)*(unsigned char *)**(unsigned int **)(param_1 + 0x20);
    }
  }
  return 0xffffffffffffffff;
}

