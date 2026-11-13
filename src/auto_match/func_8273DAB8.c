extern int fn_826829A0();
extern int fn_8268B330();
extern int fn_826C09B0();
extern unsigned int lbl_820121E8;
extern unsigned int lbl_8201223C;


unsigned int * fn_8273DAB8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  fn_826C09B0();
  *param_1 = &lbl_8201223C;
  param_1[4] = &lbl_820121E8;
  fn_8268B330(param_1 + 0xc);
  fn_8268B330(param_1 + 0xd);
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

