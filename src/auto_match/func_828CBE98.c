extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828BDDA0();
extern unsigned int lbl_82025A98;
extern unsigned int lbl_82025AA0;


unsigned int * fn_828CBE98(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  fn_828BDDA0();
  *param_1 = &lbl_82025AA0;
  param_1[0x14] = &lbl_82025A98;
  fn_828B5580(param_1 + 0x20,param_2);
  param_1[0x22] = param_3;
  *(unsigned char *)(param_1 + 0x23) = 0;
  *(unsigned char *)((int)param_1 + 0x8d) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 2;
  param_1[0x29] = 0x10000;
  fn_828B55B0(param_2);
  return param_1;
}

