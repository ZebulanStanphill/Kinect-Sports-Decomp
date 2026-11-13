void fn_82FAE040(int *param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (__int64)(param_1[0x20] - param_1[0x1f] >> 3) - 1;
  if (-1 < (__int64)uVar2) {
    lVar1 = (uVar2 & 0x1fffffff) << 3;
    do {
      (**(int (***)())(**(int **)((int)lVar1 + param_1[0x1f] + 4) + 8))();
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + -8;
    } while (-1 < (__int64)uVar2);
  }
  (**(int (***)())(*param_1 + 8))(param_1);
  return;
}

