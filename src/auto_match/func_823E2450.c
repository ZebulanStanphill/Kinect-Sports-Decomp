typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_c0;
extern unsigned int *auStack_e0;
extern int fn_823D9DA8();
extern int fn_823E2AC0();
extern unsigned int iStack_c4;
extern unsigned int iStack_e4;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_100;
extern unsigned int uStack_104;


unsigned __int64 fn_823E2450(int param_1,int *param_2,int param_3,int param_4,unsigned int *param_5)

{
  float fVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  unsigned int uVar7;
  int *piVar8;
  unsigned __int64 in_r0;
  char cVar9;
  unsigned char uVar10;
  bool bVar13;
  int *piVar11;
  unsigned int *puVar12;
  unsigned char *puVar14;
  int iVar15;
  int **ppiVar16;
  float *pfVar17;
  __int64 lVar18;
  __int64 lVar19;
  int *piVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int *apiStack_110 [3];
  unsigned int uStack_104;
  unsigned __int64 uStack_100;
  int iStack_e4;
  unsigned char auStack_e0 [28];
  int iStack_c4;
  unsigned char auStack_c0 [192];
  
  piVar2 = *(int **)(param_1 + 8);
  apiStack_110[0] = (int *)*piVar2;
  lVar19 = 0;
  lVar18 = 0;
  if (apiStack_110[0] != piVar2) {
    uVar3 = param_2[1];
    iVar4 = *param_2;
    piVar20 = &iStack_c4;
    piVar11 = &iStack_e4;
    uVar7 = param_3 + 0x80U & 0xfffffff0;
    fVar24 = *(float *)(uVar7 + 4);
    fVar25 = *(float *)(uVar7 + 8);
    uVar7 = param_4 + 0x80U & 0xfffffff0;
    fVar22 = *(float *)(uVar7 + 4);
    fVar23 = *(float *)(uVar7 + 8);
    do {
      piVar8 = apiStack_110[0];
      iVar5 = apiStack_110[0][3];
      if (uVar3 == 0) {
        iVar15 = apiStack_110[0][0x16];
        bVar21 = iVar15 == 0;
LAB_823e2674:
        if ((bVar21) || (iVar15 == 2)) goto LAB_823e24dc;
LAB_823e2680:
        bVar21 = false;
      }
      else {
        if (uVar3 == 1) {
          iVar15 = apiStack_110[0][0x16];
          bVar21 = iVar15 == 1;
          goto LAB_823e2674;
        }
        if (2 < uVar3) goto LAB_823e2680;
LAB_823e24dc:
        bVar21 = true;
      }
      cVar9 = fn_823D9DA8(apiStack_110[0] + 0x17);
      if ((cVar9 == '\0') || (bVar13 = true, *(char *)(param_2 + 2) == '\0')) {
        bVar13 = false;
      }
      fVar1 = (float)piVar8[0x14];
      if (iVar4 != 0) {
        fVar1 = (float)piVar8[0x15];
      }
      fVar6 = (fVar22 - fVar24) * (fVar22 - fVar24) + 0.0 + (fVar23 - fVar25) * (fVar23 - fVar25);
      pfVar17 = (float *)((int)&uStack_100 + (int)in_r0 & 0xfffffff0);
      *pfVar17 = fVar6;
      pfVar17[1] = fVar6;
      pfVar17[2] = fVar6;
      pfVar17[3] = fVar6;
      if (((bVar21) && (bVar13)) && (fVar1 * fVar1 < (float)(((unsigned __int64)(uStack_100) >> 0) & 0xFFFFFFFF))) {
        uVar7 = piVar8[0x16];
        bVar21 = false;
        if (uVar7 != 0) {
          if (uVar7 != 1) {
            if (2 < uVar7) goto LAB_823e258c;
            bVar21 = true;
          }
          piVar11 = piVar11 + 1;
          *piVar11 = iVar5;
          lVar19 = lVar19 + 1;
          if (!bVar21) goto LAB_823e258c;
        }
        piVar20 = piVar20 + 1;
        *piVar20 = iVar5;
        lVar18 = lVar18 + 1;
      }
LAB_823e258c:
      fn_823E2AC0(apiStack_110);
    } while (apiStack_110[0] != piVar2);
  }
  uVar3 = param_2[1];
  bVar21 = lVar18 != 0;
  if (uVar3 == 0) {
    bVar13 = false;
LAB_823e26c4:
    if (!bVar21) {
LAB_823e2858:
      puVar12 = &uStack_104;
      lVar18 = 5;
      param_5 = param_5 + -1;
      do {
        puVar12 = puVar12 + 1;
        param_5 = param_5 + 1;
        *param_5 = *puVar12;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      return 0;
    }
    if (bVar13) {
LAB_823e26d4:
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      puVar14 = auStack_e0;
      fVar22 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
               (float)(__int64)(int)lVar19;
      goto LAB_823e2648;
    }
  }
  else {
    if (uVar3 == 1) {
      bVar13 = true;
      bVar21 = lVar19 != 0;
      goto LAB_823e26c4;
    }
    if (2 < uVar3) goto LAB_823e2858;
    if (lVar19 != 0) {
      if ((bVar21) && (lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f, (int)lbl_83265A28 < 1))
      goto LAB_823e25ec;
      bVar13 = true;
      goto LAB_823e26d4;
    }
    if (!bVar21) goto LAB_823e2858;
LAB_823e25ec:
    bVar13 = false;
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  puVar14 = auStack_c0;
  fVar22 = ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
           (float)(__int64)(int)lVar18;
LAB_823e2648:
  iVar4 = (int)fVar22;
  uStack_100 = (__int64)iVar4;
  uVar3 = *(unsigned int *)(puVar14 + iVar4 * 4);
  piVar2 = (int *)(*(int **)(param_1 + 8))[1];
  apiStack_110[0] = *(int **)(param_1 + 8);
  while (piVar11 = piVar2, *(char *)((int)piVar11 + 0x85) == '\0') {
    if ((unsigned int)piVar11[3] < uVar3) {
      piVar2 = (int *)piVar11[2];
    }
    else {
      piVar2 = (int *)*piVar11;
      apiStack_110[0] = piVar11;
    }
  }
  if ((apiStack_110[0] == *(int **)(param_1 + 8)) || (uVar3 < (unsigned int)apiStack_110[0][3])) {
    uStack_100 = CONCAT44(*(int **)(param_1 + 8),iVar4);
    ppiVar16 = (int **)&uStack_100;
  }
  else {
    ppiVar16 = apiStack_110;
  }
  lVar18 = ZEXT48(*ppiVar16) + 0x10;
  if (ZEXT48(*ppiVar16) == (unsigned __int64)*(unsigned int *)(param_1 + 8)) {
    lVar18 = 0;
  }
  *param_5 = uVar3;
  param_5[1] = (unsigned int)bVar13;
  uVar10 = fn_823D9DA8(lVar18 + 0x4c);
  *(unsigned char *)(param_5 + 2) = uVar10;
  piVar2 = (int *)(*(int **)(param_4 + 0x1b4))[1];
  piVar11 = *(int **)(param_4 + 0x1b4);
  while (piVar20 = piVar2, *(char *)((int)piVar20 + 0x1d) == '\0') {
    if ((unsigned int)piVar20[3] < uVar3) {
      piVar2 = (int *)piVar20[2];
    }
    else {
      piVar2 = (int *)*piVar20;
      piVar11 = piVar20;
    }
  }
  if ((piVar11 == *(int **)(param_4 + 0x1b4)) || (uVar3 < (unsigned int)piVar11[3])) {
    ppiVar16 = apiStack_110;
  }
  else {
    ppiVar16 = (int **)&uStack_100;
  }
  pfVar17 = (float *)(*ppiVar16 + 4);
  if (*ppiVar16 == *(int **)(param_4 + 0x1b4)) {
    pfVar17 = (float *)0x0;
  }
  param_5[3] = (unsigned int)(*pfVar17 * pfVar17[2]);
  param_5[4] = (unsigned int)(pfVar17[1] * pfVar17[2]);
  return 1;
}

