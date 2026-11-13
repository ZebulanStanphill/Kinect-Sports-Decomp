extern int fn_82A6B9E0();
extern int fn_82A6BE08();
extern int fn_82A7CF10();
extern int fn_82C2EB58();


void fn_82A69B80(int param_1)

{
  int iVar1;
  
  if (2 < *(int *)(param_1 + 0x3c)) {
    fn_82C2EB58();
  }
  fn_82A6B9E0(param_1);
  iVar1 = fn_82A6BE08(param_1);
  if (iVar1 >= 0) {
    fn_82A7CF10(param_1);
  }
  return;
}

