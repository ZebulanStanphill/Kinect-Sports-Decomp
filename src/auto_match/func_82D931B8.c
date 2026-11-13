extern int fn_830824B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8213A16C;
extern unsigned int lbl_821AAD20;


unsigned int * fn_82D931B8(unsigned int *param_1,float *param_2,unsigned __int64 param_3,char param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int in_r0;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  *param_1 = &lbl_8213A16C;
  *(unsigned short *)((int)param_1 + 6) = 1;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0xd0 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0xe0 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  fn_830824B8(param_1 + 4);
  *(unsigned char *)(param_1 + 2) = 0;
  uVar2 = lbl_821AAD20;
  param_1[0x2d] = lbl_821AAD20;
  param_1[0x2e] = uVar2;
  if (param_4 == '\0') {
    *(unsigned char *)((int)param_1 + 9) = 0xff;
  }
  else {
    *(unsigned char *)((int)param_1 + 9) = (unsigned char)(int)*param_2 & 0xf;
  }
  *(unsigned short *)((int)param_1 + 10) = 0;
  *(unsigned short *)(param_1 + 3) = 0;
  uVar2 = lbl_82002AE0;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0xf0 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0x100 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(short *)((int)param_1 + 0x11e) = (short)((unsigned int)uVar2 >> 0x10);
  return param_1;
}

