extern int fn_82E174C8();


void fn_82E1A888(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  *(unsigned int *)(param_1 + 0x1c) = 0;
  fn_82E174C8();
  *(unsigned int *)(param_1 + 0x1c) = uVar1;
  return;
}

