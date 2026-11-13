void fn_830A7240(unsigned char *param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  if (*param_1 == 0) {
    return;
  }
  if ((*param_1 & 3) != 0) {
    puVar1 = (unsigned int *)(in_r0 + param_2 + 0x30 & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    puVar1 = (unsigned int *)(in_r0 + param_2 + 0x90 & 0xfffffff0);
    *puVar1 = in_register_000100b0;
    puVar1[1] = in_register_000100b4;
    puVar1[2] = in_register_000100b8;
    puVar1[3] = in_vr11;
  }
  if ((*param_1 & 0xc) != 0) {
    puVar1 = (unsigned int *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    puVar1 = (unsigned int *)(in_r0 + param_2 + 0xa0 & 0xfffffff0);
    *puVar1 = in_register_000100b0;
    puVar1[1] = in_register_000100b4;
    puVar1[2] = in_register_000100b8;
    puVar1[3] = in_vr11;
  }
  if ((*param_1 & 0x30) == 0) {
    return;
  }
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x50 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0xb0 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  return;
}

