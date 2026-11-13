extern unsigned int *auStack_30;
extern int fn_82F63BA0();
extern int fn_82F63C78();
extern int fn_82F664B0();
extern int fn_82F686F8();
extern int fn_82F6A3F0();


unsigned __int64 fn_82F6D050(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_30 [48];
  
  lVar1 = thunk_FUN_82f6a4b0(param_1,0x2e);
  uVar3 = lVar1 + 1;
  if (((uVar3 & 0xffffffff) < (param_1 & 0xffffffff)) ||
     ((param_2 & 0xffffffff) <= (uVar3 - param_1 & 0xffffffff))) {
    fn_82F63BA0();
  }
  else {
    lVar1 = fn_82F6A3F0(uVar3,0,0x20);
    if ((lVar1 + 1U & 0xffffffff) < (param_3 & 0xffffffff)) {
      iVar2 = fn_82F686F8(lVar1 + 1U,auStack_30,8,0x20);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63C78(0,0,0,0,0);
      }
      iVar2 = fn_82F664B0(uVar3,(param_1 - uVar3) + param_2,auStack_30);
      if (iVar2 == 0) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
  }
  return 0xffffffffffffffff;
}

