typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABDBE8();
extern int fn_82ABE250();
extern int fn_82ACA5E0();
extern int fn_82AD17B0();
extern int fn_82AD1918();
extern int fn_82AD1978();
extern int fn_82AD1A40();
extern int fn_82AD1B28();
extern int fn_82AD20C0();
extern int fn_82AD6090();
extern int fn_82ADD120();
extern int fn_82ADD810();
extern int fn_82AE0148();
extern int fn_82AF4BA8();
extern int fn_82AF5458();
extern int fn_82AF6658();
extern int fn_82AF6CC8();
extern int fn_82AF77E0();
extern int fn_82AF9758();
extern int fn_82AFA378();
extern int fn_82AFA410();
extern int fn_82AFA520();
extern int fn_82AFBD10();
extern int fn_82AFC3B8();
extern int fn_82AFF840();
extern int fn_82B0FC78();
extern int fn_82B16910();
extern int fn_82B84350();
extern int fn_82B843F0();
extern int fn_82B85910();
extern int fn_82B8AC10();
extern int fn_82B8AE98();
extern int fn_82B8D3D0();
extern unsigned int iStack00000014;
extern unsigned int iStack0000002c;
extern unsigned int lbl_820D7D2F;
extern unsigned int lbl_820D7D3F;
extern unsigned int uStack_b8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff38 : 0x82b00fe8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned int * fn_82B006B0(int param_1,unsigned int *param_2,unsigned int *param_3,int param_4)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  char cVar21;
  unsigned int *puVar11;
  int iVar12;
  unsigned short uVar20;
  unsigned int *puVar13;
  unsigned __int64 uVar10;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int *puVar17;
  int iVar18;
  unsigned int *puVar19;
  unsigned int *puVar22;
  unsigned int *puVar23;
  int *piVar24;
  unsigned __int64 uVar25;
  unsigned int uVar26;
  unsigned int *puVar27;
  unsigned int *puVar28;
  unsigned int uVar29;
  unsigned __int64 uVar30;
  unsigned __int64 uVar31;
  unsigned __int64 uVar32;
  unsigned int *puVar33;
  unsigned int uVar34;
  unsigned int uVar35;
  unsigned int uVar36;
  unsigned int uVar37;
  int iStack00000014;
  unsigned int *puStack0000001c;
  unsigned int *puStack00000024;
  int iStack0000002c;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int auStack_c8 [2];
  unsigned char auStack_c0 [8];
  unsigned __int64 uStack_b8;
  unsigned char auStack_b0 [176];
  
  for (puVar17 = (unsigned int *)param_2[1]; puVar17 != (unsigned int *)0x0; puVar17 = (unsigned int *)puVar17[2]) {
    uStack_cc = puVar17[4];
    if (((uStack_cc != 0) && ((*(unsigned int *)(uStack_cc + 8) & 0x3f80) == 0x3700)) &&
       ((*puVar17 & 0xe000000) != 0)) goto LAB_82b00730;
  }
  uStack_cc = 0;
LAB_82b00730:
  uVar37 = 0;
  puVar22 = param_3 + 1;
  for (puVar17 = (unsigned int *)param_3[1]; puVar17 != (unsigned int *)0x0; puVar17 = (unsigned int *)puVar17[2]) {
    uVar34 = puVar17[4];
    if (((uVar34 != 0) && ((*(unsigned int *)(uVar34 + 8) & 0x3f80) == 0x3700)) &&
       ((*puVar17 & 0xe000000) != 0)) goto LAB_82b0077c;
  }
  uVar34 = 0;
LAB_82b0077c:
  iStack00000014 = param_1;
  puStack0000001c = param_2;
  puStack00000024 = param_3;
  iStack0000002c = param_4;
  fn_82B8D3D0(param_1,param_2,param_3,1,0);
  cVar21 = fn_82ACA5E0(param_2);
  if (cVar21 == '\0') {
    uVar30 = 2;
    uVar31 = 2;
  }
  else {
    uVar30 = (unsigned __int64)(param_2[2] >> 0xe) & 7;
    uVar31 = (unsigned __int64)(param_3[2] >> 0xe) & 7;
  }
  uVar2 = *(unsigned short *)((int)param_3 + 0xe);
  uVar32 = uVar31 + uVar30;
  uStack_d0 = (unsigned int)(unsigned char)(&lbl_820D7D3F)[(int)uVar30];
  puVar17 = puStack00000024;
  puVar11 = param_3;
  if ((param_4 != 0) && ((*(unsigned int *)(param_4 + 8) & 0x1f) != 0)) {
    puVar11 = (unsigned int *)fn_82AFF840(param_1,param_4,param_3,1,&uStack_d0);
    uVar35 = uStack_d0;
    uVar29 = *(unsigned int *)(param_4 + 8);
    uVar32 = uVar32 - ((unsigned __int64)(uVar29 >> 5) & 7);
    puVar17 = param_3;
    if (puVar11 == (unsigned int *)0x0) {
      while (puVar11 = (unsigned int *)*puVar17, puVar11 != (unsigned int *)0x0) {
        if ((*puVar11 & 0xe000000) == 0) {
          puVar27 = (unsigned int *)puVar11[4];
          for (puVar13 = (unsigned int *)*puVar27; puVar13 != puVar11; puVar13 = (unsigned int *)puVar13[1]) {
            puVar27 = puVar13 + 1;
          }
          *puVar27 = puVar11[1];
          puVar11[1] = *param_2;
          *param_2 = (unsigned int)puVar11;
          puVar11[4] = (unsigned int)param_2;
        }
        if ((unsigned int *)*puVar17 == puVar11) {
          puVar17 = puVar11 + 1;
        }
      }
      while (puVar17 = (unsigned int *)*puVar22, puVar17 != (unsigned int *)0x0) {
        if (puVar17[4] != 0) {
          puVar27 = (unsigned int *)(puVar17[3] + 4);
          for (puVar11 = (unsigned int *)*puVar27; puVar11 != puVar17; puVar11 = (unsigned int *)puVar11[2]) {
            puVar27 = puVar11 + 2;
          }
          *puVar27 = puVar17[2];
          puVar17[2] = param_2[1];
          param_2[1] = (unsigned int)puVar17;
          uVar37 = *puVar17;
          puVar17[3] = (unsigned int)param_2;
          if ((uVar37 & 0xe000000) != 0) {
            *puVar17 = ((((uVar35 >> (uVar37 >> 10 & 6) & 3) << 2 | uVar35 >> (uVar37 >> 8 & 6) & 3)
                         << 2 | uVar35 >> (uVar37 >> 6 & 6) & 3) << 2 |
                       uVar35 >> (uVar37 >> 4 & 6) & 3) << 5 | uVar37 & 0xffffe01f;
            fn_82AFA378(param_1,puVar17[4]);
          }
        }
        if ((unsigned int *)*puVar22 == puVar17) {
          puVar22 = puVar17 + 2;
        }
      }
      if ((param_3[2] >> 0x17 & 1) == 0) goto LAB_82b00a24;
      if ((param_2[2] >> 0x17 & 1) != 0) {
        uStack_b8 = 0;
        fn_82AF6658(param_1,param_2,param_3,auStack_c0,0,0);
      }
      if (((param_2[2] >> 0x17 & 1) == 0) || ((param_2[4] & 0x70000) != 0)) {
        param_2[2] = param_2[2] | 0x800000;
        param_2[4] = param_2[4] & 0xfff8ffff;
        puVar17 = *(unsigned int **)(param_1 + 0x294);
        if ((puVar17[1] & 1) == 0) {
          uVar37 = *puVar17 & 0xfffffffe;
          iVar12 = uVar37 - 4;
          if ((iVar12 == 0) || (*(unsigned int *)(uVar37 + 8) < *(int *)(uVar37 + 4) + 1U))
          goto LAB_82b009e8;
        }
        else {
LAB_82b009e8:
          iVar12 = fn_82AD6090(puVar17,1);
        }
        iVar4 = *(int *)(iVar12 + 8);
        *(int *)(iVar12 + 8) = iVar4 + 1;
        *(unsigned int **)((iVar4 + 4) * 4 + iVar12) = param_2;
      }
      if ((param_2[2] >> 0x17 & 1) == 0) {
        uVar20 = fn_82ADD120(param_3);
        *(unsigned short *)((int)param_2 + 0x12) = uVar20;
      }
LAB_82b00a24:
      fn_82B8AC10(param_1,param_3,*(unsigned int *)(param_1 + 0x28c),1);
      if (uVar34 != 0) {
        if (uStack_cc == 0) {
          uStack_cc = uVar34;
        }
        fn_82AFBD10(param_1,uStack_cc,param_2,uVar30,uVar34,0,0,0);
      }
      fn_82AFA378(param_1,param_2);
      return param_2;
    }
    puVar17 = puVar11;
    if (uVar34 != 0) {
      uVar35 = 0;
      if ((uVar29 & 0x1f) != 0) {
        uVar25 = 0;
        do {
          uVar35 = uVar35 + 1;
          uVar37 = 1 << ((unsigned int)(((2L << (uVar25 + 3 & 0x3f)) - 1U &
                                 *(unsigned __int64 *)(((unsigned int)uVar25 >> 3 & 0x1ffffff8) + param_4) &
                                -1L << (uVar25 & 0x3f)) >> (uVar25 & 0x3f)) & 3) | uVar37;
          uVar25 = uVar25 + 4;
        } while (uVar35 < (uVar29 & 0x1f));
      }
      bVar1 = (&lbl_820D7D2F)[(param_3[2] >> 1 & 0xf) - uVar37];
      puVar13 = (unsigned int *)fn_82ABE250(param_1,8,0x1c);
      puVar27 = puVar13 + 1;
      puVar13[1] = (unsigned int)puVar13 | 1;
      *puVar13 = (unsigned int)puVar27 | 1;
      for (puVar22 = (unsigned int *)puVar11[1]; uVar29 = uStack_d0, puVar22 != (unsigned int *)0x0;
          puVar22 = (unsigned int *)puVar22[2]) {
        if ((puVar22[4] != 0) && ((*puVar22 & 0xe000000) != 0)) {
          if ((*puVar27 & 1) == 0) {
            uVar29 = *puVar13 & 0xfffffffe;
            iVar12 = uVar29 - 4;
            if ((iVar12 == 0) || (*(unsigned int *)(uVar29 + 8) < *(int *)(uVar29 + 4) + 1U))
            goto LAB_82b00b8c;
          }
          else {
LAB_82b00b8c:
            iVar12 = fn_82AD6090(puVar13,1);
          }
          iVar4 = *(int *)(iVar12 + 8);
          *(int *)(iVar12 + 8) = iVar4 + 1;
          *(unsigned int **)((iVar4 + 4) * 4 + iVar12) = puVar22;
        }
      }
      while (((*puVar27 & 1) == 0 && (*puVar27 != 0))) {
        puVar28 = (unsigned int *)(*puVar13 & 0xfffffffe);
        puVar19 = puVar28 + -1;
        uVar35 = puVar28[1] - 1;
        puVar22 = (unsigned int *)puVar19[puVar28[1] + 3];
        puVar28[1] = uVar35;
        if (uVar35 == 0) {
          *(unsigned int *)(*puVar28 & 0xfffffffe) = *puVar19;
          *(unsigned int *)(*puVar19 & 0xfffffffe) = *puVar28;
          fn_82AA6648(puVar13,puVar19,((unsigned __int64)puVar28[2] + 4 & 0x3fffffff) << 2);
        }
        uVar35 = *puVar22;
        uVar36 = 0;
        uVar15 = 0;
        if ((uVar35 & 0xe000000) != 0) {
          uVar26 = 0;
          do {
            uVar15 = uVar15 + 1;
            uVar36 = 1 << ((uVar35 >> 5 & 0xff) >> (uVar26 & 0x3f) & 3) | uVar36;
            uVar26 = uVar26 + 2;
          } while (uVar15 < (uVar35 >> 0x19 & 7));
        }
        uVar15 = uVar36 & uVar37;
        if (uVar15 == 0) {
          *puVar22 = ((((bVar1 >> (uVar35 >> 10 & 6) & 3) << 2 | bVar1 >> (uVar35 >> 8 & 6) & 3) <<
                       2 | bVar1 >> (uVar35 >> 6 & 6) & 3) << 2 | bVar1 >> (uVar35 >> 4 & 6) & 3) <<
                     5 | uVar35 & 0xffffe01f;
        }
        else {
          uVar36 = uVar36 & ~uVar37;
          if (uVar36 == 0) {
            puVar19 = (unsigned int *)(puVar22[3] + 4);
            for (puVar28 = (unsigned int *)*puVar19; puVar28 != puVar22; puVar28 = (unsigned int *)puVar28[2]) {
              puVar19 = puVar28 + 2;
            }
            *puVar19 = puVar22[2];
            puVar22[2] = param_2[1];
            param_2[1] = (unsigned int)puVar22;
            puVar22[3] = (unsigned int)param_2;
            uVar35 = *puVar22;
            *puVar22 = ((((uVar29 >> (uVar35 >> 10 & 6) & 3) << 2 | uVar29 >> (uVar35 >> 8 & 6) & 3)
                         << 2 | uVar29 >> (uVar35 >> 6 & 6) & 3) << 2 |
                       uVar29 >> (uVar35 >> 4 & 6) & 3) << 5 | uVar35 & 0xffffe01f;
          }
          else {
            uVar26 = 0;
            uVar35 = 0;
            puVar28 = auStack_c8 + 1;
            for (; uVar15 != 0; uVar15 = uVar15 - (uVar15 & ~(uVar15 - 1))) {
              uVar14 = (unsigned int)((0x1fU - LZCOUNT(uVar15 & ~(uVar15 - 1)) & 0xffffffff) << 1);
              uVar35 = uVar35 & ~(3 << (uVar14 & 0x3e)) | uVar26 << (uVar14 & 0x3e);
              uVar10 = fn_82AD1918(iStack00000014,param_2,uVar29 >> (uVar14 & 0x3e) & 3,
                                         *puVar22 & 0x1f);
              uVar14 = fn_82AF77E0(iStack00000014,1,param_2,uVar10,uVar10);
              puVar28 = puVar28 + 1;
              *puVar28 = uVar14;
              uVar26 = uVar26 + 1;
            }
            puVar28 = auStack_c8 + uVar26 + 1;
            for (; iVar12 = iStack00000014, uVar36 != 0; uVar36 = uVar36 - (uVar36 & ~(uVar36 - 1)))
            {
              uVar15 = (unsigned int)((0x1fU - LZCOUNT(uVar36 & ~(uVar36 - 1)) & 0xffffffff) << 1);
              uVar35 = uVar35 & ~(3 << (uVar15 & 0x3e)) | uVar26 << (uVar15 & 0x3e);
              uVar10 = fn_82AD1918(iStack00000014,puVar11,bVar1 >> (uVar15 & 0x3e) & 3,
                                         *puVar22 & 0x1f);
              uVar15 = fn_82AF77E0(iVar12,1,puVar11,uVar10,uVar10);
              puVar28 = puVar28 + 1;
              *puVar28 = uVar15;
              uVar26 = uVar26 + 1;
            }
            if ((uVar26 == 0) || (4 < uVar26)) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(iStack00000014,0x12c0);
            }
            uVar36 = auStack_c8[uVar26 + 1];
            uVar14 = fn_82B84350(iStack00000014,*(unsigned int *)(uVar36 + 0x1c),0,uVar26);
            uVar36 = uVar36 & 0xfffffffe;
            uVar15 = uVar14 & 0xfffffffe;
            *(unsigned int *)(uVar15 + 0x28) = *(unsigned int *)(uVar36 + 0x28);
            *(unsigned int *)((*(unsigned int *)(uVar36 + 0x28) & 0xfffffffe) + 0x24) = uVar15 + 0x28;
            *(unsigned int *)(uVar15 + 0x24) = uVar36 + 0x28;
            *(unsigned int *)(uVar36 + 0x28) = uVar15;
            if (uVar26 != 0) {
              puVar33 = (unsigned int *)(uVar14 + 0x28);
              puVar28 = auStack_c8 + 1;
              do {
                puVar28 = puVar28 + 1;
                uVar36 = *puVar28;
                uVar10 = fn_82AD17B0(iStack00000014,uVar36);
                uVar16 = fn_82AD1978(uVar14,uVar10);
                puVar33 = puVar33 + 1;
                *puVar33 = uVar16;
                fn_82AD1B28(uVar36);
                uVar26 = uVar26 - 1;
                *(unsigned int *)(uVar36 + 8) = *(unsigned int *)(uVar36 + 8) | 0x1000000;
              } while (uVar26 != 0);
            }
            param_1 = iStack00000014;
            puVar19 = (unsigned int *)(puVar22[3] + 4);
            for (puVar28 = (unsigned int *)*puVar19; puVar28 != puVar22; puVar28 = (unsigned int *)puVar28[2]) {
              puVar19 = puVar28 + 2;
            }
            *puVar19 = puVar22[2];
            puVar22[2] = *(unsigned int *)(uVar14 + 4);
            *(unsigned int **)(uVar14 + 4) = puVar22;
            puVar22[3] = uVar14;
            uVar36 = (unsigned int)((unsigned __int64)*puVar22 & 0xffffffe0);
            *puVar22 = ((((uVar35 >> (uVar36 >> 10 & 6) & 3) << 2 | uVar35 >> (uVar36 >> 8 & 6) & 3)
                         << 2 | uVar35 >> (uVar36 >> 6 & 6) & 3) << 2 |
                       uVar35 >> ((unsigned int)(((unsigned __int64)*puVar22 & 0xffffffe0) >> 4) & 6) & 3) << 5 |
                       uVar36 & 0xffffe01f;
            fn_82B0FC78(iStack00000014,uVar14);
            *(unsigned int *)(uVar14 + 8) = *(unsigned int *)(uVar14 + 8) | 0x1000000;
            fn_82AFA378(param_1,uVar14);
            param_2 = puStack0000001c;
            param_3 = puStack00000024;
          }
        }
      }
      *puVar13 = *(unsigned int *)(param_1 + 0x3d0);
      *(unsigned int **)(param_1 + 0x3d0) = puVar13;
      uStack_d0 = (unsigned int)(unsigned char)(&lbl_820D7D3F)[(int)uVar30];
      if (uStack_cc != 0) {
        fn_82AFBD10(param_1,uStack_cc,param_2,uVar30,uVar34,param_3,0,0);
        for (puVar22 = (unsigned int *)param_2[1];
            (puVar22 != (unsigned int *)0x0 &&
            (((puVar22[4] == 0 || ((*(unsigned int *)(puVar22[4] + 8) & 0x3f80) != 0x3700)) ||
             ((*puVar22 & 0xe000000) == 0)))); puVar22 = (unsigned int *)puVar22[2]) {
        }
      }
    }
  }
  puStack00000024 = puVar17;
  uStack_b8 = 0;
  fn_82AF6658(param_1,param_2,puVar11,auStack_c0,0,0);
  iVar12 = fn_82AFA520(param_1,param_2,puVar11,param_2,0,0,0);
  if (iVar12 == -1) {
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_1,0x12c0);
  }
  puVar17 = (unsigned int *)fn_82B843F0(param_1,param_2);
  puVar17[4] = puVar17[4] & 0xfff8ffff;
  puVar17[2] = (unsigned int)((uVar32 & 0xffffffff) << 0xe) & 0x1c000 | puVar17[2] & 0xbbfe3fff;
  uVar3 = *(unsigned short *)((int)param_2 + 0xe);
  puVar17[3] = (unsigned int)uVar3 | puVar17[3] & 0xffff0000;
  if ((uVar3 != 0) && (uVar31 != 0)) {
    uVar37 = 0;
    uVar29 = 0;
    do {
      uVar32 = (unsigned __int64)(uStack_d0 >> (uVar29 & 0x3f)) & 3;
      if (uVar30 <= uVar32) {
        fn_82B16910(puVar17,uVar32,0xf,uVar2 >> (uVar37 & 0x3f) & 0xf);
      }
      uVar31 = uVar31 - 1;
      uVar29 = uVar29 + 2;
      uVar37 = uVar37 + 4;
    } while (uVar31 != 0);
  }
  cVar21 = fn_82B85910(param_2,puVar11);
  puVar22 = param_2;
  if (cVar21 != '\0') {
    puVar22 = puVar11;
  }
  uVar37 = (unsigned int)puVar17 & 0xfffffffe;
  puVar27 = (unsigned int *)(((unsigned int)puVar22 & 0xfffffffe) + 0x24);
  uVar29 = 0;
  iVar12 = (int)param_2 - (int)puVar11;
  puVar13 = puVar11 + 0xb;
  *(unsigned int *)(uVar37 + 0x24) = *puVar27;
  *(unsigned int *)(*puVar27 & 0xfffffffe) = uVar37;
  *(unsigned int *)(uVar37 + 0x28) = (unsigned int)puVar22 & 0xfffffffe;
  *puVar27 = uVar37 + 0x28;
  puVar17[5] = puVar17[5] & 0xfffffff8;
  puVar17[4] = puVar17[4] & 0x7fffffff;
  for (uVar37 = 0; iVar4 = iStack00000014, uVar37 < (param_2[2] >> 0x13 & 7); uVar37 = uVar37 + 1) {
    iVar6 = *(int *)(uVar29 + (int)puVar13);
    iVar7 = *(int *)((int)puVar13 + iVar12 + uVar29);
    iVar4 = *(int *)(iVar7 + 0xc);
    uVar35 = *(unsigned int *)(iVar4 + 8) >> 7 & 0x7f;
    if ((uVar35 == 0) || (bVar8 = true, 0x66 < uVar35)) {
      bVar8 = false;
    }
    if (bVar8) {
      fn_82AD1A40(puVar17,iVar4,iStack00000014);
    }
    iVar4 = *(int *)(iVar6 + 0xc);
    uVar35 = *(unsigned int *)(iVar4 + 8) >> 7 & 0x7f;
    if ((uVar35 == 0) || (bVar8 = true, 0x66 < uVar35)) {
      bVar8 = false;
    }
    if (bVar8) {
      fn_82AD1A40(puVar17,iVar4,iStack00000014);
    }
    uVar35 = 0;
    puVar11 = puVar13;
    if (uVar37 != 0) {
      do {
        cVar21 = fn_82ABDBE8(iVar7,*(unsigned int *)(iVar12 + (int)puVar11));
        if ((cVar21 != '\0') && (cVar21 = fn_82ABDBE8(iVar6,*puVar11), cVar21 != '\0')) break;
        uVar35 = uVar35 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar35 < uVar37);
      if (uVar35 < uVar37) {
        uVar36 = uVar29 >> 3 & 0x1ffffffc;
        *(unsigned int *)((int)auStack_c8 + uVar36) =
             uVar35 + 1 << (uVar29 & 0x1f) | *(unsigned int *)((int)auStack_c8 + uVar36);
      }
    }
    uVar29 = uVar29 + 4;
    param_2 = puStack0000001c;
    puVar11 = puStack00000024;
  }
  for (uVar37 = param_2[1]; uVar37 != 0; uVar37 = *(unsigned int *)(uVar37 + 8)) {
    iVar6 = *(int *)(uVar37 + 0x10);
    if (iVar6 != 0) {
      uVar29 = *(unsigned int *)(iVar6 + 8) >> 7 & 0x7f;
      if ((uVar29 == 0) || (bVar8 = true, 0x66 < uVar29)) {
        bVar8 = false;
      }
      if ((bVar8) && (cVar21 = fn_82B85910(iVar6,puVar17), cVar21 != '\0')) {
        fn_82AD1A40(*(unsigned int *)(uVar37 + 0x10),puVar17,iVar4);
      }
    }
  }
  puVar27 = puVar11 + 1;
  for (uVar37 = puVar11[1]; puVar28 = puStack00000024, puVar11 = puStack0000001c,
      iVar6 = iStack00000014, uVar37 != 0; uVar37 = *(unsigned int *)(uVar37 + 8)) {
    iVar6 = *(int *)(uVar37 + 0x10);
    if (iVar6 != 0) {
      uVar29 = *(unsigned int *)(iVar6 + 8) >> 7 & 0x7f;
      if ((uVar29 == 0) || (bVar8 = true, 0x66 < uVar29)) {
        bVar8 = false;
      }
      if ((bVar8) && (cVar21 = fn_82B85910(iVar6,puVar17), cVar21 != '\0')) {
        fn_82AD1A40(*(unsigned int *)(uVar37 + 0x10),puVar17,iVar4);
      }
    }
  }
  uVar30 = 0;
  iVar7 = -0x29 - (int)puStack00000024;
  iVar4 = (int)puVar17 - (int)puStack00000024;
  iVar9 = -0x2c - (int)puStack00000024;
  for (uVar37 = 0; uVar37 < (puVar11[2] >> 0x13 & 7); uVar37 = uVar37 + 1) {
    uVar35 = (int)puVar13 + iVar9;
    uVar16 = *(unsigned int *)((int)puVar13 + iVar12);
    uVar29 = *puVar13;
    uVar36 = uVar35 & 0x1f;
    uVar35 = ((2 << ((int)puVar13 + iVar7 & 0x1fU)) - 1U &
              *(unsigned int *)((int)auStack_c8 + (uVar35 >> 3 & 0x1ffffffc)) & -1 << uVar36) >> uVar36;
    if (uVar35 == 0) {
      iVar18 = fn_82AF9758(iVar6,puVar11,uVar16,puVar28,uVar29,puVar22,auStack_c0,1);
      if (iVar18 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(iVar6,0x12c0);
      }
      puVar19 = (unsigned int *)fn_82AFC3B8(iVar6,puVar11,uVar16,puVar28,uVar29,puVar17[7],puVar17,
                                          auStack_c0);
    }
    else {
      puVar19 = (unsigned int *)puVar17[uVar35 + 10];
    }
    uVar16 = fn_82AD1978(puVar17,puVar19);
    *(unsigned int *)((int)puVar13 + iVar4) = uVar16;
    uVar29 = *(unsigned int *)(puVar19[3] + 8) >> 7 & 0x7f;
    if ((uVar29 == 0x7d) || (bVar8 = false, uVar29 == 0x7c)) {
      bVar8 = true;
    }
    if (bVar8) {
      uVar29 = *puVar19;
      uVar31 = fn_82AF4BA8(iVar6,puVar19[3],uVar29 >> 0x19 & 7,uVar29 >> 5 & 0xff,
                                 uVar29 & 0x1f,auStack_b0);
      uVar30 = uVar31 | uVar30;
    }
    puVar13 = puVar13 + 1;
  }
  fn_82AF6CC8(iVar6,puVar17,uVar30);
  puVar13 = puVar17;
  while (puVar19 = (unsigned int *)*puVar13, puVar19 != (unsigned int *)0x0) {
    if ((*puVar19 & 0xe000000) == 0) {
      fn_82AD20C0(puVar17,puVar19,iVar6);
    }
    if ((unsigned int *)*puVar13 == puVar19) {
      puVar13 = puVar19 + 1;
    }
  }
  puVar19 = puVar17 + 1;
  puVar13 = puVar19;
  while (uVar37 = uStack_d0, puVar23 = (unsigned int *)*puVar13, puVar23 != (unsigned int *)0x0) {
    if ((puVar23[4] != 0) && ((*puVar23 & 0xe000000) == 0)) {
      fn_82AD20C0(puVar23[4],puVar23,iVar6);
    }
    if ((unsigned int *)*puVar13 == puVar23) {
      puVar13 = puVar23 + 2;
    }
  }
  while (puVar13 = (unsigned int *)*puVar22, puVar13 != (unsigned int *)0x0) {
    if ((*puVar13 & 0xe000000) == 0) {
      puVar23 = (unsigned int *)puVar13[4];
      for (puVar5 = (unsigned int *)*puVar23; puVar5 != puVar13; puVar5 = (unsigned int *)puVar5[1]) {
        puVar23 = puVar5 + 1;
      }
      *puVar23 = puVar13[1];
      puVar13[1] = *puVar17;
      *puVar17 = (unsigned int)puVar13;
      puVar13[4] = (unsigned int)puVar17;
    }
    if ((unsigned int *)*puVar22 == puVar13) {
      puVar22 = puVar13 + 1;
    }
  }
  puVar22 = puVar11 + 1;
  while (uVar29 = *puVar22, uVar29 != 0) {
    if (*(int *)(uVar29 + 0x10) != 0) {
      puVar13 = (unsigned int *)(*(int *)(uVar29 + 0xc) + 4);
      for (uVar35 = *puVar13; uVar35 != uVar29; uVar35 = *(unsigned int *)(uVar35 + 8)) {
        puVar13 = (unsigned int *)(uVar35 + 8);
      }
      *puVar13 = *(unsigned int *)(uVar29 + 8);
      *(unsigned int *)(uVar29 + 8) = *puVar19;
      *puVar19 = uVar29;
      *(unsigned int **)(uVar29 + 0xc) = puVar17;
    }
    if (*puVar22 == uVar29) {
      puVar22 = (unsigned int *)(uVar29 + 8);
    }
  }
  while (puVar22 = (unsigned int *)*puVar27, puVar22 != (unsigned int *)0x0) {
    if (puVar22[4] != 0) {
      uVar29 = *puVar22;
      if ((uVar29 & 0xe000000) != 0) {
        *puVar22 = ((((uVar37 >> (uVar29 >> 10 & 6) & 3) << 2 | uVar37 >> (uVar29 >> 8 & 6) & 3) <<
                     2 | uVar37 >> (uVar29 >> 6 & 6) & 3) << 2 | uVar37 >> (uVar29 >> 4 & 6) & 3) <<
                   5 | uVar29 & 0xffffe01f;
        fn_82AFA378(iVar6);
      }
      puVar23 = (unsigned int *)(puVar22[3] + 4);
      for (puVar13 = (unsigned int *)*puVar23; puVar13 != puVar22; puVar13 = (unsigned int *)puVar13[2]) {
        puVar23 = puVar13 + 2;
      }
      *puVar23 = puVar22[2];
      puVar22[2] = *puVar19;
      *puVar19 = (unsigned int)puVar22;
      puVar22[3] = (unsigned int)puVar17;
    }
    if ((unsigned int *)*puVar27 == puVar22) {
      puVar27 = puVar22 + 2;
    }
  }
  fn_82AD1B28(puVar17);
  puVar17[2] = puVar17[2] | 0x1000000;
  if ((puVar11[2] >> 0x17 & 1) == 0) goto LAB_82b01840;
  uVar30 = fn_82ADD810(iVar6,puVar11);
  uVar31 = fn_82ADD810(iVar6,puVar28);
  if ((uVar30 & 0xffffffff) != (uVar31 & 0xffffffff)) {
    fn_82AE0148(iVar6,uVar30,uVar31,uVar34,0,0,0,0);
  }
  puVar17[2] = puVar17[2] | 0x800000;
  uVar20 = fn_82ADD120(puVar11);
  *(unsigned short *)((int)puVar17 + 0x12) = uVar20;
  puVar22 = *(unsigned int **)(iVar6 + 0x294);
  if ((puVar22[1] & 1) == 0) {
    uVar37 = *puVar22 & 0xfffffffe;
    iVar12 = uVar37 - 4;
    if ((iVar12 == 0) || (*(unsigned int *)(uVar37 + 8) < *(int *)(uVar37 + 4) + 1U)) goto LAB_82b0181c;
  }
  else {
LAB_82b0181c:
    iVar12 = fn_82AD6090(puVar22,1);
  }
  iVar4 = *(int *)(iVar12 + 8);
  *(int *)(iVar12 + 8) = iVar4 + 1;
  *(unsigned int **)((iVar4 + 4) * 4 + iVar12) = puVar17;
LAB_82b01840:
  fn_82AF5458(iVar6,puVar11,puVar17);
  fn_82AF5458(iVar6,puVar28);
  fn_82AFA378(iVar6,puVar17);
  if ((iStack0000002c != 0) && ((*(unsigned int *)(iStack0000002c + 8) & 0x1f) != 0)) {
    fn_82AFA410(iVar6,puVar28);
  }
  fn_82B8AE98(iVar6,puVar11);
  fn_82B8AE98(iVar6,puVar28);
  puVar22 = puVar19;
  do {
    uVar37 = *puVar22;
    if (uVar37 == 0) {
      return puVar17;
    }
    iVar12 = *(int *)(uVar37 + 0x10);
    if ((iVar12 != 0) && ((*(unsigned int *)(iVar12 + 8) & 0x3f80) == 0x3700)) {
      uVar35 = 0;
      uVar29 = 0;
      piVar24 = (int *)(iVar12 + 0x2c);
      for (uVar34 = 0; uVar34 < (*(unsigned int *)(iVar12 + 8) >> 0x13 & 7); uVar34 = uVar34 + 1) {
        if ((unsigned int *)((unsigned int *)*piVar24)[3] != puVar17) goto LAB_82b01a24;
        uVar35 = (*(unsigned int *)*piVar24 >> 5 & 3) << (uVar29 & 0x3f) | uVar35 & ~(3 << (uVar29 & 0x3f));
        piVar24 = piVar24 + 1;
        uVar29 = uVar29 + 2;
      }
      puVar11 = (unsigned int *)(iVar12 + 4);
      uVar34 = **(unsigned int **)(iVar12 + 0x2c);
      while (puVar27 = (unsigned int *)*puVar11, puVar27 != (unsigned int *)0x0) {
        if (puVar27[4] != 0) {
          puVar28 = (unsigned int *)(puVar27[3] + 4);
          for (puVar13 = (unsigned int *)*puVar28; puVar13 != puVar27; puVar13 = (unsigned int *)puVar13[2]) {
            puVar28 = puVar13 + 2;
          }
          *puVar28 = puVar27[2];
          puVar27[2] = *puVar19;
          *puVar19 = (unsigned int)puVar27;
          puVar27[3] = (unsigned int)puVar17;
          uVar29 = *puVar27;
          if ((uVar29 & 0xe000000) != 0) {
            uVar29 = ((((uVar35 >> (uVar29 >> 10 & 6) & 3) << 2 | uVar35 >> (uVar29 >> 8 & 6) & 3)
                       << 2 | uVar35 >> (uVar29 >> 6 & 6) & 3) << 2 |
                     uVar35 >> (uVar29 >> 4 & 6) & 3) << 5 | uVar29 & 0xffffe01f;
            *puVar27 = uVar29;
            if ((uVar34 & 1) != 0) {
              *puVar27 = uVar34 & 1 | uVar29;
            }
          }
          fn_82AFA378(iVar6,puVar27[4]);
        }
        if ((unsigned int *)*puVar11 == puVar27) {
          puVar11 = puVar27 + 2;
        }
      }
      fn_82B8AC10(iVar6,iVar12,*(unsigned int *)(iVar6 + 0x28c),1);
    }
LAB_82b01a24:
    if (*puVar22 == uVar37) {
      puVar22 = (unsigned int *)(uVar37 + 8);
    }
  } while( true );
}

