extern int fn_82230218();


unsigned char * fn_828C2760(unsigned char *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  puVar3 = (unsigned int *)(param_2 + 0x1c);
  fn_82230218(param_1,param_2,0,0xffffffffffffffff);
  puVar2 = (unsigned int *)(param_1 + 0x1c);
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  if (puVar2 != puVar3) {
    uVar1 = *(unsigned int *)(param_1 + 0x20);
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_2 + 0x20);
    *(unsigned int *)(param_2 + 0x20) = uVar1;
    uVar1 = *puVar2;
    *puVar2 = *puVar3;
    *puVar3 = uVar1;
  }
  return param_1;
}

