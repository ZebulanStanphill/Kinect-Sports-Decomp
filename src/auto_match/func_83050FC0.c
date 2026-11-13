extern int fn_83055F08();
extern unsigned int lbl_8217DDBC;
extern unsigned int lbl_8217DDF0;
extern unsigned int lbl_8217DE98;
extern unsigned int lbl_8217DECC;


unsigned int * fn_83050FC0(unsigned int *param_1)

{
  fn_83055F08();
  param_1[4] = 0;
  *param_1 = &lbl_8217DDF0;
  RtlInitializeCriticalSection(param_1 + 0xe);
  param_1[0x19] = 0;
  param_1[0x1d] = param_1[0x1d] & 0xe0ffffff;
  param_1[0x1e] = &lbl_8217DDBC;
  param_1[0x26] = 0;
  *(unsigned char *)(param_1 + 0x2a) = 0;
  *param_1 = &lbl_8217DECC;
  param_1[0x1e] = &lbl_8217DE98;
  param_1[0x1d] = param_1[0x1d] & 0x1fffffff | 0x40000000;
  *(unsigned char *)((int)param_1 + 0xa9) = *(unsigned char *)((int)param_1 + 0xa9) & 0x3f;
  return param_1;
}

