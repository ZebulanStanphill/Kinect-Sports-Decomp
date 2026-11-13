extern int fn_8268C3A8();
extern unsigned int lbl_8200DDC4;


unsigned int * fn_826FDED0(unsigned int *param_1,unsigned __int64 param_2)

{
  param_1[1] = 1;
  *param_1 = &lbl_8200DDC4;
  fn_8268C3A8(param_1 + 2,param_2);
  fn_8268C3A8(param_1 + 4,param_2);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xff000000;
  *(unsigned short *)(param_1 + 9) = 0;
  *(unsigned short *)((int)param_1 + 0x26) = 0;
  *(unsigned char *)(param_1 + 10) = 0;
  *(unsigned short *)((int)param_1 + 0x2a) = 0;
  return param_1;
}

