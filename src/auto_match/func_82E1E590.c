extern int fn_82E21620();
extern int fn_82E21A00();
extern int fn_82E21AC0();


void fn_82E1E590(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  fn_82E21A00(*(unsigned int *)(param_1 + 0x48));
  fn_82E21620(*(unsigned int *)(param_1 + 0x48),param_4);
  fn_82E21AC0(*(unsigned int *)(param_1 + 0x48));
  return;
}

