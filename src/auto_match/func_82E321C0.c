extern int fn_82C2B580();
extern int fn_82F691F0();


unsigned __int64 fn_82E321C0(int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if (*(short *)(*param_1 + 0x22) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = fn_82C2B580(0x38);
    *(int *)(param_2 + 0x1a8) = (int)uVar1;
    if ((uVar1 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar1,0,0x38);
    }
    uVar2 = 0xffffffff8007000e;
  }
  return uVar2;
}

