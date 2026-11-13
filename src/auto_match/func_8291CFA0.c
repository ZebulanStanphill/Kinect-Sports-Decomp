typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_190;
extern unsigned int *auStack_2c0;
extern unsigned int *auStack_2f0;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8291C6F8();
extern int fn_82F65148();
extern int fn_82F67F88();
extern int fn_82F68CC0();
extern unsigned int iStack_304;
extern unsigned int iStack_308;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int uStack_298;
extern unsigned int uStack_2a0;
extern unsigned int uStack_2a8;
extern unsigned int uStack_2d0;
extern unsigned int uStack_2d8;


unsigned __int64 fn_8291CFA0(unsigned int *param_1,unsigned char *param_2,unsigned int param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  unsigned int uVar8;
  bool bVar9;
  int iVar12;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar13;
  int *piVar14;
  unsigned __int64 uVar15;
  char *pcVar19;
  unsigned char *pbVar20;
  unsigned __int64 *puVar21;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  int iVar22;
  unsigned char *pbVar24;
  unsigned int uVar25;
  float *pfVar26;
  unsigned __int64 uVar23;
  unsigned int uVar27;
  int iVar28;
  char cVar29;
  int iVar30;
  unsigned int uVar31;
  int iVar32;
  unsigned int *puVar34;
  unsigned __int64 uVar33;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double dVar35;
  double dVar36;
  double dVar37;
  char cStack_310;
  unsigned char bStack_30c;
  unsigned char bStack_30b;
  unsigned char bStack_30a;
  unsigned char bStack_309;
  int iStack_308;
  int iStack_304;
  float afStack_300 [4];
  unsigned __int64 auStack_2f0 [2];
  __int64 lStack_2e0;
  unsigned __int64 uStack_2d8;
  unsigned __int64 uStack_2d0;
  __int64 lStack_2c8;
  unsigned __int64 auStack_2c0 [2];
  __int64 lStack_2b0;
  unsigned __int64 uStack_2a8;
  unsigned __int64 uStack_2a0;
  unsigned __int64 uStack_298;
  char cStack_290;
  char cStack_28f;
  char acStack_28e [254];
  unsigned char auStack_190 [400];
  
  if (param_3 < 0xb) {
    return 0xffffffff80004005;
  }
  pcVar19 = "#?RADIANCE";
  pbVar24 = param_2;
  do {
    bVar1 = *pbVar24;
    bVar2 = *pcVar19;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar24 = pbVar24 + 1;
    pcVar19 = pcVar19 + 1;
  } while (pbVar24 != param_2 + 10);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
    return 0xffffffff80004005;
  }
  uVar31 = 0;
  bVar9 = false;
  dVar35 = (double)lbl_82002AE0;
  if ((int)param_3 < 1) {
    return 0xffffffff80004005;
  }
  dVar36 = dVar35;
  do {
    if (*param_2 == 10) {
      param_2 = param_2 + 1;
      param_3 = param_3 - 1;
      break;
    }
    if ((int)param_3 < 8) {
LAB_8291d164:
      if (9 < (int)param_3) {
        pbVar24 = param_2;
        pbVar20 = (unsigned char *)"EXPOSURE=";
        do {
          bVar1 = *pbVar24;
          bVar2 = *pbVar20;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar24 = pbVar24 + 1;
          pbVar20 = pbVar20 + 1;
        } while (pbVar24 != param_2 + 9);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
          param_3 = param_3 - 9;
          for (param_2 = param_2 + 9; (*param_2 == 0x20 || (*param_2 == 9)); param_2 = param_2 + 1)
          {
            param_3 = param_3 - 1;
            if (param_3 == 0) {
              return 0xffffffff80004005;
            }
          }
          uVar27 = param_3;
          if (0xff < (int)param_3) {
            uVar27 = 0x100;
          }
          uVar25 = 0;
          if (uVar27 != 0) {
            do {
              if (param_2[uVar25] == 10) goto LAB_8291d208;
              uVar25 = uVar25 + 1;
            } while (uVar25 < uVar27);
          }
          uVar25 = 0;
LAB_8291d208:
          if (uVar25 == 0) {
            return 0xffffffff80004005;
          }
          fn_8291C6F8(&cStack_290,uVar25 + 1,param_2);
          iVar12 = fn_82F67F88(&cStack_290,0xffffffff8202e468,afStack_300,auStack_190);
          if (iVar12 != 1) {
            return 0xffffffff80004005;
          }
          dVar36 = (double)(float)((double)afStack_300[0] * dVar36);
          param_2 = param_2 + uVar25 + 1;
          param_3 = (param_3 - uVar25) - 1;
          goto LAB_8291d290;
        }
      }
      uVar27 = 0;
      if (param_3 != 0) {
        do {
          if (param_2[uVar27] == 10) goto LAB_8291d280;
          uVar27 = uVar27 + 1;
        } while (uVar27 < param_3);
      }
      uVar27 = 0;
LAB_8291d280:
      param_2 = param_2 + uVar27 + 1;
      param_3 = (param_3 - uVar27) - 1;
    }
    else {
      pbVar24 = param_2;
      pbVar20 = (unsigned char *)"FORMAT=";
      do {
        bVar1 = *pbVar24;
        bVar2 = *pbVar20;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar24 = pbVar24 + 1;
        pbVar20 = pbVar20 + 1;
      } while (pbVar24 != param_2 + 7);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) goto LAB_8291d164;
      iVar12 = param_3 - 7;
      for (param_2 = param_2 + 7; (*param_2 == 0x20 || (*param_2 == 9)); param_2 = param_2 + 1) {
        iVar12 = iVar12 + -1;
        if (iVar12 == 0) {
          return 0xffffffff80004005;
        }
      }
      fn_82F68CC0(auStack_2f0,0xffffffff8202e494,0x10);
      fn_82F68CC0(auStack_2c0,0xffffffff8202e4a4,0x10);
      if (iVar12 < 0x10) {
        return 0xffffffff80004005;
      }
      puVar21 = auStack_2f0;
      pbVar24 = param_2;
      do {
        bVar1 = *pbVar24;
        bVar2 = *(unsigned char *)puVar21;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar24 = pbVar24 + 1;
        puVar21 = (unsigned __int64 *)((int)puVar21 + 1);
      } while (pbVar24 != param_2 + 0xf);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
        puVar21 = auStack_2c0;
        pbVar24 = param_2;
        do {
          bVar1 = *pbVar24;
          bVar2 = *(unsigned char *)puVar21;
          if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
          pbVar24 = pbVar24 + 1;
          puVar21 = (unsigned __int64 *)((int)puVar21 + 1);
        } while (pbVar24 != param_2 + 0xf);
        if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) != 0) {
          return 0xffffffff80004005;
        }
      }
      param_2 = param_2 + 0x10;
      param_3 = iVar12 - 0x10;
      bVar9 = true;
    }
LAB_8291d290:;} while (0 < (int)param_3);
  if (!bVar9) {
    return 0xffffffff80004005;
  }
  uVar27 = 0x100;
  if ((int)param_3 < 0x101) {
    uVar27 = param_3;
  }
  uVar25 = 0;
  if (uVar27 != 0) {
    do {
      if (param_2[uVar25] == 10) goto LAB_8291d2e4;
      uVar25 = uVar25 + 1;
    } while (uVar25 < uVar27);
  }
  uVar25 = 0;
LAB_8291d2e4:
  if (uVar25 < 3) {
    return 0xffffffff80004005;
  }
  fn_8291C6F8(&cStack_290,uVar25 + 1,param_2);
  if (cStack_28f == 'Y') {
    bVar9 = true;
    piVar14 = &iStack_308;
    cVar29 = cStack_310;
    if (cStack_290 == '-') {
      cStack_310 = '\0';
    }
    else {
      if (cStack_290 != '+') {
        return 0xffffffff80004005;
      }
      cStack_310 = '\x01';
    }
  }
  else {
    if (cStack_28f != 'X') {
      return 0xffffffff80004005;
    }
    bVar9 = false;
    piVar14 = &iStack_304;
    if (cStack_290 == '-') {
      cVar29 = '\0';
    }
    else {
      if (cStack_290 != '+') {
        return 0xffffffff80004005;
      }
      cVar29 = '\x01';
    }
  }
  iVar12 = fn_82F67F88(acStack_28e,0xffffffff821c7f34,piVar14);
  if (iVar12 != 1) {
    return 0xffffffff80004005;
  }
  pcVar19 = acStack_28e;
  while (((acStack_28e[0] != '\0' && (acStack_28e[0] != '-')) && (acStack_28e[0] != '+'))) {
    pcVar19 = pcVar19 + 1;
    acStack_28e[0] = *pcVar19;
  }
  cVar3 = *pcVar19;
  if (cVar3 == '\0') {
    return 0xffffffff80004005;
  }
  if (bVar9) {
    piVar14 = &iStack_304;
    cVar29 = cVar3 == '+';
  }
  else {
    piVar14 = &iStack_308;
    cStack_310 = cVar3 == '+';
  }
  cVar3 = pcVar19[1];
  if (cVar3 == '\0') {
    return 0xffffffff80004005;
  }
  if ((cVar3 != 'Y') && (cVar3 != 'X')) {
    return 0xffffffff80004005;
  }
  iVar12 = fn_82F67F88(pcVar19 + 2,0xffffffff821c7f34,piVar14);
  if (iVar12 != 1) {
    return 0xffffffff80004005;
  }
  param_1[0xd] = 0;
  param_1[5] = 1;
  *param_1 = 0x1a22aaa6;
  param_1[3] = iStack_304;
  param_1[4] = iStack_308;
  puVar34 = (unsigned int *)(param_2 + uVar25 + 1);
  param_1[0xc] = iStack_304 << 4;
  iVar12 = (param_3 - uVar25) + -1;
  if ((__int64)iStack_304 * (__int64)iStack_308 == 0) {
    return 0xffffffff80004005;
  }
  param_1[0xe] = 1;
  uVar10 = fn_8265C940((__int64)(iStack_304 << 4) * (__int64)iStack_308,0x24810000);
  param_1[1] = (int)uVar10;
  if (uVar10 == 0) {
    return 0xffffffff8007000e;
  }
  iVar28 = iStack_308;
  iVar30 = iStack_304;
  if (!bVar9) {
    iVar28 = iStack_304;
    iVar30 = iStack_308;
  }
  uVar33 = uVar10;
  if (!bVar9) {
    if ((cVar29 == '\0') || (cStack_310 == '\0')) {
      if (cVar29 == '\0') {
        if (cStack_310 != '\0') {
          uVar16 = 0xfffffffffffffffc;
          uVar33 = ((__int64)(int)param_1[0xc] * (__int64)iStack_308 + uVar10) - 0x10;
          uVar13 = (-(unsigned __int64)(unsigned int)param_1[0xc] & 0xffffffff) >> 2;
          goto LAB_8291d5e0;
        }
        uVar27 = param_1[0xc];
        uVar16 = 0xfffffffffffffffc;
        uVar13 = (unsigned __int64)(uVar27 >> 2);
LAB_8291d5cc:
        uVar33 = (uVar10 + uVar27) - 0x10;
        goto LAB_8291d5e0;
      }
      uVar13 = (unsigned __int64)((unsigned int)param_1[0xc] >> 2);
    }
    else {
      uVar13 = (-(unsigned __int64)(unsigned int)param_1[0xc] & 0xffffffff) >> 2;
      uVar33 = (__int64)(iStack_308 + -1) * (__int64)(int)param_1[0xc] + uVar10;
    }
    uVar16 = 4;
    goto LAB_8291d5e0;
  }
  if ((cVar29 == '\0') || (cStack_310 != '\0')) {
    if (cVar29 == '\0') {
      if (cStack_310 == '\0') {
        uVar27 = param_1[0xc];
        uVar13 = 0xfffffffffffffffc;
        uVar16 = (unsigned __int64)(uVar27 >> 2);
        goto LAB_8291d5cc;
      }
      if (cStack_310 != '\0') {
        uVar13 = 0xfffffffffffffffc;
        uVar16 = -(unsigned __int64)(unsigned int)param_1[0xc];
        uVar33 = ((__int64)(int)param_1[0xc] * (__int64)iStack_308 + uVar10) - 0x10;
        goto LAB_8291d52c;
      }
    }
    uVar13 = 4;
    uVar33 = (__int64)(iStack_308 + -1) * (__int64)(int)param_1[0xc] + uVar10;
    uVar16 = (-(unsigned __int64)(unsigned int)param_1[0xc] & 0xffffffff) >> 2;
  }
  else {
    uVar16 = (unsigned __int64)(unsigned int)param_1[0xc];
    uVar13 = 4;
LAB_8291d52c:
    uVar16 = (uVar16 & 0xffffffff) >> 2;
  }
LAB_8291d5e0:
  iVar32 = 0;
  if (0 < iVar28) {
    do {
      if (iVar12 < 4) {
LAB_8291d97c:
        fn_8265C990(param_1[1],0x24810000);
        param_1[1] = 0;
        return 0xffffffff80004005;
      }
      uVar27 = *puVar34;
      puVar34 = puVar34 + 1;
      iVar12 = iVar12 + -4;
      bStack_30c = (unsigned char)(uVar27 >> 0x18);
      bStack_30a = (unsigned char)(uVar27 >> 8);
      uVar17 = (unsigned __int64)bStack_30a;
      bStack_309 = (unsigned char)uVar27;
      if ((bStack_30c == 2) ||
         ((bStack_30b = (unsigned char)(uVar27 >> 0x10), bStack_30b == 2 && (uVar17 < 0x80)))) {
        if ((unsigned int)bStack_30a * 0x100 + (uVar27 & 0xff) != iVar30) goto LAB_8291d97c;
        uVar10 = 0;
        uVar17 = uVar33;
        do {
          iVar22 = 0;
          uVar23 = uVar17;
          if (0 < iVar30) {
            do {
              if (iVar12 < 2) goto LAB_8291d97c;
              uVar27 = (unsigned int)*(unsigned char *)puVar34;
              if (uVar27 < 0x81) {
                if ((iVar12 < (int)(uVar27 + 1)) || (iVar22 = uVar27 + iVar22, iVar30 < iVar22))
                goto LAB_8291d97c;
                if (uVar27 != 0) {
                  uVar25 = 0;
                  do {
                    uVar8 = uVar25 + 1 & 0xff;
                    auStack_2f0[0] = (unsigned __int64)*(unsigned char *)((int)puVar34 + uVar25 + 1);
                    *(float *)uVar23 = (float)auStack_2f0[0];
                    uVar23 = (uVar13 & 0x3fffffff) * 4 + uVar23;
                    uVar25 = uVar8;
                  } while (uVar8 < uVar27);
                }
                iVar12 = (iVar12 - uVar27) + -1;
                puVar34 = (unsigned int *)((int)puVar34 + uVar27 + 1);
              }
              else {
                iVar22 = (uVar27 & 0x7f) + iVar22;
                if (iVar30 < iVar22) goto LAB_8291d97c;
                auStack_2c0[0] = (unsigned __int64)*(unsigned char *)((int)puVar34 + 1);
                if ((*(unsigned char *)puVar34 & 0x7f) != 0) {
                  uVar25 = 0;
                  do {
                    *(float *)uVar23 = (float)auStack_2c0[0];
                    uVar23 = (uVar13 & 0x3fffffff) * 4 + uVar23;
                    uVar25 = uVar25 + 1 & 0xff;
                  } while (uVar25 < (uVar27 & 0x7f));
                }
                puVar34 = (unsigned int *)((int)puVar34 + 2);
                iVar12 = iVar12 + -2;
              }
            } while (iVar22 < iVar30);
          }
          uVar10 = uVar10 + 1;
          uVar17 = uVar17 + 4;
        } while ((int)uVar10 < 4);
      }
      else {
        uStack_298 = (unsigned __int64)bStack_309;
        lStack_2c8 = (__int64)(int)(unsigned int)bStack_30b;
        lStack_2e0 = (__int64)(int)(unsigned int)bStack_30c;
        fVar4 = (float)lStack_2e0;
        fVar5 = (float)lStack_2c8;
        lVar18 = 1;
        fVar6 = (float)uStack_298;
        fVar7 = (float)uVar17;
        uVar27 = 0;
        uVar23 = uVar33;
        uStack_2a8 = uVar17;
        if (1 < iVar30) {
          do {
            if (iVar12 < 4) goto LAB_8291d97c;
            uVar25 = *puVar34;
            puVar34 = puVar34 + 1;
            iVar12 = iVar12 + -4;
            bStack_30c = (unsigned char)(uVar25 >> 0x18);
            bStack_30a = (unsigned char)(uVar25 >> 8);
            uVar15 = (unsigned __int64)bStack_30a;
            bStack_30b = (unsigned char)(uVar25 >> 0x10);
            uVar17 = (unsigned __int64)bStack_30b;
            bStack_309 = (unsigned char)uVar25;
            if (((bStack_30c == 1) && (uVar10 = uVar17, uVar17 == 1)) &&
               (uVar10 = uVar15, uVar15 == 1)) {
              uVar25 = (uVar25 & 0xff) << (uVar27 & 0x3f);
              uVar17 = (unsigned __int64)uVar25;
              lVar18 = uVar17 + lVar18;
              if (iVar30 < (int)lVar18) goto LAB_8291d97c;
              if (0 < (int)uVar25) {
                do {
                  pfVar26 = (float *)uVar23;
                  *pfVar26 = fVar4;
                  pfVar26[1] = fVar5;
                  pfVar26[2] = fVar7;
                  pfVar26[3] = fVar6;
                  uVar23 = (uVar13 & 0x3fffffff) * 4 + uVar23;
                  uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
              }
              uVar27 = uVar27 + 8;
            }
            else {
              uStack_2a0 = (unsigned __int64)bStack_309;
              lVar18 = lVar18 + 1;
              lStack_2b0 = (__int64)(int)(unsigned int)bStack_30c;
              uVar27 = 0;
              fVar5 = (float)uVar17;
              fVar6 = (float)uStack_2a0;
              fVar7 = (float)uVar15;
              fVar4 = (float)lStack_2b0;
              pfVar26 = (float *)uVar23;
              pfVar26[3] = fVar6;
              pfVar26[1] = fVar5;
              *pfVar26 = fVar4;
              pfVar26[2] = fVar7;
              uVar23 = (uVar13 & 0x3fffffff) * 4 + uVar23;
              uStack_2d8 = uVar17;
              uStack_2d0 = uVar15;
            }
          } while ((int)lVar18 < iVar30);
        }
      }
      iVar32 = iVar32 + 1;
      uVar33 = (uVar16 & 0x3fffffff) * 4 + uVar33;
    } while (iVar32 < iVar28);
  }
  if ((__int64)iStack_304 * (__int64)iStack_308 != 0) {
    pfVar26 = (float *)(param_1[1] + -4);
    dVar37 = (double)(float)(dVar35 / dVar36);
    dVar36 = (double)lbl_82002C5C;
    do {
      auStack_2f0[0] = (unsigned __int64)(int)pfVar26[4];
      lVar18 = (unsigned __int64)(unsigned int)(int)pfVar26[4] - 0x88;
      uVar11 = fn_82F65148((double)(float)((double)pfVar26[1] + dVar36),uVar10,lVar18);
      pfVar26[1] = (float)((double)(float)extraout_f1 * dVar37);
      uVar11 = fn_82F65148((double)(float)((double)pfVar26[2] + dVar36),uVar11,lVar18);
      pfVar26[2] = (float)((double)(float)extraout_f1_00 * dVar37);
      uVar10 = fn_82F65148((double)(float)((double)pfVar26[3] + dVar36),uVar11,lVar18);
      uVar31 = uVar31 + 1;
      pfVar26[3] = (float)((double)(float)extraout_f1_01 * dVar37);
      pfVar26 = pfVar26 + 4;
      *pfVar26 = (float)dVar35;
    } while (uVar31 < (unsigned int)(iStack_304 * iStack_308));
  }
  return 0;
}

