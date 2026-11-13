extern int fn_82FF2410();


void fn_83034AC0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,char param_4,unsigned char param_5)

{
  fn_82FF2410(param_1 + 8);
  *(unsigned char *)(param_1 + 0x13) = param_4 << 5 | *(unsigned char *)(param_1 + 0x13) & 0x1f;
  *(unsigned char *)(param_1 + 0x13) = param_5 & 0x1f | param_4 << 5;
  return;
}

