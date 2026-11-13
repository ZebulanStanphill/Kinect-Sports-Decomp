extern int fn_82B7C9B8();
extern int fn_82B7CA68();
extern unsigned int lbl_820DB518;


void fn_82B7CC20(unsigned int *param_1,unsigned __int64 param_2,int (**param_3)(),unsigned int param_4,
                  unsigned int param_5,unsigned int param_6)

{
  unsigned int *puVar1;
  
  param_1[0x169] = (int)param_2;
  param_1[0x15a] = param_6;
  param_1[0x167] = param_4;
  param_1[0x168] = param_3;
  *(unsigned char *)(param_1 + 0x156) = 1;
  param_1[0x2a6] = 0x7fffffff;
  *(unsigned char *)(param_1 + 0x214) = 1;
  *(unsigned char *)((int)param_1 + 0x851) = 1;
  param_1[0x2ac] = 0;
  param_1[0x216] = 0xefba;
  param_1[0x2a7] = 0x7fffffff;
  param_1[0x2a8] = 0x7fffffff;
  param_1[0x2a9] = 0x7fffffff;
  param_1[0x2aa] = 0x10;
  *param_1 = param_5;
  puVar1 = (unsigned int *)(*param_3)(param_2,0x34);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[2] = 0x10;
    puVar1[9] = 0x10;
    puVar1[8] = 0x100;
    puVar1[10] = 0x100;
    puVar1[3] = 0xfff;
    *puVar1 = &lbl_820DB518;
    puVar1[4] = 4;
    puVar1[1] = 0x40;
    puVar1[5] = 0xfff;
    puVar1[6] = 0x20;
    puVar1[7] = 4;
  }
  param_1[0x154] = puVar1;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  fn_82B7C9B8(param_1);
  fn_82B7CA68(param_1);
  return;
}

