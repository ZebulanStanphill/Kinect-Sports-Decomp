extern int fn_8277B988();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D8CC;


unsigned int *
fn_826EE248(double param_1,double param_2,unsigned int *param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned char param_6,unsigned char param_7)

{
  unsigned int uVar1;
  
  *param_3 = &lbl_8200D8CC;
  param_3[7] = 0;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  fn_8277B988(param_3 + 0xd,0,0,0);
  param_3[0x12] = 0;
  param_3[0x13] = 0;
  param_3[0x14] = 0;
  param_3[0x15] = 0;
  param_3[0x16] = 0;
  uVar1 = lbl_82002AE0;
  param_3[1] = (float)param_1;
  *(unsigned char *)(param_3 + 5) = param_6;
  param_3[2] = (float)param_2;
  *(unsigned char *)((int)param_3 + 0x15) = 0;
  param_3[3] = uVar1;
  *(unsigned char *)((int)param_3 + 0x16) = 0;
  param_3[4] = uVar1;
  *(unsigned char *)((int)param_3 + 0x17) = 0;
  *(unsigned char *)(param_3 + 6) = param_7;
  *(unsigned char *)((int)param_3 + 0x19) = 0;
  param_3[0x17] = 0;
  param_3[0x18] = 0;
  param_3[0x19] = 0;
  param_3[0x1a] = 0;
  param_3[0x1b] = 0;
  return param_3;
}

