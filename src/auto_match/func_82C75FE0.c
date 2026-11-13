extern int fn_82C8F130();
extern int fn_82C8F560();
extern unsigned int iStack00000014;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000044;


__int64 fn_82C75FE0(int param_1,int param_2,__int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                      unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned char uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned short uVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int iVar16;
  __int64 lVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  __int64 lVar17;
  int iVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  __int64 lVar21;
  __int64 lVar22;
  unsigned int uVar24;
  unsigned __int64 uVar23;
  unsigned char *puVar25;
  __int64 lVar26;
  int iStack00000014;
  unsigned int uStack0000002c;
  unsigned int uStack00000034;
  unsigned int uStack0000003c;
  unsigned int uStack00000044;
  
  uStack0000003c = (unsigned int)param_6;
  uVar11 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4a);
  uStack00000044 = (unsigned int)param_7;
  uVar5 = *(unsigned short *)(param_2 + 0x34) >> 1;
  uVar23 = (unsigned __int64)uVar5;
  uStack00000034 = (unsigned int)param_5;
  uVar2 = *(unsigned short *)(param_2 + 0x4c);
  iVar18 = *(int *)(param_2 + 0x54c);
  lVar14 = uVar11 * 8;
  uStack0000002c = (unsigned int)param_4;
  uVar4 = (unsigned int)(*(unsigned short *)(param_2 + 0x32) >> 1);
  lVar17 = uVar11 * 3;
  uVar24 = (unsigned int)uVar5;
  lVar22 = uVar11 * 0x10;
  lVar6 = (unsigned __int64)uVar2 * 8;
  lVar9 = lVar14 + param_3;
  dataCacheBlockTouch(uVar11 * -4 + lVar9);
  dataCacheBlockTouch(uVar11 * -3 + lVar9);
  lVar21 = uVar11 * 2;
  dataCacheBlockTouch(uVar11 * -2 + lVar9);
  dataCacheBlockTouch(-uVar11 + lVar9);
  dataCacheBlockTouch(lVar14 + param_3);
  dataCacheBlockTouch(uVar11 + lVar9);
  dataCacheBlockTouch(lVar21 + lVar9);
  dataCacheBlockTouch(lVar17 + lVar9);
  lVar9 = lVar22 + param_3;
  dataCacheBlockTouch(uVar11 * -4 + lVar9);
  dataCacheBlockTouch(uVar11 * -3 + lVar9);
  dataCacheBlockTouch(uVar11 * -2 + lVar9);
  dataCacheBlockTouch(-uVar11 + lVar9);
  dataCacheBlockTouch(lVar22 + param_3);
  dataCacheBlockTouch(uVar11 + lVar9);
  dataCacheBlockTouch(lVar21 + lVar9);
  dataCacheBlockTouch(lVar17 + lVar9);
  dataCacheBlockTouch(param_3);
  dataCacheBlockTouch(uVar11 + param_3);
  dataCacheBlockTouch(lVar21 + param_3);
  dataCacheBlockTouch(lVar17 + param_3);
  if (((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) ||
     (*(int *)(param_2 + 0x55c) != 1)) {
    iVar16 = *(int *)(param_1 + 0x55d4);
  }
  else {
    iVar16 = *(int *)(param_1 + 0x55d4) + (unsigned int)uVar5 * 4;
  }
  *(int *)(param_1 + 0x55d0) = iVar16;
  iStack00000014 = param_1;
  if ((param_6 & 0xffffffff) < (param_7 & 0xffffffff)) {
    puVar25 = (unsigned char *)(iVar18 + 0xb4);
    lVar21 = (param_6 & 0x3fffffff) << 2;
    do {
      if (*(int *)(iStack00000014 + 0x55b4) == 0) {
        iVar16 = -((param_6 < uVar23 - 1) - 1);
      }
      else if (((param_6 & 0xffffffff) < (uVar23 - 1 & 0xffffffff)) &&
              (*(int *)(*(int *)(iStack00000014 + 0x55d0) + (int)lVar21 + 4) == 0)) {
        iVar16 = 0;
      }
      else {
        iVar16 = 1;
      }
      fn_82C8F130(param_3 + lVar14,*(unsigned short *)(param_2 + 0x4a),
                        *(unsigned char *)(param_2 + 0x4dc),0x10);
      if (iVar16 == 0) {
        fn_82C8F130(param_3 + lVar22,*(unsigned short *)(param_2 + 0x4a),
                          *(unsigned char *)(param_2 + 0x4dc),0x10);
      }
      uVar11 = 1;
      lVar17 = param_3;
      if (1 < uVar4) {
        lVar9 = param_3;
        do {
          lVar26 = lVar9 + 0x10;
          uVar11 = uVar11 + 1;
          if (uVar11 == 0) {
            uVar10 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4a);
            lVar13 = uVar10 * 3;
            lVar12 = lVar26 + lVar14 + 0x10;
            lVar7 = (-uVar10 & 0x3fffffff) * 4;
            dataCacheBlockTouch(lVar7 + lVar12);
            dataCacheBlockTouch(uVar10 * -3 + lVar12);
            lVar8 = uVar10 * 2;
            dataCacheBlockTouch(uVar10 * -2 + lVar12);
            dataCacheBlockTouch(-uVar10 + lVar12);
            dataCacheBlockTouch(lVar12);
            dataCacheBlockTouch(uVar10 + lVar12);
            dataCacheBlockTouch(lVar8 + lVar12);
            dataCacheBlockTouch(lVar13 + lVar12);
            lVar12 = lVar26 + lVar22 + 0x10;
            dataCacheBlockTouch(lVar7 + lVar12);
            dataCacheBlockTouch(uVar10 * -3 + lVar12);
            dataCacheBlockTouch(uVar10 * -2 + lVar12);
            dataCacheBlockTouch(-uVar10 + lVar12);
            dataCacheBlockTouch(lVar12);
            dataCacheBlockTouch(uVar10 + lVar12);
            dataCacheBlockTouch(lVar8 + lVar12);
            dataCacheBlockTouch(lVar13 + lVar12);
            lVar7 = lVar9 + 0x20;
            dataCacheBlockTouch(lVar7);
            dataCacheBlockTouch(uVar10 + lVar7);
            dataCacheBlockTouch(lVar8 + lVar7);
            dataCacheBlockTouch(lVar13 + lVar7);
          }
          fn_82C8F130(lVar14 + -0x10 + lVar9 + 0x20,*(unsigned short *)(param_2 + 0x4a),
                            *(unsigned char *)(param_2 + 0x4dc),0x10);
          if (iVar16 == 0) {
            fn_82C8F130(lVar22 + -0x10 + lVar9 + 0x20,*(unsigned short *)(param_2 + 0x4a),
                              *(unsigned char *)(param_2 + 0x4dc),0x10);
          }
          uVar1 = *(unsigned char *)(param_2 + 0x4dc);
          uVar3 = *(unsigned short *)(param_2 + 0x4a);
          fn_82C8F560(lVar9 + 3 + (unsigned __int64)*(unsigned int *)(iVar18 + 0xb8),uVar3,uVar1,*puVar25);
          if (-1 < *(char *)(iVar18 + 0xb5)) {
            fn_82C8F560((unsigned __int64)*(unsigned int *)(iVar18 + 0xbc) + lVar9 + 3,uVar3,uVar1);
          }
          uVar1 = *(unsigned char *)(param_2 + 0x4dc);
          uVar3 = *(unsigned short *)(param_2 + 0x4a);
          fn_82C8F560(lVar9 + 0xb + (unsigned __int64)*(unsigned int *)(iVar18 + 0xb8),uVar3,uVar1,*puVar25);
          if (-1 < *(char *)(iVar18 + 0xb5)) {
            fn_82C8F560((unsigned __int64)*(unsigned int *)(iVar18 + 0xbc) + lVar9 + 0xb,uVar3,uVar1);
          }
          lVar17 = lVar17 + 0x10;
          lVar9 = lVar26;
        } while ((uVar11 & 0xffffffff) < (unsigned __int64)uVar4);
      }
      param_3 = (unsigned __int64)*(unsigned short *)(param_2 + 0x52) + param_3;
      if (iVar16 == 0) {
        uVar11 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4a);
        lVar13 = param_3 + lVar14;
        lVar26 = uVar11 * 3;
        lVar8 = (-uVar11 & 0x3fffffff) * 4;
        dataCacheBlockTouch(lVar8 + lVar13);
        dataCacheBlockTouch(uVar11 * -3 + lVar13);
        lVar9 = uVar11 * 2;
        dataCacheBlockTouch(uVar11 * -2 + lVar13);
        dataCacheBlockTouch(-uVar11 + lVar13);
        dataCacheBlockTouch(param_3 + lVar14);
        dataCacheBlockTouch(uVar11 + lVar13);
        dataCacheBlockTouch(lVar9 + lVar13);
        dataCacheBlockTouch(lVar26 + lVar13);
        lVar13 = param_3 + lVar22;
        dataCacheBlockTouch(lVar8 + lVar13);
        dataCacheBlockTouch(uVar11 * -3 + lVar13);
        dataCacheBlockTouch(uVar11 * -2 + lVar13);
        dataCacheBlockTouch(-uVar11 + lVar13);
        dataCacheBlockTouch(param_3 + lVar22);
        dataCacheBlockTouch(uVar11 + lVar13);
        dataCacheBlockTouch(lVar9 + lVar13);
        dataCacheBlockTouch(lVar26 + lVar13);
        dataCacheBlockTouch(param_3);
        dataCacheBlockTouch(uVar11 + param_3);
        dataCacheBlockTouch(lVar9 + param_3);
        dataCacheBlockTouch(lVar26 + param_3);
      }
      uVar1 = *(unsigned char *)(param_2 + 0x4dc);
      uVar3 = *(unsigned short *)(param_2 + 0x4a);
      fn_82C8F560(lVar17 + 3 + (unsigned __int64)*(unsigned int *)(iVar18 + 0xb8),uVar3,uVar1,*puVar25);
      if (-1 < *(char *)(iVar18 + 0xb5)) {
        fn_82C8F560((unsigned __int64)*(unsigned int *)(iVar18 + 0xbc) + lVar17 + 3,uVar3,uVar1);
      }
      param_6 = param_6 + 1;
      lVar21 = lVar21 + 4;
    } while ((param_6 & 0xffffffff) < (unsigned __int64)uStack00000044);
    uVar23 = (unsigned __int64)uVar24;
    param_7 = (unsigned __int64)uStack00000044;
    param_4 = (unsigned __int64)uStack0000002c;
    param_5 = (unsigned __int64)uStack00000034;
    param_6 = (unsigned __int64)uStack0000003c;
  }
  uVar11 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4c);
  lVar14 = lVar6 + param_4;
  dataCacheBlockTouch(uVar11 * -4 + lVar14);
  dataCacheBlockTouch(uVar11 * -3 + lVar14);
  dataCacheBlockTouch(uVar11 * -2 + lVar14);
  dataCacheBlockTouch(lVar14 - uVar11);
  dataCacheBlockTouch(lVar6 + param_4);
  dataCacheBlockTouch(uVar11 + lVar14);
  dataCacheBlockTouch(uVar11 * 2 + lVar14);
  dataCacheBlockTouch(uVar11 * 3 + lVar14);
  dataCacheBlockTouch(param_4);
  dataCacheBlockTouch(uVar11 + param_4);
  dataCacheBlockTouch(uVar11 * 2 + param_4);
  dataCacheBlockTouch(uVar11 * 3 + param_4);
  uVar11 = param_4;
  iVar18 = iStack00000014;
  if ((param_6 & 0xffffffff) < (param_7 & 0xffffffff)) {
    uVar19 = uVar23 - 1;
    lVar14 = (param_6 & 0x3fffffff) << 2;
    uVar20 = param_6;
    do {
      if (*(int *)(iVar18 + 0x55b4) == 0) {
        lVar22 = -((unsigned __int64)(uVar20 < uVar19) - 1);
        if (lVar22 == 0) goto LAB_82c764d8;
      }
      else if (((uVar20 & 0xffffffff) < (uVar19 & 0xffffffff)) &&
              (*(int *)(*(int *)(iVar18 + 0x55d0) + (int)lVar14 + 4) == 0)) {
        lVar22 = 0;
LAB_82c764d8:
        fn_82C8F130(param_4 + lVar6,*(unsigned short *)(param_2 + 0x4c),
                          *(unsigned char *)(param_2 + 0x4dc),8);
      }
      else {
        lVar22 = 1;
      }
      uVar10 = param_4 + 8;
      uVar15 = 1;
      if (1 < uVar4) {
        lVar21 = param_4 + 0x10;
        do {
          uVar15 = uVar15 + 1;
          if (uVar15 == 0) {
            uVar23 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4c);
            lVar17 = uVar10 + lVar6 + 8;
            dataCacheBlockTouch((-uVar23 & 0x3fffffff) * 4 + lVar17);
            dataCacheBlockTouch(uVar23 * -3 + lVar17);
            dataCacheBlockTouch(uVar23 * -2 + lVar17);
            dataCacheBlockTouch(lVar17 - uVar23);
            dataCacheBlockTouch(lVar17);
            dataCacheBlockTouch(uVar23 + lVar17);
            dataCacheBlockTouch(uVar23 * 2 + lVar17);
            dataCacheBlockTouch(uVar23 * 3 + lVar17);
            dataCacheBlockTouch(lVar21);
            dataCacheBlockTouch(uVar23 + lVar21);
            dataCacheBlockTouch(uVar23 * 2 + lVar21);
            dataCacheBlockTouch(uVar23 * 3 + lVar21);
          }
          if ((int)lVar22 == 0) {
            fn_82C8F130(lVar6 + -8 + lVar21,*(unsigned short *)(param_2 + 0x4c),
                              *(unsigned char *)(param_2 + 0x4dc),8);
          }
          fn_82C8F560(lVar21 + -0xd,*(unsigned short *)(param_2 + 0x4c),
                          *(unsigned char *)(param_2 + 0x4dc),8);
          uVar10 = uVar10 + 8;
          lVar21 = lVar21 + 8;
        } while ((uVar15 & 0xffffffff) < (unsigned __int64)uVar4);
        uVar23 = (unsigned __int64)uVar24;
        uVar11 = (unsigned __int64)uStack0000002c;
        param_5 = (unsigned __int64)uStack00000034;
        param_6 = (unsigned __int64)uStack0000003c;
        param_7 = (unsigned __int64)uStack00000044;
        iVar18 = iStack00000014;
      }
      param_4 = *(unsigned short *)(param_2 + 0x54) + param_4;
      if ((int)lVar22 == 0) {
        uVar15 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4c);
        lVar22 = param_4 + lVar6;
        dataCacheBlockTouch((-uVar15 & 0x3fffffff) * 4 + lVar22);
        dataCacheBlockTouch(uVar15 * -3 + lVar22);
        dataCacheBlockTouch(uVar15 * -2 + lVar22);
        dataCacheBlockTouch(lVar22 - uVar15);
        dataCacheBlockTouch(param_4 + lVar6);
        dataCacheBlockTouch(uVar15 + lVar22);
        dataCacheBlockTouch(uVar15 * 2 + lVar22);
        dataCacheBlockTouch(uVar15 * 3 + lVar22);
        dataCacheBlockTouch(param_4);
        dataCacheBlockTouch(uVar15 + param_4);
        dataCacheBlockTouch(uVar15 * 2 + param_4);
        dataCacheBlockTouch(uVar15 * 3 + param_4);
      }
      uVar20 = uVar20 + 1;
      lVar14 = lVar14 + 4;
    } while ((uVar20 & 0xffffffff) < (param_7 & 0xffffffff));
  }
  else {
    uVar10 = (unsigned __int64)uVar24;
  }
  uVar20 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4c);
  lVar22 = lVar6 + param_5;
  dataCacheBlockTouch(uVar20 * -4 + lVar22);
  dataCacheBlockTouch(uVar20 * -3 + lVar22);
  dataCacheBlockTouch(uVar20 * -2 + lVar22);
  lVar14 = -uVar20;
  dataCacheBlockTouch(lVar14 + lVar22);
  dataCacheBlockTouch(lVar6 + param_5);
  dataCacheBlockTouch(uVar20 + lVar22);
  dataCacheBlockTouch(uVar20 * 2 + lVar22);
  dataCacheBlockTouch(uVar20 * 3 + lVar22);
  dataCacheBlockTouch(uVar11);
  dataCacheBlockTouch(uVar20 + uVar11);
  dataCacheBlockTouch(uVar20 * 2 + uVar11);
  dataCacheBlockTouch(uVar20 * 3 + uVar11);
  if ((param_6 & 0xffffffff) < (param_7 & 0xffffffff)) {
    lVar22 = (param_6 & 0x3fffffff) << 2;
    do {
      if (*(int *)(iVar18 + 0x55b4) == 0) {
        lVar21 = -((unsigned __int64)(param_6 < uVar23 - 1) - 1);
        if (lVar21 == 0) goto LAB_82c76700;
      }
      else if (((param_6 & 0xffffffff) < (uVar23 - 1 & 0xffffffff)) &&
              (*(int *)(*(int *)(iVar18 + 0x55d0) + (int)lVar22 + 4) == 0)) {
        lVar21 = 0;
LAB_82c76700:
        lVar14 = fn_82C8F130(param_5 + lVar6,*(unsigned short *)(param_2 + 0x4c),
                                   *(unsigned char *)(param_2 + 0x4dc),8);
      }
      else {
        lVar21 = 1;
      }
      lVar17 = param_5 + 8;
      uVar11 = 1;
      if (1 < uVar4) {
        lVar9 = lVar17 + lVar6;
        do {
          uVar11 = uVar11 + 1;
          if (uVar11 == 0) {
            uVar20 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4c);
            lVar14 = lVar17 + lVar6 + 8;
            dataCacheBlockTouch((-uVar20 & 0x3fffffff) * 4 + lVar14);
            dataCacheBlockTouch(uVar20 * -3 + lVar14);
            dataCacheBlockTouch(uVar20 * -2 + lVar14);
            dataCacheBlockTouch(lVar14 - uVar20);
            dataCacheBlockTouch(lVar14);
            dataCacheBlockTouch(uVar20 + lVar14);
            dataCacheBlockTouch(uVar20 * 2 + lVar14);
            dataCacheBlockTouch(uVar20 * 3 + lVar14);
            lVar14 = uVar10 + 8;
            dataCacheBlockTouch(lVar14);
            dataCacheBlockTouch(uVar20 + lVar14);
            dataCacheBlockTouch(uVar20 * 2 + lVar14);
            dataCacheBlockTouch(uVar20 * 3 + lVar14);
          }
          if ((int)lVar21 == 0) {
            fn_82C8F130(lVar9,*(unsigned short *)(param_2 + 0x4c),*(unsigned char *)(param_2 + 0x4dc)
                              ,8);
          }
          lVar14 = fn_82C8F560((unsigned __int64)uVar2 * -8 + -5 + lVar9,
                                   *(unsigned short *)(param_2 + 0x4c),*(unsigned char *)(param_2 + 0x4dc),
                                   8);
          lVar17 = lVar17 + 8;
          lVar9 = lVar9 + 8;
        } while ((uVar11 & 0xffffffff) < (unsigned __int64)uVar4);
        param_7 = (unsigned __int64)uStack00000044;
        iVar18 = iStack00000014;
      }
      param_5 = *(unsigned short *)(param_2 + 0x54) + param_5;
      if ((int)lVar21 == 0) {
        uVar11 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4c);
        lVar21 = param_5 + lVar6;
        dataCacheBlockTouch((-uVar11 & 0x3fffffff) * 4 + lVar21);
        dataCacheBlockTouch(uVar11 * -3 + lVar21);
        dataCacheBlockTouch(uVar11 * -2 + lVar21);
        lVar14 = -uVar11;
        dataCacheBlockTouch(lVar14 + lVar21);
        dataCacheBlockTouch(param_5 + lVar6);
        dataCacheBlockTouch(uVar11 + lVar21);
        dataCacheBlockTouch(uVar11 * 2 + lVar21);
        dataCacheBlockTouch(uVar11 * 3 + lVar21);
        dataCacheBlockTouch(param_4);
        dataCacheBlockTouch(uVar11 + param_4);
        dataCacheBlockTouch(uVar11 * 2 + param_4);
        dataCacheBlockTouch(uVar11 * 3 + param_4);
      }
      param_6 = param_6 + 1;
      lVar22 = lVar22 + 4;
    } while ((param_6 & 0xffffffff) < (param_7 & 0xffffffff));
  }
  return lVar14;
}

