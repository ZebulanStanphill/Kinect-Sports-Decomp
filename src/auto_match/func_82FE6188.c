extern unsigned int lbl_8217BA9C;


unsigned int * fn_82FE6188(int param_1,int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_2 + 4))(param_2,0x10);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = &lbl_8217BA9C;
    puVar1[1] = *(unsigned int *)(param_1 + 4);
    puVar1[2] = *(unsigned int *)(param_1 + 8);
    puVar1[3] = *(unsigned int *)(param_1 + 0xc);
    return puVar1;
  }
  return (unsigned int *)0x0;
}

