extern int fn_828BDDA0();
extern unsigned int lbl_82025878;
extern unsigned int lbl_82025880;


unsigned int * fn_828DC6D0(unsigned int *param_1,unsigned char param_2,unsigned __int64 *param_3)

{
  fn_828BDDA0();
  *(unsigned char *)(param_1 + 0x20) = param_2;
  *param_1 = &lbl_82025880;
  param_1[0x14] = &lbl_82025878;
  *(unsigned __int64 *)(param_1 + 0x22) = *param_3;
  return param_1;
}

