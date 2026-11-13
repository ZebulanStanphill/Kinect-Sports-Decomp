extern unsigned int lbl_8217BA9C;


unsigned int * fn_82FE6450(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x10);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_8217BA9C;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

