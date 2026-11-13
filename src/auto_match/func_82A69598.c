extern int fn_82BA02A8();
extern int fn_82C2B580();
extern int fn_82D7E470();
extern int fn_82F691F0();


unsigned __int64 fn_82A69598(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  
  uVar4 = ((int)(*(unsigned short *)(param_1 + 0x6e) + 7) >> 3) * 8 - 1;
  *(int *)(param_1 + 0x2d0) = (1 << (uVar4 & 0x3f)) + -1;
  *(int *)(param_1 + 0x2d4) = -1 << (uVar4 & 0x3f);
  uVar2 = fn_82D7E470(param_1,param_1 + 0x298,8);
  if (-1 < (int)uVar2) {
    fn_82BA02A8(param_1,param_1 + 0x298);
    lVar1 = (unsigned __int64)*(unsigned short *)(param_1 + 0x22) << 2;
    uVar3 = fn_82C2B580(lVar1);
    *(int *)(param_1 + 0x164) = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3,0,lVar1);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

