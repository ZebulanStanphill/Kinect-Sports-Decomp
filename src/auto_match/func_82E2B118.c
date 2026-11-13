extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int memcpy();
extern int memset();


unsigned __int64 fn_82E2B118(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  RtlEnterCriticalSection(param_1 + 8);
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x28) < (param_2 & 0xffffffff)) {
    lVar1 = (param_2 & 0x7ffffff) << 5;
    if (0x7ffffff < (param_2 & 0xffffffff)) {
      lVar1 = -1;
    }
    lVar1 = fn_82E50BE8(lVar1,0,0,0,0);
    if (lVar1 != 0) {
      memcpy(lVar1,*(unsigned int *)(param_1 + 0x24),*(int *)(param_1 + 0x2c) << 5);
      if (*(int *)(param_1 + 0x24) != 0) {
        fn_82E4FE40();
      }
      *(int *)(param_1 + 0x24) = (int)lVar1;
      *(int *)(param_1 + 0x28) = (int)param_2;
                    /* WARNING: Subroutine does not return */
      memset(((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) & 0x7ffffff) * 0x20 + lVar1,0,
                   (param_2 - *(unsigned int *)(param_1 + 0x2c) & 0x7ffffff) << 5);
    }
    uVar2 = 0xffffffff8007000e;
  }
  RtlLeaveCriticalSection(param_1 + 8);
  return uVar2;
}

