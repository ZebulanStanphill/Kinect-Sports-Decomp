void fn_82DA2818(int param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  if (param_3 == (int *)0x0) {
    param_3 = *(int **)(*(int *)(param_1 + 8) + 0x78);
  }
  iVar1 = *param_3;
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x164) - 1;
  if (-1 < (__int64)uVar4) {
    lVar3 = (uVar4 & 0x3fffffff) << 2;
    do {
      piVar2 = *(int **)(*(int *)(param_1 + 0x160) + (int)lVar3);
      (**(int (***)())((unsigned int)*(unsigned char *)((*(int *)(*(int *)(param_1 + 0x10) + 0xc) + 0xd) * 0x20 +
                                   *(int *)(*piVar2 + 0xc) + iVar1) * 0x14 + iVar1 + 0x9a8))
                ((int *)(param_1 + 0x10),piVar2,param_3,param_2);
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (__int64)uVar4);
  }
  return;
}

