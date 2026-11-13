extern int fn_829302D0();
extern int fn_82F691F0();


unsigned __int64 fn_829020B8(int param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned int uVar4;
  
  if (((*(int *)(param_2 + 0x14) == 0) || (*(int *)(param_2 + 0x38) == 0)) ||
     (*(int *)(param_2 + 0x50) != 0)) {
    uVar1 = 0;
  }
  else {
    *(unsigned int *)(param_2 + 0x4c) = 0;
    if (*(int *)(param_2 + 0x14) != 0) {
      uVar3 = 0;
      do {
        uVar4 = *(int *)(*(int *)(*(int *)((*(int *)(param_2 + 0x10) + uVar3) * 4 +
                                          *(int *)(param_1 + 0x18)) * 4 +
                                 *(int *)(*(int *)(param_1 + 8) + 0x14)) + 0x70) + 1;
        if (*(unsigned int *)(param_2 + 0x4c) < uVar4) {
          *(unsigned int *)(param_2 + 0x4c) = uVar4;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(unsigned int *)(param_2 + 0x14));
    }
    iVar2 = fn_829302D0(*(int *)(param_2 + 0x4c) << 2,0x10);
    *(int *)(param_2 + 0x50) = iVar2;
    if (iVar2 != 0) {
      iVar2 = fn_829302D0(*(int *)(param_2 + 0x14) << 2,0x10);
      *(int *)(param_2 + 0x54) = iVar2;
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(unsigned int *)(param_2 + 0x50),0,*(int *)(param_2 + 0x4c) << 2);
      }
    }
    uVar1 = 0xffffffff8007000e;
  }
  return uVar1;
}

