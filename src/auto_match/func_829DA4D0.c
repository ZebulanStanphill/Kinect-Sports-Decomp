extern int fn_82A1DDC0();
extern int fn_82A1EFC0();


void fn_829DA4D0(unsigned __int64 *param_1,unsigned int *param_2,unsigned int *param_3,unsigned __int64 *param_4)

{
  unsigned int *puVar1;
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs62 [16];
  unsigned int in_register_000103e0;
  unsigned int in_register_000103e4;
  unsigned int in_register_000103e8;
  unsigned int in_vr62;
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  fn_82A1EFC0(param_4,0,0xae0);
  *param_4 = 5;
  param_4[1] = 0x2dff;
  param_4[0x156] = *param_1;
  *(unsigned int *)((int)param_4 + 0xabc) = param_2[1];
  *(unsigned int *)(param_4 + 0x158) = *param_2;
  *(unsigned int *)((int)param_4 + 0xac4) = param_3[1];
  *(unsigned int *)(param_4 + 0x159) = *param_3;
  altv207_13(in_vs62,in_vs42);
  puVar1 = (unsigned int *)((unsigned int)(param_4 + 2) & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  altv207_13(in_vs62,in_vs43);
  puVar1 = (unsigned int *)((unsigned int)(param_4 + 4) & 0xfffffff0);
  *puVar1 = in_register_000103e0;
  puVar1[1] = in_register_000103e4;
  puVar1[2] = in_register_000103e8;
  puVar1[3] = in_vr62;
  fn_82A1DDC0(param_4 + 6,param_1 + 6,0xa80);
  return;
}

