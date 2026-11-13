typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AA66A8();
extern int fn_82ABDD90();
extern int fn_82AD17B0();
extern int fn_82AD18C0();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82AD35E8();
extern int fn_82B471E8();
extern int fn_82B84290();
extern int fn_82B84350();
extern int fn_82B8A3A0();
extern int fn_82B8AC10();
extern int fn_82B8AE98();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned char fn_82AD3EA8(unsigned __int64 param_1,int param_2,__int64 param_3,int *param_4,int param_5)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  __int64 lVar3;
  bool bVar4;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar5;
  unsigned int uVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned __int64 uVar6;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int *puVar14;
  unsigned int *puVar15;
  unsigned int *puVar16;
  unsigned int uVar17;
  unsigned __int64 uVar18;
  unsigned int *puVar19;
  unsigned int uVar20;
  int *piVar21;
  unsigned __int64 uVar22;
  unsigned char uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  dVar25 = (double)lbl_82002AE0;
  dVar26 = (double)lbl_821AAD20;
  uVar23 = 0;
LAB_82ad3ee4:
  puVar16 = (unsigned int *)(-(unsigned int)((*(unsigned int *)(param_2 + 0x24) & 1) == 0) & *(unsigned int *)(param_2 + 0x24));
  do {
    if (puVar16 == (unsigned int *)0x0) {
      return uVar23;
    }
    puVar15 = puVar16;
    if ((puVar16[2] & 0x3f80) == 0x3a80) {
LAB_82ad3f1c:
      puVar1 = (unsigned int *)*puVar15;
      if (puVar1 != (unsigned int *)0x0) {
        uVar17 = *puVar1;
        if (((uVar17 & 0xe000000) != 0) && (uVar2 = puVar1[3], (*(unsigned int *)(uVar2 + 8) >> 5 & 1) != 0)
           ) {
          uVar12 = 0;
          for (puVar14 = (unsigned int *)*puVar16; puVar14 != (unsigned int *)0x0; puVar14 = (unsigned int *)puVar14[1]) {
            uVar11 = *puVar14;
            if (((uVar11 & 0xe000000) != 0) && (((uVar11 ^ uVar17) & 0x1fe0000) == 0)) {
              uVar12 = (unsigned __int64)(uVar11 >> 0xd) & 0xf | uVar12;
            }
          }
          uVar22 = (unsigned __int64)(uVar17 >> 0xd) & 0xff0;
          uVar13 = uVar22 | uVar12;
          puVar14 = (unsigned int *)*param_4;
          while ((puVar14 != (unsigned int *)0x0 &&
                 ((((*puVar14 & 0xe000000) == 0 || ((*(unsigned int *)(puVar14[3] + 8) >> 5 & 1) == 0)) ||
                  ((((unsigned __int64)(*puVar14 >> 0xd) & 0xff0 ^ uVar13) & 0xfffffff0) != 0))))) {
            puVar14 = (unsigned int *)puVar14[1];
          }
          uVar12 = ((0x8da691691448U >> uVar12) >> uVar12) >> uVar12 & 7;
          if (puVar14 == (unsigned int *)0x0) {
            iVar7 = fn_82B84350(param_1,param_3,param_3 + 0x18,uVar12);
            if (uVar12 != 0) {
              puVar19 = (unsigned int *)(iVar7 + 0x2c);
              uVar18 = uVar12;
              do {
                iVar8 = fn_82B84290(param_1,param_3);
                uVar5 = fn_82AD17B0(param_1,iVar8);
                uVar9 = fn_82AD1978(iVar7,uVar5);
                *puVar19 = uVar9;
                if (param_5 != 0) {
                  *(int *)(iVar8 + -4) = param_5;
                  iVar10 = fn_82ABDD90(param_1,0x70,0,1);
                  puVar14 = (unsigned int *)(iVar10 + iVar8 + -8);
                  *puVar14 = (unsigned int)uVar13 | *puVar14 & 0xffff8000;
                }
                uVar18 = uVar18 - 1;
                puVar19 = puVar19 + 1;
              } while (uVar18 != 0);
            }
            uVar5 = fn_82AD17B0(param_1,iVar7);
            iVar7 = fn_82AD35E8(param_1,param_3,param_3 + 0x18,uVar5,uVar5);
            puVar14 = (unsigned int *)fn_82AD17B0(param_1,iVar7);
            *(unsigned int *)(iVar7 + 8) = *(unsigned int *)(iVar7 + 8) | 0x20;
            *puVar14 = (unsigned int)(uVar13 << 0xd) | 0x40000000 | *puVar14 & 0xfe001fff;
            fn_82AD1978(param_4,puVar14);
          }
          if (param_5 != 0) {
            uVar11 = 0;
            iVar7 = param_2;
            uVar17 = 0;
LAB_82ad4120:
            if ((*(int **)(iVar7 + 0xc) == (int *)0x0) ||
               (iVar7 = **(int **)(iVar7 + 0xc), iVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            for (uVar20 = *(unsigned int *)(iVar7 + 0x14); ((uVar20 & 1) == 0 && (uVar20 != 0));
                uVar20 = *(unsigned int *)((uVar20 & 0xfffffffe) + 0x28)) {
              if ((*(int *)(uVar20 - 4) == param_5) &&
                 (iVar8 = fn_82ABDD90(param_1,0x70,0,1),
                 ((unsigned __int64)*(unsigned int *)(iVar8 + (uVar20 - 8)) & 0x7ff0) == uVar22)) {
                puVar14 = *(unsigned int **)(uVar20 + 4);
                goto LAB_82ad41a4;
              }
            }
            goto LAB_82ad41f0;
          }
          uVar17 = *(unsigned int *)(*(int *)(puVar14[3] + 0x2c) + 0xc);
          goto LAB_82ad430c;
        }
        goto LAB_82ad4480;
      }
      if (*puVar16 == 0) goto LAB_82ad44bc;
    }
    uVar17 = *(unsigned int *)(((unsigned int)puVar16 & 0xfffffffe) + 0x28);
    puVar16 = (unsigned int *)(-(unsigned int)((uVar17 & 1) == 0) & uVar17);
  } while( true );
LAB_82ad41a4:
  if (puVar14 == (unsigned int *)0x0) goto LAB_82ad41e4;
  uVar20 = puVar14[4];
  if (((uVar20 != 0) && ((*(unsigned int *)(uVar20 + 8) & 0x3f80) == 0x3700)) &&
     ((*puVar14 & 0xe000000) != 0)) goto LAB_82ad41e8;
  puVar14 = (unsigned int *)puVar14[2];
  goto LAB_82ad41a4;
LAB_82ad41e4:
  uVar20 = 0;
LAB_82ad41e8:
  if (uVar20 == 0) {
LAB_82ad41f0:
    if ((*(int *)(iVar7 + 8) == 0) || (bVar4 = true, *(int *)(*(int *)(iVar7 + 8) + 0xc) == 0)) {
      bVar4 = false;
    }
    if (bVar4) {
      uVar11 = fn_82B84350(param_1,iVar7,iVar7 + 0x18,uVar12);
      if (uVar12 != 0) {
        iVar8 = fn_82ABDD90(param_1,0x70,0,1);
        puVar19 = (unsigned int *)(uVar11 + 0x28);
        uVar18 = uVar12;
        do {
          iVar10 = fn_82B84290(param_1,iVar7);
          uVar5 = fn_82AD17B0(param_1,iVar10);
          uVar9 = fn_82AD1978(uVar11,uVar5);
          puVar19 = puVar19 + 1;
          *puVar19 = uVar9;
          *(int *)(iVar10 + -4) = param_5;
          uVar18 = uVar18 - 1;
          *(unsigned int *)(iVar8 + -8 + iVar10) =
               *(unsigned int *)(iVar8 + -8 + iVar10) & 0xffff8000 | (unsigned int)uVar13;
        } while (uVar18 != 0);
      }
      if (uVar17 == 0) {
        uVar17 = uVar11;
      }
    }
    goto LAB_82ad4120;
  }
  if ((uVar11 != 0) && (uVar22 = 0, uVar12 != 0)) {
    piVar21 = (int *)(uVar20 + 0x28);
    do {
      piVar21 = piVar21 + 1;
      uVar9 = *(unsigned int *)(*piVar21 + 0xc);
      uVar5 = fn_82AD18C0(param_1,uVar11,uVar22);
      fn_82AD1978(uVar9,uVar5);
      uVar22 = uVar22 + 1;
    } while ((uVar22 & 0xffffffff) < uVar12);
  }
  if (uVar17 == 0) {
    uVar17 = uVar20;
  }
LAB_82ad430c:
  uVar11 = *(unsigned int *)(uVar2 + 8) >> 7 & 0x7f;
  uVar20 = *puVar1 >> 0xd & 0xf;
  if (uVar11 == 3) {
    puVar14 = *(unsigned int **)(uVar2 + 0x2c);
    uVar12 = 0;
    if ((*puVar14 & 0xe000000) != 0) {
      do {
        uVar11 = uVar20 & ~(uVar20 - 1);
        uVar20 = uVar20 - uVar11;
        lVar3 = -LZCOUNT(uVar11);
        iVar7 = fn_82B471E8(param_1,puVar14,uVar12);
        if (*(int *)(*(int *)(iVar7 + 0xc) + 0x1c) != param_2) {
          uVar5 = fn_82B84290(param_1,param_2);
          fn_82AD1978(uVar5,iVar7);
          iVar7 = fn_82AD17B0(param_1,uVar5);
        }
        if (((unsigned __int64)(*(unsigned int *)(uVar17 + 8) >> 0x13) & 7) <= (lVar3 + 0x1fU & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
          fn_82AA66A8(param_1,0x12c0);
        }
        fn_82AD1978(*(unsigned int *)
                       (*(int *)((int)((lVar3 + 0x2aU & 0xffffffff) << 2) + uVar17) + 0xc),iVar7);
        uVar12 = uVar12 + 1;
      } while ((uVar12 & 0xffffffff) < ((unsigned __int64)(*puVar14 >> 0x19) & 7));
    }
  }
  else {
    dVar24 = dVar25;
    if (uVar11 == 0x79) {
      dVar24 = dVar26;
    }
    uVar5 = fn_82B8A3A0(dVar24,dVar26,dVar26,dVar26,param_1,1);
    uVar6 = fn_82B84290(param_1,param_2);
    uVar5 = fn_82AD18C0(param_1,uVar5,0);
    fn_82AD1978(uVar6,uVar5);
    uVar9 = *(unsigned int *)
             (*(int *)((int)((0x2aU - LZCOUNT(uVar20) & 0xffffffff) << 2) + uVar17) + 0xc);
    uVar5 = fn_82AD17B0(param_1,uVar6);
    fn_82AD1978(uVar9,uVar5);
  }
  fn_82AD20C0(puVar16,puVar1,param_1);
  fn_82B8AE98(param_1,uVar2);
  uVar23 = 1;
LAB_82ad4480:
  if ((unsigned int *)*puVar15 == puVar1) {
    puVar15 = puVar1 + 1;
  }
  goto LAB_82ad3f1c;
LAB_82ad44bc:
  fn_82B8AC10(param_1,puVar16,0,1);
  goto LAB_82ad3ee4;
}

