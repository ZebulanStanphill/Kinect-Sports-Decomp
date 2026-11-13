extern int fn_82BE8D50();
extern int fn_82BECB18();
extern int fn_82BECBA0();
extern int fn_82BF6CA8();
extern int fn_82BF7EB8();
extern int fn_82BF7FB0();


unsigned __int64 fn_82BED360(int param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x50) == 2) {
    return 0;
  }
  fn_82BF6CA8(param_1 + 0x2c);
  uVar1 = thunk_FUN_82be5550(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82BF7EB8(uVar1,*(unsigned int *)(param_1 + 8));
  }
  if ((uVar1 & 0xffffffff) != 0) {
    iVar2 = fn_82BECB18(param_1,uVar1);
    if (iVar2 != 0) {
      fn_82BE8D50(uVar1);
      fn_82BECBA0(param_1);
      *(unsigned int *)(param_1 + 0x48) = 0;
      uVar1 = thunk_FUN_82be5550(0x14);
      if ((uVar1 & 0xffffffff) == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = fn_82BF7FB0(uVar1,*(unsigned int *)(param_1 + 8));
      }
      if ((uVar1 & 0xffffffff) == 0) goto code_r0x82bed440;
      iVar2 = fn_82BECB18(param_1,uVar1);
      if (iVar2 != 0) {
        fn_82BE8D50(uVar1);
        *(unsigned int *)(param_1 + 0x50) = 1;
        return 1;
      }
    }
    fn_82BE8D50(uVar1);
  }
code_r0x82bed440:
  *(unsigned int *)(param_1 + 0x50) = 2;
  return 0;
}

