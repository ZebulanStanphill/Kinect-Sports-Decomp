extern int fn_82D70D40();


void fn_82D5BF20(int param_1,unsigned __int64 param_2)

{
  fn_82D70D40(param_1 + 0x30,*(unsigned int *)(param_1 + 0x80),*(unsigned int *)(param_1 + 8),
                    param_2);
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned char *)(param_1 + 0x84) = 1;
  return;
}

