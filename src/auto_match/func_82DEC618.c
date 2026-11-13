extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82134508;


void fn_82DEC618(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int in_r0;
  unsigned int in_register_00010070;
  unsigned int in_register_00010074;
  unsigned int in_register_00010078;
  unsigned int in_vr7;
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  uVar2 = lbl_82002AE0;
  *param_1 = lbl_82002AE0;
  puVar1 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  param_1[4] = uVar2;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0x10 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  param_1[8] = uVar2;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  param_1[0xc] = uVar2;
  uVar2 = lbl_82134508;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0x30 & 0xfffffff0);
  *puVar1 = in_register_00010070;
  puVar1[1] = in_register_00010074;
  puVar1[2] = in_register_00010078;
  puVar1[3] = in_vr7;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar2;
  return;
}

