typedef unsigned char bool;
#define true 1
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned int uStack_146;
extern unsigned int uStack_148;
extern unsigned int uStack_150;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorAddFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82D34280(int param_1,unsigned short param_2,unsigned short param_3,unsigned short param_4)

{
  unsigned int uVar1;
  unsigned short *puVar2;
  unsigned int uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  unsigned __int64 in_r0;
  unsigned short uVar8;
  unsigned short uVar9;
  __int64 lVar10;
  unsigned short *puVar11;
  unsigned short *puVar12;
  int iVar13;
  int *piVar14;
  unsigned int uVar15;
  unsigned short *puVar16;
  __int64 lVar17;
  unsigned char in_vs33 [16];
  unsigned char in_vs34 [16];
  unsigned char in_vs37 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs41 [16];
  unsigned char auVar18 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char auVar19 [16];
  unsigned __int64 uStack_150;
  unsigned short uStack_148;
  unsigned short uStack_146;
  
  iVar13 = *(int *)(param_1 + 0x1c);
  puVar16 = (unsigned short *)(((unsigned int)param_3 + (unsigned int)param_3 * 4) * 4 + iVar13);
  puVar2 = (unsigned short *)(((unsigned int)param_4 + (unsigned int)param_4 * 4) * 4 + iVar13);
  lVar17 = 6;
  piVar14 = (int *)(param_1 + 0x1c);
  lVar10 = ZEXT48(&stack0x00000000) - 0x152;
  puVar12 = puVar16 + -1;
  do {
    puVar12 = puVar12 + 1;
    lVar10 = lVar10 + 2;
    *(unsigned short *)lVar10 = *puVar12;
    fVar7 = lbl_821AAD20;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  puVar12 = (unsigned short *)(((unsigned int)param_2 + (unsigned int)param_2 * 4) * 4 + iVar13);
  loadVectorLeftIndexed128(in_r0,0xffffffff82002c5c);
  uVar15 = 0;
  uVar9 = puVar12[8];{ V16 _vt0 = vectorAddFloatingPoint(in_vs45,in_vs44); memcpy(auVar18, &_vt0, 16); }
  while ((uVar9 & 0x8000) == 0) {
    lVar10 = ZEXT48(&stack0x00000000) - 0x160;
    vectorAddFloatingPoint(in_vs44,auVar18);
    vectorAddFloatingPoint(in_vs41,in_vs39);
    vectorSubtractFloatingPoint(in_vs40,in_vs45);
    vectorSubtractFloatingPoint(in_vs37,in_vs45);{ V16 _vt1 = vectorSubtractFloatingPoint(in_vs33,in_vs34); memcpy(auVar19, &_vt1, 16); }
    uVar1 = storeVectorElementWordIndexed(auVar19,0,lVar10);
    *(unsigned int *)lVar10 = uVar1;
    uVar15 = (unsigned int)(fVar7 <= 0.0);
    param_2 = puVar12[(fVar7 <= 0.0) + 6];
    puVar12 = (unsigned short *)((unsigned int)param_2 * 0x14 + iVar13);
    uVar9 = puVar12[8];
  }
  uVar9 = puVar12[8];
  uVar3 = uVar9 & 0x7fff;
  if (uVar3 == 0x7fff) {
    puVar11 = (unsigned short *)0x0;
  }
  else {
    puVar11 = (unsigned short *)((uVar3 + (uVar9 & 0x7fff) * 4) * 4 + iVar13);
  }
  uVar8 = puVar12[3];
  if (puVar16[3] < puVar12[3]) {
    uVar8 = puVar16[3];
  }
  puVar2[3] = uVar8;
  uVar8 = *puVar12;
  if (*puVar12 < *puVar16) {
    uVar8 = *puVar16;
  }
  *puVar2 = uVar8;
  uVar8 = puVar12[4];
  if (puVar16[4] < puVar12[4]) {
    uVar8 = puVar16[4];
  }
  puVar2[4] = uVar8;
  uVar8 = puVar12[1];
  if (puVar12[1] < puVar16[1]) {
    uVar8 = puVar16[1];
  }
  puVar2[1] = uVar8;
  uVar8 = puVar12[5];
  if (puVar16[5] < puVar12[5]) {
    uVar8 = puVar16[5];
  }
  puVar2[5] = uVar8;
  uVar8 = puVar12[2];
  if (puVar12[2] < puVar16[2]) {
    uVar8 = puVar16[2];
  }
  puVar2[2] = uVar8;
  puVar2[6] = param_2;
  puVar2[7] = param_3;
  puVar12[8] = puVar12[8] & 0x8000 | param_4;
  puVar16[8] = puVar16[8] & 0x8000 | param_4;
  uVar8 = puVar12[9];
  puVar12[9] = param_3;
  puVar16[9] = uVar8;
  puVar2[9] = uVar8;
  if (puVar11 == (unsigned short *)0x0) {
    *(unsigned short **)(param_1 + 0x10) = puVar2;
    puVar2[8] = puVar2[8] | 0x7fff;
    *(unsigned short *)(param_1 + 0x14) = param_4;
  }
  else {
    puVar11[uVar15 + 6] = param_4;
    puVar2[8] = puVar2[8] & 0x8000 | uVar9 & 0x7fff;
    if (uVar15 == 1) {
      iVar13 = (unsigned int)puVar11[6] * 0x14 + *piVar14;
      uVar9 = *(unsigned short *)(iVar13 + 0x10);
      *(unsigned short *)(iVar13 + 0x12) = param_4;
      while ((uVar9 & 0x8000) == 0) {
        iVar13 = (unsigned int)*(unsigned short *)(iVar13 + 0xe) * 0x14 + *piVar14;
        *(unsigned short *)(iVar13 + 0x12) = param_4;
        uVar9 = *(unsigned short *)(iVar13 + 0x10);
      }
    }
    while( true ) {
      if ((*puVar11 < (((unsigned __int64)(uStack_150) >> 0) & 0xFFFF)) ||
         (bVar5 = false, (uStack_150 & 0xffff) < (unsigned __int64)puVar11[3])) {
        bVar5 = true;
      }
      if ((puVar11[1] < (((unsigned __int64)(uStack_150) >> 16) & 0xFFFF)) || (bVar6 = false, uStack_148 < puVar11[4])) {
        bVar6 = true;
      }
      if ((puVar11[2] < (((unsigned __int64)(uStack_150) >> 32) & 0xFFFF)) || (bVar4 = false, uStack_146 < puVar11[5])) {
        bVar4 = true;
      }
      if ((!bVar5 && !bVar6) && !bVar4) break;
      uVar9 = puVar11[3];
      if ((uStack_150 & 0xffff) <= (unsigned __int64)puVar11[3]) {
        uVar9 = (((unsigned __int64)(uStack_150) >> 48) & 0xFFFF);
      }
      puVar11[3] = uVar9;
      uVar9 = *puVar11;
      if (*puVar11 <= (((unsigned __int64)(uStack_150) >> 0) & 0xFFFF)) {
        uVar9 = (((unsigned __int64)(uStack_150) >> 0) & 0xFFFF);
      }
      *puVar11 = uVar9;
      uVar9 = puVar11[4];
      if (uStack_148 <= puVar11[4]) {
        uVar9 = uStack_148;
      }
      puVar11[4] = uVar9;
      uVar9 = puVar11[1];
      if (puVar11[1] <= (((unsigned __int64)(uStack_150) >> 16) & 0xFFFF)) {
        uVar9 = (((unsigned __int64)(uStack_150) >> 16) & 0xFFFF);
      }
      puVar11[1] = uVar9;
      uVar9 = puVar11[5];
      if (uStack_146 <= puVar11[5]) {
        uVar9 = uStack_146;
      }
      puVar11[5] = uVar9;
      uVar9 = puVar11[2];
      if (puVar11[2] <= (((unsigned __int64)(uStack_150) >> 32) & 0xFFFF)) {
        uVar9 = (((unsigned __int64)(uStack_150) >> 32) & 0xFFFF);
      }
      puVar11[2] = uVar9;
      uVar15 = puVar11[8] & 0x7fff;
      if (uVar15 == 0x7fff) {
        return;
      }
      puVar11 = (unsigned short *)((uVar15 + (puVar11[8] & 0x7fff) * 4) * 4 + *piVar14);
      if (puVar11 == (unsigned short *)0x0) {
        return;
      }
    }
  }
  return;
}

