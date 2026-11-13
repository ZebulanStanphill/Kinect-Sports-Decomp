extern int fn_8265C940();
extern int fn_82F691F0();


unsigned __int64 fn_82ED41C8(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((*(int *)(iVar1 + 0x588) < 3) || (0x15 < *(int *)(iVar1 + 0x588))) {
    return 0;
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3c);
  if (uVar2 == 0) {
    iVar3 = (int)(((unsigned __int64)*(unsigned int *)(iVar1 + 0x2d0) + 7 & 0xffffffff) >> 3);
    *(int *)(param_1 + 0x40) = iVar3;
    iVar4 = *(int *)(iVar1 + 0x2d4);
    if (*(int *)(iVar1 + 0x7b38) != 0) {
      iVar4 = iVar4 << 1;
    }
    uVar2 = fn_8265C940((__int64)iVar3 * (__int64)iVar4,0x248c8000);
    *(int *)(param_1 + 0x3c) = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,(__int64)*(int *)(*(int *)(param_1 + 0x38) + 0x2d4) *
                       (__int64)*(int *)(param_1 + 0x40));
}

