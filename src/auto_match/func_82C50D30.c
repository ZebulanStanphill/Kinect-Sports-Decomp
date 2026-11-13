extern int fn_82C562F0();
extern int fn_82F691F0();


unsigned __int64 fn_82C50D30(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  
  lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x6070) + 8;
  puVar1 = (unsigned int *)fn_82C562F0(lVar4,0x10,0xffffffff82196582);
  *(unsigned int **)(param_1 + 0x3ba4) = puVar1;
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    uVar2 = fn_82C562F0(lVar4,0x20,0xffffffff82196582);
    *(unsigned int *)(param_1 + 0x770) = uVar2;
    uVar2 = fn_82C562F0(lVar4,0x20,0xffffffff82196582);
    *(unsigned int *)(param_1 + 0x774) = uVar2;
    uVar2 = fn_82C562F0(lVar4,0x20,0xffffffff82196582);
    *(unsigned int *)(param_1 + 0x778) = uVar2;
    iVar3 = fn_82C562F0(lVar4,0x20,0xffffffff82196582);
    *(int *)(param_1 + 0x77c) = iVar3;
    if ((((*(int *)(param_1 + 0x770) != 0) && (*(int *)(param_1 + 0x774) != 0)) &&
        (*(int *)(param_1 + 0x778) != 0)) && (iVar3 != 0)) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(int *)(param_1 + 0x770),0,0x20);
    }
  }
  return 0xfffffffffffffff7;
}

