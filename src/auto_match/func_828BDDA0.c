extern unsigned int *auStack_20;
extern int fn_828B5608();
extern int fn_828BDAB0();
extern unsigned int lbl_82025550;
extern unsigned int lbl_82025988;
extern unsigned int lbl_821AECB0;


unsigned int * fn_828BDDA0(unsigned int *param_1)

{
  unsigned char auStack_20 [8];
  
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned __int64 *)(param_1 + 4) = 0;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  *(unsigned char *)(param_1 + 9) = 0;
  *(unsigned short *)((int)param_1 + 0x26) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(unsigned __int64 *)(param_1 + 0x12) = 0;
  param_1[0x14] = &lbl_821AECB0;
  param_1[0x16] = param_1 + 0x15;
  param_1[0x15] = param_1 + 0x15;
  param_1[0x17] = 0;
  *param_1 = &lbl_82025550;
  param_1[0x14] = &lbl_82025988;
  fn_828B5608(param_1 + 0x18);
  *(unsigned char *)(param_1 + 0x1a) = 0;
  *(unsigned char *)((int)param_1 + 0x69) = 0;
  param_1[0x1b] = 0;
  fn_828BDAB0(param_1 + 0x1c,auStack_20);
  return param_1;
}

