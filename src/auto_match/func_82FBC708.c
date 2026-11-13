extern unsigned int lbl_8216DC08;


unsigned int * fn_82FBC708(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x1c);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_8216DC08;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

