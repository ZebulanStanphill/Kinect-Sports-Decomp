extern int fn_828BDDA0();
extern unsigned int lbl_82025900;
extern unsigned int lbl_82025908;


unsigned int * fn_828DD9D8(unsigned int *param_1,unsigned __int64 param_2)

{
  fn_828BDDA0();
  *(unsigned __int64 *)(param_1 + 0x22) = param_2;
  *param_1 = &lbl_82025908;
  param_1[0x14] = &lbl_82025900;
  param_1[0x20] = 0;
  return param_1;
}

