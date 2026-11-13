extern int fn_822315A0();
extern int fn_82F588C0();
extern int fn_82F58A68();


void fn_82F58BD8(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_82F58A68();
  fn_82F588C0(uVar1,param_1);
  if (*(unsigned int *)(param_1 + 0x1ec) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x1ec));
  }
  if (*(unsigned int *)(param_1 + 0x1e4) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x1e4));
  }
  if (*(unsigned int *)(param_1 + 0x1dc) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x1dc));
  }
  if (*(unsigned int *)(param_1 + 0x1d4) != 0) {
    fn_822315A0(*(unsigned int *)(param_1 + 0x1d4));
  }
  return;
}

