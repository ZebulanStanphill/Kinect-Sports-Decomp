extern int fn_82AA66A8();
extern int fn_82B52FF8();


void fn_82B53448(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 0x2c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c1);
  }
  do {
    if (iVar2 == 0) {
      return;
    }
    if (*(int *)(*(int *)(iVar2 + 8) + 4) == 6) {
      iVar1 = *(int *)(*(int *)(iVar2 + 8) + 0x18);
      if ((iVar1 == 0) || (*(int *)(iVar1 + 4) != 0xb)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      if (*(int *)(iVar1 + 0x14) != 0) {
        if ((*(unsigned int *)(iVar1 + 0x2c) & 0x20) != 0) {
          fn_82B52FF8(param_1,param_3,*(unsigned int *)(iVar1 + 0x10),*(unsigned int *)(iVar1 + 0x3c),
                        param_4);
        }
      }
    }
    iVar2 = *(int *)(iVar2 + 0xc);
  } while ((iVar2 == 0) || (*(int *)(iVar2 + 4) == 1));
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c1);
}

