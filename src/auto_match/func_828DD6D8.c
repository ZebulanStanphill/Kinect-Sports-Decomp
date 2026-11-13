extern int fn_828B5580();
extern int fn_828BDDA0();
extern unsigned int lbl_82025768;
extern unsigned int lbl_82025770;


unsigned int *
fn_828DD6D8(unsigned int *param_1,int param_2,__int64 param_3,unsigned int param_4,unsigned char param_5
             )

{
  fn_828BDDA0();
  *param_1 = &lbl_82025770;
  param_1[0x14] = &lbl_82025768;
  fn_828B5580(param_1 + 0x20,param_3 + 0x14);
  param_1[0x22] = param_2;
  param_1[0x23] = param_4;
  *(unsigned char *)(param_1 + 0x24) = param_5;
  *(unsigned char *)(param_2 + 0x68) = 1;
  return param_1;
}

