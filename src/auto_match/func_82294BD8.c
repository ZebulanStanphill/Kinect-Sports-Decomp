unsigned __int64 fn_82294BD8(int param_1)

{
  unsigned short *puVar1;
  unsigned short *puVar2;
  
  puVar1 = (unsigned short *)**(int **)(param_1 + 0x20);
  if (puVar1 != (unsigned short *)0x0) {
    if (puVar1 < puVar1 + **(int **)(param_1 + 0x30)) {
      return (unsigned __int64)*puVar1;
    }
    if ((((*(unsigned int *)(param_1 + 0x40) & 4) == 0) &&
        (puVar2 = (unsigned short *)**(unsigned int **)(param_1 + 0x24), puVar2 != (unsigned short *)0x0)) &&
       ((puVar1 < puVar2 || (puVar1 < *(unsigned short **)(param_1 + 0x3c))))) {
      if (*(unsigned short **)(param_1 + 0x3c) < puVar2) {
        *(unsigned short **)(param_1 + 0x3c) = puVar2;
      }
      **(int **)(param_1 + 0x30) = *(int *)(param_1 + 0x3c) - **(int **)(param_1 + 0x20) >> 1;
      return (unsigned __int64)*(unsigned short *)**(unsigned int **)(param_1 + 0x20);
    }
  }
  return 0xffffffffffffffff;
}

