void fn_824E24D0(double param_1,int param_2,unsigned char param_3)

{
  unsigned int *puVar1;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  
  *(float *)(param_2 + 0x980) = (float)param_1;
  *(unsigned char *)(param_2 + 0x961) = param_3;
  *(unsigned char *)(param_2 + 0x960) = 1;
  puVar1 = (unsigned int *)(param_2 + 0x970U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  return;
}

