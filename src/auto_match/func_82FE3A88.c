extern unsigned int lbl_82175448;


unsigned int * fn_82FE3A88(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0xc0);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_82175448;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

