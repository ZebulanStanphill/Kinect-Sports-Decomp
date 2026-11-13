typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_82758408();
extern int fn_82758448();
extern int fn_82758568();
extern int fn_827586D8();
extern int fn_82758700();
extern int fn_82758C40();
extern int fn_827A24F0();
extern int fn_827A9228();
extern int fn_827AEE78();
extern int fn_827AF310();
extern int fn_82F6A528();
extern int fn_82F6A574();
extern unsigned int iStack_1dc;
extern unsigned int iStack_244;
extern unsigned int iStack_248;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1e4;
extern unsigned int uStack_1e8;
extern unsigned int uStack_1f8;
extern unsigned int uStack_238;
extern unsigned int uStack_249;
extern unsigned int uStack_24a;
extern unsigned int uStack_24b;
extern unsigned int uStack_24c;
extern unsigned int uStack_24d;
extern unsigned int uStack_24e;
extern unsigned int uStack_24f;
extern unsigned int uStack_250;


void fn_827AF5B8(unsigned __int64 param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,float *param_6,unsigned __int64 param_7)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char bVar4;
  unsigned __int64 uVar5;
  char cVar6;
  bool bVar8;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  int *piVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  __int64 lVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  double extraout_f1;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  unsigned char uStack_250;
  unsigned char uStack_24f;
  unsigned char uStack_24e;
  unsigned char uStack_24d;
  unsigned char uStack_24c;
  unsigned char uStack_24b;
  unsigned char uStack_24a;
  unsigned char uStack_249;
  int iStack_248;
  int iStack_244;
  int *apiStack_240 [2];
  unsigned int uStack_238;
  __int64 lStack_228;
  __int64 lStack_220;
  __int64 lStack_218;
  __int64 lStack_210;
  __int64 lStack_208;
  int aiStack_200 [2];
  unsigned int uStack_1f8;
  unsigned int uStack_1e8;
  unsigned int uStack_1e4;
  int iStack_1dc;
  unsigned char bStack_1d0;
  unsigned int uStack_1c0;
  unsigned int uStack_1bc;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  
  uVar5 = fn_82F6A528();
  dVar30 = extraout_f1;
  fn_82758568(param_4);
  iVar12 = 0;
  fn_82758568(param_4);
  fn_827586D8(param_4,1);
  fn_827AF310(aiStack_200,uVar5,param_7,0xffffffffffffffff);
  dVar29 = (double)lbl_8200571C;
  dVar35 = (double)lbl_821AAD20;
  do {
    iVar2 = aiStack_200[0];
    uVar14 = (unsigned __int64)uStack_1e8;
    uVar13 = (unsigned __int64)uStack_1e4;
    dVar21 = dVar35;
    do {
      uVar3 = uStack_1f8;
      if ((*(unsigned int *)(iVar2 + 4) <= uStack_1f8) || (bVar8 = false, uVar13 == 0)) {
        bVar8 = true;
      }
      if (bVar8) {
        fn_82F6A574();
        return;
      }
      fn_827A9228(apiStack_240,param_5,uVar14);
      bVar4 = bStack_1d0;
      iVar1 = iStack_1dc;
      uVar15 = uVar13;
      dVar23 = dVar21;
      dVar25 = dVar21;
      dVar28 = dVar21;
      dVar35 = dVar21;
      dVar36 = dVar21;
      dVar37 = dVar21;
      dVar22 = dVar21;
      dVar38 = dVar21;
      while( true ) {
        if (((apiStack_240[0] == (int *)0x0) || ((unsigned int)apiStack_240[0][1] <= uStack_238)) ||
           (bVar8 = false, (int)uStack_238 < 0)) {
          bVar8 = true;
        }
        if ((bVar8) || ((uVar15 & 0xffffffff) == 0)) break;
        piVar11 = *(int **)(uStack_238 * 4 + *apiStack_240[0]);
        uVar17 = uStack_238;
        if ((int)uStack_238 < 0) {
          uVar17 = 0xffffffff;
        }
        cVar6 = fn_827A24F0(param_5,uVar17);
        if (cVar6 != '\0') {
          uVar17 = piVar11[2];
          uVar9 = (unsigned __int64)uVar17;
          uVar7 = uVar9;
          if ((*piVar11 < 0) &&
             (uVar7 = (unsigned __int64)uVar17 & 0xffffff, ((unsigned __int64)uVar17 & 0xffffff) == 0xffffff)) {
            uVar7 = 0xffffffffffffffff;
          }
          if ((uVar7 & 0xffffffff) < uVar14) {
            fn_82756F70(&uStack_1c0,piVar11);
            uVar16 = 0;
            uVar9 = (unsigned __int64)(unsigned int)piVar11[2];
            if ((*piVar11 < 0) &&
               (uVar9 = (unsigned __int64)(unsigned int)piVar11[2] & 0xffffff, uVar9 == 0xffffff)) {
              uVar9 = 0xffffffffffffffff;
            }
            lVar18 = uVar14 - uVar9;
            if (0 < lVar18) {
              do {
                if ((uStack_1c0 == 0) || (bVar8 = false, uStack_1bc <= uStack_1c0)) {
                  bVar8 = true;
                }
                if (bVar8) break;
                uVar9 = (unsigned __int64)(*(unsigned short *)(uStack_1c0 + 4) >> 0xc);
                if (uVar9 != 0) {
                  lVar18 = lVar18 - uVar9;
                  uVar16 = uVar16 + 1;
                }
                fn_827555D8(&uStack_1c0);
              } while (0 < (int)lVar18);
            }
            fn_82756488(&uStack_1c0);
          }
          else {
            uVar16 = 0;
            if ((*piVar11 < 0) && (uVar9 = (unsigned __int64)uVar17 & 0xffffff, uVar9 == 0xffffff)) {
              uVar9 = 0xffffffffffffffff;
            }
            uVar15 = (uVar14 - uVar9) + uVar13;
          }
          fn_82756F70(&uStack_160,piVar11);
          iVar19 = 0;
          uVar17 = 0;
          dVar36 = dVar35;
          dVar37 = dVar35;
          dVar22 = dVar35;
          dVar38 = dVar35;
          while( true ) {
            if ((uStack_160 == 0) || (bVar8 = false, uStack_15c <= uStack_160)) {
              bVar8 = true;
            }
            if ((bVar8) || ((uVar15 & 0xffffffff) == 0)) break;
            dVar27 = dVar37;
            dVar26 = dVar22;
            dVar20 = dVar38;
            if (uVar16 <= uVar17) {
              uVar10 = (unsigned int)*(unsigned short *)(uStack_160 + 2);
              if ((*(unsigned short *)(uStack_160 + 6) >> 6 & 1) != 0) {
                uVar10 = -(unsigned int)*(unsigned short *)(uStack_160 + 2);
              }
              lStack_218 = (__int64)(int)uVar10;
              if (*piVar11 < 0) {
                uVar10 = (unsigned int)*(unsigned short *)((int)piVar11 + 0x16);
                lVar18 = (__int64)*(char *)((int)piVar11 + 0x1d);
              }
              else {
                uVar10 = piVar11[6];
                lVar18 = (__int64)*(short *)(piVar11 + 10);
              }
              lStack_220 = (__int64)iVar19;
              lStack_228 = (__int64)
                           (int)(((-1 - ((int)(unsigned int)lVar18 >> 0x1f)) + (unsigned int)(lVar18 == 0) &
                                 (unsigned int)lVar18) + uVar10);
              dVar20 = (double)lStack_220;
              uVar15 = uVar15 - (*(unsigned short *)(uStack_160 + 4) >> 0xc);
              dVar26 = (double)(float)(dVar20 + (double)lStack_218);
              dVar27 = dVar35;
              if (uVar17 != uVar16) {
                if (dVar38 <= dVar20) {
                  dVar20 = dVar38;
                }
                if (dVar26 < dVar22) {
                  dVar26 = dVar22;
                }
                dVar27 = dVar37;
                if (dVar35 < dVar37) {
                  dVar27 = dVar35;
                }
                if ((double)lStack_228 < dVar36) goto LAB_827af944;
              }
              dVar36 = (double)lStack_228;
            }
LAB_827af944:
            uVar10 = (unsigned int)*(unsigned short *)(uStack_160 + 2);
            if ((*(unsigned short *)(uStack_160 + 6) >> 6 & 1) != 0) {
              uVar10 = -uVar10;
            }
            iVar19 = uVar10 + iVar19;
            if ((*(unsigned short *)(uStack_160 + 4) & 0xf000) != 0) {
              uVar17 = uVar17 + 1;
            }
            fn_827555D8(&uStack_160);
            dVar37 = dVar27;
            dVar22 = dVar26;
            dVar38 = dVar20;
          }
          lStack_208 = (__int64)piVar11[4];
          lStack_210 = (__int64)piVar11[3];
          dVar27 = (double)param_6[1];
          dVar26 = (double)*param_6;
          dVar20 = (double)(float)(dVar27 + (double)((float)lStack_208 + (float)(-param_2 + dVar37))
                                  );
          dVar37 = (double)(float)(dVar27 + (double)((float)lStack_208 + (float)(-param_2 + dVar36))
                                  );
          dVar38 = (double)(float)(dVar26 + (double)((float)lStack_210 + (float)(-dVar30 + dVar38)))
          ;
          dVar36 = (double)(float)(dVar26 + (double)((float)lStack_210 + (float)(-dVar30 + dVar22)))
          ;
          if ((dVar25 <= dVar28) || (bVar8 = false, dVar23 <= dVar21)) {
            bVar8 = true;
          }
          if (!bVar8) {
            if ((((dVar23 < dVar20) && (dVar20 <= (double)(float)(dVar23 + dVar29))) &&
                (dVar28 <= dVar36)) && (dVar38 <= dVar25)) {
              dVar23 = dVar20;
            }
            dVar24 = (double)param_6[2];
            dVar22 = (double)param_6[3];
            if (((dVar23 < dVar27) || (dVar22 < dVar21)) ||
               ((dVar24 < dVar28 || (bVar8 = true, dVar25 < dVar26)))) {
              bVar8 = false;
            }
            dVar31 = dVar35;
            dVar32 = dVar35;
            dVar33 = dVar35;
            dVar34 = dVar35;
            if (bVar8) {
              dVar34 = dVar28;
              if (dVar28 <= dVar26) {
                dVar34 = dVar26;
              }
              dVar33 = dVar25;
              if (dVar24 < dVar25) {
                dVar33 = dVar24;
              }
              dVar31 = dVar21;
              if (dVar21 <= dVar27) {
                dVar31 = dVar27;
              }
              dVar32 = dVar23;
              if (dVar22 < dVar23) {
                dVar32 = dVar22;
              }
              if ((dVar33 <= dVar34) || (bVar8 = false, dVar32 <= dVar31)) goto LAB_827afad0;
            }
            else {
LAB_827afad0:
              bVar8 = true;
            }
            if (!bVar8) {
              if ((bVar4 & 8) == 0) {
                uStack_24f = 0;
                piVar11 = (int *)&uStack_250;
                uStack_24e = 0;
                uStack_24d = 0;
                uStack_250 = 0;
              }
              else {
                iStack_248 = iVar1;
                piVar11 = &iStack_248;
              }
              iVar19 = *piVar11;
              if (iVar19 != iVar12) {
                fn_82758C40(param_4);
                iVar12 = iVar19;
              }
              fn_82758408(dVar34,dVar31,param_4);
              fn_82758448(dVar33,dVar31,param_4);
              fn_82758448(dVar33,dVar32,param_4);
              fn_82758448(dVar34,dVar32,param_4);
              fn_82758448(dVar34,dVar31,param_4);
              fn_82758700(param_4);
            }
          }
          dVar21 = dVar20;
          dVar28 = dVar38;
          dVar23 = dVar37;
          dVar25 = dVar36;
          dVar36 = dVar25;
          dVar37 = dVar23;
          dVar22 = dVar28;
          dVar38 = dVar21;
          fn_82756488(&uStack_160);
        }
        if (uStack_238 < (unsigned int)apiStack_240[0][1]) {
          uStack_238 = uStack_238 + 1;
        }
      }
      if ((dVar36 <= dVar22) || (bVar8 = false, dVar37 <= dVar38)) {
        bVar8 = true;
      }
      if (!bVar8) {
        dVar25 = (double)param_6[1];
        dVar21 = (double)*param_6;
        dVar28 = (double)param_6[2];
        dVar23 = (double)param_6[3];
        if (((dVar37 < dVar25) || (dVar23 < dVar38)) ||
           ((dVar28 < dVar22 || (bVar8 = true, dVar36 < dVar21)))) {
          bVar8 = false;
        }
        dVar20 = dVar35;
        dVar26 = dVar35;
        dVar27 = dVar35;
        dVar24 = dVar35;
        if (bVar8) {
          dVar27 = dVar22;
          if (dVar22 <= dVar21) {
            dVar27 = dVar21;
          }
          dVar20 = dVar36;
          if (dVar28 < dVar36) {
            dVar20 = dVar28;
          }
          dVar24 = dVar38;
          if (dVar38 <= dVar25) {
            dVar24 = dVar25;
          }
          dVar26 = dVar37;
          if (dVar23 < dVar37) {
            dVar26 = dVar23;
          }
          if ((dVar20 <= dVar27) || (bVar8 = false, dVar26 <= dVar24)) goto LAB_827afc64;
        }
        else {
LAB_827afc64:
          bVar8 = true;
        }
        if (!bVar8) {
          if ((bVar4 & 8) == 0) {
            uStack_24b = 0;
            piVar11 = (int *)&uStack_24c;
            uStack_24a = 0;
            uStack_249 = 0;
            uStack_24c = 0;
          }
          else {
            iStack_244 = iVar1;
            piVar11 = &iStack_244;
          }
          iVar1 = *piVar11;
          if (iVar1 != iVar12) {
            fn_82758C40(param_4);
            iVar12 = iVar1;
          }
          fn_82758408(dVar27,dVar24,param_4);
          fn_82758448(dVar20,dVar24,param_4);
          fn_82758448(dVar20,dVar26,param_4);
          fn_82758448(dVar27,dVar26,param_4);
          fn_82758448(dVar27,dVar24,param_4);
          fn_82758700(param_4);
        }
      }
      if ((*(unsigned int *)(iVar2 + 4) <= uVar3) || (bVar8 = false, uVar13 == 0)) {
        bVar8 = true;
      }
      dVar21 = dVar35;
    } while (bVar8);
    fn_827AEE78(aiStack_200);
  } while( true );
}

