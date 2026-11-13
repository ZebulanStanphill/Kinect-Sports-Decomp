extern unsigned int lbl_8216DA40;


unsigned int * fn_82FBA810(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,0x4c);
  if (puVar1 != (unsigned int *)0x0) {
    *(unsigned char *)(puVar1 + 0x12) = 1;
    *puVar1 = &lbl_8216DA40;
    *(unsigned char *)((int)puVar1 + 0x49) = 1;
    *(unsigned char *)((int)puVar1 + 0x4a) = 1;
    return puVar1;
  }
  return (unsigned int *)0x0;
}

