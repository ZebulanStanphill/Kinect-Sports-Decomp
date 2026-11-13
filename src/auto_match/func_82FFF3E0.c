extern int fn_82FFFAF8();
extern unsigned int lbl_8217BD10;


unsigned int * fn_82FFF3E0(unsigned int *param_1)

{
  fn_82FFFAF8();
  param_1[4] = 0;
  *param_1 = &lbl_8217BD10;
  param_1[5] = 0;
  *(unsigned short *)(param_1 + 6) = 0;
  *(unsigned short *)((int)param_1 + 0x1a) = 0;
  return param_1;
}

