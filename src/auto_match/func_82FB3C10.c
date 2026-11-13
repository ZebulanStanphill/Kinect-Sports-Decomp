extern int fn_82FA9208();
extern int fn_82FADAE0();


void fn_82FB3C10(int param_1)

{
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  fn_82FADAE0(param_1 + 0x40);
  fn_82FA9208(param_1);
  return;
}

