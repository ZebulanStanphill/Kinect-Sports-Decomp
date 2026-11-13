typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82ABDD90();
extern int fn_82ABDEC0();
extern int fn_82ABDF50();
extern int fn_82ABE8C8();
extern int fn_82AD1AC8();
extern int fn_82AD2020();
extern int fn_82AD2128();
extern int fn_82B190C8();
extern int fn_82B1F248();
extern int fn_82B4AB48();
extern int fn_82B8F2B8();
extern int fn_82B8F328();
extern int fn_82F691F0();


__int64 fn_82B22850(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  bool bVar5;
  int iVar9;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  unsigned int uVar15;
  int *piVar16;
  __int64 lVar17;
  
  uVar1 = *(unsigned int *)(param_1 + 0x24);
  iVar9 = 0;
  if (uVar1 != 0) {
    uVar15 = uVar1 * 4;
    iVar14 = param_1 + 0x3cc;
    if (uVar15 < 0x85) {
      iVar9 = *(int *)(param_1 + 0x45c);
      if ((*(int *)(param_1 + 0x458) - iVar9) + 0x1000U < uVar15) {
        iVar9 = ((uVar1 & 0x3fffffff) - 1) * 4;
        puVar2 = *(unsigned int **)(iVar9 + iVar14);
        if (puVar2 != (unsigned int *)0x0) {
          *(unsigned int *)(iVar9 + iVar14) = *puVar2;
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(puVar2,0,uVar15);
        }
        iVar9 = fn_82ABDF50(iVar14);
      }
      else {
        *(unsigned int *)(param_1 + 0x45c) = iVar9 + uVar15;
      }
    }
    else {
      iVar9 = fn_82ABE8C8(iVar14);
    }
  }
  lVar17 = 0;
  for (uVar1 = *(unsigned int *)(param_2 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    iVar14 = *(int *)(uVar1 + 0x50);
    lVar6 = fn_82B1F248(param_1,uVar1,uVar1 + 0x10,iVar14 + 0x10,param_4);
    lVar7 = fn_82B1F248(param_1,uVar1,uVar1 + 0x18,iVar14 + 0x18,param_4);
    lVar8 = fn_82B1F248(param_1,uVar1,uVar1 + 0x20,iVar14 + 0x20,param_4);
    lVar17 = lVar8 + lVar7 + lVar6 + lVar17;
    if (((*(unsigned int *)(iVar14 + 0x4c) & 0x7ffff) != 0) &&
       (*(int *)((*(unsigned int *)(iVar14 + 0x4c) & 0x7ffff) * 4 + iVar9) == 0)) {
      if (*(int *)(param_1 + 0x2e8) != 0) {
        *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x24);
        uVar10 = fn_82ABDEC0(param_1,*(unsigned int *)(iVar14 + 0x4c) & 0x7ffff);
        *(unsigned int *)(param_1 + 0x2f0) = uVar10;
        fn_82B4AB48(param_1);
        *(unsigned int *)(param_1 + 0x20) = 0;
      }
      *(unsigned int *)((*(unsigned int *)(iVar14 + 0x4c) & 0x7ffff) * 4 + iVar9) =
           *(unsigned int *)(param_1 + 0x24);
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
  }
  for (uVar1 = *(unsigned int *)(param_2 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    fn_82B190C8(param_1,(unsigned __int64)*(unsigned int *)(uVar1 + 0x50) + 0x10,param_3,param_4);
    fn_82B190C8(param_1,(unsigned __int64)*(unsigned int *)(uVar1 + 0x50) + 0x18,param_3,param_4);
    fn_82B190C8(param_1,(unsigned __int64)*(unsigned int *)(uVar1 + 0x50) + 0x20,param_3,param_4);
  }
  for (uVar1 = *(unsigned int *)(param_2 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    iVar14 = *(int *)(uVar1 + 0x50);
    lVar6 = 0;
    piVar16 = (int *)(uVar1 + 0x5c);
    do {
      iVar11 = *(int *)((iVar14 - uVar1) + (int)piVar16);
      if (iVar11 != 0) {
        if ((param_4 & 0xff) != 0) {
          while ((*(unsigned int *)(iVar11 + 8) >> 0x1a & 1) == 0) {
            iVar11 = fn_82AD1AC8(iVar11,lVar6);
            if (iVar11 == 0) {
              iVar11 = 0;
              break;
            }
            iVar11 = *(int *)(iVar11 + 0xc);
          }
        }
        if (iVar11 != 0) {
          iVar13 = *(int *)(iVar11 + 0x20);
          if (*piVar16 != 0) {
            fn_82AD2128(iVar13,lVar6,*piVar16,param_1);
          }
          *piVar16 = iVar13;
          *(unsigned int *)(iVar13 + 8) = *(unsigned int *)(iVar13 + 8) | 0x2000000;
          while (iVar11 = fn_82AD1AC8(iVar11,lVar6), iVar11 != 0) {
            iVar11 = *(int *)(iVar11 + 0xc);
            if ((*(unsigned int *)(iVar11 + 8) >> 0x1a & 1) != 0) {
              iVar12 = *(int *)(iVar11 + 0x20);
              fn_82AD2128(iVar13,lVar6,iVar12,param_1);
              iVar13 = iVar12;
            }
          }
        }
      }
      lVar6 = lVar6 + 1;
      piVar16 = piVar16 + 1;
    } while ((int)lVar6 < 4);
    if ((*(unsigned int *)(iVar14 + 0x30) >> 0x15 & 1) != 0) {
      if ((param_4 & 0xff) == 0) {
LAB_82b22be4:
        *(unsigned int *)(uVar1 + 0x30) = *(unsigned int *)(uVar1 + 0x30) | 0x200000;
      }
      else {
        for (iVar11 = *(int *)(iVar14 + 8); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
          iVar13 = *(int *)(iVar11 + 4);
          iVar12 = fn_82AD2020(param_1,iVar13);
          if ((iVar12 != 0) && ((*(unsigned int *)(iVar12 + 8) >> 0x1a & 1) != 0)) {
            uVar15 = *(unsigned int *)(iVar12 + 8) >> 7 & 0x7f;
            if ((uVar15 == 0x56) || (bVar5 = false, uVar15 == 0x57)) {
              bVar5 = true;
            }
            if (bVar5) {
              if (iVar13 != 0) goto LAB_82b22be4;
              break;
            }
          }
        }
      }
    }
    if ((*(unsigned int *)(iVar14 + 0x30) & 0x10000000) != 0) {
      *(unsigned int *)(uVar1 + 0x30) = *(unsigned int *)(uVar1 + 0x30) | 0x10000000;
    }
    if ((*(unsigned int *)(iVar14 + 0x30) & 0x20000000) != 0) {
      *(unsigned int *)(uVar1 + 0x30) = *(unsigned int *)(uVar1 + 0x30) | 0x20000000;
    }
    if ((iVar9 != 0) && ((*(unsigned int *)(iVar14 + 0x4c) & 0x7ffff) != 0)) {
      *(unsigned int *)(uVar1 + 0x4c) =
           *(unsigned int *)(uVar1 + 0x4c) & 0xfff80000 |
           *(unsigned int *)((*(unsigned int *)(iVar14 + 0x4c) & 0x7ffff) * 4 + iVar9) & 0x7ffff;
    }
    *(unsigned int *)(uVar1 + 0x44) =
         *(unsigned int *)(iVar14 + 0x44) & 0xfffffff | *(unsigned int *)(uVar1 + 0x44) & 0xf0000000;
    if ((*(unsigned int *)(iVar14 + 0x30) >> 0x17 & 1) != 0) {
      *(unsigned int *)(uVar1 + 0x30) =
           *(unsigned int *)(iVar14 + 0x30) & 0x800000 | *(unsigned int *)(uVar1 + 0x30) & 0xff7fffff;
      *(unsigned int *)(uVar1 + 0x4c) =
           *(unsigned int *)(uVar1 + 0x4c) & 0xffbfffff | *(unsigned int *)(iVar14 + 0x4c) & 0x400000;
      uVar15 = *(unsigned int *)(uVar1 + 0x4c);
      uVar3 = *(unsigned int *)(iVar14 + 0x4c) & 0x800000;
      *(unsigned int *)(uVar1 + 0x4c) = uVar15 & 0xff7fffff | uVar3;
      *(unsigned int *)(uVar1 + 0x70) = *(unsigned int *)(iVar14 + 0x70);
      uVar4 = *(unsigned int *)(iVar14 + 0x4c) & 0x1000000;
      *(unsigned int *)(uVar1 + 0x4c) = uVar15 & 0xfe7fffff | uVar3 | uVar4;
      *(unsigned int *)(uVar1 + 0x4c) =
           uVar15 & 0xfc7fffff | uVar3 | uVar4 | *(unsigned int *)(iVar14 + 0x4c) & 0x2000000;
      *(unsigned int *)(uVar1 + 0x6c) = *(unsigned int *)(iVar14 + 0x6c);
      *(unsigned int *)(uVar1 + 0x48) = *(unsigned int *)(iVar14 + 0x48);
      iVar11 = *(int *)(iVar14 + 0x70);
      if ((iVar11 != 0) && ((unsigned __int64)*(unsigned int *)(iVar11 + 0x2c) == (param_3 & 0xffffffff))) {
        *(unsigned int *)(uVar1 + 0x70) = *(unsigned int *)(iVar11 + 0x50);
      }
      iVar11 = *(int *)(iVar14 + 0x6c);
      if ((iVar11 != 0) && ((unsigned __int64)*(unsigned int *)(iVar11 + 0x2c) == (param_3 & 0xffffffff))) {
        *(unsigned int *)(uVar1 + 0x6c) = *(unsigned int *)(iVar11 + 0x50);
      }
    }
    uVar15 = *(unsigned int *)(uVar1 + 0x30);
    uVar3 = *(unsigned int *)(iVar14 + 0x30) & 0x8000000;
    *(unsigned int *)(uVar1 + 0x30) = uVar3 | uVar15 & 0xf7ffffff;
    *(unsigned int *)(uVar1 + 0x30) = *(unsigned int *)(iVar14 + 0x30) & 0x2000000 | uVar3 | uVar15 & 0xf5ffffff;
    *(unsigned int *)(uVar1 + 0x30) =
         *(unsigned int *)(iVar14 + 0x30) & 0x1000000 | *(unsigned int *)(uVar1 + 0x30) & 0xfeffffff;
    *(unsigned int *)(uVar1 + 0x44) =
         *(unsigned int *)(uVar1 + 0x44) & 0x7fffffff | *(unsigned int *)(iVar14 + 0x44) & 0x80000000;
    *(unsigned int *)(uVar1 + 0x44) =
         *(unsigned int *)(iVar14 + 0x44) & 0x40000000 | *(unsigned int *)(uVar1 + 0x44) & 0xbfffffff;
    *(unsigned int *)(uVar1 + 0x4c) =
         *(unsigned int *)(uVar1 + 0x4c) & 0xefffffff | *(unsigned int *)(iVar14 + 0x4c) & 0x10000000;
  }
  uVar1 = *(unsigned int *)(param_2 + 4);
  do {
    if (((uVar1 & 1) != 0) || (uVar1 == 0)) {
      for (uVar1 = *(unsigned int *)(param_2 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
          uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
        if ((*(int *)(uVar1 + 0xc) == 0) || (bVar5 = true, *(int *)(*(int *)(uVar1 + 0xc) + 8) == 0)
           ) {
          bVar5 = false;
        }
        if (bVar5) {
          *(unsigned int *)(uVar1 + 0x30) =
               *(unsigned int *)(uVar1 + 0x30) & 0xfbffffff |
               *(unsigned int *)(*(int *)(uVar1 + 0x50) + 0x30) & 0x4000000;
        }
      }
      return lVar17;
    }
    iVar9 = *(int *)(uVar1 + 0x50);
    for (iVar14 = *(int *)(iVar9 + 8); iVar14 != 0; iVar14 = *(int *)(iVar14 + 0xc)) {
      iVar11 = *(int *)(iVar14 + 4);
      bVar5 = (param_4 & 0xff) == 0;
      if ((unsigned __int64)*(unsigned int *)(iVar11 + 0x2c) == (param_3 & 0xffffffff)) {
        if (((!bVar5) && (iVar13 = fn_82AD2020(param_1,iVar11), iVar13 != 0)) &&
           ((*(unsigned int *)(iVar13 + 8) >> 0x1a & 1) == 0)) {
          uVar15 = *(unsigned int *)(iVar13 + 8);
          iVar12 = fn_82ABDD90(param_1,uVar15 >> 7 & 0x7f,uVar15 >> 0x13 & 7,uVar15 >> 0xe & 7);
          if (iVar9 == *(int *)(iVar12 + iVar13 + -0x10)) goto LAB_82b22e24;
        }
        iVar11 = *(int *)(iVar11 + 0x50);
LAB_82b22e14:
        fn_82B8F2B8(uVar1,iVar11,param_1);
      }
      else if (bVar5) goto LAB_82b22e14;
LAB_82b22e24:;}
    for (piVar16 = *(int **)(iVar9 + 0xc); piVar16 != (int *)0x0; piVar16 = (int *)piVar16[2]) {
      if (((unsigned __int64)*(unsigned int *)(*piVar16 + 0x2c) != (param_3 & 0xffffffff)) &&
         ((param_4 & 0xff) == 0)) {
        fn_82B8F328(uVar1,*piVar16,param_1);
      }
    }
    iVar9 = fn_82AD2020(param_1,uVar1);
    if (iVar9 != 0) {
      uVar15 = *(unsigned int *)(iVar9 + 8);
      iVar14 = fn_82ABDD90(param_1,uVar15 >> 7 & 0x7f,uVar15 >> 0x13 & 7,uVar15 >> 0xe & 7);
      piVar16 = (int *)(iVar14 + iVar9 + -0x10);
      iVar9 = *piVar16;
      if ((unsigned __int64)*(unsigned int *)(iVar9 + 0x2c) == (param_3 & 0xffffffff)) {
        *piVar16 = *(int *)(iVar9 + 0x50);
      }
      else if ((piVar16[3] & 0x10U) == 0) {
        for (piVar16 = *(int **)(uVar1 + 0xc); piVar16 != (int *)0x0; piVar16 = (int *)piVar16[2]) {
          if (iVar9 == *piVar16) {
            bVar5 = true;
            goto LAB_82b22eec;
          }
        }
        bVar5 = false;
LAB_82b22eec:
        if (!bVar5) {
          fn_82B8F328(uVar1,iVar9,param_1);
        }
      }
    }
    uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
  } while( true );
}

