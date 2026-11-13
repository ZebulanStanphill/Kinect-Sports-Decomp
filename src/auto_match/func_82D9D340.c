extern int fn_82D931B8();
extern unsigned int lbl_8213B28C;


unsigned int * fn_82D9D340(unsigned int *param_1)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  fn_82D931B8();
  param_1[0x46] = 0;
  *param_1 = &lbl_8213B28C;
  *(unsigned short *)(param_1 + 0x47) = 0;
  puVar1 = (unsigned int *)((int)param_1 + in_r0 + 0xc0 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  *(unsigned char *)(param_1 + 2) = 4;
  return param_1;
}

