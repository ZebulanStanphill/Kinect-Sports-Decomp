extern int fn_829F5388();
extern int fn_82A0B9C8();
extern int fn_82A0D568();


unsigned int * fn_829F5CA8(unsigned int *param_1)

{
  fn_829F5388(param_1 + 4);
  fn_82A0D568(param_1 + 0x2c);
  fn_82A0B9C8(param_1 + 0x34);
  param_1[0x41a5] = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[0x4190] = 0;
  param_1[0x41a7] = 0;
  param_1[0x419e] = 0;
  param_1[0x4191] = 0;
  *param_1 = 0;
  *(unsigned __int64 *)(param_1 + 0x41a8) = 0;
  *(unsigned __int64 *)(param_1 + 0x41aa) = 0;
  *(unsigned __int64 *)(param_1 + 0x41ac) = 0;
  param_1[0x41ae] = 0;
  return param_1;
}

