extern int fn_83039918();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8217C3B0;


unsigned int * fn_8301DFE0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  param_1[1] = 0;
  *param_1 = &lbl_8217C3B0;
  fn_83039918(param_1 + 4);
  param_1[0x18] = 0;
  *(unsigned short *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x22] = 0;
  *(unsigned short *)(param_1 + 0x26) = 0;
  uVar1 = lbl_82002AE0;
  param_1[0x27] = 0;
  param_1[0x1e] = 0xffffffff;
  param_1[0x1f] = uVar1;
  param_1[0x20] = 0xffffffff;
  param_1[0x18] = 0;
  *(unsigned short *)((int)param_1 + 0x6e) = 0;
  *(unsigned short *)(param_1 + 0x1b) = 0;
  param_1[0x1a] = 0x2b;
  *(unsigned short *)(param_1 + 0x1c) = 0;
  param_1[0x1d] = 0;
  param_1[0x21] = 1;
  param_1[0x29] = uVar1;
  param_1[0x22] = 0;
  *(unsigned short *)((int)param_1 + 0x96) = 0;
  *(unsigned short *)(param_1 + 0x25) = 0;
  param_1[0x24] = 0x2b;
  *(unsigned short *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0xffffffff;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2b] = 1;
  return param_1;
}

