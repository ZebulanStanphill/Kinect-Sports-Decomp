void fn_82DB4D10(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar6;
  __int64 lVar5;
  __int64 lVar7;
  
  lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x34) - 1;
  if (lVar3 < 0) {
    return;
  }
  lVar4 = lVar3 * 0x70;
  do {
    if (*(int *)(*(int *)(param_1 + 0x30) + (int)lVar4 + 0x14) == *(int *)(param_2 + 8)) {
      iVar6 = *(int *)(param_1 + 0x34) + -1;
      *(int *)(param_1 + 0x34) = iVar6;
      if (iVar6 != (int)lVar3) {
        uVar1 = *(unsigned int *)(param_1 + 0x30);
        lVar5 = lVar4 + (unsigned __int64)uVar1;
        iVar2 = (int)lVar5;
        lVar7 = 0xe;
        do {
          *(unsigned __int64 *)lVar5 =
               *(unsigned __int64 *)(((iVar6 * 0x70 + uVar1) - iVar2) + (int)(unsigned __int64 *)lVar5);
          lVar5 = lVar5 + 8;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    lVar3 = lVar3 + -1;
    lVar4 = lVar4 + -0x70;
  } while (-1 < lVar3);
  return;
}

