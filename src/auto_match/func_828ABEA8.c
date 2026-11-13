extern int fn_8265C9E0();
extern unsigned int lbl_82024528;


unsigned int * fn_828ABEA8(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_8265C9E0(8);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_82024528;
    puVar1[1] = *(unsigned int *)(param_1 + 4);
    return puVar1;
  }
  return (unsigned int *)0x0;
}

