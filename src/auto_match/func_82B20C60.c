typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AC68F0();
extern int fn_82AC9F80();
extern int fn_82ACA920();
extern int fn_82AD1270();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82AD2128();
extern int fn_82AD34E8();
extern int fn_82B17390();
extern int fn_82B1B1B8();
extern int fn_82B1B3F8();
extern int fn_82B1DCD8();
extern int fn_82B1DED8();
extern int fn_82B44B88();
extern int fn_82B46EA8();
extern int fn_82B841E8();
extern int fn_82B84290();
extern int fn_82B84350();
extern int fn_82B84FB0();
extern int fn_82B860F0();
extern int fn_82B86570();
extern int fn_82B89F88();
extern int fn_82B8A3A0();
extern int fn_82B8F1B0();
extern int fn_82B8F328();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82B20C60(int param_1)

{
  unsigned short uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  unsigned int uVar8;
  int iVar13;
  int iVar14;
  int iVar15;
  unsigned __int64 uVar9;
  unsigned int uVar16;
  unsigned int *puVar17;
  int iVar18;
  unsigned int uVar19;
  unsigned __int64 uVar10;
  int iVar20;
  int iVar21;
  unsigned int uVar22;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar23;
  int *piVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned __int64 uVar27;
  unsigned int uVar28;
  unsigned __int64 uVar29;
  int *piVar30;
  __int64 lVar31;
  unsigned __int64 uVar32;
  unsigned int uVar33;
  int *piVar34;
  unsigned int *puVar35;
  unsigned __int64 uVar36;
  int iVar37;
  double dVar38;
  double dVar39;
  
  if ((((*(unsigned int *)(param_1 + 0x2c) & 0x800000) == 0) || (*(unsigned int **)(param_1 + 0x38) == (unsigned int *)0x0))
     || (bVar6 = true, (**(unsigned int **)(param_1 + 0x38) & 0x400) == 0)) {
    bVar6 = false;
  }
  if ((*(unsigned int *)(param_1 + 0x2c) & 0x1000000) != 0) {
    if ((*(unsigned int **)(param_1 + 0x38) == (unsigned int *)0x0) ||
       (bVar5 = true, (**(unsigned int **)(param_1 + 0x38) & 0x800) == 0)) {
      bVar5 = false;
    }
    bVar7 = true;
    if (bVar5) goto LAB_82b20ce4;
  }
  bVar7 = false;
LAB_82b20ce4:
  if ((bVar6) || (lVar31 = 0, bVar7)) {
    lVar31 = 1;
  }
  if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
    uVar27 = 0x12;
    uVar29 = 0xffffffff820d7f58;
  }
  else {
    uVar27 = 0x10;
    uVar29 = 0xffffffff820d7f50;
  }
  iVar13 = fn_82B89F88(param_1,uVar27,0,uVar29,1,lVar31);
  uVar36 = 0;
  if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
    uVar36 = fn_82B89F88(param_1,0xffffffffffffffff,0,0xffffffff8202c4c0,2,lVar31);
  }
  if ((iVar13 != 0) || ((uVar36 & 0xffffffff) != 0)) {
    for (uVar19 = *(unsigned int *)(param_1 + 4); ((uVar19 & 1) == 0 && (uVar19 != 0));
        uVar19 = *(unsigned int *)((uVar19 & 0xfffffffe) + 4)) {
      if ((((*(unsigned int *)(uVar19 + 0x44) & 0x40000000) == 0) ||
          ((**(unsigned int **)(param_1 + 0x38) & 0x200) == 0)) &&
         ((*(unsigned int *)(uVar19 + 0x4c) & 0x10000000) == 0)) {
        if (((((*(unsigned int *)(param_1 + 0x2c) & 0x1000000) != 0) &&
             ((*(unsigned int *)(uVar19 + 0x24) & 1) == 0)) &&
            (uVar33 = *(unsigned int *)(uVar19 + 0x20) & 0xfffffffe, uVar33 != 0x28)) &&
           ((*(unsigned int *)(uVar33 - 0x20) & 0x3f80) == 0x2980)) {
          uVar32 = 0;
          if (*(int *)(uVar19 + 8) != 0) {
            uVar32 = (unsigned __int64)*(unsigned int *)(*(int *)(uVar19 + 8) + 4);
          }
          iVar15 = fn_82B841E8(param_1,uVar32,uVar32 + 0x18,0x68,1,1);
          uVar27 = fn_82AD18C0(param_1,iVar13,0);
          uVar16 = fn_82AD1978(iVar15,uVar27);
          *(unsigned int *)(iVar15 + 0x2c) = uVar16;
          *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 4;
          iVar18 = 0;
          if (((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) &&
             ((uVar36 & 0xffffffff) != 0)) {
            iVar18 = fn_82B841E8(param_1,uVar32,uVar32 + 0x18,0x68,1,2);
            puVar17 = (unsigned int *)fn_82AD17B0(param_1,uVar36);
            *puVar17 = *puVar17 & 0xf1ffffff | 0x4000000;
            fn_82AD1270(puVar17,0);
            *puVar17 = *puVar17 & 0xffffe01f | 0x1c80;
            uVar16 = fn_82AD1978(iVar18,puVar17);
            *(unsigned int *)(iVar18 + 0x2c) = uVar16;
          }
          if (lVar31 == 0) {
            iVar14 = fn_82B841E8(param_1,uVar19,uVar19 + 0x18,0x75,0,0);
            *(unsigned int *)(iVar14 + 8) = *(unsigned int *)(iVar14 + 8) | 0x2000000;
            iVar20 = fn_82ABDD90(param_1,0x75,0,0);
            puVar17 = (unsigned int *)(iVar20 + iVar14 + -0x10);
            puVar17[1] = 1;
            *puVar17 = *puVar17 | 7;
            uVar27 = fn_82AD17B0(param_1,iVar15);
            fn_82AD1978(iVar14,uVar27);
            if (((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) && (iVar18 != 0)) {
              uVar27 = fn_82AD17B0(param_1,iVar18);
              goto LAB_82b21154;
            }
          }
        }
      }
      else {
        uVar27 = fn_82B84290(param_1,uVar19);
        uVar29 = 0;
        iVar14 = 0;
        if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
          uVar29 = fn_82B84290(param_1,uVar19);
          iVar14 = fn_82B84290(param_1,uVar19);
        }
        uVar28 = *(unsigned int *)(uVar19 + 0x4c);
        uVar33 = uVar19;
        while ((uVar28 & 0x100000) == 0) {
          iVar15 = *(int *)(uVar33 + 8);
          if ((iVar15 == 0) || (bVar5 = true, *(int *)(iVar15 + 0xc) == 0)) {
            bVar5 = false;
          }
          if (bVar5) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          if ((iVar15 == 0) || (uVar33 = *(unsigned int *)(iVar15 + 4), uVar33 == 0)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          uVar28 = *(unsigned int *)(uVar33 + 0x4c);
        }
        iVar15 = fn_82B841E8(param_1,uVar33,uVar33 + 0x18,0x68,1,1);
        uVar9 = fn_82AD18C0(param_1,iVar13,0);
        uVar16 = fn_82AD1978(iVar15,uVar9);
        *(unsigned int *)(iVar15 + 0x2c) = uVar16;
        uVar9 = fn_82AD17B0(param_1,iVar15);
        fn_82AD1978(uVar27,uVar9);
        *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_1 + 0x2c) | 4;
        if (((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) && ((uVar36 & 0xffffffff) != 0)
           ) {
          iVar15 = fn_82B841E8(param_1,uVar33,uVar33 + 0x18,0x68,1,2);
          puVar17 = (unsigned int *)fn_82AD17B0(param_1,uVar36);
          *puVar17 = *puVar17 & 0xf1ffffff | 0x4000000;
          fn_82AD1270(puVar17,0);
          *puVar17 = *puVar17 & 0xffffe01f | 0x1c80;
          uVar16 = fn_82AD1978(iVar15,puVar17);
          *(unsigned int *)(iVar15 + 0x2c) = uVar16;
          uVar27 = fn_82AD18C0(param_1,iVar15,0);
          fn_82AD1978(uVar29,uVar27);
          uVar27 = fn_82AD18C0(param_1,iVar15,1);
LAB_82b21154:
          fn_82AD1978(iVar14,uVar27);
        }
      }
    }
  }
  if (lVar31 != 0) {
    uVar27 = 0;
    uVar29 = 0;
    if (bVar6) {
      puVar17 = (unsigned int *)fn_82B84FB0(param_1,1,4,0xffffffff820d7f38);
      uVar19 = puVar17[1];
      uVar33 = *puVar17;
      puVar17[1] = uVar19 & 0xffffff8f | 0x20;
      *puVar17 = uVar33 | 0x80000;
      uVar1 = *(unsigned short *)(*(int *)(param_1 + 0x38) + 0x38);
      puVar17[1] = uVar19 & 0xfe00ff8f | 0x10020;
      *puVar17 = (uVar1 & 0x1ff) << 0x14 | uVar33 & 0xe00fffff | 0x80000;
      *(unsigned int *)puVar17[7] = *(unsigned int *)puVar17[7] & 0xfffffff0 | 1;
      *(unsigned int *)(puVar17[7] + 8) = *(unsigned int *)(puVar17[7] + 8) & 0xfffffff0 | 2;
      *(unsigned int *)(puVar17[7] + 0x10) = *(unsigned int *)(puVar17[7] + 0x10) & 0xfffffff0 | 4;
      *(unsigned int *)(puVar17[7] + 0x18) = *(unsigned int *)(puVar17[7] + 0x18) & 0xfffffff0 | 8;
      uVar19 = fn_82B46EA8(param_1,10,1,4);
      puVar17[5] = uVar19;
      uVar27 = fn_82B86570(param_1,((int)puVar17 - *(int *)(param_1 + 0xc)) / 0x28,0,1);
    }
    if (bVar7) {
      puVar17 = (unsigned int *)fn_82B84FB0(param_1,1,4,0xffffffff820d7f1c);
      uVar19 = *puVar17;
      uVar33 = puVar17[1];
      *puVar17 = uVar19 | 0x80000;
      puVar17[1] = uVar33 & 0xffffff8f | 0x20;
      *puVar17 = (*(unsigned short *)(*(int *)(param_1 + 0x38) + 0x3a) & 0x1ff) << 0x14 |
                 uVar19 & 0xe00fffff | 0x80000;
      puVar17[1] = uVar33 & 0xfe00ff8f | 0x10020;
      *(unsigned int *)puVar17[7] = *(unsigned int *)puVar17[7] & 0xfffffff0 | 1;
      *(unsigned int *)(puVar17[7] + 8) = *(unsigned int *)(puVar17[7] + 8) & 0xfffffff0 | 2;
      *(unsigned int *)(puVar17[7] + 0x10) = *(unsigned int *)(puVar17[7] + 0x10) & 0xfffffff0 | 4;
      *(unsigned int *)(puVar17[7] + 0x18) = *(unsigned int *)(puVar17[7] + 0x18) & 0xfffffff0 | 8;
      uVar19 = fn_82B46EA8(param_1,10,1,4);
      puVar17[5] = uVar19;
      uVar29 = fn_82B86570(param_1,((int)puVar17 - *(int *)(param_1 + 0xc)) / 0x28,0,1);
    }
    dVar39 = (double)lbl_821AAD20;
    dVar38 = (double)lbl_82002AE0;
    uVar10 = fn_82B8A3A0(dVar39,dVar38,dVar39,dVar39,param_1,2);
    uVar32 = uVar10;
    if (bVar6) {
      for (uVar19 = *(unsigned int *)(param_1 + 4); ((uVar19 & 1) == 0 && (uVar19 != 0));
          uVar19 = *(unsigned int *)((uVar19 & 0xfffffffe) + 4)) {
        if ((*(unsigned int *)(uVar19 + 0x44) & 0x40000000) != 0) {
          iVar14 = 0;
          if (*(int *)(uVar19 + 8) != 0) {
            iVar14 = *(int *)(*(int *)(uVar19 + 8) + 4);
          }
          uVar33 = *(unsigned int *)(iVar14 + 0x1c);
          if (((uVar33 & 1) != 0) || (uVar33 == 0)) {
LAB_82b21d54:
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          do {
            if ((*(unsigned int *)(uVar33 + 8) & 0x3f80) == 0x3a80) {
              iVar14 = fn_82ABDD90(param_1,0x75,0,0);
              puVar17 = (unsigned int *)(iVar14 + (uVar33 - 0x10));
              if (((*puVar17 & 7) == 7) && (puVar17[1] == 2)) break;
            }
            uVar33 = *(unsigned int *)((uVar33 & 0xfffffffe) + 0x28);
            if ((uVar33 & 1) != 0) goto LAB_82b21d54;
          } while (uVar33 != 0);
          if (uVar33 == 0) goto LAB_82b21d54;
          if ((*(unsigned int *)(uVar19 + 0x24) & 1) == 0) {
            lVar31 = ((unsigned __int64)*(unsigned int *)(uVar19 + 0x20) & 0xfffffffe) - 0x28;
          }
          else {
            lVar31 = 0;
          }
          iVar14 = 0;
          *(unsigned int *)(param_1 + 0x234) = uVar19;
          iVar15 = 0;
          if ((**(unsigned int **)(param_1 + 0x38) & 0x200) == 0) {
            iVar18 = iVar13;
            if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
              iVar15 = fn_82B84290(param_1,uVar19);
              uVar9 = fn_82AD18C0(param_1,uVar36,0);
              fn_82AD1978(iVar15,uVar9);
              iVar14 = fn_82B84290(param_1,uVar19);
              uVar9 = fn_82AD18C0(param_1,uVar36,1);
              fn_82AD1978(iVar14,uVar9);
            }
          }
          else {
            if ((*(unsigned int *)(uVar19 + 0x14) & 1) == 0) {
              iVar18 = (*(unsigned int *)(uVar19 + 0x10) & 0xfffffffe) - 0x28;
            }
            else {
              iVar18 = 0;
            }
            if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
              if ((*(unsigned int *)(iVar18 + 0x24) & 1) == 0) {
                iVar15 = (*(unsigned int *)(iVar18 + 0x24) & 0xfffffffe) - 0x28;
              }
              else {
                iVar15 = 0;
              }
              iVar14 = iVar18;
              if ((*(unsigned int *)(iVar15 + 0x24) & 1) == 0) {
                iVar18 = (*(unsigned int *)(iVar15 + 0x24) & 0xfffffffe) - 0x28;
              }
              else {
                iVar18 = 0;
              }
            }
          }
          uVar9 = fn_82B1DCD8(param_1,uVar19,iVar18);
          iVar37 = uVar19 + 0x18;
          iVar20 = fn_82B841E8(param_1,uVar19,iVar37,0x5e,0,0);
          iVar21 = fn_82ABDD90(param_1,0x5e,0,0);
          puVar17 = (unsigned int *)(iVar21 + iVar20 + -0xc);
          *puVar17 = *puVar17 & 0xfffffff0 | 9;
          if (*(int *)(uVar19 + 100) != 0) {
            fn_82AD2128(iVar20,2,*(int *)(uVar19 + 100),param_1);
          }
          *(int *)(uVar19 + 100) = iVar20;
          *(unsigned int *)(iVar20 + 8) = *(unsigned int *)(iVar20 + 8) | 0x2000000;
          iVar20 = fn_82B841E8(param_1,uVar19,iVar37,0x69,3,4);
          puVar17 = (unsigned int *)fn_82AD17B0(param_1,uVar32);
          *puVar17 = *puVar17 & 0xf1ffffff | 0x8000000;
          fn_82AD1270(puVar17,0);
          *puVar17 = *puVar17 & 0xffffe01f | 0x80;
          uVar16 = fn_82AD1978(iVar20,puVar17);
          *(unsigned int *)(iVar20 + 0x2c) = uVar16;
          puVar17 = (unsigned int *)fn_82AD17B0(param_1,uVar9);
          *puVar17 = *puVar17 & 0xf1ffffff | 0x8000000;
          fn_82AD1270(puVar17,0);
          *puVar17 = *puVar17 & 0xffffe01f;
          uVar16 = fn_82AD1978(iVar20,puVar17);
          *(unsigned int *)(iVar20 + 0x30) = uVar16;
          uVar9 = fn_82AD17B0(param_1,uVar27);
          uVar16 = fn_82AD1978(iVar20,uVar9);
          *(unsigned int *)(iVar20 + 0x34) = uVar16;
          uVar9 = fn_82AD17B0(param_1,iVar20);
          iVar20 = fn_82B860F0(param_1,uVar9,0x20f,lVar31,0);
          iVar20 = *(int *)(iVar20 + 0xc);
          if (*(int *)(uVar19 + 100) != 0) {
            fn_82AD2128(iVar20,2,*(int *)(uVar19 + 100),param_1);
          }
          *(int *)(uVar19 + 100) = iVar20;
          *(unsigned int *)(iVar20 + 8) = *(unsigned int *)(iVar20 + 8) | 0x2000000;
          iVar20 = fn_82ABDD90(param_1,0x75,0,0);
          uVar9 = fn_82B8A3A0((double)*(unsigned int *)(iVar20 + (uVar33 - 8)),dVar39,dVar39,dVar39,
                                    param_1,1);
          if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
            iVar20 = fn_82B84350(param_1,uVar19,iVar37,3);
            uVar9 = fn_82AD18C0(param_1,uVar9,0);
            uVar16 = fn_82AD1978(iVar20,uVar9);
            *(unsigned int *)(iVar20 + 0x2c) = uVar16;
            uVar9 = fn_82AD18C0(param_1,iVar15,0);
            uVar16 = fn_82AD1978(iVar20,uVar9);
            *(unsigned int *)(iVar20 + 0x30) = uVar16;
            uVar9 = fn_82AD18C0(param_1,iVar14,1);
            uVar16 = fn_82AD1978(iVar20,uVar9);
            *(unsigned int *)(iVar20 + 0x34) = uVar16;
            uVar32 = 7;
          }
          else {
            iVar20 = fn_82B84350(param_1,uVar19,iVar37,2);
            uVar9 = fn_82AD18C0(param_1,uVar9,0);
            uVar16 = fn_82AD1978(iVar20,uVar9);
            *(unsigned int *)(iVar20 + 0x2c) = uVar16;
            uVar9 = fn_82AD18C0(param_1,iVar18,0);
            uVar16 = fn_82AD1978(iVar20,uVar9);
            *(unsigned int *)(iVar20 + 0x30) = uVar16;
            uVar32 = 3;
          }
          uVar9 = fn_82AD17B0(param_1,iVar20);
          iVar14 = fn_82B860F0(param_1,uVar9,uVar32 | 0x210,lVar31,1);
          iVar14 = *(int *)(iVar14 + 0xc);
          *(unsigned int *)(iVar14 + 8) = *(unsigned int *)(iVar14 + 8) | 0x60000;
          if (*(int *)(uVar19 + 100) != 0) {
            fn_82AD2128(iVar14,2,*(int *)(uVar19 + 100),param_1);
          }
          *(int *)(uVar19 + 100) = iVar14;
          *(unsigned int *)(iVar14 + 8) = *(unsigned int *)(iVar14 + 8) | 0x2000000;
          if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
            if (*(int *)(uVar19 + 0x5c) != 0) {
              fn_82AD2128(iVar14,0,*(int *)(uVar19 + 0x5c),param_1);
            }
            *(int *)(uVar19 + 0x5c) = iVar14;
            *(unsigned int *)(iVar14 + 8) = *(unsigned int *)(iVar14 + 8) | 0x2000000;
          }
          uVar32 = uVar10 & 0xffffffff;
          *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_1 + 0x28) | 0x200000;
        }
      }
    }
    if (bVar7) {
      uVar19 = *(unsigned int *)(param_1 + 4);
      uVar16 = 0;
      puVar2 = *(unsigned int **)((-(unsigned int)((uVar19 & 1) == 0) & uVar19) + 0xc);
      if (puVar2 != (unsigned int *)0x0) {
        uVar16 = *puVar2;
      }
      fn_82B8F1B0(-(unsigned int)((uVar19 & 1) == 0) & uVar19,uVar16,param_1);
      if (*(int *)(param_1 + 0x24) == 0) {
        *(unsigned int *)(param_1 + 0x24) = 1;
      }
      iVar14 = *(int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x24) = iVar14 + 1;
      *(int *)(param_1 + 0x20) = iVar14;
      uVar22 = fn_82AC68F0(param_1);
      piVar24 = (int *)(uVar22 & 0xfffffffe);
      uVar19 = -(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4) & 0xfffffffe;
      piVar24[1] = *(int *)(uVar19 + 4);
      *(int **)(*(unsigned int *)(uVar19 + 4) & 0xfffffffe) = piVar24 + 1;
      *piVar24 = uVar19 + 4;
      *(int **)(uVar19 + 4) = piVar24;
      lVar31 = fn_82AC68F0(param_1);
      puVar2 = (unsigned int *)((unsigned int)lVar31 & 0xfffffffe);
      puVar2[1] = piVar24[1];
      *(unsigned int **)(piVar24[1] & 0xfffffffe) = puVar2 + 1;
      *puVar2 = piVar24 + 1;
      piVar24[1] = (int)puVar2;
      *(unsigned int *)(param_1 + 0x20) = 0;
      fn_82B8F328(-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4),uVar22,
                        param_1);
      fn_82B8F328(uVar22,lVar31,param_1);
      fn_82B8F328(uVar22,uVar16,param_1);
      fn_82B8F328(lVar31,uVar16,param_1);
      puVar17 = (unsigned int *)fn_82B84FB0(param_1,1,1,0xffffffff820d7f04);
      uVar19 = *puVar17;
      uVar33 = puVar17[1];
      *puVar17 = uVar19 | 0x80000;
      puVar17[1] = uVar33 & 0xffffff8f;
      uVar28 = (*(unsigned short *)(*(int *)(param_1 + 0x38) + 0x3e) & 0x1ff) * 0x100000;
      *puVar17 = uVar28 | uVar19 & 0xe00fffff | 0x80000;
      if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
        *puVar17 = uVar19 & 0xe00fffff | 0x80000 | uVar28 + 0x8000000 & 0x1ff00000;
      }
      puVar17[1] = uVar33 & 0xfe00ff8f | 0x10000;
      *(unsigned int *)puVar17[7] = *(unsigned int *)puVar17[7] & 0xfffffff0 | 1;
      *(unsigned int *)puVar17[7] = *(unsigned int *)puVar17[7] & 0xfff3ffff | 0x40000;
      *(unsigned int *)puVar17[7] = *(unsigned int *)puVar17[7] & 0xfc0fffff;
      uVar19 = fn_82B46EA8(param_1,0,1,1);
      puVar17[5] = uVar19;
      uVar27 = fn_82B86570(param_1,((int)puVar17 - *(int *)(param_1 + 0xc)) / 0x28,0,1);
      uVar9 = fn_82AD17B0(param_1,uVar27);
      uVar9 = fn_82B1B1B8(param_1,uVar22,uVar22 + 0x18,uVar9);
      uVar9 = fn_82AC9F80(param_1,uVar9,7);
      iVar14 = fn_82B1B3F8(param_1,uVar22,uVar22 + 0x20,uVar9);
      uVar19 = *(unsigned int *)(iVar14 + 8);
      *(unsigned int *)(iVar14 + 8) = uVar19 & 0xfff9ffff | 0x20000;
      iVar15 = fn_82ABDD90(param_1,((unsigned __int64)uVar19 & 0x3f80) >> 7,uVar19 >> 0x13 & 7,
                            ((unsigned __int64)uVar19 & 0x1c000) >> 0xe);
      *(unsigned int *)(iVar15 + iVar14 + -0x10) = uVar16;
      fn_82B44B88(param_1);
      uVar9 = fn_82B1DCD8(param_1,uVar22,iVar13);
      puVar17 = (unsigned int *)fn_82B84FB0(param_1,1,1,0xffffffff820d7ef0);
      uVar19 = puVar17[1];
      uVar33 = *puVar17;
      puVar17[1] = uVar19 & 0xffffff8f | 0x30;
      *puVar17 = uVar33 | 0x80000;
      uVar1 = *(unsigned short *)(*(int *)(param_1 + 0x38) + 0x3c);
      puVar17[1] = uVar19 & 0xfe00ff8f | 0x10030;
      *puVar17 = (uVar1 & 0x1ff) << 0x14 | uVar33 & 0xe00fffff | 0x80000;
      *(unsigned int *)puVar17[7] = *(unsigned int *)puVar17[7] & 0xfffffff0 | 1;
      uVar19 = fn_82B46EA8(param_1,0x21,1,1);
      puVar17[5] = uVar19;
      uVar11 = fn_82B86570(param_1,((int)puVar17 - *(int *)(param_1 + 0xc)) / 0x28,0,1);
      iVar13 = fn_82B841E8(param_1,lVar31,lVar31 + 0x18,0x60,2,1);
      uVar12 = fn_82AD17B0(param_1,uVar9);
      uVar23 = fn_82AD1978(iVar13,uVar12);
      *(unsigned int *)(iVar13 + 0x2c) = uVar23;
      uVar11 = fn_82AD17B0(param_1,uVar11);
      uVar23 = fn_82AD1978(iVar13,uVar11);
      uVar19 = *(unsigned int *)(iVar13 + 8);
      *(unsigned int *)(iVar13 + 0x30) = uVar23;
      iVar14 = fn_82ABDD90(param_1,uVar19 >> 7 & 0x7f,uVar19 >> 0x13 & 7,uVar19 >> 0xe & 7);
      puVar17 = (unsigned int *)(iVar14 + iVar13 + -0x14);
      *(unsigned char *)((int)puVar17 + 0xb) = 1;
      puVar17[3] = puVar17[3] | 0xff;
      *puVar17 = *puVar17 | 0x80000;
      puVar17[1] = puVar17[1] & 0xffc0dfff | 0x212000;
      piVar24 = (int *)fn_82B84290(param_1,uVar16);
      uVar11 = fn_82AD17B0(param_1,iVar13);
      fn_82AD1978(piVar24,uVar11);
      uVar19 = *(unsigned int *)(param_1 + 4);
      uVar33 = -(unsigned int)((uVar19 & 1) == 0) & uVar19;
      if ((*(unsigned int *)((-(unsigned int)((uVar19 & 1) == 0) & uVar19) + 0x14) & 1) == 0) {
        uVar33 = *(unsigned int *)(uVar33 + 0x14);
        uVar33 = -(unsigned int)((uVar33 & 1) == 0) & uVar33;
        iVar13 = (-(unsigned int)((uVar19 & 1) == 0) & uVar19) + 0x10;
      }
      else {
        uVar33 = *(unsigned int *)(uVar33 + 0x1c);
        uVar33 = -(unsigned int)((uVar33 & 1) == 0) & uVar33;
        iVar13 = (-(unsigned int)((uVar19 & 1) == 0) & uVar19) + 0x18;
      }
      if (uVar33 != 0) {
        do {
          do {
            piVar34 = (int *)(uVar33 + 4);
LAB_82b21d90:
            iVar14 = *piVar34;
            if (iVar14 != 0) {
              piVar34 = *(int **)(iVar14 + 0x10);
              if ((piVar34 == (int *)0x0) || ((piVar34[2] & 0x3f80U) != 0x3800)) goto LAB_82b21dec;
              iVar15 = fn_82ABDD90(param_1,0x70,0,1);
              uVar28 = *(unsigned int *)((int)piVar34 + iVar15 + -8);
              if (((uVar28 & 0x20000000) == 0) || ((uVar28 & 0x7fff) != *(unsigned int *)(param_1 + 0x264)))
              goto LAB_82b21dec;
              piVar30 = piVar34;
              for (iVar13 = *piVar34; iVar13 != iVar14; iVar13 = *(int *)(iVar13 + 4)) {
                piVar30 = (int *)(iVar13 + 4);
              }
              *piVar30 = *(int *)(iVar14 + 4);
              *(int *)(iVar14 + 4) = *piVar24;
              *piVar24 = iVar14;
              *(int **)(iVar14 + 0x10) = piVar24;
              uVar11 = fn_82AD17B0(param_1,piVar24);
              fn_82AD1978(piVar34,uVar11);
              goto LAB_82b21ea0;
            }
            uVar33 = *(unsigned int *)((uVar33 & 0xfffffffe) + 0x28);
          } while (((uVar33 & 1) == 0) && (uVar33 != 0));
          if (iVar13 == (-(unsigned int)((uVar19 & 1) == 0) & uVar19) + 0x18) break;
          uVar33 = -(unsigned int)((uVar19 & 1) == 0) & uVar19;
          iVar13 = uVar33 + 0x18;
          uVar33 = *(unsigned int *)(uVar33 + 0x1c);
          if (((uVar33 & 1) != 0) || (uVar33 == 0)) break;
        } while( true );
      }
LAB_82b21ea0:
      for (uVar19 = *(unsigned int *)(param_1 + 4); ((uVar19 & 1) == 0 && (uVar19 != 0));
          uVar19 = *(unsigned int *)((uVar19 & 0xfffffffe) + 4)) {
        if (((*(unsigned int *)(uVar19 + 0x24) & 1) == 0) &&
           ((uVar33 = *(unsigned int *)(uVar19 + 0x20) & 0xfffffffe, uVar33 != 0x28 &&
            ((*(unsigned int *)(uVar33 - 0x20) & 0x3f80) == 0x2980)))) {
          uVar33 = 0;
          uVar28 = uVar19;
          if (*(int *)(uVar19 + 8) != 0) {
            uVar33 = *(unsigned int *)(*(int *)(uVar19 + 8) + 4);
          }
LAB_82b21efc:
          fn_82B1DED8(param_1,uVar33,uVar28,uVar27,uVar32,uVar9,uVar29);
        }
        else {
          if ((*(unsigned int *)(uVar19 + 0x44) & 0x40000000) != 0) {
            uVar28 = 0;
            uVar33 = uVar19;
            if (*(unsigned int **)(uVar19 + 0xc) != (unsigned int *)0x0) {
              uVar28 = **(unsigned int **)(uVar19 + 0xc);
            }
            goto LAB_82b21efc;
          }
          if ((*(unsigned int *)(uVar19 + 0x4c) & 0x7ffff) != 0) {
            uVar36 = 0;
            for (uVar33 = *(unsigned int *)(uVar19 + 0x1c); ((uVar33 & 1) == 0 && (uVar33 != 0));
                uVar33 = *(unsigned int *)((uVar33 & 0xfffffffe) + 0x28)) {
              if (((*(unsigned int *)(uVar33 + 8) & 0x3f80) == 0x2f00) &&
                 (iVar13 = fn_82ABDD90(param_1,0x5e,0,0), *(int *)(iVar13 + (uVar33 - 8)) != 0)) {
                uVar3 = *(unsigned int *)(uVar19 + 0x4c);
                uVar28 = uVar19;
                while ((uVar3 & 0x100000) == 0) {
                  iVar13 = *(int *)(uVar28 + 8);
                  if ((iVar13 == 0) || (bVar6 = true, *(int *)(iVar13 + 0xc) == 0)) {
                    bVar6 = false;
                  }
                  if (bVar6) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0x12c0);
                  }
                  if ((iVar13 == 0) || (uVar28 = *(unsigned int *)(iVar13 + 4), uVar28 == 0)) {
                    /* WARNING: Subroutine does not return */
                    fn_82AA66A8(param_1,0x12c0);
                  }
                  uVar3 = *(unsigned int *)(uVar28 + 0x4c);
                }
                if ((uVar36 & 0xffffffff) == 0) {
                  uVar16 = 0;
                  if (*(unsigned int **)(uVar19 + 0xc) != (unsigned int *)0x0) {
                    uVar16 = **(unsigned int **)(uVar19 + 0xc);
                  }
                  uVar22 = fn_82AC68F0(param_1);
                  puVar17 = (unsigned int *)(uVar19 & 0xfffffffe);
                  puVar35 = (unsigned int *)(uVar22 & 0xfffffffe);
                  *(unsigned int *)(uVar22 + 0x4c) =
                       *(unsigned int *)(uVar22 + 0x4c) & 0xfff80000 | *(unsigned int *)(uVar19 + 0x4c) & 0x7ffff;
                  *puVar35 = *puVar17;
                  *(unsigned int **)(*puVar17 & 0xfffffffe) = puVar35;
                  puVar35[1] = (unsigned int)puVar17;
                  *puVar17 = (unsigned int)(puVar35 + 1);
                  fn_82AD34E8(uVar22 + 0x10,uVar19 + 0x10);
                  for (uVar3 = *(unsigned int *)(uVar22 + 0x14); ((uVar3 & 1) == 0 && (uVar3 != 0));
                      uVar3 = *(unsigned int *)((uVar3 & 0xfffffffe) + 0x28)) {
                    *(unsigned int *)(uVar3 + 0x1c) = uVar22;
                  }
                  uVar11 = fn_82AD17B0(param_1,uVar27);
                  uVar36 = fn_82B1B1B8(param_1,uVar22,uVar22 + 0x18,uVar11);
                  uVar11 = fn_82AC9F80(param_1,uVar36,7);
                  iVar13 = fn_82B1B3F8(param_1,uVar22,uVar22 + 0x20,uVar11);
                  uVar3 = *(unsigned int *)(iVar13 + 8);
                  *(unsigned int *)(iVar13 + 8) = uVar3 & 0xfff9ffff | 0x20000;
                  iVar14 = fn_82ABDD90(param_1,((unsigned __int64)uVar3 & 0x3f80) >> 7,uVar3 >> 0x13 & 7,
                                        ((unsigned __int64)uVar3 & 0x1c000) >> 0xe);
                  *(unsigned int *)(iVar14 + iVar13 + -0x10) = uVar16;
                  fn_82B8F1B0(uVar28,uVar19,param_1);
                  fn_82B8F328(uVar28,uVar22,param_1);
                  fn_82B8F328(uVar22,uVar19,param_1);
                  fn_82B8F328(uVar22,uVar16,param_1);
                  fn_82B44B88(param_1);
                }
                uVar28 = *(unsigned int *)(uVar28 + 0x1c);
                if (((uVar28 & 1) != 0) || (uVar28 == 0)) {
LAB_82b225e4:
                    /* WARNING: Subroutine does not return */
                  fn_82AA66A8(param_1,0x12c0);
                }
                do {
                  if ((*(unsigned int *)(uVar28 + 8) & 0x3f80) == 0x3400) {
                    uVar3 = *(unsigned int *)(uVar28 + 8);
                    iVar13 = fn_82ABDD90(param_1,uVar3 >> 7 & 0x7f,uVar3 >> 0x13 & 7,
                                          uVar3 >> 0xe & 7);
                    if (*(unsigned int *)(param_1 + 0x264) == (*(unsigned int *)(iVar13 + (uVar28 - 8)) & 0x7fff))
                    break;
                  }
                  uVar28 = *(unsigned int *)((uVar28 & 0xfffffffe) + 0x28);
                  if ((uVar28 & 1) != 0) goto LAB_82b225e4;
                } while (uVar28 != 0);
                if (uVar28 == 0) goto LAB_82b225e4;
                iVar13 = fn_82B17390(uVar33,2);
                uVar3 = *(unsigned int *)(iVar13 + 0x10);
                for (puVar17 = *(unsigned int **)(uVar3 + 4);
                    (puVar17 != (unsigned int *)0x0 && ((puVar17[4] == 0 || ((*puVar17 & 0xe000000) == 0))))
                    ; puVar17 = (unsigned int *)puVar17[2]) {
                }
                uVar4 = puVar17[4];
                uVar11 = fn_82B8A3A0(dVar39,dVar38,dVar39,dVar39,param_1,2);
                uVar25 = fn_82B841E8(param_1,*(unsigned int *)(uVar33 + 0x1c),0,0x69,3,4);
                uVar26 = uVar33 & 0xfffffffe;
                uVar8 = uVar25 & 0xfffffffe;
                *(unsigned int *)(uVar8 + 0x28) = *(unsigned int *)(uVar26 + 0x28);
                *(unsigned int *)((*(unsigned int *)(uVar26 + 0x28) & 0xfffffffe) + 0x24) = uVar8 + 0x28;
                *(unsigned int *)(uVar8 + 0x24) = uVar26 + 0x28;
                *(unsigned int *)(uVar26 + 0x28) = uVar8;
                puVar17 = (unsigned int *)fn_82AD17B0(param_1,uVar11);
                *puVar17 = *puVar17 & 0xf1ffffff | 0x8000000;
                fn_82AD1270(puVar17,0);
                *puVar17 = *puVar17 & 0xffffe01f | 0x80;
                uVar16 = fn_82AD1978(uVar25,puVar17);
                *(unsigned int *)(uVar25 + 0x2c) = uVar16;
                puVar17 = (unsigned int *)fn_82AD17B0(param_1,uVar28);
                *puVar17 = *puVar17 & 0xf1ffffff | 0x8000000;
                fn_82AD1270(puVar17,0);
                *puVar17 = *puVar17 & 0xffffe01f;
                uVar16 = fn_82AD1978(uVar25,puVar17);
                *(unsigned int *)(uVar25 + 0x30) = uVar16;
                uVar11 = fn_82AD17B0(param_1,uVar29);
                uVar16 = fn_82AD1978(uVar25,uVar11);
                *(unsigned int *)(uVar25 + 0x34) = uVar16;
                *(unsigned int *)(param_1 + 0x234) = uVar19;
                uVar11 = fn_82AD17B0(param_1,uVar25);
                fn_82B860F0(param_1,uVar11,0x20f,uVar4,0);
                piVar24 = (int *)(*(int *)(iVar13 + 0xc) + 4);
                for (iVar14 = *piVar24; iVar14 != iVar13; iVar14 = *(int *)(iVar14 + 8)) {
                  piVar24 = (int *)(iVar14 + 8);
                }
                *piVar24 = *(int *)(iVar13 + 8);
                *(unsigned int *)(iVar13 + 8) = *(unsigned int *)(uVar25 + 4);
                *(int *)(uVar25 + 4) = iVar13;
                *(unsigned int *)(iVar13 + 0xc) = uVar25;
                fn_82AD2128(uVar25,2,uVar33,param_1);
                iVar13 = fn_82B8A3A0(dVar39,dVar39,dVar39,dVar39,param_1,1);
                if ((*(unsigned int *)(uVar22 + 0x14) & 1) == 0) {
                  iVar14 = (*(unsigned int *)(uVar22 + 0x10) & 0xfffffffe) - 0x28;
                }
                else {
                  iVar14 = 0;
                }
                if ((*(unsigned int *)(param_1 + 0x30) & 0xffff0000) == 0xffff0000) {
                  iVar13 = iVar14;
                  if ((*(unsigned int *)(iVar14 + 0x24) & 1) == 0) {
                    iVar14 = (*(unsigned int *)(iVar14 + 0x24) & 0xfffffffe) - 0x28;
                  }
                  else {
                    iVar14 = 0;
                  }
                }
                puVar17 = (unsigned int *)fn_82ACA920(param_1,*(int *)(uVar3 + 0x2c),
                                                    *(unsigned int *)(*(int *)(uVar3 + 0x2c) + 0xc));
                *puVar17 = *puVar17 & 0xf1ffffff | 0x2000000;
                uVar26 = fn_82B84350(param_1,*(unsigned int *)(uVar3 + 0x1c),0,4);
                uVar4 = uVar26 & 0xfffffffe;
                puVar35 = (unsigned int *)((uVar3 & 0xfffffffe) + 0x24);
                *(unsigned int *)(uVar4 + 0x24) = *puVar35;
                *(unsigned int *)(*puVar35 & 0xfffffffe) = uVar4;
                *(unsigned int *)(uVar4 + 0x28) = uVar3 & 0xfffffffe;
                *puVar35 = uVar4 + 0x28;
                uVar16 = fn_82AD1978(uVar26,puVar17);
                *(unsigned int *)(uVar26 + 0x2c) = uVar16;
                uVar11 = fn_82AD18C0(param_1,iVar14,0);
                uVar16 = fn_82AD1978(uVar26,uVar11);
                *(unsigned int *)(uVar26 + 0x30) = uVar16;
                uVar11 = fn_82AD18C0(param_1,iVar13,0);
                uVar16 = fn_82AD1978(uVar26,uVar11);
                *(unsigned int *)(uVar26 + 0x34) = uVar16;
                uVar11 = fn_82AD18C0(param_1,uVar28,0);
                uVar16 = fn_82AD1978(uVar26,uVar11);
                *(unsigned int *)(uVar26 + 0x38) = uVar16;
                uVar11 = fn_82AD17B0(param_1,uVar26);
                fn_82AD20C0(uVar3,*(unsigned int *)(uVar3 + 0x2c),param_1);
                uVar16 = fn_82AD1978(uVar3,uVar11);
                *(unsigned int *)(uVar3 + 0x2c) = uVar16;
                uVar11 = fn_82AD17B0(param_1,uVar26);
                fn_82AD20C0(uVar3,*(unsigned int *)(uVar3 + 0x30),param_1);
                uVar16 = fn_82AD1978(uVar3,uVar11);
                *(unsigned int *)(uVar3 + 0x30) = uVar16;
              }
            }
          }
        }
      }
    }
  }
  uVar19 = *(unsigned int *)(param_1 + 4);
  do {
    if (((uVar19 & 1) != 0) || (uVar19 == 0)) {
      *(unsigned int *)(param_1 + 0x234) = 0;
      return;
    }
    if ((((*(unsigned int *)(uVar19 + 0x44) & 0x40000000) != 0) &&
        ((**(unsigned int **)(param_1 + 0x38) & 0x200) != 0)) ||
       ((*(unsigned int *)(uVar19 + 0x4c) & 0x10000000) != 0)) {
      for (iVar13 = *(int *)(uVar19 + 8); iVar13 != 0; iVar13 = *(int *)(iVar13 + 0xc)) {
        iVar14 = *(int *)(iVar13 + 4);
        while ((*(unsigned int *)(iVar14 + 0x4c) & 0x100000) == 0) {
          iVar14 = *(int *)(iVar14 + 8);
          if ((iVar14 == 0) || (bVar6 = true, *(int *)(iVar14 + 0xc) == 0)) {
            bVar6 = false;
          }
          if (bVar6) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
          if ((iVar14 == 0) || (iVar14 = *(int *)(iVar14 + 4), iVar14 == 0)) {
                    /* WARNING: Subroutine does not return */
            fn_82AA66A8(param_1,0x12c0);
          }
        }
        for (uVar33 = *(unsigned int *)(iVar14 + 0x1c); ((uVar33 & 1) == 0 && (uVar33 != 0));
            uVar33 = *(unsigned int *)((uVar33 & 0xfffffffe) + 0x28)) {
          if ((*(unsigned int *)(uVar33 + 8) & 0x3f80) == 0x3400) {
            *(unsigned int *)(uVar33 + 8) = *(unsigned int *)(uVar33 + 8) | 0x2000000;
          }
        }
      }
    }
    uVar19 = *(unsigned int *)((uVar19 & 0xfffffffe) + 4);
  } while( true );
LAB_82b21dec:
  piVar34 = (int *)(iVar14 + 8);
  goto LAB_82b21d90;
}

