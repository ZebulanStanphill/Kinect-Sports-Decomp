extern int fn_82631488();
extern int fn_82631830();


unsigned __int64 fn_82C01AD0(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  lVar1 = fn_82631830(0xffffffff820ebfe8);
  *(int *)(param_1 + 0x48) = (int)lVar1;
  uVar2 = -(unsigned __int64)(lVar1 == 0) & 0xffffffff8007000e;
  if (-1 < (int)uVar2) {
    lVar1 = fn_82631488(0xffffffff820ec0d8);
    *(int *)(param_1 + 0x144) = (int)lVar1;
    uVar2 = -(unsigned __int64)(lVar1 == 0) & 0xffffffff8007000e;
    if (-1 < (int)uVar2) {
      lVar1 = fn_82631488(0xffffffff820ec2b8);
      *(int *)(param_1 + 0x148) = (int)lVar1;
      uVar2 = -(unsigned __int64)(lVar1 == 0) & 0xffffffff8007000e;
    }
  }
  return uVar2;
}

