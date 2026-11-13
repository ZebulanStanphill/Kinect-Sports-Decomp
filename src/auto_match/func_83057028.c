extern unsigned int lbl_8217E1C8;


unsigned int * fn_83057028(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x1c);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_8217E1C8;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

