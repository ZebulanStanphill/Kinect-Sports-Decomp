extern int fn_82C2B580();
extern int fn_82F691F0();


unsigned __int64 fn_82C2E688(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_1 + 0x3c) < 3) {
    uVar2 = 0;
    *(unsigned int *)(param_1 + 0x224) = 0;
  }
  else {
    lVar1 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x22) + 1) * 4;
    uVar3 = fn_82C2B580(lVar1);
    *(int *)(param_1 + 0x224) = (int)uVar3;
    if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar3,0,lVar1);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

