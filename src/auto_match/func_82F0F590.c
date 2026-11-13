extern int fn_82ECA928();
extern int fn_82ECFE20();
extern int fn_83147640();


void fn_82F0F590(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xaf0) != 1) {
    fn_82ECFE20(param_1,*(unsigned int *)(param_2 + 0x108),*(unsigned int *)(param_2 + 0x10c),
                      param_2 + 0x298,param_2 + 0x90,param_2 + 0x98);
    return;
  }
  if (*(int *)(param_1 + 0x6d5c) != 0) {
    fn_82ECA928();
    return;
  }
  fn_83147640();
  return;
}

