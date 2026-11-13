typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_494;
extern unsigned int *auStack_528;
extern unsigned int *auStack_5b4;
extern unsigned int *auStack_5bc;
extern unsigned int *auStack_644;
extern unsigned int *auStack_6d4;
extern unsigned int *auStack_710;
extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEE578();
extern int fn_82DF5DB0();
extern unsigned int iStack_49c;
extern unsigned int iStack_6dc;
extern unsigned int iStack_72c;
extern unsigned int *lbl_8323B464;
extern unsigned int stack0x00000000;
extern unsigned int uStack_498;
extern unsigned int uStack_52c;
extern unsigned int uStack_530;
extern unsigned int uStack_648;
extern unsigned int uStack_64c;
extern unsigned int uStack_6d8;


/* WARNING: Removing unreachable block (ram,0x82df68cc) */
/* WARNING: Removing unreachable block (ram,0x82df6a40) */

unsigned __int64 fn_82DF6050(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,int *param_5)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  __int64 lVar17;
  unsigned int *puVar18;
  int iStack_72c;
  unsigned int auStack_710 [12];
  unsigned char *puStack_6e0;
  int iStack_6dc;
  unsigned int uStack_6d8;
  unsigned char auStack_6d4 [132];
  unsigned char *puStack_650;
  unsigned int uStack_64c;
  unsigned int uStack_648;
  unsigned char auStack_644 [132];
  unsigned char *puStack_5c0;
  unsigned int auStack_5bc [2];
  unsigned char auStack_5b4 [128];
  unsigned char *puStack_534;
  unsigned int uStack_530;
  unsigned int uStack_52c;
  unsigned char auStack_528 [136];
  unsigned char *puStack_4a0;
  int iStack_49c;
  unsigned int uStack_498;
  unsigned char auStack_494 [1172];
  
  uVar5 = ZEXT48(&stack0x00000000);
  if ((param_2 & 0xffffffff) == (param_3 & 0xffffffff)) {
    fn_82CEE578(uVar5 - 0x6f8,uVar5 - 0x290,0x200);
    fn_82CEDB38(uVar5 - 0x6f8,0xffffffff82145b54);
    (**(int (***)())(*lbl_8323B464 + 0xc))
              (lbl_8323B464,1,0xffffffffabba3bb3,uVar5 - 0x290,0xffffffff82145ae8,0xfa);
                    /* WARNING: Subroutine does not return */
    fn_82CED958(uVar5 - 0x6f8);
  }
  iStack_72c = 0;
  iVar6 = fn_82CE5410();
  fn_82CEAB00(uVar5 - 0x720,*(unsigned int *)(iVar6 + 0x10),0);
  iVar6 = 0;
  if (0 < param_1[1]) {
    iVar9 = 0;
    do {
      iVar8 = *(int *)(*param_1 + iVar9);
      iVar7 = fn_82CEA220(uVar5 - 0x720,*(unsigned int *)(iVar8 + 0x14));
      if (-1 < iVar7) {
        uVar12 = *(unsigned int *)(iVar8 + 0x14);
        iVar7 = fn_82CE5410();
        fn_82CEA160(uVar5 - 0x720,*(unsigned int *)(iVar7 + 0x10),uVar12,iStack_72c);
        uVar12 = *(unsigned int *)(iVar8 + 0x14);
        iVar7 = fn_82CE5410();
        if (iStack_72c == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),uVar5 - 0x730,4);
        }
        *(unsigned int *)(iStack_72c * 4) = uVar12;
        iStack_72c = iStack_72c + 1;
      }
      iVar7 = fn_82CEA220(uVar5 - 0x720,*(unsigned int *)(iVar8 + 0x18));
      if (-1 < iVar7) {
        uVar12 = *(unsigned int *)(iVar8 + 0x18);
        iVar7 = fn_82CE5410();
        fn_82CEA160(uVar5 - 0x720,*(unsigned int *)(iVar7 + 0x10),uVar12,iStack_72c);
        uVar12 = *(unsigned int *)(iVar8 + 0x18);
        iVar8 = fn_82CE5410();
        if (iStack_72c == 0) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),uVar5 - 0x730,4);
        }
        *(unsigned int *)(iStack_72c * 4) = uVar12;
        iStack_72c = iStack_72c + 1;
      }
      iVar6 = iVar6 + 1;
      iVar9 = iVar9 + 4;
    } while (iVar6 < param_1[1]);
  }
  iStack_49c = 0;
  puStack_4a0 = auStack_494;
  uStack_498 = 0x80000020;
  iVar6 = fn_82CE5410();
  if ((int)(uStack_498 & 0x3fffffff) < iStack_72c) {
    iVar9 = (uStack_498 & 0x3fffffff) << 1;
    if (iVar9 <= iStack_72c) {
      iVar9 = iStack_72c;
    }
    fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),uVar5 - 0x4a0,iVar9,0x10);
  }
  iStack_49c = iStack_72c;
  iVar6 = 0;
  if (0 < iStack_72c) {
    iVar9 = 0;
    do {
      iVar6 = iVar6 + 1;
      *(unsigned int *)(puStack_4a0 + iVar9) = 0xffffffff;
      iVar9 = iVar9 + 0x10;
    } while (iVar6 < iStack_72c);
  }
  puStack_5c0 = auStack_5b4;
  auStack_5bc[0] = 0;
  puStack_534 = auStack_528;
  auStack_5bc[1] = 0x80000020;
  uStack_530 = 0;
  uStack_52c = 0x80000020;
  auStack_710[4] = 0xffffffff;
  auStack_710[5] = 0xffffffff;
  iVar6 = fn_82CEA220(uVar5 - 0x720,param_2);
  iVar6 = *(int *)(iVar6 * 8 + 4);
  iVar9 = fn_82CEA220(uVar5 - 0x720,param_3);
  iVar8 = iVar6 * 0x10;
  iVar9 = *(int *)(iVar9 * 8 + 4);
  *(unsigned int *)(puStack_4a0 + iVar8) = 0;
  *(unsigned int *)(puStack_4a0 + iVar8 + 4) = 0xffffffff;
  iVar7 = iVar9 * 0x10;
  *(unsigned int *)(puStack_4a0 + iVar8 + 8) = 0;
  *(unsigned int *)(puStack_4a0 + iVar8 + 0xc) = 0;
  *(unsigned int *)(puStack_4a0 + iVar7) = 1;
  *(unsigned int *)(puStack_4a0 + iVar7 + 4) = 0xffffffff;
  *(unsigned int *)(puStack_4a0 + iVar7 + 8) = 0;
  *(unsigned int *)(puStack_4a0 + iVar7 + 0xc) = 0;
  iVar8 = fn_82CE5410();
  if (auStack_5bc[0] == (auStack_5bc[1] & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),uVar5 - 0x5c0,4);
  }
  *(int *)(puStack_5c0 + auStack_5bc[0] * 4) = iVar6;
  auStack_5bc[0] = auStack_5bc[0] + 1;
  iVar6 = fn_82CE5410();
  if (uStack_530 == (uStack_52c & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
    fn_82CE63B0(*(unsigned int *)(iVar6 + 0x10),uVar5 - 0x534,4);
  }
  puStack_6e0 = auStack_6d4;
  puStack_650 = auStack_644;
  uVar12 = 0;
  bVar4 = false;
  *(int *)(puStack_534 + uStack_530 * 4) = iVar9;
  uStack_530 = uStack_530 + 1;
  iStack_6dc = 0;
  uStack_6d8 = 0x80000020;
  uStack_64c = 0;
  uStack_648 = 0x80000020;
  uVar15 = 0;
  do {
    iVar6 = (int)((uVar15 & 0x3fffffff) << 2);
    uVar14 = (unsigned __int64)*(unsigned int *)((int)auStack_710 + iVar6 + 0x10) + 1;
    uVar13 = 1 - uVar15;
    *(int *)((int)auStack_710 + iVar6 + 0x10) = (int)uVar14;
    iVar9 = (int)(uVar15 * 0x8c);
    if (*(int *)((int)auStack_5bc + iVar9) <= (int)uVar14) {
      iVar6 = fn_82CE5410();
      uStack_64c = 0;
      if ((uStack_648 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),puStack_650,uStack_648 & 0x3fffffff,4);
      }
      puStack_650 = (unsigned char *)0x0;
      uStack_648 = 0x80000000;
      iVar6 = fn_82CE5410();
      iStack_6dc = 0;
      if ((uStack_6d8 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),puStack_6e0,uStack_6d8 & 0x3fffffff,4);
      }
      puStack_6e0 = (unsigned char *)0x0;
      lVar16 = 1;
      uStack_6d8 = 0x80000000;
      lVar17 = uVar5 - 0x4a0;
      do {
        iVar6 = fn_82CE5410();
        puVar18 = (unsigned int *)(lVar17 + -0x8c);
        uVar2 = *puVar18;
        piVar3 = *(int **)(iVar6 + 0x10);
        iVar6 = (int)lVar17;
        *(unsigned int *)(iVar6 + -0x90) = 0;
        if ((uVar2 & 0x80000000) == 0) {
          (**(int (***)())(*piVar3 + 0x10))(piVar3,*(unsigned int *)(iVar6 + -0x94),uVar2 & 0x3fffffff,4);
        }
        lVar16 = lVar16 + -1;
        *(unsigned int *)(iVar6 + -0x94) = 0;
        *puVar18 = 0x80000000;
        lVar17 = lVar17 + -0x8c;
      } while (-1 < lVar16);
      iVar6 = fn_82CE5410();
      iStack_49c = 0;
      if ((uStack_498 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),puStack_4a0,uStack_498 & 0x3fffffff,0x10);
      }
      puStack_4a0 = (unsigned char *)0x0;
      uStack_498 = 0x80000000;
      iVar6 = fn_82CE5410();
      fn_82CEA4B8(uVar5 - 0x720,*(unsigned int *)(iVar6 + 0x10));
      fn_82BA02A8(uVar5 - 0x720);
      fn_82CE5410();
      return 1;
    }
    lVar17 = uVar15 * 0x8c + (uVar5 - 0x5c0);
    iVar9 = *(int *)((int)((uVar14 & 0xffffffff) << 2) + *(int *)(iVar9 + (int)(uVar5 - 0x5c0)));
    iStack_6dc = 0;
    uStack_64c = 0;
    fn_82DF5DB0(param_1,*(unsigned int *)(iVar9 * 4),uVar5 - 0x6e0,uVar5 - 0x650);
    iVar8 = 0;
    if (0 < iStack_6dc) {
      iVar7 = 0;
      do {
        if (bVar4) break;
        iVar10 = fn_82CEA220(uVar5 - 0x720,*(unsigned int *)(puStack_6e0 + iVar7));
        iVar10 = *(int *)(iVar10 * 8 + 4);
        iVar1 = iVar10 * 0x10;
        if (*(int *)(puStack_4a0 + iVar1) != (int)uVar15) {
          if (*(int *)(puStack_4a0 + iVar1) == (int)uVar13) {
            iVar7 = *(int *)(puStack_4a0 + iVar1 + 0xc);
            iVar11 = (int)((uVar13 & 0xffffffff) << 2);
            iVar1 = *(int *)(puStack_4a0 + iVar9 * 0x10 + 0xc);
            *(int *)((int)auStack_710 + iVar6) = iVar9;
            bVar4 = true;
            *(int *)((int)auStack_710 + iVar6 + 8) = iVar1 + 1;
            uVar12 = *(unsigned int *)(puStack_650 + iVar8 * 4);
            *(int *)((int)auStack_710 + iVar11 + 8) = iVar7 + 1;
            *(int *)((int)auStack_710 + iVar11) = iVar10;
            break;
          }
          iVar11 = fn_82CE5410();
          piVar3 = (int *)lVar17;
          if (piVar3[1] == (piVar3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),lVar17,4);
          }
          *(int *)(piVar3[1] * 4 + *piVar3) = iVar10;
          piVar3[1] = piVar3[1] + 1;
          *(int *)(puStack_4a0 + iVar1) = (int)uVar15;
          *(unsigned int *)(puStack_4a0 + iVar1 + 4) =
               *(unsigned int *)((int)((uVar14 & 0xffffffff) << 2) + *piVar3);
          *(unsigned int *)(puStack_4a0 + iVar1 + 8) = *(unsigned int *)(puStack_650 + iVar7);
          *(int *)(puStack_4a0 + iVar1 + 0xc) = *(int *)(puStack_4a0 + iVar9 * 0x10 + 0xc) + 1;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar8 < iStack_6dc);
    }
    uVar15 = uVar13;
    if (bVar4) {
      param_4[1] = 0;
      uVar15 = (unsigned __int64)auStack_710[3];
      lVar17 = uVar15 + auStack_710[2];
      iVar6 = fn_82CE5410();
      iVar9 = (int)lVar17;
      if ((int)(param_4[2] & 0x3fffffffU) < iVar9) {
        lVar16 = ((unsigned __int64)(unsigned int)param_4[2] & 0x3fffffff) << 1;
        if ((int)lVar16 <= iVar9) {
          lVar16 = lVar17;
        }
        fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),param_4,lVar16,4);
      }
      param_4[1] = iVar9;
      param_5[1] = 0;
      iVar6 = fn_82CE5410();
      if ((int)(param_5[2] & 0x3fffffffU) < iVar9) {
        lVar16 = ((unsigned __int64)(unsigned int)param_5[2] & 0x3fffffff) << 1;
        if ((int)lVar16 <= iVar9) {
          lVar16 = lVar17;
        }
        fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),param_5,lVar16,4);
      }
      uVar14 = (unsigned __int64)auStack_710[0];
      uVar13 = (unsigned __int64)auStack_710[2] - 1;
      param_5[1] = iVar9;
      if (0 < (__int64)uVar13) {
        lVar17 = (uVar13 & 0x3fffffff) << 2;
        do {
          iVar9 = (int)(uVar14 << 4);
          iVar6 = (int)lVar17;
          *(unsigned int *)(iVar6 + *param_4) = *(unsigned int *)(auStack_710[0] << 2);
          lVar17 = lVar17 + -4;
          *(unsigned int *)(iVar6 + *param_5 + -4) = *(unsigned int *)(puStack_4a0 + iVar9 + 8);
          auStack_710[0] = *(unsigned int *)(puStack_4a0 + iVar9 + 4);
          uVar14 = (unsigned __int64)auStack_710[0];
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      iVar6 = auStack_710[2] * 4;
      *(unsigned int *)*param_4 = *(unsigned int *)(uVar14 << 2);
      *(unsigned int *)(iVar6 + *param_5 + -4) = uVar12;
      if (0 < (int)auStack_710[3]) {
        do {
          *(unsigned int *)(iVar6 + *param_4) = *(unsigned int *)(auStack_710[1] * 4);
          *(unsigned int *)(iVar6 + *param_5) =
               *(unsigned int *)(puStack_4a0 + auStack_710[1] * 0x10 + 8);
          iVar6 = iVar6 + 4;
          auStack_710[1] = *(unsigned int *)(puStack_4a0 + auStack_710[1] * 0x10 + 4);
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      param_5[1] = param_5[1] + -1;
      iVar6 = fn_82CE5410();
      uStack_64c = 0;
      if ((uStack_648 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),puStack_650,uStack_648 & 0x3fffffff,4);
      }
      puStack_650 = (unsigned char *)0x0;
      uStack_648 = 0x80000000;
      iVar6 = fn_82CE5410();
      iStack_6dc = 0;
      if ((uStack_6d8 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),puStack_6e0,uStack_6d8 & 0x3fffffff,4);
      }
      puStack_6e0 = (unsigned char *)0x0;
      lVar16 = 1;
      uStack_6d8 = 0x80000000;
      lVar17 = uVar5 - 0x4a0;
      do {
        iVar6 = fn_82CE5410();
        puVar18 = (unsigned int *)(lVar17 + -0x8c);
        uVar2 = *puVar18;
        piVar3 = *(int **)(iVar6 + 0x10);
        iVar6 = (int)lVar17;
        *(unsigned int *)(iVar6 + -0x90) = 0;
        if ((uVar2 & 0x80000000) == 0) {
          (**(int (***)())(*piVar3 + 0x10))(piVar3,*(unsigned int *)(iVar6 + -0x94),uVar2 & 0x3fffffff,4);
        }
        lVar16 = lVar16 + -1;
        *(unsigned int *)(iVar6 + -0x94) = 0;
        *puVar18 = 0x80000000;
        lVar17 = lVar17 + -0x8c;
      } while (-1 < lVar16);
      iVar6 = fn_82CE5410();
      iStack_49c = 0;
      if ((uStack_498 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),puStack_4a0,uStack_498 & 0x3fffffff,0x10);
      }
      puStack_4a0 = (unsigned char *)0x0;
      uStack_498 = 0x80000000;
      iVar6 = fn_82CE5410();
      fn_82CEA4B8(uVar5 - 0x720,*(unsigned int *)(iVar6 + 0x10));
      fn_82BA02A8(uVar5 - 0x720);
      fn_82CE5410();
      return 0;
    }
  } while( true );
}

