extern unsigned int lbl_8216DA28;


unsigned int * fn_82FBA2F8(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x54);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[0x10] = 0;
    *puVar1 = &lbl_8216DA28;
    puVar1[0x13] = 0;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

