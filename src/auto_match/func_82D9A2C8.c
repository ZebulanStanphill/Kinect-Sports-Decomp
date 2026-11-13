extern int fn_82D9A1E0();


void fn_82D9A2C8(int param_1)

{
  int *piVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x9c) - 1;
  if (-1 < (__int64)uVar2) {
    lVar3 = (uVar2 & 0x3fffffff) << 2;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x98) + (int)lVar3);
      if (piVar1 != (int *)0x0) {
        (**(int (***)())(*piVar1 + 4))(piVar1,param_1);
      }
      uVar2 = uVar2 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (__int64)uVar2);
  }
  fn_82D9A1E0(param_1);
  return;
}

