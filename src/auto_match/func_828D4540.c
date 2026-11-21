void fn_828D4540(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2c);
  if (3 < uVar1) {
    return;
  }
  if (uVar1 == 1) {
    fn_828D4120();
    return;
  }
  if (uVar1 == 2) {
    fn_828D4180();
    return;
  }
  if (uVar1 == 0) {
    fn_828D4028();
    return;
  }
  fn_828D4098();
  return;
}
