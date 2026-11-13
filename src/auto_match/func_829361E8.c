extern int fn_82F68B68();
extern int fn_82F68B70();


void fn_829361E8(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  if (param_2 != 0) {
    param_1[0xd] = 1;
    fn_82F68B70();
    return;
  }
  fn_82F68B68(*param_1,param_1 + 4,param_3,0xffffffff821c4da8,param_4);
  return;
}

