extern int fn_82E174C8();


void fn_82E1A888(int self)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(self + 0x1c);
  *(unsigned int *)(self + 0x1c) = 0;
  fn_82E174C8();
  *(unsigned int *)(self + 0x1c) = uVar1;
  return;
}

