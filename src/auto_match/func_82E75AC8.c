extern int fn_82E757A8();
extern unsigned int lbl_8215EF88;


unsigned int *
fn_82E75AC8(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned int param_6,unsigned int *param_7)

{
  unsigned int uVar1;
  
  *(unsigned __int64 *)(param_1 + 2) = param_4;
  param_1[4] = param_6;
  *(unsigned __int64 *)(param_1 + 10) = param_5;
  *(unsigned short *)(param_1 + 5) = 0;
  *param_1 = &lbl_8215EF88;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(unsigned __int64 *)(param_1 + 0xc) = 0;
  *(unsigned __int64 *)(param_1 + 0xe) = 0;
  *(unsigned __int64 *)(param_1 + 0x10) = 0;
  *(unsigned __int64 *)(param_1 + 0x12) = 0;
  *(unsigned __int64 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = param_3;
  uVar1 = fn_82E757A8();
  if (param_7 != (unsigned int *)0x0) {
    *param_7 = uVar1;
  }
  return param_1;
}

