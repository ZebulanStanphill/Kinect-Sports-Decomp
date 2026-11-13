extern unsigned int lbl_8216C640;


unsigned int * fn_82F97E20(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x38);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &lbl_8216C640;
    puVar1[2] = 0;
    puVar1[8] = 0;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

