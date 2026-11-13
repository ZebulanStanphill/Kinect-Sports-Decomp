extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F691F0();


unsigned __int64 fn_82934720(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_4 + 4) == 0xe) {
    if (*(int *)(*(int *)(param_4 + 0x20) + 4) == 1) {
      uVar2 = (param_2 & 0x3fffffff) << 2;
      lVar1 = (uVar2 & 0x3fffffff) << 2;
      if (0x3fffffff < uVar2) {
        lVar1 = -1;
      }
      lVar1 = fn_8265C9E0(lVar1);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar1,0,(param_2 & 0xfffffff) << 4);
      }
      uVar3 = 0xffffffff8007000e;
    }
    fn_8265CA20(0);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

