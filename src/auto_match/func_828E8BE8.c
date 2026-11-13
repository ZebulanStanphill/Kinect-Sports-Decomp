extern int fn_828E64F8();
extern int fn_828E7CC0();
extern unsigned int lbl_82027494;


unsigned int * fn_828E8BE8(unsigned int *param_1,__int64 param_2)

{
  *(unsigned char *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &lbl_82027494;
  fn_828E7CC0(param_1 + 4);
  fn_828E64F8(param_1 + 10,param_2 + 0x18);
  RtlInitializeCriticalSection(param_1 + 0x12);
  param_1[0x19] = 0;
  *(unsigned char *)(param_1 + 0x1a) = 0;
  return param_1;
}

