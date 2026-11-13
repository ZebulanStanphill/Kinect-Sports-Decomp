extern unsigned int lbl_82134504;
extern unsigned int lbl_82134508;


void fn_830838A8(unsigned int *param_1)

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
  
  *param_1 = 0xffffffff;
  *(unsigned char *)(param_1 + 1) = 2;
  uVar2 = lbl_82134508;
  *(unsigned char *)((int)param_1 + 5) = 1;
  param_1[4] = uVar2;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0x10 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  param_1[8] = lbl_82134504;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  return;
}

