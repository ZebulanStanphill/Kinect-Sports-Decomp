extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E50F00();
extern int fn_82E51028();
extern int memcpy();
extern int memset();


unsigned __int64 fn_82E63428(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  fn_82E50F00(param_1 + 4,1);
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x44) < (param_2 & 0xffffffff)) {
    lVar1 = (param_2 & 0x7ffffff) << 5;
    if (0x7ffffff < (param_2 & 0xffffffff)) {
      lVar1 = -1;
    }
    lVar1 = fn_82E50BE8(lVar1,0,0,0,0);
    if (lVar1 != 0) {
      memcpy(lVar1,*(unsigned int *)(param_1 + 0x40),*(int *)(param_1 + 0x48) << 5);
      if (*(int *)(param_1 + 0x40) != 0) {
        fn_82E4FE40();
      }
      *(int *)(param_1 + 0x40) = (int)lVar1;
      *(int *)(param_1 + 0x44) = (int)param_2;
                    /* WARNING: Subroutine does not return */
      memset(((unsigned __int64)*(unsigned int *)(param_1 + 0x48) & 0x7ffffff) * 0x20 + lVar1,0,
                   (param_2 - *(unsigned int *)(param_1 + 0x48) & 0x7ffffff) << 5);
    }
    uVar2 = 0xffffffff8007000e;
  }
  fn_82E51028(param_1 + 4,1);
  return uVar2;
}

