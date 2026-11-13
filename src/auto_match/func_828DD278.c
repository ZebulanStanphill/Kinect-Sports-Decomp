extern int fn_828BDDA0();
extern unsigned int lbl_82026F50;
extern unsigned int lbl_82026F58;


unsigned int * fn_828DD278(unsigned int *param_1)

{
  fn_828BDDA0();
  *(unsigned __int64 *)(param_1 + 0x20) = 0;
  *param_1 = &lbl_82026F58;
  param_1[0x14] = &lbl_82026F50;
  *(unsigned char *)(param_1 + 0x24) = 0;
  return param_1;
}

