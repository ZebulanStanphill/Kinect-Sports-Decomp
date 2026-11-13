extern int fn_82FA9050();
extern int fn_82FA9208();
extern int fn_82FAD148();


void fn_82FB6F78(int param_1)

{
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  fn_82FA9050();
  fn_82FAD148(param_1 + 0x3c);
  fn_82FA9208(param_1 + -4);
  return;
}

