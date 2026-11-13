extern int fn_82BC2EF0();


unsigned __int64 fn_82BA8E18(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82BC2EF0(*(unsigned int *)(param_1 + 0x50),*(unsigned int *)(param_1 + 0x3b8));
  if (iVar2 == 4) {
code_r0x82ba8e74:
    uVar1 = 2;
  }
  else {
    if (4 < iVar2) {
      if (iVar2 < 7) {
        return 1;
      }
      if (iVar2 < 9) goto code_r0x82ba8e74;
      if ((0x2a < iVar2) && (iVar2 < 0x2d)) {
        return 3;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

