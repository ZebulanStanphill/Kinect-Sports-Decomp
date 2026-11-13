#define true 1
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define NAN(x) ((x) != (x))
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b8;
extern unsigned int fStack_d0;
extern int fn_82522D98();
extern int fn_82522ED8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195634;
extern unsigned int lbl_82195D44;
extern unsigned int lbl_821CA820;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_821CEA60;
extern unsigned int lbl_831E796C;
extern unsigned int lbl_8329E430;
extern unsigned int lbl_8329E440;
extern unsigned int stack0x00000000;
extern unsigned int uStack_c0;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorAddFloatingPoint();
extern V16 vectorLogicalAnd();
extern V16 vectorMaximumFloatingPoint();
extern V16 vectorMinimumFloatingPoint();
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_82609158(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  float fVar4;
  unsigned int uVar5;
  char *pcVar6;
  char *pcVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  float fVar10;
  unsigned __int64 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int in_r0;
  int iVar15;
  short *psVar16;
  unsigned short *puVar17;
  unsigned int uVar18;
  unsigned int *puVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  __int64 lVar25;
  unsigned short uVar28;
  int iVar26;
  char *pcVar27;
  unsigned short *puVar29;
  unsigned char *puVar30;
  int iVar31;
  float *pfVar32;
  short sVar33;
  float *pfVar34;
  unsigned __int64 uVar35;
  int iVar36;
  double dVar37;
  double dVar38;
  unsigned char in_vs32 [16];
  unsigned char auVar39 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char auVar40 [16];
  unsigned char auVar41 [16];
  unsigned int uVar42;
  unsigned int uVar43;
  unsigned int uVar44;
  unsigned int uVar45;
  unsigned int uVar46;
  unsigned int uVar47;
  unsigned int uVar48;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  float fStack_d0;
  unsigned __int64 uStack_c0;
  float fStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  
  dVar38 = (double)ltcg_pool_0_0f;
  if (*(short *)(param_1 + 0xb0) != 0) {
    if ((lbl_8329E440 & 1) == 0) {
      lbl_8329E440 = lbl_8329E440 | 1;
      puVar8 = (unsigned int *)((unsigned int)(&lbl_821CEA60 + in_r0) & 0xfffffff0);
      uVar21 = *puVar8;
      uVar42 = puVar8[1];
      uVar43 = puVar8[2];
      uVar44 = puVar8[3];
      puVar8 = (unsigned int *)((unsigned int)(&lbl_8329E430 + in_r0) & 0xfffffff0);
      *puVar8 = uVar21;
      puVar8[1] = uVar42;
      puVar8[2] = uVar43;
      puVar8[3] = uVar44;
    }
    else {
      puVar8 = (unsigned int *)((unsigned int)(&lbl_8329E430 + in_r0) & 0xfffffff0);
      uVar21 = *puVar8;
      uVar42 = puVar8[1];
      uVar43 = puVar8[2];
      uVar44 = puVar8[3];
    }
    iVar24 = *(int *)(param_1 + 0xa0);
    uVar18 = *(unsigned int *)(param_1 + 0xa4);
    puVar19 = (unsigned int *)(param_1 + 0xa0);
    puVar8 = (unsigned int *)(iVar24 + 0x10U & 0xfffffff0);
    uVar45 = *puVar8;
    uVar46 = puVar8[1];
    uVar47 = puVar8[2];
    uVar48 = puVar8[3];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs44,in_vs32); memcpy(auVar41, &_vt0, 16); }{ V16 _vt1 = vectorAddFloatingPoint(in_vs44,in_vs32); memcpy(auVar40, &_vt1, 16); }
    puVar8 = (unsigned int *)((int)&fStack_b0 + in_r0 & 0xfffffff0);
    *puVar8 = in_register_000100d0;
    puVar8[1] = in_register_000100d4;
    puVar8[2] = in_register_000100d8;
    puVar8[3] = in_vr13;
    if (iVar24 + 0x560U < uVar18) {
      lVar25 = (unsigned __int64)((uVar18 - (iVar24 + 0x560)) - 1) / 0x560 + 1;
      do {{ V16 _vt2 = vectorSubtractFloatingPoint(in_vs43,in_vs32); memcpy(auVar39, &_vt2, 16); }{ V16 _vt3 = vectorAddFloatingPoint(in_vs43,in_vs32); memcpy(in_vs43, &_vt3, 16); }{ V16 _vt4 = vectorMinimumFloatingPoint(auVar41,auVar39); memcpy(auVar41, &_vt4, 16); }{ V16 _vt5 = vectorMaximumFloatingPoint(auVar40,in_vs43); memcpy(auVar40, &_vt5, 16); }
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      puVar8 = (unsigned int *)((int)&fStack_b0 + in_r0 & 0xfffffff0);
      *puVar8 = in_register_000100d0;
      puVar8[1] = in_register_000100d4;
      puVar8[2] = in_register_000100d8;
      puVar8[3] = in_vr13;
    }{ V16 _vt6 = vectorSubtractFloatingPoint(auVar40,auVar41); memcpy(auVar40, &_vt6, 16); }
    puVar8 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
    *puVar8 = in_register_000100d0;
    puVar8[1] = in_register_000100d4;
    puVar8[2] = in_register_000100d8;
    puVar8[3] = in_vr13;
    fVar4 = lbl_8218E8E8;
    puVar8 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
    *puVar8 = uVar45;
    puVar8[1] = uVar46;
    puVar8[2] = uVar47;
    puVar8[3] = uVar48;
    puVar8 = (unsigned int *)((int)&uStack_c0 + in_r0 & 0xfffffff0);
    *puVar8 = uVar21;
    puVar8[1] = uVar42;
    puVar8[2] = uVar43;
    puVar8[3] = uVar44;
    iVar24 = (int)((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF) + fVar4);
    iVar1 = (int)((((unsigned __int64)(uStack_c0) >> 32) & 0xFFFFFFFF) + fVar4);
    iVar2 = (int)(fStack_b8 + fVar4);
    uStack_c0 = (__int64)iVar2;
    uVar35 = (__int64)(iVar2 * iVar1) * (__int64)iVar24;
    iVar15 = fn_82522D98((uVar35 & 0x7fffffff) << 1);
    if (0 < (int)uVar35) {
      puVar29 = (unsigned short *)(iVar15 + -2);
      uVar11 = uVar35 & 0xffffffff;
      while (uVar11 != 0) {
        puVar29 = puVar29 + 1;
        *puVar29 = 0xffff;
        uVar35 = uVar35 - 1;
        uVar11 = uVar35;
      }
    }
    uVar18 = *puVar19;
    if (uVar18 < *(unsigned int *)(param_1 + 0xa4)) {
      puVar30 = (unsigned char *)(uVar18 - 0x512);
      lVar25 = (unsigned __int64)((*(unsigned int *)(param_1 + 0xa4) - uVar18) - 1) / 0x560 + 1;
      sVar33 = 0;
      do {
        pfVar34 = (float *)(puVar30 + 0x52a);
        pfVar32 = (float *)(puVar30 + 0x522);
        uVar18 = (unsigned int)(*(float *)(puVar30 + 0x526) - fStack_ac);
        uStack_c0 = (__int64)(int)uVar18;
        puVar30[0x55e] = (char)(int)(*pfVar32 - fStack_b0);
        puVar30[0x55f] = (char)uVar18;
        puVar30 = puVar30 + 0x560;
        *puVar30 = (char)(int)(*pfVar34 - fStack_a8);
        *(short *)((((uVar18 & 0xff) * iVar2 + ((int)(*pfVar34 - fStack_a8) & 0xffU)) * iVar24 +
                   ((int)(*pfVar32 - fStack_b0) & 0xffU)) * 2 + iVar15) = sVar33;
        lVar25 = lVar25 + -1;
        sVar33 = sVar33 + 1;
      } while (lVar25 != 0);
    }
    fVar14 = lbl_82195D44;
    fVar13 = lbl_82195634;
    fVar12 = lbl_82193CC0;
    fVar4 = lbl_82193AF0;
    sVar33 = 0;
    uVar5 = *(unsigned int *)(param_1 + 0xa4);
    for (uVar18 = *puVar19; uVar18 < uVar5; uVar18 = uVar18 + 0x560) {
      iVar36 = 0;
      if ('\0' < *(char *)(uVar18 + 0x41)) {
        psVar16 = (short *)(uVar18 + 0x480);
        puVar17 = (unsigned short *)(uVar18 + 0xd0);
        do {
          if (fVar13 <= *(float *)(puVar17 + 8)) {
            if (fVar12 < *(float *)(puVar17 + 8)) {
              uVar28 = *puVar17 | 2;
              goto LAB_826093ec;
            }
          }
          else {
            uVar28 = *puVar17 | 1;
LAB_826093ec:
            *puVar17 = uVar28;
          }
          if (fVar13 <= *(float *)(puVar17 + 10)) {
            if (fVar12 < *(float *)(puVar17 + 10)) {
              uVar28 = *puVar17 | 8;
              goto LAB_82609418;
            }
          }
          else {
            uVar28 = *puVar17 | 4;
LAB_82609418:
            *puVar17 = uVar28;
          }
          if (fVar13 <= *(float *)(puVar17 + 0xc)) {
            if (fVar12 < *(float *)(puVar17 + 0xc)) {
              uVar28 = *puVar17 | 0x20;
              goto LAB_82609444;
            }
          }
          else {
            uVar28 = *puVar17 | 0x10;
LAB_82609444:
            *puVar17 = uVar28;
          }
          if (*psVar16 == -1) {
            puVar8 = (unsigned int *)((unsigned int)(&lbl_821CA820 + in_r0) & 0xfffffff0);
            uVar21 = puVar8[1];
            uVar42 = puVar8[2];
            uVar43 = puVar8[3];{ V16 _vt7 = vectorLogicalAnd(auVar40,auVar41); memcpy(auVar41, &_vt7, 16); }
            uStack_c0 = 0;
            fStack_b8 = 0.0;
            puVar9 = (unsigned int *)((int)&fStack_b0 + in_r0 & 0xfffffff0);
            *puVar9 = *puVar8;
            puVar9[1] = uVar21;
            puVar9[2] = uVar42;
            puVar9[3] = uVar43;
            if (fStack_ac <= fStack_b0) {
              iVar26 = 2;
              if (fStack_a8 <= fStack_b0) {
                iVar26 = 0;
              }
            }
            else if (fStack_a8 <= fStack_ac) {
              iVar26 = 1;
            }
            else {
              iVar26 = 2;
            }
            uVar21 = 0xffffffff;
            if (dVar38 <= (double)*(float *)(puVar17 + (iVar26 + 4) * 2)) {
              uVar21 = 1;
            }
            *(unsigned int *)((int)&uStack_c0 + iVar26 * 4) = uVar21;
            if ((((int)(unsigned int)*(unsigned char *)(uVar18 + 0x4c) < iVar24) &&
                ((int)(unsigned int)*(unsigned char *)(uVar18 + 0x4d) < iVar1)) &&
               ((int)(unsigned int)*(unsigned char *)(uVar18 + 0x4e) < iVar2)) {
              uVar20 = (unsigned int)*(unsigned short *)
                              ((((unsigned int)*(unsigned char *)(uVar18 + 0x4d) * iVar2 +
                                (unsigned int)*(unsigned char *)(uVar18 + 0x4e)) * iVar24 +
                               (unsigned int)*(unsigned char *)(uVar18 + 0x4c)) * 2 + iVar15);
            }
            else {
              uVar20 = 0xffff;
            }
            if ((*(float *)(puVar17 + 0x16) <= fVar4) && (uVar20 != 0xffff)) {
              iVar31 = 0;
              iVar26 = *(unsigned short *)(param_1 + 0xac) * uVar20 + *puVar19;
              cVar3 = *(char *)(iVar26 + 0x41);
              if ('\0' < cVar3) {
                iVar22 = iVar26 + 0xd0;
                do {
                  uVar21 = storeVectorElementWordIndexed(auVar41,0,ZEXT48(&stack0x00000000) - 0xd0);
                  *(unsigned int *)(ZEXT48(&stack0x00000000) - 0xd0) = uVar21;
                  fStack_d0 = (float)(iVar1 >> 0x1f);
                  if (fStack_d0 < fVar14) {
                    dVar37 = (double)(*(float *)(puVar17 + 4) - *(float *)(iVar22 + 8));
                    iVar23 = iVar31 * 8 + iVar26;
                    fVar10 = *(float *)(iVar22 + 8);
                    if (*(float *)(&lbl_821954D8 +
                                  ((unsigned int)(unsigned char)((dVar37 < dVar38) << 2) |
                                  (unsigned int)(NAN(dVar37) || NAN(dVar38)) << 2)) < 0.0) {
                      fVar10 = *(float *)(puVar17 + 4);
                    }
                    *(float *)(iVar23 + 0x484) = fVar10;
                    *(float *)(psVar16 + 2) = fVar10;
                    psVar16[1] = (short)iVar31;
                    *(short *)(iVar23 + 0x482) = (short)iVar36;
                    *psVar16 = (short)uVar20;
                    *(short *)((iVar31 + 0x90) * 8 + iVar26) = sVar33;
                    break;
                  }
                  iVar31 = iVar31 + 1;
                  iVar22 = iVar22 + 0x40;
                } while (iVar31 < cVar3);
              }
            }
            if (*psVar16 == -1) {
              *(char *)(uVar18 + 0x42) = *(char *)(uVar18 + 0x42) + '\x01';
              *puVar17 = *puVar17 | 0x80;
            }
          }
          iVar36 = iVar36 + 1;
          puVar17 = puVar17 + 0x20;
          psVar16 = psVar16 + 4;
        } while (iVar36 < *(char *)(uVar18 + 0x41));
      }
      sVar33 = sVar33 + 1;
    }
    fn_82522ED8();
  }
  pcVar6 = *(char **)(param_1 + 0xa0);
  pcVar7 = *(char **)(param_1 + 0xa4);
  pfVar34 = (float *)(param_1 + 0x144);
  puVar19 = &lbl_831E796C;
  do {
    uVar18 = *puVar19;
    dVar37 = dVar38;
    for (pcVar27 = pcVar6; pcVar27 < pcVar7; pcVar27 = pcVar27 + 0x560) {
      if (((*pcVar27 != '\x02') && ('\0' < pcVar27[0x42])) &&
         ((*(unsigned int *)(param_1 + 0x144) & *(unsigned int *)(pcVar27 + 0x4b4)) != 0)) {
        iVar24 = 0;
        if ('\0' < pcVar27[0x41]) {
          pfVar32 = (float *)(pcVar27 + 0xd8);
          do {
            if ((((unsigned int)*(unsigned short *)(pfVar32 + -2) & (uVar18 | 0x80)) == (uVar18 | 0x80)) &&
               (0 < (int)uVar18)) {
              if ((int)uVar18 < 3) {
                fVar4 = pfVar32[2];
              }
              else if ((uVar18 == 4) || (uVar18 == 8)) {
                fVar4 = pfVar32[3];
              }
              else {
                if ((uVar18 != 0x10) && (uVar18 != 0x20)) goto LAB_82609730;
                fVar4 = pfVar32[4];
              }
              dVar37 = (double)(float)(ABS((double)(*pfVar32 * fVar4)) + dVar37);
            }
LAB_82609730:
            iVar24 = iVar24 + 1;
            pfVar32 = pfVar32 + 0x10;
          } while (iVar24 < pcVar27[0x41]);
        }
      }
    }
    puVar19 = puVar19 + 1;
    pfVar34 = pfVar34 + 1;
    *pfVar34 = (float)dVar37;
    if (-0x7ce1867d < (int)puVar19) {
      return 1;
    }
  } while( true );
}

