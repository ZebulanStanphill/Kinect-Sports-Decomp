typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_190;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_114;
extern unsigned int fStack_118;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_124;
extern unsigned int fStack_128;
extern unsigned int fStack_12c;
extern unsigned int fStack_130;
extern unsigned int fStack_134;
extern unsigned int fStack_138;
extern unsigned int fStack_13c;
extern unsigned int fStack_140;
extern unsigned int fStack_144;
extern unsigned int fStack_148;
extern unsigned int fStack_14c;
extern unsigned int fStack_150;
extern unsigned int fStack_154;
extern unsigned int fStack_158;
extern unsigned int fStack_15c;
extern unsigned int fStack_160;
extern unsigned int fStack_164;
extern unsigned int fStack_168;
extern unsigned int fStack_16c;
extern unsigned int fStack_170;
extern unsigned int fStack_198;
extern unsigned int fStack_19c;
extern unsigned int fStack_1a0;
extern unsigned int fStack_1ac;
extern unsigned int fStack_1b0;
extern unsigned int fStack_1bc;
extern unsigned int fStack_c4;
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D0B0C0();
extern int fn_82D0C6A8();
extern int fn_82D0D640();
extern int fn_82D0D6E8();
extern int fn_82D0D888();
extern int fn_82D1D610();
extern int fn_82D1E948();
extern int fn_82D1FA30();
extern int fn_82D201C0();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern unsigned int iStack_1d4;
extern unsigned int lbl_0000000C;
extern unsigned int lbl_82132D70;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B1A0;
extern unsigned int stack0x00000000;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;
extern unsigned int uStack_1a8;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


/* WARNING: Removing unreachable block (ram,0x82d22194) */
/* WARNING: Removing unreachable block (ram,0x82d220d4) */
/* WARNING: Removing unreachable block (ram,0x82d22118) */
/* WARNING: Removing unreachable block (ram,0x82d22534) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82D22028(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  bool bVar1;
  unsigned int *puVar2;
  int iVar3;
  float *pfVar4;
  unsigned int *puVar5;
  float *pfVar6;
  int *piVar7;
  unsigned __int64 in_r0;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  char cVar12;
  unsigned int uVar14;
  unsigned __int64 uVar13;
  double extraout_f1;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char auVar23 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float in_register_000100b4;
  float in_register_000100b8;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  int iStack_1d4;
  float fStack_1bc;
  struct { float first; float second; } stack_pair_1b0;

  unsigned __int64 uStack_1a8;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  unsigned char auStack_190 [16];
  unsigned int uStack_180;
  unsigned int uStack_17c;
  unsigned int uStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  unsigned char auStack_d0 [12];
  float fStack_c4;
  unsigned char auStack_c0 [1];
  
  uVar8 = ZEXT48(&stack0x00000000);
  uVar9 = fn_82F6A538();
  dVar16 = extraout_f1;
  fn_82D0D6E8(uVar8 - 0xf0);
  fn_82D201C0(uVar9,uVar8 - 0x1c8);
  uStack_178 = 0x10;
  uStack_180 = 0;
  uStack_17c = 0;
  uVar10 = fn_82D0B0C0(uVar8 - 0xc0);
  iVar11 = fn_82D0D888(uVar8 - 0xf0,uVar8 - 0x180,uVar10);
  if (iVar11 == 3) {
    fn_82CE5410();
    fn_82D1E948(uVar8 - 0x1b0,uVar9);
    iVar11 = fn_82CE5410();
    fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),uVar8 - 0x1d8,0x20);
    iStack_1d4 = 1;
    fn_82D1D610(0);
    lbl_0000000C = 0x3f000000;
    dVar22 = (double)lbl_821AAD20;
    do {
      iVar11 = iStack_1d4 * 0x20;
      iVar3 = (int)in_r0;
      puVar2 = (unsigned int *)((unsigned int)(&lbl_8323B1A0 + iVar3) & 0xfffffff0);
      uVar24 = puVar2[1];
      uVar25 = puVar2[2];
      uVar26 = puVar2[3];
      pfVar4 = (float *)((unsigned int)(&lbl_82132D70 + iVar3) & 0xfffffff0);
      fVar30 = *pfVar4;
      fVar35 = pfVar4[1];
      fVar36 = pfVar4[2];
      fVar37 = pfVar4[3];
      puVar5 = (unsigned int *)((unsigned int)(auStack_c0 + iVar3) & 0xfffffff0);
      *puVar5 = *puVar2;
      puVar5[1] = uVar24;
      puVar5[2] = uVar25;
      puVar5[3] = uVar26;
      uVar10 = *(unsigned __int64 *)(iVar11 + -0x20);
      uStack_1a8 = *(unsigned __int64 *)(iVar11 + -0x18);
      iStack_1d4 = iStack_1d4 + -1;
      uVar24 = *(unsigned int *)(iVar11 + -0xc);
      uVar25 = *(unsigned int *)(iVar11 + -8);
      uVar26 = *(unsigned int *)(iVar11 + -4);
      puVar2 = (unsigned int *)((int)&fStack_1a0 + iVar3 & 0xfffffff0);
      *puVar2 = *(unsigned int *)(iVar11 + -0x10);
      puVar2[1] = uVar24;
      puVar2[2] = uVar25;
      puVar2[3] = uVar26;
      pfVar4 = (float *)((int)&fStack_1a0 + iVar3 & 0xfffffff0);
      fVar27 = pfVar4[1];
      fVar28 = pfVar4[2];
      fVar29 = pfVar4[3];
      pfVar6 = (float *)((int)&stack_pair_1b0.first + iVar3 & 0xfffffff0);
      fVar31 = *pfVar6;
      fVar32 = pfVar6[1];
      fVar33 = pfVar6[2];
      fVar34 = pfVar6[3];
      uVar14 = (((unsigned __int64)(uStack_1a8) >> 32) & 0xFFFFFFFF) & 0xc0ffffff;{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(auVar23, &_vt0, 16); }
      pfVar6 = (float *)((unsigned int)(auStack_190 + iVar3) & 0xfffffff0);
      *pfVar6 = fVar30 * (fVar31 + *pfVar4);
      pfVar6[1] = fVar35 * (fVar32 + fVar27);
      pfVar6[2] = fVar36 * (fVar33 + fVar28);
      pfVar6[3] = fVar37 * (fVar34 + fVar29);
      fVar27 = in_register_000100b4 * in_register_000100b4 + 0.0 +
               in_register_000100b8 * in_register_000100b8;
      uVar24 = storeVectorElementWordIndexed(in_vs42,0,uVar8 - 0x1bc);
      *(unsigned int *)(uVar8 - 0x1bc) = uVar24;
      fVar28 = fVar27;
      fVar29 = fVar27;
      fVar30 = fVar27;
      dVar15 = (double)fn_82D1FA30(uVar9,uVar8 - 400,uVar8 - 0xc0,uVar8 - 0x1e0);
      if (dVar15 <= (double)fStack_1bc) {
        if ((int)uVar14 < param_2) {
          dVar21 = (double)fStack_198;
          dVar20 = (double)fStack_19c;
          uVar13 = 0;
          dVar19 = (double)fStack_1a0;
          dVar18 = (double)(((unsigned __int64)(uStack_1a8) >> 0) & 0xFFFFFFFF);
          stack_pair_1b0.second = (float)uVar10;
          dVar17 = (double)stack_pair_1b0.second;
          stack_pair_1b0.first = (float)((unsigned __int64)uVar10 >> 0x20);
          dVar15 = (double)stack_pair_1b0.first;
          do {
            iVar11 = fn_82CE5410();
            if (iStack_1d4 == 0) {
              fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),uVar8 - 0x1d8,0x20);
            }
            iVar11 = iStack_1d4 + 1;
            iStack_1d4 = iStack_1d4 * 0x20;
            if ((uVar13 & 0xffffffff) < 8) {
              bVar1 = (int)uVar13 != 0;
              if (uVar13 == 1 && bVar1) {
                fStack_120 = (float)dVar19;
                fStack_11c = (float)dVar17;
                fStack_118 = (float)dVar18;
                fStack_114 = (float)dVar22;
              }
              else if (uVar13 == 2 && bVar1) {
                fStack_170 = (float)dVar19;
                fStack_16c = (float)dVar20;
                fStack_168 = (float)dVar18;
                fStack_164 = (float)dVar22;
              }
              else if (uVar13 == 3 && bVar1) {
                fStack_140 = (float)dVar15;
                fStack_13c = (float)dVar20;
                fStack_138 = (float)dVar18;
                fStack_134 = (float)dVar22;
              }
              else if (uVar13 == 4 && bVar1) {
                fStack_130 = (float)dVar15;
                fStack_12c = (float)dVar17;
                fStack_128 = (float)dVar21;
                fStack_124 = (float)dVar22;
              }
              else if (uVar13 == 5 && bVar1) {
                fStack_110 = (float)dVar19;
                fStack_10c = (float)dVar17;
                fStack_108 = (float)dVar21;
                fStack_104 = (float)dVar22;
              }
              else if (uVar13 == 6 && bVar1) {
                fStack_160 = (float)dVar19;
                fStack_15c = (float)dVar20;
                fStack_158 = (float)dVar21;
                fStack_154 = (float)dVar22;
              }
              else if (bVar1) {
                fStack_150 = (float)dVar15;
                fStack_14c = (float)dVar20;
                fStack_148 = (float)dVar21;
                fStack_144 = (float)dVar22;
              }
              else {
                fStack_100 = (float)dVar15;
                fStack_f8 = (float)dVar18;
                fStack_fc = (float)dVar17;
                fStack_f4 = (float)dVar22;
              }
            }
            uVar13 = uVar13 + 1;
            vectorMinimumFloatingPoint(in_vs45,in_vs32);
            pfVar4 = (float *)((int)in_r0 + iStack_1d4 & 0xfffffff0);
            *pfVar4 = fVar31;
            pfVar4[1] = fVar32;
            pfVar4[2] = fVar33;
            pfVar4[3] = fVar34;
            in_register_000100b4 = *(float *)(((unsigned int)(auStack_190 + (int)in_r0) & 0xfffffff0) + 4);
            in_register_000100b8 = *(float *)(((unsigned int)(auStack_190 + (int)in_r0) & 0xfffffff0) + 8);{ V16 _vt1 = vectorMaximumFloatingPoint(auVar23,in_vs32); memcpy(in_vs42, &_vt1, 16); }
            *(float *)(iStack_1d4 + 0x10) = fVar27;
            *(float *)(iStack_1d4 + 0x14) = fVar28;
            *(float *)(iStack_1d4 + 0x18) = fVar29;
            *(float *)(iStack_1d4 + 0x1c) = fVar30;
            *(unsigned int *)(iStack_1d4 + 0xc) = uVar14 + 1 | 0x3f000000;
            iStack_1d4 = iVar11;
          } while ((int)uVar13 < 8);
        }
      }
      else if (((param_5 & 0xff) == 0) &&
              (cVar12 = fn_82D0C6A8(dVar22,uVar8 - 0xf0,uVar8 - 400,0), cVar12 != '\0')) {
        puVar2 = (unsigned int *)((unsigned int)(auStack_190 + (int)in_r0) & 0xfffffff0);
        uVar24 = puVar2[1];
        uVar25 = puVar2[2];
        uVar26 = puVar2[3];
        puVar5 = (unsigned int *)((unsigned int)(auStack_d0 + (int)in_r0) & 0xfffffff0);
        *puVar5 = *puVar2;
        puVar5[1] = uVar24;
        puVar5[2] = uVar25;
        puVar5[3] = uVar26;
        fStack_c4 = (float)((double)(float)SQRT(dVar15) * dVar16);
        iVar11 = fn_82CE5410();
        piVar7 = (int *)param_4;
        if (piVar7[1] == (piVar7[2] & 0x3fffffffU)) {
          fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),param_4,0x10);
        }
        puVar2 = (unsigned int *)((unsigned int)(auStack_d0 + (int)in_r0) & 0xfffffff0);
        uVar24 = puVar2[1];
        uVar25 = puVar2[2];
        uVar26 = puVar2[3];
        puVar5 = (unsigned int *)((int)in_r0 + piVar7[1] * 0x10 + *piVar7 & 0xfffffff0);
        *puVar5 = *puVar2;
        puVar5[1] = uVar24;
        puVar5[2] = uVar25;
        puVar5[3] = uVar26;
        piVar7[1] = piVar7[1] + 1;
      }
    } while (iStack_1d4 != 0);
    fn_82CE5410();
  }
  else {
    fn_82CE5410();
  }
  fn_82D0D640(uVar8 - 0xf0);
  fn_82F6A584();
  return;
}

