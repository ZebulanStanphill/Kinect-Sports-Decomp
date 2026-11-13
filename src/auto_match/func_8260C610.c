extern int fn_82522D98();
extern int fn_827D50B8();
extern int fn_827D9D40();


__int64 fn_8260C610(int param_1)

{
  __int64 lVar1;
  int iVar2;
  
  lVar1 = fn_827D50B8(*(unsigned int *)(param_1 + 0x58));
  if (lVar1 == 0) {
    iVar2 = fn_827D50B8(*(unsigned int *)(param_1 + 0x50));
    if (iVar2 == 0) {
      fn_827D9D40(param_1 + 0x60);
                    /* WARNING: Subroutine does not return */
      fn_82522D98();
    }
  }
  else {
    if ((int)lVar1 == 0x3e5) {
      return lVar1;
    }
    if ((int)lVar1 == 0x3e4) {
      return lVar1;
    }
  }
  RtlLeaveCriticalSection(param_1 + 0x1a0);
  return lVar1;
}

