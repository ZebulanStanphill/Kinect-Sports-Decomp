void fn_82D9BAA8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 0x78);
  }
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x164) - 1;
  if (-1 < (__int64)uVar4) {
    lVar3 = (uVar4 & 0x1fffffff) << 3;
    do {
      puVar2 = (unsigned int *)((int)lVar3 + *(int *)(param_1 + 0x160));
      piVar1 = (int *)*puVar2;
      (**(int (***)())(*piVar1 + 0x10))(piVar1,param_1 + 0x10,puVar2[1],param_3,param_2);
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -8;
    } while (-1 < (__int64)uVar4);
  }
  return;
}

