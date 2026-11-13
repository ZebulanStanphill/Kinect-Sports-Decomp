extern unsigned int lbl_8216C67C;


unsigned int * fn_82F98E30(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x44);
  if (puVar1 != (unsigned int *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &lbl_8216C67C;
    puVar1[7] = 0;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

