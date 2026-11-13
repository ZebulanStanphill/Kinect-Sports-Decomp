extern int fn_8267BF50();
extern int fn_826FDED0();
extern unsigned int lbl_82010C6C;


unsigned int * fn_827934A8(unsigned int *param_1)

{
  unsigned int uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = fn_8267BF50();
  fn_826FDED0(param_1 + 4,uVar1);
  param_1[0x11] = 0;
  *(unsigned short *)(param_1 + 0x12) = 0;
  param_1[0x10] = 1;
  param_1[0xf] = &lbl_82010C6C;
  *(unsigned short *)((int)param_1 + 0x4a) = 0;
  *(unsigned short *)(param_1 + 0x13) = 0;
  *(unsigned short *)((int)param_1 + 0x4e) = 0;
  *(unsigned short *)(param_1 + 0x14) = 0;
  *(unsigned short *)((int)param_1 + 0x52) = 0;
  return param_1;
}

