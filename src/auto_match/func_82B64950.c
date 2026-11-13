extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F691F0();


unsigned __int64 fn_82B64950(int *param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int uVar4;
  
  if (*(char *)((int)param_1 + 0xb) == '\x01') {
    uVar4 = *(unsigned int *)(param_1[1] + 0x68);
    if (*(unsigned int *)(param_1[1] + 0x68) <= *(unsigned int *)(*param_1 + 0x68)) {
      uVar4 = *(unsigned int *)(*param_1 + 0x68);
    }
    lVar1 = ((unsigned __int64)uVar4 & 0xfffffff) << 4;
    if (0xfffffff < uVar4) {
      lVar1 = -1;
    }
    uVar2 = fn_8265C9E0(lVar1);
    if ((uVar2 & 0xffffffff) != 0) {
      lVar1 = ((unsigned __int64)*(unsigned int *)(param_1[1] + 0x68) & 0xfffffff) << 4;
      if (0xfffffff < *(unsigned int *)(param_1[1] + 0x68)) {
        lVar1 = -1;
      }
      iVar3 = fn_8265C9E0(lVar1);
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar2,0,uVar4 << 4);
      }
      fn_8265CA20();
    }
  }
  return 0xffffffff80004005;
}

