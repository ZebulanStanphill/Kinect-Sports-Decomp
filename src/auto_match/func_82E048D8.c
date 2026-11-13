extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CED2F8();
extern int fn_82E02358();
extern int fn_82E080B8();
extern unsigned int lbl_821482BC;


unsigned int * fn_82E048D8(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  *(unsigned short *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_821482BC;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0x80000000;
  puVar6 = param_1 + 2;
  iVar3 = fn_82CE5410();
  uVar1 = param_1[3];
  uVar2 = *(unsigned int *)(param_2 + 0xc);
  uVar5 = (unsigned __int64)uVar2;
  uVar10 = (unsigned __int64)uVar1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar10 = uVar5;
  }
  if ((int)(param_1[4] & 0x3fffffff) < (int)uVar2) {
    uVar9 = ((unsigned __int64)(unsigned int)param_1[4] & 0x3fffffff) << 1;
    if ((int)uVar9 <= (int)uVar2) {
      uVar9 = uVar5;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),puVar6,uVar9,0x10);
  }
  lVar4 = uVar1 - uVar5;
  lVar7 = ((unsigned __int64)uVar2 & 0xfffffff) * 0x10 + (unsigned __int64)*puVar6;
  if (0 < lVar4) {
    do {
      fn_82E02358(lVar7);
      lVar4 = lVar4 + -1;
      lVar7 = lVar7 + 0x10;
    } while (lVar4 != 0);
  }
  uVar9 = (unsigned __int64)*puVar6;
  if (0 < (int)uVar10) {
    lVar4 = *(unsigned int *)(param_2 + 8) - uVar9;
    uVar8 = uVar10;
    do {
      fn_82E080B8(uVar9,lVar4 + uVar9);
      uVar8 = uVar8 - 1;
      uVar9 = uVar9 + 0x10;
    } while (uVar8 != 0);
  }
  lVar7 = (uVar10 & 0xfffffff) * 0x10;
  lVar4 = uVar5 - uVar10;
  uVar10 = (unsigned __int64)*puVar6 + lVar7;
  if (0 < lVar4) {
    lVar7 = ((unsigned __int64)*(unsigned int *)(param_2 + 8) + lVar7) - uVar10;
    do {
      if ((uVar10 & 0xffffffff) != 0) {
        fn_82CED2F8(uVar10);
        iVar3 = (int)uVar10;
        *(unsigned int *)(iVar3 + 4) = 0;
        *(unsigned int *)(iVar3 + 8) = 0;
        *(unsigned int *)(iVar3 + 0xc) = 0x80000000;
        fn_82E080B8(uVar10,lVar7 + uVar10);
      }
      lVar4 = lVar4 + -1;
      uVar10 = uVar10 + 0x10;
    } while (lVar4 != 0);
  }
  param_1[3] = uVar2;
  return param_1;
}

