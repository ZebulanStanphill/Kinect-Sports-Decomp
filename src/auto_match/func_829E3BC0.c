extern unsigned int lbl_82057AC0;
extern unsigned int lbl_821AAD20;


double fn_829E3BC0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  double dVar5;
  
  iVar1 = 0;
  dVar5 = (double)lbl_821AAD20;
  do {
    iVar3 = 0;
    lVar4 = 5;
    do {
      iVar2 = iVar1 + iVar3;
      iVar3 = iVar3 + 1;
      dVar5 = (double)(float)((double)(float)(&lbl_82057AC0)[iVar2] + dVar5);
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    iVar1 = iVar1 + 5;
  } while (iVar1 < 0x19);
  return dVar5;
}

