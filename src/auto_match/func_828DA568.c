extern int fn_828BDDA0();
extern unsigned int lbl_820257F0;
extern unsigned int lbl_820257F8;


unsigned int * fn_828DA568(unsigned int *param_1)

{
  fn_828BDDA0();
  *(unsigned __int64 *)(param_1 + 0x22) = 0xffffffffffffffff;
  *param_1 = &lbl_820257F8;
  param_1[0x14] = &lbl_820257F0;
  *(unsigned char *)(param_1 + 0x20) = 1;
  *(unsigned __int64 *)(param_1 + 0x24) = 0xffffffffffffffff;
  *(unsigned __int64 *)(param_1 + 0x26) = 0xffffffffffffffff;
  *(unsigned __int64 *)(param_1 + 0x2a) = 0xffffffffffffffff;
  return param_1;
}

