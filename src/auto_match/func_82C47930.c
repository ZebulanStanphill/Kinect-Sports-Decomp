extern int fn_82F691F0();


unsigned __int64 fn_82C47930(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  if (param_1 == 0) {
    uVar2 = 0xfffffffffffffffd;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2e0);
    if (*(int *)(iVar1 + 0x10) == 0) {
      *(unsigned int *)(iVar1 + 0xe8c) = 0;
      *(unsigned short *)(iVar1 + 0xe9c) = 0;
      *(unsigned int *)(iVar1 + 0x3d00) = 0;
      if (*(int *)(iVar1 + 0x3cb0) == 6) {
        *(unsigned __int64 *)(iVar1 + 0xe30) = 0;
        *(unsigned int *)(iVar1 + 0x120) = 0;
        *(unsigned int *)(iVar1 + 0xd54) = 0xfffffffd;
        *(unsigned int *)(iVar1 + 0xd58) = 0;
        *(unsigned int *)(iVar1 + 0xd68) = 0;
        *(unsigned int *)(iVar1 + 0x3a04) = 1;
        *(unsigned int *)(iVar1 + 0xd5c) = 0;
        *(unsigned int *)(iVar1 + 0xd6c) = 0;
        *(unsigned int *)(iVar1 + 0xda4) = 0;
        if (*(int *)(iVar1 + 0x3c04) != 0) {
          lVar4 = ((unsigned __int64)*(unsigned int *)(iVar1 + 0x4fb0) & 0x7fffffff) * 2;
          lVar3 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xbc) + lVar4;
          lVar5 = ((unsigned __int64)*(unsigned int *)(iVar1 + 0x4fb4) & 0x7fffffff) * 2;
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(*(unsigned int *)(iVar1 + 0xec0),0,
                       (__int64)(int)lVar3 * (__int64)(*(int *)(iVar1 + 0xb4) + (int)lVar4),lVar3,
                       *(unsigned int *)(iVar1 + 0x4fb4),(unsigned __int64)*(unsigned int *)(iVar1 + 0xc0) + lVar5,
                       (unsigned __int64)*(unsigned int *)(iVar1 + 200) + lVar5);
        }
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffffffffffc;
    }
  }
  return uVar2;
}

