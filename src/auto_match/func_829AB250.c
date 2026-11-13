extern int fn_829B5088();
extern int fn_82F691F0();


unsigned __int64 fn_829AB250(unsigned __int64 param_1,int param_2,int param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (__int64)param_2 * (__int64)param_3;
  lVar1 = fn_829B5088(param_1,uVar2);
  if (lVar1 == 0) {
    return 0;
  }
  if (0x8000 < (uVar2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(lVar1,0,0x8000);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lVar1,0,uVar2);
}

