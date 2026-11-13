typedef unsigned char bool;
#define NAN(x) ((x) != (x))
extern int fn_822B70F0();
extern int fn_822BD338();
extern int fn_824CCD80();
extern int fn_824CD030();
extern int fn_82560690();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_82191118;
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_822C44D0(double param_1,__int64 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  float fVar7;
  int iVar8;
  char cVar10;
  int iVar9;
  __int64 lVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  iVar3 = (int)param_2;
  iVar2 = *(int *)(iVar3 + 0x24);
  iVar9 = -1;
  uVar13 = 0;
  dVar19 = (double)lbl_821CA460;
  dVar20 = dVar19;
  if ((((*(int *)(iVar3 + 0x200) != 0) && (iVar2 != 0)) &&
      (iVar8 = fn_824CD030(iVar2), iVar8 != 0)) &&
     (((cVar10 = fn_822BD338((unsigned __int64)*(unsigned int *)(*(int *)(iVar3 + 0x114) + 0x20) + 4,
                                   0xffffffff821aca94), cVar10 != '\0' ||
       (cVar10 = fn_822BD338((unsigned __int64)*(unsigned int *)(*(int *)(iVar3 + 0x114) + 0x20) + 4,
                                   0xffffffff821ace70), cVar10 != '\0')) ||
      ((iVar8 = *(int *)(*(int *)(iVar3 + 0x110) + 0x18), iVar8 == 0x12 ||
       ((iVar8 == 0x14 || (iVar8 == 0x10)))))))) {
    dVar19 = (double)lbl_82191FC8;
    uVar13 = 1;
    iVar8 = fn_82560690(2);
    if (1 < iVar8) {
      iVar9 = fn_824CCD80(iVar2);
    }
  }
  fVar7 = ltcg_pool_0_0f;
  fVar1 = (float)((double)*(float *)(iVar3 + 0x204) - param_1);
  fVar4 = -fVar1;
  fVar5 = ltcg_pool_0_0f;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar4 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar4) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar5 = fVar1;
  }
  *(float *)(iVar3 + 0x204) = fVar5;
  if (fVar5 <= fVar7) {
    dVar17 = (double)lbl_82191118;
    lVar11 = 0;
    bVar6 = *(int *)(iVar3 + 300) != 0;
    dVar16 = (double)lbl_8218E8FC;
    lVar12 = param_2 + 0x130;
    dVar18 = (double)lbl_821916FC;
    do {
      dVar14 = (double)*(float *)lVar12;
      if (((uVar13 & 0xffffffff) == 0) || (((int)lVar11 != iVar9 && (iVar9 != -1)))) {
        if ((bVar6) ||
           (dVar15 = (double)(float)((double)(float)((double)(float)(dVar20 - dVar14) * param_1) *
                                     dVar18 + dVar14), dVar17 <= dVar15)) {
          dVar15 = dVar20;
        }
      }
      else {
        dVar15 = dVar19;
        if (!bVar6) {
          dVar15 = (double)(float)((double)(float)((double)(float)(dVar19 - dVar14) * param_1) *
                                   dVar16 + dVar14);
        }
      }
      fn_822B70F0(dVar15,param_2);
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 4;
    } while ((int)lVar11 < 2);
  }
  return;
}

