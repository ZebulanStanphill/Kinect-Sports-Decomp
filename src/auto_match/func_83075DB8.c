void fn_83075DB8(int param_1,int param_2)

{
  float *pfVar1;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs43 [16];
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  float in_register_000103f0;
  float in_register_000103f4;
  float in_register_000103f8;
  float in_vr63;
  
  altv207_13(in_vs32,in_vs43);
  pfVar1 = (float *)(in_r0 + param_2 * 0x20 + param_1 & 0xfffffff0);
  *pfVar1 = in_register_000103f0 + in_register_00010010;
  pfVar1[1] = in_register_000103f4 + in_register_00010014;
  pfVar1[2] = in_register_000103f8 + in_register_00010018;
  pfVar1[3] = in_vr63 + in_vr1;
  return;
}

