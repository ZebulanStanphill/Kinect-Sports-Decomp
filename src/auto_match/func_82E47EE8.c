extern int fn_82E477A0();
extern unsigned int lbl_821538C0;


unsigned int * fn_82E47EE8(unsigned int *param_1,unsigned __int64 param_2)

{
  *param_1 = &lbl_821538C0;
  RtlInitializeCriticalSection(param_1 + 1);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  fn_82E477A0(param_1,param_2);
  return param_1;
}

