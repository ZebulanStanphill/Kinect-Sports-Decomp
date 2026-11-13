extern int fn_8226B918();
extern int fn_8265CA60();
extern unsigned int lbl_821A7E9C;


unsigned int *
fn_8226B4D0(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int param_6)

{
  unsigned int uVar1;
  
  param_1[1] = param_2;
  param_1[2] = param_6;
  *param_1 = &lbl_821A7E9C;
  { unsigned int *s = param_1 + 3; s[0] = 0; s[1] = 0; s[2] = 0; }
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = *param_4;
  param_1[0x18] = param_4[1];
  param_1[0x19] = *param_3;
  param_1[0x1a] = param_3[1];
  param_1[0x1b] = *param_5;
  uVar1 = param_5[1];
  *(unsigned char *)(param_1 + 0x1d) = 1;
  *(unsigned char *)((int)param_1 + 0x75) = 0;
  *(unsigned char *)(param_1 + 0x52) = 0;
  param_1[0x1c] = uVar1;
  fn_8226B918(param_1);
  uVar1 = fn_8265CA60(0x280);
  param_1[0x15] = uVar1;
  return param_1;
}

