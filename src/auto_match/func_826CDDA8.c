extern int fn_826CBE10();


void fn_826CDDA8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  
  *(unsigned int *)(param_1 + 0x18) = 1;
  puVar2 = (unsigned int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x24);
  fn_826CBE10(puVar2,puVar2,1);
  if ((iVar1 == 0) && (puVar2 = (unsigned int *)*puVar2, puVar2 != (unsigned int *)0x0)) {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  return;
}

