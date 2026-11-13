extern unsigned int lbl_8200133C;


void fn_82D74A58(double param_1,double param_2,int param_3)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  if ((double)*(float *)(param_3 + 0x18) == param_1) {
    *(float *)(param_3 + 0x18) = (float)param_2;
    return;
  }
  *(unsigned int *)(param_3 + 0x18) = lbl_8200133C;
  puVar1 = (unsigned int *)(in_r0 + param_3 + 0x20 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  return;
}

