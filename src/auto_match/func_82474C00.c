extern float fRam831c668c;
extern int fn_82475290();
extern int fn_82475788();
extern int fn_8249ABC0();
extern int fn_8252CAF8();
extern int fn_82547C80();
extern int fn_82F4EBE8();
extern int iRam831c6690;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F844;


void fn_82474C00(int param_1)

{
  int iVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  unsigned __int64 uVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  __int64 lVar11;
  __int64 lVar12;
  int *piVar13;
  int *piVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  iVar1 = iRam831c6690;
  piVar13 = (int *)(param_1 + 0x84);
  lVar11 = 2;
  do {
    if (*piVar13 != 0) {
      uVar7 = 0;
      if (iVar1 == 0) {
        uVar7 = 3;
      }
      uVar7 = fn_82547C80((unsigned __int64)*(unsigned int *)(*piVar13 + 0x8c0) + 0xd0,0,uVar7);
      fn_82547C80(uVar7,1,0);
    }
    lVar11 = lVar11 + -1;
    piVar13 = piVar13 + 2;
  } while (lVar11 != 0);
  lVar11 = -1;
  dVar16 = (double)ltcg_pool_0_0f;
  dVar17 = dVar16;
  iVar4 = fn_8249ABC0();
  iVar1 = *(int *)(iVar4 + 0x4c);
  piVar14 = (int *)(param_1 + 0x54);
  lVar12 = 0;
  piVar10 = (int *)(iVar4 + 0x14);
  piVar13 = piVar14;
  do {
    iVar9 = *piVar10;
    if (*(int *)(iVar9 + 0x20) < 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)fn_82F4EBE8();
    }
    if ((piVar5 != (int *)0x0) && (iVar6 = (**(int (***)())(*piVar5 + 4))(), iVar6 != 0)) {
      iVar9 = *(int *)(iVar9 + 0x20) * 8 + iVar1;
      dVar15 = dVar16;
      if (*(int *)(iVar9 + 8) != 0) {
        dVar15 = (double)*(float *)(iVar9 + 0xc);
      }
      if (((dVar17 < dVar15) && ((double)fRam831c668c < dVar15)) && (*piVar13 != 0)) {
        lVar11 = lVar12;
        dVar17 = dVar15;
      }
    }
    lVar12 = lVar12 + 1;
    piVar10 = piVar10 + 1;
    piVar13 = piVar13 + 6;
  } while ((int)lVar12 < 2);
  iVar9 = (int)lVar11;
  if (((-1 < iVar9) &&
      (iVar4 = *(int *)(*(int *)(((iVar9 == 0) + 5) * 4 + iVar4) + 0x20), -1 < iVar4)) &&
     ((iVar4 < 2 && (piVar13 = *(int **)((iVar4 + 1) * 8 + iVar1), piVar13 != (int *)0x0)))) {
    (**(int (***)())(*piVar13 + 0x24))();
  }
  *(float *)(param_1 + 0xa0) = (float)dVar16;
  if (iVar9 < 0) {
    lVar11 = 0;
    do {
      if (*piVar14 != 0) {
        lVar12 = fn_82475290(lVar11);
        fn_8252CAF8(*(unsigned int *)*piVar14,2,lVar12 != 0);
        fn_8252CAF8(*(unsigned int *)*piVar14,3,(int)lVar12 == 0);
        fn_8252CAF8(*(unsigned int *)*piVar14,1,0);
      }
      iVar4 = lbl_8327F844;
      lVar11 = lVar11 + 1;
      piVar14 = piVar14 + 6;
    } while ((int)lVar11 < 2);
    if (lbl_8327F844 != 0) {
      *(unsigned int *)(lbl_8327F844 + 0xf0) = 0;
      *(unsigned int *)(iVar4 + 0xf4) = 0;
    }
    bVar2 = 0;
    pfVar8 = (float *)(param_1 + 0x58);
    lVar11 = 2;
    do {
      if ((pfVar8[-1] == 0.0) || (bVar3 = 1, (double)*pfVar8 <= dVar16)) {
        bVar3 = 0;
      }
      bVar2 = bVar3 | bVar2;
      pfVar8 = pfVar8 + 6;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar4 = (-(unsigned int)bVar2 & 5) + 9;
  }
  else {
    fn_82475788(dVar17,param_1,lVar11);
    iVar4 = 0xd;
  }
  *(int *)(iVar1 + 0x18) = iVar4;
  return;
}

