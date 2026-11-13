typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _fStack_328 ((*(unsigned __int64*)&fStack_328))
extern unsigned int *auStack_130;
extern unsigned int *auStack_180;
extern unsigned int *auStack_200;
extern unsigned int *auStack_280;
extern unsigned int *auStack_298;
extern unsigned int fStack_25e;
extern unsigned int fStack_264;
extern unsigned int fStack_2d4;
extern unsigned int fStack_2d8;
extern unsigned int fStack_2dc;
extern unsigned int fStack_2e0;
extern unsigned int fStack_2e4;
extern unsigned int fStack_2f4;
extern unsigned int fStack_2f8;
extern unsigned int fStack_2fc;
extern unsigned int fStack_300;
extern unsigned int fStack_304;
extern unsigned int fStack_308;
extern unsigned int fStack_30c;
extern unsigned int fStack_310;
extern unsigned int fStack_320;
extern unsigned int fStack_328;
extern int fn_8267B890();
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_82685B28();
extern int fn_82685EC0();
extern int fn_8268CEC0();
extern int fn_8268D0C8();
extern int fn_8268D5D8();
extern int fn_82693410();
extern int fn_8269A3C0();
extern int fn_8269AC18();
extern int fn_826EB6B8();
extern int fn_826ED8F0();
extern int fn_826EE248();
extern int fn_827597E0();
extern int fn_8275AB40();
extern int fn_8275CE20();
extern int fn_8275E130();
extern int fn_8275E198();
extern int fn_8275FD58();
extern int fn_82760648();
extern int fn_82760BF8();
extern int fn_82771090();
extern int fn_82779470();
extern int memcpy();
extern unsigned int iStack_2ec;
extern unsigned int iStack_324;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_820147D8;
extern unsigned int lbl_82021534;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1ec;
extern unsigned int uStack_260;
extern unsigned int uStack_288;
extern unsigned int uStack_290;
extern unsigned int uStack_2ac;
extern unsigned int uStack_2b0;
extern unsigned int uStack_2b4;
extern unsigned int uStack_2b8;
extern unsigned int uStack_2bc;
extern unsigned int uStack_2c0;
extern unsigned int uStack_2e8;
extern unsigned int uStack_2f0;
extern unsigned int uStack_318;
extern unsigned int uStack_330;


void fn_82771458(int *param_1,int *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  __int64 *plVar8;
  bool bVar9;
  unsigned int *puVar12;
  int iVar13;
  unsigned __int64 uVar10;
  unsigned int uVar14;
  unsigned int uVar15;
  int iVar16;
  int iVar17;
  __int64 lVar11;
  float *pfVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  float *pfVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  __int64 lVar30;
  int iVar31;
  bool bVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  unsigned __int64 uStack_330;
  struct { float first; int second; } stack_pair_328;

  float fStack_320;
  unsigned __int64 uStack_318;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  struct { float first; float second; } stack_pair_300;

  float fStack_2f8;
  float fStack_2f4;
  unsigned char uStack_2f0;
  int iStack_2ec;
  unsigned int uStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  unsigned int uStack_2c0;
  unsigned int uStack_2bc;
  unsigned int uStack_2b8;
  unsigned int uStack_2b4;
  unsigned int uStack_2b0;
  unsigned int uStack_2ac;
  __int64 lStack_2a8;
  __int64 lStack_2a0;
  unsigned char auStack_298 [8];
  unsigned __int64 uStack_290;
  unsigned __int64 uStack_288;
  unsigned char auStack_280 [28];
  float fStack_264;
  unsigned short uStack_260;
  float fStack_25e;
  unsigned char auStack_200 [20];
  unsigned int uStack_1ec;
  unsigned int uStack_1e8;
  unsigned int uStack_1e4;
  char cStack_1e0;
  unsigned char auStack_180 [80];
  unsigned char auStack_130 [32];
  char cStack_110;

  iVar27 = param_1[0x24];
  fStack_320 = *(float *)(param_3 + 0x1c);
  dVar35 = (double)fStack_320;
  iVar16 = param_1[0x23];
  iVar28 = *param_2;
  iVar17 = 0;
  fVar1 = *(float *)(iVar27 + 8);
  fVar2 = *(float *)(iVar16 + 8);
  iVar7 = *(int *)(param_2[6] + 0x14);
  fVar3 = *(float *)(iVar27 + 0xc);
  fVar4 = *(float *)(iVar16 + 0xc);
  fVar5 = *(float *)(iVar27 + 0x10);
  fVar6 = *(float *)(iVar16 + 0x10);
  param_1[5] = (int)(float)((double)(float)((double)*(float *)(iVar27 + 4) -
                                           (double)*(float *)(iVar16 + 4)) * dVar35 +
                           (double)*(float *)(iVar16 + 4));
  param_1[6] = (int)(float)((double)(float)((double)fVar1 - (double)fVar2) * dVar35 + (double)fVar2)
  ;
  param_1[7] = (int)(float)((double)(float)((double)fVar3 - (double)fVar4) * dVar35 + (double)fVar4)
  ;
  param_1[8] = (int)(float)((double)(float)((double)fVar5 - (double)fVar6) * dVar35 + (double)fVar6)
  ;
  *(unsigned char *)(param_1 + 0xd) = *(unsigned char *)(param_1 + 0xd) | 0x10;
  uVar20 = (unsigned __int64)(unsigned int)param_1[0x19];
  iStack_2ec = iVar7;
  if (uVar20 != 0) {
    lVar30 = 0;
    do {
      fn_8275AB40(dVar35,lVar30 + (unsigned __int64)(unsigned int)param_1[0x18],
                        lVar30 + (unsigned __int64)(unsigned int)param_1[0x25],
                        lVar30 + (unsigned __int64)(unsigned int)param_1[0x28]);
      uVar20 = uVar20 - 1;
      lVar30 = lVar30 + 0x28;
    } while (uVar20 != 0);
  }
  uVar20 = (unsigned __int64)(unsigned int)param_1[0x1c];
  if (uVar20 != 0) {
    iVar27 = 0;
    dVar33 = (double)lbl_82002C5C;
    do {
      iVar31 = iVar27 + param_1[0x2b];
      iVar29 = iVar27 + param_1[0x1b];
      iVar13 = iVar27 + param_1[0x2e];
      *(unsigned short *)(iVar29 + 0x10) = *(unsigned short *)(iVar31 + 0x10);
      lStack_2a8 = (__int64)(int)(unsigned int)*(unsigned short *)(iVar13 + 4);
      lStack_2a0 = (__int64)(int)(unsigned int)*(unsigned short *)(iVar31 + 4);
      iVar16 = (int)((double)(float)((double)(float)((double)lStack_2a8 - (double)lStack_2a0) *
                                     dVar35 + (double)lStack_2a0) + dVar33);
      *(short *)(iVar29 + 4) = (short)iVar16;
      uStack_2e8 = *(unsigned int *)(iVar31 + 8);
      _fStack_328 = CONCAT44(*(unsigned int *)(iVar13 + 8),iVar16);
      puVar12 = (unsigned int *)fn_82779470(dVar35,auStack_298,&uStack_2e8,&stack_pair_328.first);
      *(unsigned int *)(iVar29 + 8) = *puVar12;
      iVar16 = *(int *)(iVar31 + 0xc);
      if (iVar16 != 0) {
        uVar26 = *(unsigned int *)(iVar13 + 0xc);
        if (*(int *)(iVar29 + 0xc) == 0) {
          fStack_2e4 = 3.61535e-43;
          iVar13 = fn_8267BED0(param_1,0x28,&fStack_2e4);
          if (iVar13 == 0) {
            uVar22 = 0;
          }
          else {
            uVar22 = fn_827597E0();
          }
          fn_8275AB40(dVar35,uVar22,iVar16,uVar26);
          *(int *)(iVar29 + 0xc) = (int)uVar22;
        }
        else {
          fn_8275AB40(dVar35,*(int *)(iVar29 + 0xc),iVar16,uVar26);
        }
      }
      uVar20 = uVar20 - 1;
      iVar27 = iVar27 + 0x18;
    } while (uVar20 != 0);
  }
  puVar12 = (unsigned int *)param_2[0x10];
  uStack_2c0 = *puVar12;
  uStack_2bc = puVar12[1];
  uStack_2b8 = puVar12[2];
  uStack_2b4 = puVar12[3];
  uStack_2b0 = puVar12[4];
  uStack_2ac = puVar12[5];
  fn_8268CEC0(&uStack_2c0,param_3 + 0x44);
  memcpy(auStack_280,param_2[0x11],0x20);
  fn_8268D5D8(auStack_280,param_3 + 0x24);
  dVar34 = (double)(float)param_2[9];
  dVar33 = (double)fn_8268D0C8(&uStack_2c0);
  dVar34 = (double)(float)(dVar33 * dVar34);
  uVar20 = 0;
  dVar33 = (double)(float)((double)lbl_8200571C / dVar34);
  if ((*(unsigned char *)(param_3 + 0x66) & 1) != 0) {
    uVar20 = fn_8269AC18((double)(float)param_2[9],param_3);
  }
  if (((*(unsigned int *)(iVar28 + 0x14) & 0x10) == 0) ||
     (bVar9 = true, (*(unsigned int *)(iVar28 + 0x1c) & 0x100) == 0)) {
    bVar9 = false;
  }
  if ((!bVar9) ||
     (((((*(unsigned int *)(iVar28 + 0x1c) >> 9 & 1) == 0 && ((*(unsigned char *)(param_1 + 0xd) & 1) != 0)) ||
       (*(short *)(param_3 + 100) != 0)) || (bVar9 = true, param_2[0x13] != 0)))) {
    bVar9 = false;
  }
  bVar32 = lbl_82002AE0 <= ABS(fStack_264);
  if ((uVar20 & 0xffffffff) == 0) {
    if (bVar9) {
      fVar1 = (float)(dVar34 * (double)lbl_820147D8) * (float)(dVar34 * (double)lbl_820147D8);
      uVar19 = ((unsigned __int64)((unsigned int)fVar1 >> 0x17) & 0xff) - 0x40;
    }
    else {
      fVar1 = (float)dVar34;
      uVar19 = (((unsigned __int64)((unsigned int)fVar1 >> 0x17) & 0xff) - 0x40 & 0xffffffff) >> 1;
    }
    _fStack_328 = CONCAT44(fVar1,stack_pair_328.second);
    uVar23 = 6;
    uVar22 = 2;
    fStack_25e = fStack_320;
    uStack_260 = (unsigned short)((((unsigned __int64)((unsigned int)*(float *)(iVar28 + 0x10) >> 0x17) - 0x40 & 0xfffe) <<
                           7 | uVar19 & 0xffffffff) << 1) | (unsigned short)bVar9;
    fStack_320 = *(float *)(iVar28 + 0x10);
  }
  else {
    fn_8275CE20(dVar35,uVar20,&uStack_260);
    uVar23 = 0x54;
    uVar22 = 1;
  }
  uVar19 = fn_82685B28(iVar7,param_1 + 4,param_3,uVar22,&uStack_260,uVar23);
  uVar10 = fn_8269A3C0(param_3);
  fn_82771090(auStack_180,param_2,&uStack_2c0,auStack_280,uVar10,param_1 + 0x18,param_1 + 0x1b);
  if ((uVar19 & 0xffffffff) == 0) {
    uVar14 = 0;
    uVar15 = 0;
    uVar26 = 0;
    dVar34 = (double)lbl_821AAD20;
    uVar25 = 0;
    fStack_308 = lbl_821AAD20;
    uVar24 = 0;
    fStack_304 = lbl_821AAD20;
    fStack_30c = lbl_821AAD20;
    fStack_310 = lbl_821AAD20;
    fn_82760648(auStack_200,param_1[0x23]);
    fn_82760648(auStack_130,param_1[0x24]);
    uStack_318 = 0;
    iVar27 = 0;
    uStack_330 = 0;
    while ((cStack_1e0 != '\x01' || (cStack_110 != '\x01'))) {
      if (uVar14 == 0) {
        fn_8275FD58(&uStack_288,auStack_200);
        uStack_318 = uStack_288;
        uVar14 = fn_82760BF8(&uStack_318);
        fn_8275E130(&uStack_318,&fStack_308,&fStack_304);
        uVar26 = uStack_1ec;
        uVar25 = uStack_1e8;
        uVar24 = uStack_1e4;
      }
      if (uVar15 == 0) {
        fn_8275FD58(&uStack_290,auStack_130);
        uStack_330 = uStack_290;
        uVar15 = fn_82760BF8(&uStack_330);
        fn_8275E130(&uStack_330,&fStack_30c,&fStack_310);
      }
      iVar16 = param_1[0x31] + iVar27;
      *(unsigned int *)(param_1[0x31] + iVar27) = uVar26;
      *(unsigned int *)(iVar16 + 8) = uVar24;
      *(unsigned int *)(iVar16 + 4) = uVar25;
      uVar19 = (unsigned __int64)*(unsigned int *)(iVar16 + 0x18);
      *(float *)(iVar16 + 0xc) =
           (float)((double)(float)((double)fStack_30c - (double)fStack_308) * dVar35 +
                  (double)fStack_308);
      *(float *)(iVar16 + 0x10) =
           (float)((double)(float)((double)fStack_310 - (double)fStack_304) * dVar35 +
                  (double)fStack_304);
      if (uVar19 != 0) {
        iVar28 = 0;
        do {
          if ((*(unsigned char *)((((unsigned __int64)(uStack_318) >> 0) & 0xFFFFFFFF) + 0x20) == 1) ||
             (bVar9 = false, (*(unsigned char *)((((unsigned __int64)(uStack_318) >> 0) & 0xFFFFFFFF) + 0x20) & 0x80) == 0)) {
            bVar9 = true;
          }
          if (bVar9) {
            if ((*(unsigned char *)((((unsigned __int64)(uStack_330) >> 0) & 0xFFFFFFFF) + 0x20) == 1) ||
               (bVar9 = false, (*(unsigned char *)((((unsigned __int64)(uStack_330) >> 0) & 0xFFFFFFFF) + 0x20) & 0x80) == 0)) {
              bVar9 = true;
            }
            if (bVar9) {
              stack_pair_300.first = (float)dVar34;
              fStack_2f4 = (float)dVar34;
              fStack_2f8 = (float)dVar34;
              pfVar18 = &fStack_2e4;
              stack_pair_300.second = (float)dVar34;
              uStack_2f0 = 0;
              pfVar21 = &fStack_304;
              lVar30 = 5;
              do {
                pfVar21 = pfVar21 + 1;
                pfVar18 = pfVar18 + 1;
                *pfVar18 = *pfVar21;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
            }
            else {
              fn_8275E198(&uStack_330,&fStack_2e0,1);
              pfVar18 = &fStack_304;
              pfVar21 = &fStack_2e4;
              lVar30 = 5;
              do {
                pfVar21 = pfVar21 + 1;
                pfVar18 = pfVar18 + 1;
                *pfVar18 = *pfVar21;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
            }
          }
          else {
            fn_8275E198(&uStack_318,&stack_pair_300.first,1);
            if ((*(unsigned char *)((((unsigned __int64)(uStack_330) >> 0) & 0xFFFFFFFF) + 0x20) == 1) ||
               (bVar9 = false, (*(unsigned char *)((((unsigned __int64)(uStack_330) >> 0) & 0xFFFFFFFF) + 0x20) & 0x80) == 0)) {
              bVar9 = true;
            }
            if (bVar9) {
              pfVar18 = &fStack_2e4;
              pfVar21 = &fStack_304;
              lVar30 = 5;
              do {
                pfVar21 = pfVar21 + 1;
                pfVar18 = pfVar18 + 1;
                *pfVar18 = *pfVar21;
                lVar30 = lVar30 + -1;
              } while (lVar30 != 0);
            }
            else {
              fn_8275E198(&uStack_330,&fStack_2e0,1);
            }
          }
          uVar19 = uVar19 - 1;
          pfVar21 = (float *)(iVar28 + *(int *)(iVar16 + 0x14));
          iVar28 = iVar28 + 0x10;
          *pfVar21 = (float)((double)(float)((double)fStack_2e0 - (double)stack_pair_300.first) * dVar35 +
                            (double)stack_pair_300.first);
          pfVar21[1] = (float)((double)(float)((double)fStack_2dc - (double)stack_pair_300.second) * dVar35 +
                              (double)stack_pair_300.second);
          pfVar21[2] = (float)((double)(float)((double)fStack_2d8 - (double)fStack_2f8) * dVar35 +
                              (double)fStack_2f8);
          pfVar21[3] = (float)((double)(float)((double)fStack_2d4 - (double)fStack_2f4) * dVar35 +
                              (double)fStack_2f4);
        } while (uVar19 != 0);
      }
      iVar27 = iVar27 + 0x24;
      if (uVar14 == uVar15) {
        uVar14 = 0;
LAB_82771bb8:
        uVar15 = 0;
      }
      else {
        if (uVar15 <= uVar14) {
          uVar14 = uVar14 - uVar15;
          goto LAB_82771bb8;
        }
        uVar15 = uVar15 - uVar14;
        uVar14 = 0;
      }
    }
    plVar8 = (__int64 *)param_2[0x12];
    lVar30 = fn_82693410();
    iVar27 = iStack_2ec;
    *(int *)(param_2[0x12] + 8) = *(int *)(param_2[0x12] + 8) + 1;
    iVar16 = fn_8267B890(*(unsigned int *)(iStack_2ec + 8),0x70,0);
    if (iVar16 != 0) {
      iVar17 = fn_826EE248(dVar33,(double)(float)(dVar33 * (double)lbl_82021534));
    }
    *(bool *)(iVar17 + 0x17) = bVar32;
    (**(int (***)())(*param_1 + 0x58))((double)*(float *)(iVar17 + 8),param_1,iVar17);
    lVar11 = fn_82693410();
    *plVar8 = (lVar11 - lVar30) + *plVar8;
    fn_826EB6B8(iVar17,uVar22,&uStack_260,uVar23,param_3);
    fn_826ED8F0(iVar17,auStack_180,uVar20 != 0);
    fn_82685EC0(iVar27,param_1 + 4,iVar17);
  }
  else {
    fn_826ED8F0(uVar19,auStack_180,uVar20 != 0);
  }
  if ((uVar20 & 0xffffffff) != 0) {
    fn_8267C498(uVar20);
  }
  return;
}
