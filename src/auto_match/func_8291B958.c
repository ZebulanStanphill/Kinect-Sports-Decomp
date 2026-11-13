extern int fn_8265C940();
extern int fn_82F691F0();


unsigned __int64 fn_8291B958(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned short *)(*(int *)(param_1 + 0x18) + 10);
  if (uVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = fn_8265C940(uVar2 << 2,0x24810000);
    *(int *)(param_1 + 0x38) = (int)uVar2;
    if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar2,0,(unsigned __int64)*(unsigned short *)(*(int *)(param_1 + 0x18) + 10) << 2);
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

