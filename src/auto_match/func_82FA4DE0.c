extern unsigned int lbl_8216CB38;


unsigned int * fn_82FA4DE0(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,100);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_8216CB38;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

