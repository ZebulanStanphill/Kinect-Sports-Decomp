extern int fn_82BF71A0();
extern int fn_82F691F0();


unsigned __int64 fn_82BF77B8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    uVar1 = fn_82BF71A0(param_1 + 0x18,*(unsigned int *)(param_1 + 0x1c),0x18);
    if ((uVar1 & 0xffffffff) == 0) {
      return 0;
    }
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
    lVar3 = uVar2 * 0x18 + uVar1 + -0xc;
    if (-1 < (__int64)(uVar2 - 1)) {
      do {
        *(unsigned int *)((int)lVar3 + 0x10) = *(unsigned int *)(param_1 + 0x14);
        *(int *)(param_1 + 0x14) = (int)lVar3;
        lVar3 = lVar3 + -0x18;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(int *)(param_1 + 0x14),0,0x18);
}

