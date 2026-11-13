unsigned __int64 fn_82FB6438(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 0xa0);
  lVar3 = (__int64)((int)(*(int *)(param_1 + 0xa4) - uVar1) / 0x34) + -1;
  if (-1 < lVar3) {
    lVar4 = lVar3 * 0x34;
    do {
      iVar2 = *(int *)((int)lVar4 + uVar1);
      if (((iVar2 == -1) || (iVar2 == param_2)) &&
         ((iVar2 = *(int *)((int)(lVar4 + (unsigned __int64)uVar1) + 4), iVar2 == -1 || (iVar2 == param_3))
         )) {
        return lVar4 + (unsigned __int64)uVar1;
      }
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + -0x34;
    } while (-1 < lVar3);
  }
  return (unsigned __int64)*(unsigned int *)(param_1 + 0xa0);
}

