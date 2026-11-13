extern int fn_826D69D0();


unsigned int * fn_826F44D0(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)(param_1 + 8);
  if (*(unsigned int *)(param_1 + 0xc) < 0x10) {
    puVar1 = (unsigned int *)fn_826D69D0(puVar2,0x10);
  }
  else {
    puVar1 = (unsigned int *)*puVar2;
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) - 0x10;
    *puVar2 = puVar1 + 4;
  }
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
  }
  return puVar1;
}

