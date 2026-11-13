typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e4;
extern unsigned int *auStack_f0;
extern int fn_82F69148();
extern unsigned int lbl_82195518;
extern unsigned int lbl_821958A8;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Type propagation algorithm not settling */

void fn_823DC330(int param_1,unsigned int param_2,int param_3,unsigned int param_4,int param_5)

{
  unsigned int uVar1;
  float *pfVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  unsigned __int64 in_r0;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned int *puVar15;
  double dVar16;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  float fVar17;
  float fVar18;
  unsigned int auStack_f0 [3];
  unsigned int auStack_e4 [9];
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int uStack_ac;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  unsigned int auStack_a0 [8];
  double dStack_80;
  
  iVar13 = param_3;
  uVar14 = param_2;
  if (param_2 < param_4) {
    iVar13 = param_1;
    param_1 = param_3;
    uVar14 = param_4;
    param_4 = param_2;
  }
  dStack_80 = lbl_821958A8;
  auStack_a0[0] = 0;
  auStack_a0[1] = 1;
  auStack_a0[2] = 2;
  auStack_a0[3] = 3;
  puVar12 = auStack_e4 + param_4 + 1;
  auStack_a0[4] = 4;
  puVar15 = auStack_e4 + uVar14 + 9;
  auStack_a0[5] = 5;
  auStack_a0[6] = 6;
  puVar10 = auStack_e4 + param_4;
  auStack_a0[7] = 7;
  uStack_c0 = 0;
  uStack_bc = 1;
  uStack_b8 = 2;
  uStack_b4 = 3;
  uStack_b0 = 4;
  uStack_ac = 5;
  uStack_a8 = 6;
  uStack_a4 = 7;
  auStack_e4[1] = 0;
  auStack_e4[2] = 1;
  auStack_e4[3] = 2;
  auStack_e4[4] = 3;
  auStack_e4[5] = 4;
  auStack_e4[6] = 5;
  auStack_e4[7] = 6;
  auStack_e4[8] = 7;
  dVar5 = lbl_82195518;
  iVar4 = iVar13;
  uVar14 = param_4;
  dVar16 = lbl_82195518;
joined_r0x823dc42c:
  for (; uVar14 != 0; uVar14 = uVar14 - 1) {
    uVar7 = (int)in_r0 + iVar4 & 0xfffffff0;
    fVar17 = *(float *)(uVar7 + 4);
    fVar18 = *(float *)(uVar7 + 8);{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs32,in_vs45); memcpy(in_vs32, &_vt0, 16); }
    fVar17 = fVar17 * fVar17 + 0.0 + fVar18 * fVar18;
    pfVar2 = (float *)((int)auStack_f0 + (int)in_r0 & 0xfffffff0);
    *pfVar2 = fVar17;
    pfVar2[1] = fVar17;
    pfVar2[2] = fVar17;
    pfVar2[3] = fVar17;
    dVar5 = (double)auStack_f0[0] + dVar5;
    iVar4 = iVar4 + 0x10;
  }
  if ((dVar5 < dStack_80) && (dStack_80 = dVar5, param_4 != 0)) {
    fn_82F69148(auStack_e4 + 0x11,auStack_e4 + 1,param_4 & 0x3fffffff);
  }
  if ((auStack_e4 + 1 != puVar12) && (puVar11 = puVar10, auStack_e4 + 1 != puVar10)) {
LAB_823dc4c0:
    puVar8 = puVar11 + -1;
    if (*puVar11 <= *puVar8) goto LAB_823dc4b4;
    uVar14 = *puVar8;
    puVar6 = puVar12;
    do {
      puVar6 = puVar6 + -1;
    } while (*puVar6 <= uVar14);
    *puVar8 = *puVar6;
    *puVar6 = uVar14;
    puVar8 = puVar12;
    if (puVar11 != puVar12) {
      do {
        puVar8 = puVar8 + -1;
        if (puVar11 == puVar8) break;
        uVar14 = *puVar11;
        *puVar11 = *puVar8;
        puVar11 = puVar11 + 1;
        *puVar8 = uVar14;
      } while (puVar11 != puVar8);
    }
    bVar3 = true;
    goto LAB_823dc564;
  }
  goto LAB_823dc560;
LAB_823dc4b4:
  puVar11 = puVar8;
  if (puVar8 == auStack_e4 + 1) goto LAB_823dc530;
  goto LAB_823dc4c0;
LAB_823dc530:
  puVar11 = auStack_e4 + 1;
  puVar8 = puVar12;
  do {
    puVar8 = puVar8 + -1;
    if (puVar11 == puVar8) break;
    uVar14 = *puVar11;
    *puVar11 = *puVar8;
    puVar11 = puVar11 + 1;
    *puVar8 = uVar14;
  } while (puVar11 != puVar8);
LAB_823dc560:
  bVar3 = false;
LAB_823dc564:
  dVar5 = dVar16;
  iVar4 = iVar13;
  uVar14 = param_4;
  if (!bVar3) {
    bVar3 = false;
    puVar8 = puVar12;
    puVar6 = puVar10;
    puVar11 = puVar15;
    do {
      puVar11 = puVar11 + -1;
      if (*puVar6 == *puVar11) {
        if (puVar6 == auStack_e4 + 1) goto LAB_823dc5ec;
        puVar8 = puVar6 + -1;
        bVar3 = true;
      }
      else {
        if (bVar3) {
          puVar11 = auStack_e4 + 9;
          puVar6 = puVar15;
          if (auStack_e4 + 9 == puVar15) goto LAB_823dc628;
          goto LAB_823dc608;
        }
        for (puVar9 = auStack_e4 + 9; puVar9 != puVar15; puVar9 = puVar9 + 1) {
          if (*puVar6 == *puVar9) {
            *puVar6 = puVar9[1];
            goto LAB_823dc65c;
          }
        }
      }
      puVar6 = puVar6 + -1;
    } while( true );
  }
  goto joined_r0x823dc42c;
  while (puVar11 = puVar11 + 1, puVar6 = puVar15, puVar11 != puVar15) {
LAB_823dc608:
    puVar6 = puVar11;
    if (*puVar8 == *puVar11) break;
  }
LAB_823dc628:
  if (puVar8 != puVar12) {
    iVar4 = 4 - (int)puVar8;
    do {
      *puVar8 = *(unsigned int *)((int)puVar6 + iVar4 + (int)puVar8);
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar12);
  }
LAB_823dc65c:
  bVar3 = true;
LAB_823dc660:
  iVar4 = iVar13;
  if (!bVar3) {
    uVar14 = 7;
    if (param_4 < 8) {
      uVar14 = param_4;
    }
    uVar7 = 0;
    if (param_1 == param_3) {
      if (uVar14 != 0) {
        puVar10 = auStack_e4 + 0x10;
        puVar12 = (unsigned int *)(param_5 + -4);
        do {
          puVar10 = puVar10 + 1;
          uVar1 = *puVar10;
          puVar12[1] = uVar7;
          uVar7 = uVar7 + 1;
          puVar12 = puVar12 + 2;
          *puVar12 = uVar1;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
    }
    else if (uVar14 != 0) {
      puVar10 = auStack_e4 + 0x10;
      puVar12 = (unsigned int *)(param_5 + -4);
      do {
        puVar10 = puVar10 + 1;
        puVar12[1] = *puVar10;
        puVar12 = puVar12 + 2;
        *puVar12 = uVar7;
        uVar7 = uVar7 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    return;
  }
  goto joined_r0x823dc42c;
LAB_823dc5ec:
  bVar3 = false;
  goto LAB_823dc660;
}

