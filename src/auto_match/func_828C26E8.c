extern int fn_82230218();


unsigned char * fn_828C26E8(unsigned char *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0xf;
  *param_1 = 0;
  fn_82230218(param_1,param_2,0,0xffffffffffffffff);
  puVar2 = (unsigned int *)(param_1 + 0x1c);
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  if (puVar2 != param_3) {
    uVar1 = *(unsigned int *)(param_1 + 0x20);
    *(unsigned int *)(param_1 + 0x20) = param_3[1];
    param_3[1] = uVar1;
    uVar1 = *puVar2;
    *puVar2 = *param_3;
    *param_3 = uVar1;
  }
  return param_1;
}

