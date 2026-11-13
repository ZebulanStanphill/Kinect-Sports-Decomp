extern int fn_82D40568();
extern unsigned int lbl_82192734;


unsigned int *
fn_8253D7A8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned char param_4)

{
  *param_1 = param_2;
  param_1[2] = param_3;
  param_1[1] = 0xffffffff;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  *(unsigned char *)(param_1 + 6) = param_4;
  param_1[5] = 0;
  param_1[7] = 0;
  *(unsigned char *)((int)param_1 + 0x1a) = 0xff;
  *(unsigned char *)((int)param_1 + 0x19) = 0x7f;
  fn_82D40568(param_1 + 8);
  param_1[0x13] = lbl_82192734;
  *(unsigned char *)((int)param_1 + 0x19) = 0xec;
  *(unsigned char *)((int)param_1 + 0x11) = 0;
  *(unsigned short *)((int)param_1 + 0x12) = 0;
  return param_1;
}

