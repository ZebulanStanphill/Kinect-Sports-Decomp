extern int fn_82DAF688();


void fn_82D8EBD0(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) - 1;
  if (-1 < (__int64)uVar2) {
    lVar1 = (uVar2 & 0x3fffffff) << 2;
    do {
      fn_82DAF688(*(unsigned int *)(*(int *)(param_1 + 0x28) + (int)lVar1));
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + -4;
    } while (-1 < (__int64)uVar2);
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38) - 1;
  if (-1 < (__int64)uVar2) {
    lVar1 = (uVar2 & 0x3fffffff) << 2;
    do {
      fn_82DAF688(*(unsigned int *)((int)lVar1 + *(int *)(param_1 + 0x34)));
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + -4;
    } while (-1 < (__int64)uVar2);
  }
  fn_82DAF688(*(unsigned int *)(param_1 + 0x20));
  return;
}

