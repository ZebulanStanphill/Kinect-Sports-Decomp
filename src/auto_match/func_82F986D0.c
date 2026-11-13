extern unsigned int lbl_8216C65C;


unsigned int * fn_82F986D0(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x1c);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_8216C65C;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

