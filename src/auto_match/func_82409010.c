#define NAN(x) ((x) != (x))
extern unsigned int *auStack_58;
extern int fn_822315A0();
extern int fn_82458458();
extern int fn_82458910();
extern int fn_82508078();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_8218E1AC;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821BA6C4;
extern unsigned int lbl_821BA6D8;
extern unsigned int lbl_821BA6DC;
extern unsigned int lbl_821BA6E0;
extern unsigned int lbl_821BA6E4;
extern unsigned int lbl_821BA6F8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82409010(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  unsigned char *puVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  unsigned int *puVar15;
  double dVar16;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int auStack_58 [2];
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  fn_82458910(&iStack_48,*(unsigned int *)(param_2 + 0x40),0);
  fn_82458910(&iStack_50,*(unsigned int *)(param_2 + 0x40),1);
  iVar5 = (**(int (***)())(**(int **)(param_2 + 0x14) + 8))();
  if ((*(int *)(iVar5 + 0x7a0) != 0) ||
     (iVar5 = (**(int (***)())(**(int **)(param_2 + 0x14) + 8))(), *(int *)(iVar5 + 0x7a0) != 0)) {
    *(float *)(param_2 + 0x44) = lbl_8218E1AC;
  }
  fVar4 = ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0x44) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x44) - param_1);
    fVar2 = -fVar1;
    fVar3 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    *(float *)(param_2 + 0x44) = fVar3;
    if (fVar3 == fVar4) {
      dVar16 = (double)lbl_8218E1AC;
      *(float *)(param_2 + 0x44) = lbl_8218E1AC;
      fn_82458458(dVar16,&uStack_5c,iStack_48);
      iVar5 = 0x14;
      uStack_5c = (int)(*(int *)(iStack_48 + 0x1c) - uStack_5c) / 0x14;
      uVar7 = (unsigned __int64)(int)uStack_5c;
      fn_82458458(&uStack_60,iStack_50);
      puVar15 = &uStack_60;
      uStack_60 = (int)(*(int *)(iStack_50 + 0x1c) - uStack_60) / iVar5;
      if ((unsigned __int64)uStack_60 <= (uVar7 & 0xffffffff)) {
        puVar15 = &uStack_5c;
      }
      puVar9 = &uStack_60;
      if ((uVar7 & 0xffffffff) <= (unsigned __int64)uStack_60) {
        puVar9 = &uStack_5c;
      }
      if (((((uVar7 & 0xffffffff) < 0x19) ||
           (puVar6 = lbl_821BA6DC, uStack_60 < 0x19)) &&
          ((9 < (uVar7 & 0xffffffff) || (puVar6 = lbl_821BA6E4, 9 < uStack_60))))
         && (puVar6 = lbl_821BA6D8, 9 < *puVar15 - *puVar9)) {
        puVar6 = lbl_821BA6E0;
      }
      fn_82508078(**(unsigned int **)(param_2 + 0xc),puVar6,0);
    }
  }
  fn_82458458((double)lbl_821916FC,&uStack_5c,iStack_48);
  uVar7 = 0;
  for (uVar10 = uStack_5c; uVar10 != *(unsigned int *)(iStack_48 + 0x1c); uVar10 = uVar10 + 0x14) {
    if (*(int *)(uVar10 + 8) != 8) {
      uVar7 = uVar7 + 1;
    }
  }
  uStack_60 = (unsigned int)uVar7;
  dVar16 = (double)fn_82458458(&uStack_5c,iStack_50);
  uVar8 = 0;
  for (; uStack_5c != *(unsigned int *)(iStack_50 + 0x1c); uStack_5c = uStack_5c + 0x14) {
    if (*(int *)(uStack_5c + 8) != 8) {
      uVar8 = uVar8 + 1;
    }
  }
  uStack_5c = (unsigned int)uVar8;
  puVar15 = &uStack_5c;
  if ((uVar8 & 0xffffffff) <= (uVar7 & 0xffffffff)) {
    puVar15 = &uStack_60;
  }
  if (2 < *puVar15) {
    fn_82508078(**(unsigned int **)(param_2 + 0xc),lbl_821BA6C4,0);
    dVar16 = (double)lbl_821916FC;
  }
  fn_82458458(dVar16,&uStack_5c,iStack_48);
  uVar8 = (unsigned __int64)*(unsigned int *)(iStack_48 + 0x1c);
  uVar7 = 0;
  for (uVar12 = (unsigned __int64)uStack_5c; (uVar12 & 0xffffffff) != uVar8; uVar12 = uVar12 + 0x14) {
    if (*(int *)((int)uVar12 + 8) == 8) {
      uVar7 = uVar7 + 1;
    }
  }
  auStack_58[0] = (unsigned int)uVar7;
  fn_82458458(&uStack_5c,iStack_48);
  iVar5 = 0;
  if ((unsigned __int64)uStack_5c != (uVar8 & 0xffffffff)) {
    lVar14 = (unsigned __int64)uStack_5c + 0x10;
    do {
      if ((((int *)lVar14)[-2] == 8) && (*(int *)lVar14 == 3)) {
        iVar5 = iVar5 + 1;
      }
      uVar12 = lVar14 + 4;
      lVar14 = lVar14 + 0x14;
    } while ((uVar12 & 0xffffffff) != (uVar8 & 0xffffffff));
  }
  fn_82458458(&uStack_5c,iStack_50);
  uVar12 = (unsigned __int64)*(unsigned int *)(iStack_50 + 0x1c);
  uVar8 = 0;
  for (uVar13 = (unsigned __int64)uStack_5c; (uVar13 & 0xffffffff) != uVar12; uVar13 = uVar13 + 0x14) {
    if (*(int *)((int)uVar13 + 8) == 8) {
      uVar8 = uVar8 + 1;
    }
  }
  uStack_60 = (unsigned int)uVar8;
  fn_82458458(&uStack_5c,iStack_50);
  iVar11 = 0;
  if ((unsigned __int64)uStack_5c != (uVar12 & 0xffffffff)) {
    lVar14 = (unsigned __int64)uStack_5c + 0x10;
    do {
      if ((((int *)lVar14)[-2] == 8) && (*(int *)lVar14 == 3)) {
        iVar11 = iVar11 + 1;
      }
      uVar13 = lVar14 + 4;
      lVar14 = lVar14 + 0x14;
    } while ((uVar13 & 0xffffffff) != (uVar12 & 0xffffffff));
  }
  puVar15 = &uStack_60;
  if ((uVar8 & 0xffffffff) <= (uVar7 & 0xffffffff)) {
    puVar15 = auStack_58;
  }
  if (((2 < *puVar15) || (iVar5 != 0)) || (iVar11 != 0)) {
    fn_82508078(**(unsigned int **)(param_2 + 0xc),lbl_821BA6F8,0);
  }
  if (iStack_4c != 0) {
    fn_822315A0();
  }
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  return;
}

