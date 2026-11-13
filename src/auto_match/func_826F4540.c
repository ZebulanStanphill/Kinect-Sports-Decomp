extern int fn_826D69D0();


unsigned int * fn_826F4540(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar1 = (unsigned int *)(param_1 + 8);
  if (*(unsigned int *)(param_1 + 0xc) < 0x10) {
    puVar2 = (unsigned int *)fn_826D69D0(puVar1,0x10);
  }
  else {
    puVar2 = (unsigned int *)*puVar1;
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) - 0x10;
    *puVar1 = puVar2 + 4;
  }
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = 0x40000;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  }
  return puVar2;
}

