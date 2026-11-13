void fn_82D9BB28(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  if ((param_3 & 0xffffffff) == 0) {
    param_3 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 0x78);
  }
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x164) - 1;
  if (-1 < (__int64)uVar3) {
    lVar4 = (uVar3 & 0x1fffffff) << 3;
    do {
      puVar2 = (unsigned int *)((int)lVar4 + *(int *)(param_1 + 0x160));
      piVar1 = (int *)*puVar2;
      (**(int (***)())(*piVar1 + 0xc))(piVar1,param_1 + 0x10,puVar2[1],param_3,param_2);
      if (*(char *)(param_2 + 4) != '\0') {
        return;
      }
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + -8;
    } while (-1 < (__int64)uVar3);
  }
  return;
}

