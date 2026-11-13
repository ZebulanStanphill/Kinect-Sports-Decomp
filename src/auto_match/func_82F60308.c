extern int fn_82F60C60();
extern int fn_82F691F0();


__int64 fn_82F60308(int param_1)

{
  int *piVar1;
  __int64 lVar2;
  unsigned int uVar3;
  int iVar4;
  
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) == '\0') {
    lVar2 = -0x7ddbfbfc;
  }
  else {
    lVar2 = fn_82F60C60(param_1 + 0x24);
    if (-1 < lVar2) {
      uVar3 = 0;
      if (*(int *)(param_1 + 0xc) != 0) {
        iVar4 = 0;
        do {
          piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + iVar4);
          if (piVar1 != (int *)0x0) {
            (**(int (***)())(*piVar1 + 8))(*(unsigned int *)(*(int *)(param_1 + 0x1c) + iVar4));
          }
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (uVar3 < *(unsigned int *)(param_1 + 0xc));
      }
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(unsigned int *)(param_1 + 0x1c),0,*(int *)(param_1 + 8) << 2);
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return lVar2;
}

