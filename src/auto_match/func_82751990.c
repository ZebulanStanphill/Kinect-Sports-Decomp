extern int fn_826829A0();
extern int fn_826C09B0();
extern unsigned int lbl_82013688;
extern unsigned int lbl_820136DC;
extern unsigned int lbl_82013B58;
extern unsigned int lbl_82013BAC;


unsigned int * fn_82751990(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  fn_826C09B0();
  *param_1 = &lbl_820136DC;
  param_1[4] = &lbl_82013688;
  fn_826829A0(param_1 + 4,param_2,param_3);
  *param_1 = &lbl_82013BAC;
  param_1[4] = &lbl_82013B58;
  return param_1;
}

