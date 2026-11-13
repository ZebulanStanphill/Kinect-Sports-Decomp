extern int fn_826829A0();
extern int fn_826C09B0();
extern int fn_827582C8();
extern unsigned int lbl_82011AD0;
extern unsigned int lbl_82011B24;


unsigned int * fn_827391E8(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  fn_826C09B0();
  *param_1 = &lbl_82011B24;
  param_1[4] = &lbl_82011AD0;
  fn_827582C8(param_1 + 0xc);
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

