extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F691F0();


unsigned __int64 fn_82934858(unsigned __int64 param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (param_2 & 0x3fffffff) << 2;
  lVar1 = (uVar2 & 0x3fffffff) << 2;
  if (0x3fffffff < uVar2) {
    lVar1 = -1;
  }
  lVar1 = fn_8265C9E0(lVar1);
  if (lVar1 == 0) {
    fn_8265CA20(0);
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lVar1,0,(param_2 & 0xfffffff) << 4);
}

