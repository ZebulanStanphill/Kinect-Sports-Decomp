extern int fn_83055D50();
extern unsigned int lbl_8217DE1C;


unsigned int * fn_830508C0(unsigned int *param_1,unsigned int param_2)

{
  fn_83055D50();
  *param_1 = &lbl_8217DE1C;
  RtlInitializeCriticalSection(param_1 + 0x17);
  param_1[0x20] = param_2;
  param_1[0x1f] = 0;
  param_1[0x23] = 0xffffffff;
  return param_1;
}

