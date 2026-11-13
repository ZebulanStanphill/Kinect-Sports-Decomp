extern unsigned int lbl_8216C69C;


unsigned int * fn_82F99428(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x18);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_8216C69C;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

