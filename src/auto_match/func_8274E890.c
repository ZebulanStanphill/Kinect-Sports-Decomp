extern int fn_826829A0();
extern int fn_826C0608();
extern int fn_826C09B0();
extern unsigned int lbl_82006E64;
extern unsigned int lbl_82013688;
extern unsigned int lbl_820136DC;
extern unsigned int lbl_82013700;
extern unsigned int lbl_82013724;
extern unsigned int lbl_82013728;


unsigned int *
fn_8274E890(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  fn_826C09B0();
  *param_1 = &lbl_820136DC;
  param_1[4] = &lbl_82013688;
  fn_826829A0(param_1 + 4,param_2,param_3);
  param_1[0xf] = &lbl_82006E64;
  *(unsigned char *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(unsigned char *)(param_1 + 0x15) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  *param_1 = &lbl_82013700;
  param_1[4] = &lbl_82013728;
  param_1[0xf] = &lbl_82013724;
  fn_826C0608(param_1 + 0xf,param_1,param_2,param_4);
  return param_1;
}

