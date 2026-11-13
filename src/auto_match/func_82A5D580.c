extern unsigned int lbl_8208DFC4;
extern unsigned int lbl_8208E01C;
extern unsigned int lbl_8208E048;


static __forceinline void init_82A5D580(unsigned *p) { p[1]=0; p[0]=(unsigned)&lbl_8208DFC4; }
void fn_82A5D580(unsigned int *param_1,unsigned int param_2,unsigned int param_3)

{
  init_82A5D580(param_1+1);
  param_1[3] = param_2;
  param_1[4] = param_3;
  *param_1 = &lbl_8208E048;
  param_1[1] = &lbl_8208E01C;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(unsigned __int64 *)(param_1 + 0xe) = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}

