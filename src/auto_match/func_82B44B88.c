extern int fn_82ABE9F0();
extern int fn_82AC6808();
extern int fn_82B43B90();


void fn_82B44B88(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = fn_82ABE9F0(param_1,*(int *)(param_1 + 0x5c) << 2,0);
  uVar1 = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 0x60) = uVar2;
  for (; ((uVar1 & 1) == 0 && (uVar1 != 0)); uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    *(unsigned int *)(uVar1 + 0x34) = 0;
    *(unsigned int *)(uVar1 + 0x38) = 0;
    *(unsigned int *)(uVar1 + 0x3c) = 0;
    *(unsigned int *)((*(unsigned int *)(uVar1 + 0x30) & 0x7ffff) * 4 + *(int *)(param_1 + 0x60) + -4) = uVar1;
  }
  fn_82B43B90(param_1,*(unsigned int *)(param_1 + 0x5c));
  fn_82AC6808(param_1,*(unsigned int *)(param_1 + 0x60),*(int *)(param_1 + 0x5c) << 2,0);
  return;
}

