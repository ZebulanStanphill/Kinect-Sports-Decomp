extern int fn_82C2B580();
extern int fn_82F691F0();


unsigned __int64 fn_82A6B8B8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if (*(int *)(param_1 + 0x3c) < 3) {
    uVar2 = 0;
  }
  else {
    uVar1 = fn_82C2B580(*(int *)(param_1 + 0xf4) << 2);
    *(int *)(param_1 + 0x15c) = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,*(int *)(param_1 + 0xf4) << 2);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

