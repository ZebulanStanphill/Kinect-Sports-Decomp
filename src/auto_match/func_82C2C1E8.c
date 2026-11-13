extern int fn_82C2E310();
extern int fn_82C2E7C0();
extern int fn_82C2EB58();
extern int fn_82C3F920();


void fn_82C2C1E8(int param_1)

{
  int iVar1;
  
  if (2 < *(int *)(param_1 + 0x3c)) {
    fn_82C2EB58();
  }
  fn_82C2E310(param_1);
  iVar1 = fn_82C2E7C0(param_1);
  if (iVar1 >= 0) {
    fn_82C3F920(param_1);
  }
  return;
}

