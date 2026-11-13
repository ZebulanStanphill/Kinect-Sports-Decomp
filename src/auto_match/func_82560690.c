extern int fn_825602B8();


__int64 fn_82560690(unsigned __int64 param_1)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  uVar4 = 0xffffffff83280b88;
  lVar2 = 0;
  lVar3 = 0;
  lVar5 = -0x7cd7f468;
  do {
    iVar1 = fn_825602B8(lVar3);
    if ((iVar1 != 0) && ((*(int *)(*(int *)lVar5 + 0xcc) == (int)param_1 || ((int)param_1 == 2)))) {
      lVar2 = lVar2 + 1;
    }
    lVar5 = lVar5 + 4;
    lVar3 = lVar3 + 1;
  } while ((int)lVar5 < (int)uVar4 + 0x18);
  return lVar2;
}

