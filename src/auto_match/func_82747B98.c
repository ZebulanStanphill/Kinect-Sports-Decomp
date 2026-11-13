extern int fn_826829A0();
extern int fn_826C0608();
extern int fn_826C09B0();
extern unsigned int lbl_82006E64;
extern unsigned int lbl_820129E0;
extern unsigned int lbl_82012A10;
extern unsigned int lbl_82012A64;
extern unsigned int lbl_82012AD0;
extern unsigned int lbl_82012B24;


unsigned int *
fn_82747B98(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  fn_826C09B0();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82012A10;
  fn_826829A0(param_1 + 4,param_2,param_3);
  param_1[0xc] = &lbl_82006E64;
  *(unsigned char *)(param_1 + 0xf) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(unsigned char *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *param_1 = &lbl_82012B24;
  param_1[4] = &lbl_82012AD0;
  param_1[0xc] = &lbl_820129E0;
  fn_826C0608(param_1 + 0xc,param_1,param_2,param_4);
  return param_1;
}

