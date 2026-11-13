extern int fn_826829A0();
extern int fn_826C0608();
extern int fn_826C09B0();
extern unsigned int lbl_82006E64;
extern unsigned int lbl_82011FB8;
extern unsigned int lbl_82011FC0;
extern unsigned int lbl_82012018;
extern unsigned int lbl_820120A4;
extern unsigned int lbl_82012A64;


unsigned int *
fn_8273C558(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  fn_826C09B0();
  *param_1 = &lbl_82012A64;
  param_1[4] = &lbl_82012018;
  fn_826829A0(param_1 + 4,param_2,param_3);
  param_1[0x18] = &lbl_82006E64;
  *(unsigned char *)(param_1 + 0x1b) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(unsigned char *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  *param_1 = &lbl_820120A4;
  param_1[4] = &lbl_82011FC0;
  param_1[0x18] = &lbl_82011FB8;
  fn_826C0608(param_1 + 0x18,param_1,param_2,param_4);
  return param_1;
}

