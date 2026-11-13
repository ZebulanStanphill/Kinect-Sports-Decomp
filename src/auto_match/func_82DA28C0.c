void fn_82DA28C0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  if (param_3 == (int *)0x0) {
    param_3 = *(int **)(*(int *)(param_1 + 8) + 0x78);
  }
  iVar1 = *param_3;
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x164) - 1;
  if (-1 < (__int64)uVar3) {
    lVar4 = (uVar3 & 0x3fffffff) << 2;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x160) + (int)lVar4);
      (**(int (***)())((unsigned int)*(unsigned char *)((*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0xd) * 0x20 +
                                   *(int *)(*piVar2 + 0xc) + iVar1) * 0x14 + iVar1 + 0x9a4))
                ((int *)(param_1 + 0x10),piVar2,param_3,param_2);
      if (*(char *)(param_2 + 4) != '\0') {
        return;
      }
      uVar3 = uVar3 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (__int64)uVar3);
  }
  return;
}

