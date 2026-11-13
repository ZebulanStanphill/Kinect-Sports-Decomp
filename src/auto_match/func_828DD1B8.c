extern int fn_828BDDA0();
extern unsigned int lbl_82026F50;
extern unsigned int lbl_82026F58;


unsigned int *
fn_828DD1B8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  fn_828BDDA0();
  *(unsigned __int64 *)(param_1 + 0x20) = param_2;
  param_1[0x22] = param_3;
  param_1[0x23] = param_4;
  *param_1 = &lbl_82026F58;
  param_1[0x14] = &lbl_82026F50;
  *(unsigned char *)(param_1 + 0x24) = 0;
  return param_1;
}

