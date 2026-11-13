extern int fn_826776A0();
extern int fn_826792B0();


void fn_82679C40(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x1d8) != 0) {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1d8) - 1;
    iVar3 = 0;
    if (-1 < (__int64)uVar2) {
      lVar1 = (uVar2 & 0x3fffffff) << 2;
      do {
        if (2 < *(int *)((int)lVar1 + *(int *)(param_1 + 0x1d4))) {
          iVar3 = *(int *)((int)((uVar2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x1d4));
          break;
        }
        uVar2 = uVar2 - 1;
        lVar1 = lVar1 + -4;
      } while (-1 < (__int64)uVar2);
    }
    fn_826792B0(param_1 + 0x1d4,(unsigned __int64)*(unsigned int *)(param_1 + 0x1d8) - 1);
    if (iVar3 != *(int *)(param_1 + 0x1d0)) {
      *(int *)(param_1 + 0x1d0) = iVar3;
      fn_826776A0(param_1,iVar3);
    }
  }
  return;
}

