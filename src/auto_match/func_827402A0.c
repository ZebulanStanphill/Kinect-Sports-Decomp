extern int fn_826829A0();
extern int fn_826C09B0();
extern unsigned int lbl_82012338;
extern unsigned int lbl_8201238C;


unsigned int * fn_827402A0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  fn_826C09B0();
  param_1[0xc] = 0;
  *param_1 = &lbl_8201238C;
  param_1[4] = &lbl_82012338;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  fn_826829A0(param_1 + 4,param_2,param_3);
  return param_1;
}

