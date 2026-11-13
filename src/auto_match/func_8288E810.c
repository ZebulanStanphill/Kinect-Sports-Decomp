extern unsigned int *fn_828BDDA0(unsigned int *);
extern int fn_828E9D28();
extern unsigned int lbl_820236C8;
extern unsigned int lbl_820236D0;

unsigned int * fn_8288E810(unsigned int *param_1,unsigned int param_2)
{
  int *sub;
  fn_828BDDA0(param_1);
  param_1[0x123] = param_2;
  param_1[0x120] = 0;
  *param_1 = &lbl_820236D0;
  param_1[0x14] = &lbl_820236C8;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  *(unsigned char *)(param_1 + 0x124) = 0;
  sub = param_1 + 0x125;
  sub[6] = 0;
  sub[7] = 0;
  sub[8] = 0;
  param_1[0x129] = param_1 + 0x20;
  param_1[0x12a] = 0x400;
  fn_828E9D28(param_1 + 0x125,param_1 + 0x20,0x400);
  return param_1;
}
