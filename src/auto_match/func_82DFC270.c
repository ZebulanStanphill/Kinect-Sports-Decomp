extern unsigned int lbl_821AAD20;


void fn_82DFC270(unsigned __int64 param_1,unsigned __int64 param_2,unsigned char *param_3)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
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
  
  *param_3 = 1;
  *(unsigned int *)(param_3 + 8) = lbl_821AAD20;
  puVar1 = (unsigned int *)((unsigned int)(param_3 + in_r0 + 0x30) & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (unsigned int *)((unsigned int)(param_3 + in_r0 + 0x10) & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  puVar1 = (unsigned int *)((unsigned int)(param_3 + in_r0 + 0x20) & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  puVar1 = (unsigned int *)((unsigned int)(param_3 + in_r0 + 0x40) & 0xfffffff0);
  *puVar1 = in_register_00010070;
  puVar1[1] = in_register_00010074;
  puVar1[2] = in_register_00010078;
  puVar1[3] = in_vr7;
  puVar1 = (unsigned int *)((unsigned int)(param_3 + in_r0 + 0x50) & 0xfffffff0);
  *puVar1 = in_register_00010060;
  puVar1[1] = in_register_00010064;
  puVar1[2] = in_register_00010068;
  puVar1[3] = in_vr6;
  puVar1 = (unsigned int *)((unsigned int)(param_3 + 0x60) & 0xfffffff0);
  *puVar1 = in_register_00010060;
  puVar1[1] = in_register_00010064;
  puVar1[2] = in_register_00010068;
  puVar1[3] = in_vr6;
  puVar1 = (unsigned int *)((unsigned int)(param_3 + 0x70) & 0xfffffff0);
  *puVar1 = in_register_00010060;
  puVar1[1] = in_register_00010064;
  puVar1[2] = in_register_00010068;
  puVar1[3] = in_vr6;
  return;
}

