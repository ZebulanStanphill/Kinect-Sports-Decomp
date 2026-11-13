extern int fn_82E50BE8();
extern int fn_82F691F0();


unsigned __int64 fn_82F33CC8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  if (((param_2 & 0xffffffff) == 0) || (0xffff < (param_2 & 0xffffffff))) {
    uVar1 = 0xffffffff80070057;
  }
  else if (param_3 == 0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    lVar3 = (param_2 + 2 & 0x1fffffff) * 8 + 0x10;
    lVar2 = fn_82E50BE8(lVar3,0,0,0,0);
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar2,0,lVar3);
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

