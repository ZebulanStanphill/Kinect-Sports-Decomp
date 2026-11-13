extern int fn_82E2B118();
extern unsigned int lbl_8214C450;
extern unsigned int lbl_8214C4F0;


unsigned int * fn_82E2C1C8(unsigned int *param_1,unsigned __int64 param_2)

{
  *param_1 = &lbl_8214C4F0;
  param_1[1] = &lbl_8214C450;
  RtlInitializeCriticalSection(param_1 + 2);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  fn_82E2B118(param_1,param_2);
  return param_1;
}

