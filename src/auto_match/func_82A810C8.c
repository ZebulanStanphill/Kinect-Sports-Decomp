extern int fn_82C2B580();
extern int fn_82C44798();
extern int fn_82F691F0();


unsigned __int64 fn_82A810C8(unsigned int *param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  fn_82C44798();
  iVar4 = (int)param_3;
  param_1[1] = iVar4;
  lVar2 = param_3;
  if (iVar4 < 1) {
    lVar2 = -param_3;
  }
  if (((int)lVar2 < 0x186a1) &&
     (uVar1 = (int)(unsigned int)param_4 >> 0x1f, (int)(((unsigned int)param_4 ^ uVar1) - uVar1) < 0x186a1)) {
    uVar3 = (param_4 - param_3) + 1;
    param_1[2] = (int)uVar3;
    if ((iVar4 < 1) && ((0 < (__int64)(uVar3 - param_3) && (0 < (int)uVar3)))) {
      uVar3 = fn_82C2B580((uVar3 & 0x3fffffff) << 2);
      *param_1 = (int)uVar3;
      if ((uVar3 & 0xffffffff) == 0) {
        return 0xffffffff8007000e;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3,0,param_1[2] << 2);
    }
  }
  return 0xffffffff80070057;
}

