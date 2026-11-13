extern int fn_826829A0();
extern int fn_8268D758();
extern int fn_826C09B0();
extern unsigned int lbl_82012A64;
extern unsigned int lbl_82012CB8;


unsigned int * fn_82749358(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  fn_826C09B0();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82012CB8;
  fn_8268D758(param_1 + 0xc);
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

