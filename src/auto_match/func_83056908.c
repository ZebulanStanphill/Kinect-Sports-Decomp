extern unsigned int lbl_8217E1AC;


unsigned int * fn_83056908(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x18);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &lbl_8217E1AC;
    puVar1[2] = 0;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

