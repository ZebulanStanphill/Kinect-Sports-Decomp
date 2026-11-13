extern int fn_82536590();


void fn_824FAD78(int param_1)

{
  unsigned short uVar1;
  
  uVar1 = *(unsigned short *)(param_1 + 0xc);
  if ((uVar1 != 0x1a) && (uVar1 != 0x1c)) {
    if (uVar1 <= 0x1d) {
      return;
    }
    if ((0x1f < uVar1) && (uVar1 != 0x2b)) {
      return;
    }
  }
  fn_82536590(param_1 + 0x14,0);
  return;
}

