extern int fn_8265C940();
extern int fn_82E871A0();
extern int fn_82F691F0();


unsigned __int64 fn_82E88988(int param_1)

{
  __int64 lVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  *(int *)(param_1 + 0x4a90) = *(int *)(param_1 + 0x564) * 8 + -8;
  uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d8) +
           ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d8) & 0x7fffffff) * 2 & 0xfffffff) << 4;
  lVar1 = (uVar3 & 0x7fffffff) << 1;
  if (0x7fffffff < uVar3) {
    lVar1 = -1;
  }
  iVar2 = fn_8265C940(lVar1,0x248c8000);
  *(int *)(param_1 + 0xd48) = iVar2;
  if (iVar2 != 0) {
    uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d8) +
             ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d8) & 0x7fffffff) * 2 & 0xffffff) << 8;
    lVar1 = (uVar3 & 0x7fffffff) << 1;
    if (0x7fffffff < uVar3) {
      lVar1 = -1;
    }
    iVar2 = fn_8265C940(lVar1,0x248c8000);
    *(int *)(param_1 + 0xd4c) = iVar2;
    if (iVar2 != 0) {
      uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) +
               ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) * 2 & 0x1fffff) << 0xb;
      lVar1 = (uVar3 & 0x7fffffff) << 1;
      if (0x7fffffff < uVar3) {
        lVar1 = -1;
      }
      iVar2 = fn_8265C940(lVar1,0x248c8000);
      *(int *)(param_1 + 0x2e8) = iVar2;
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(*(unsigned int *)(param_1 + 0xd4c),0,
                     ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d8) +
                      ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d8) & 0x7fffffff) * 2 & 0x7fffff) << 9);
      }
    }
  }
  fn_82E871A0(param_1);
  return 0xfffffffffffffffd;
}

