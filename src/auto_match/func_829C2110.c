extern int fn_8265C940();
extern int fn_82F691F0();


unsigned __int64 d3dx_zcalloc(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned __int64 in_r0;
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  lVar2 = (__int64)param_2 * (__int64)(int)param_3;
  uVar1 = fn_8265C940(lVar2,0x24810000);
  if (uVar1 != 0) {
    trapWord(6,param_3,0);
    if (uVar1 != (__int64)(int)((uVar1 & 0xffffffff) / (param_3 & 0xffffffff)) *
                 (__int64)(int)param_3) {
      trapWord(0x1f,in_r0,0x16);
    }
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,lVar2);
  }
  return 0;
}

