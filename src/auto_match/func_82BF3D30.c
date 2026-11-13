extern int fn_82BFAAA8();
extern int fn_82BFAAE8();


void fn_82BF3D30(int param_1)

{
  *(unsigned int *)(param_1 + 0x14) = 1;
  fn_82BFAAE8(param_1 + 0x58,1);
  fn_82BFAAA8(param_1 + 8,0xffffffffffffffff);
  return;
}

