extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828BDDA0();
extern unsigned int lbl_82025B20;
extern unsigned int lbl_82025B28;


unsigned int * fn_828C6CD0(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_828BDDA0();
  *param_1 = &lbl_82025B28;
  param_1[0x14] = &lbl_82025B20;
  fn_828B5580(param_1 + 0x20,param_2);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(unsigned char *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  fn_828B55B0(param_2);
  return param_1;
}

