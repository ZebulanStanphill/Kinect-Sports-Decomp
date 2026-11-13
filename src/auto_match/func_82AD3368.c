extern int fn_82ABDAA0();


unsigned __int64 fn_82AD3368(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  char cVar2;
  
  for (uVar1 = *(unsigned int *)(param_2 + 0x14); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    if ((*(unsigned int *)(uVar1 + 8) & 0x3f80) != 0x3800) {
      return 0;
    }
  }
  for (uVar1 = *(unsigned int *)(param_2 + 0x1c); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    if ((*(unsigned int *)(uVar1 + 8) >> 0x19 & 1) != 0) {
      return 0;
    }
  }
  for (uVar1 = *(unsigned int *)(param_2 + 0x24); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    cVar2 = fn_82ABDAA0(uVar1);
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}

