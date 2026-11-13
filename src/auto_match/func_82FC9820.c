extern unsigned int lbl_8216DFEC;


unsigned int * fn_82FC9820(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x2c);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_8216DFEC;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

