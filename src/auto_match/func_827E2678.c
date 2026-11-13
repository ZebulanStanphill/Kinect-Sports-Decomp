extern int fn_827D5158();
extern int fn_827D9630();


int fn_827E2678(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned char param_4,
                 unsigned __int64 param_5,unsigned int param_6)

{
  fn_827D9630();
  fn_827D5158(param_1 + 0x18);
  *(unsigned int *)(param_1 + 0x20) = param_3;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = param_6;
  *(unsigned short *)(param_1 + 0x2c) = 0;
  *(unsigned char *)(param_1 + 0x2e) = 0;
  *(unsigned char *)(param_1 + 0x2f) = param_4;
  return param_1;
}

