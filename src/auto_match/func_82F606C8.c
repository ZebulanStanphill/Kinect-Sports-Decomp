extern int fn_82F60D68();
extern int fn_82F61460();
extern unsigned int lbl_82167E30;


unsigned int * fn_82F606C8(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 1) = 0;
  *param_1 = &lbl_82167E30;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  fn_82F60D68(param_1 + 9);
  fn_82F61460(param_1 + 0x24);
  RtlInitializeCriticalSectionAndSpinCount(param_1 + 0x35,0x1000);
  return param_1;
}

