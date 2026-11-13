extern int fn_82FA9208();
extern int fn_82FA9208();
extern int fn_82FA9208();
extern int fn_82FB3690();


void fn_82FACAD0(int param_1,unsigned __int64 param_2)

{
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  fn_82FB3690(param_1 + 0x34);
  if (*(int *)(param_1 + 0x60) == 0) {
    fn_82FA9208(param_1,param_2);
    fn_82FA9208(param_1 + -4);
  }
  else {
    fn_82FA9208(param_1,param_2);
    fn_82FA9208(*(unsigned int *)(param_1 + 0x60),param_2);
    fn_82FA9208(param_1 + -4);
  }
  return;
}
