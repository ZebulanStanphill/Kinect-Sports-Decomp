extern int fn_82F68CC0();


void fn_82C2C380(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x1d4) <= *(int *)(param_1 + 0x184)) {
    if (*(int *)(param_1 + 0x1cc) == 0) {
      iVar4 = *(int *)(param_1 + 0x100);
      if (*(int *)(param_1 + 0x1c0) != 0) {
        iVar4 = iVar4 << (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
      }
    }
    else {
      iVar4 = *(int *)(param_1 + 0x100) >> (*(unsigned int *)(param_1 + 0x1c8) & 0x3f);
    }
    iVar1 = *(int *)(param_1 + 0x1d4) >> 1;
    iVar5 = 0;
    if (*(short *)(param_1 + 0x22) != 0) {
      uVar2 = iVar4 * 3;
      do {
        lVar3 = (((__int64)(int)(((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0)) *
                  (__int64)iVar5 - (__int64)iVar1) + (__int64)(iVar4 >> 1) & 0x3fffffffU) * 4 +
                (unsigned __int64)*(unsigned int *)(param_1 + 0x144);
        fn_82F68CC0(lVar3,((unsigned __int64)*(unsigned int *)(param_1 + 0x1d4) & 0x3fffffff) * 4 + lVar3,
                     iVar1 << 2);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x22));
    }
    *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) - *(int *)(param_1 + 0x1d4);
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) - *(int *)(param_1 + 0x1d4);
  }
  return;
}

