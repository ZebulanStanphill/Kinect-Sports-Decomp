extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200533C;


void fn_82D8E7F8(double param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  double dVar2;
  unsigned int in_register_000100b0;
  unsigned int in_register_000100b4;
  unsigned int in_register_000100b8;
  unsigned int in_vr11;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  *(float *)(param_2 + 0x30) = (float)(param_1 * (double)lbl_8200533C);
  dVar2 = (double)lbl_82002C5C;
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x30 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  *(float *)(param_2 + 0x40) = (float)(param_1 * dVar2);
  puVar1 = (unsigned int *)(in_r0 + param_2 + 0x40 & 0xfffffff0);
  *puVar1 = in_register_000100b0;
  puVar1[1] = in_register_000100b4;
  puVar1[2] = in_register_000100b8;
  puVar1[3] = in_vr11;
  return;
}

