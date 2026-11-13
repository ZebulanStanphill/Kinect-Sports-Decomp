#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define BADSPACEBASE char
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82924628();
extern int fn_82B8FDD0();
extern int fn_82F691F0();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_82B98F88(int param_1,__int64 param_2,int param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned int uVar20;
  __int64 lVar21;
  
  lVar8 = ZEXT48(&stack0x00000000) - 0xc0;
  iVar4 = (int)lVar8;
  *(BADSPACEBASE **)iVar4 = register0x0000000c;
  param_3 = *(int *)(param_1 + 0x4c) + param_3;
  uVar18 = param_2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0xf8) == 0) {
    uVar18 = (__int64)*(int *)(param_1 + 0xe0) * (__int64)*(int *)(param_1 + 0xe4);
    lVar8 = (uVar18 & 0x1fffffff) << 3;
    if (0x1fffffff < (uVar18 & 0xffffffff)) {
      lVar8 = -1;
    }
    uVar18 = fn_8265C9E0(lVar8);
    *(int *)(param_1 + 0xf8) = (int)uVar18;
    if ((uVar18 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar18,0,((__int64)*(int *)(param_1 + 0xe0) * (__int64)*(int *)(param_1 + 0xe4)
                            & 0x1fffffffU) << 3);
    }
  }
  else {
    lVar17 = ((__int64)(param_3 - *(int *)(param_1 + 0xd4)) * (__int64)*(int *)(param_1 + 0xe0) +
              ((uVar18 - *(unsigned int *)(param_1 + 200) & 0xffffffff) >> 2) & 0x1fffffff) * 8 +
             (unsigned __int64)*(unsigned int *)(param_1 + 0xf8);
    puVar1 = (unsigned int *)lVar17;
    if (puVar1[1] == 0) {
      lVar9 = ((unsigned __int64)*(unsigned int *)(param_1 + 0xdc) & 0xffffff) << 8;
      if (0xfffffff < ((unsigned __int64)*(unsigned int *)(param_1 + 0xdc) & 0xfffffff) << 4) {
        lVar9 = -1;
      }
      uVar10 = fn_8265C9E0(lVar9);
      puVar1[1] = uVar10;
      if (uVar10 == 0) {
        return;
      }
      *puVar1 = 0;
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    }
    uVar10 = (unsigned int)uVar18;
    if (*puVar1 == 0) {
      uVar15 = uVar18 & 0xfffffffc;
      if (((uVar15 < *(unsigned int *)(param_1 + 0x40)) &&
          (*(unsigned int *)(param_1 + 0x98) < *(unsigned int *)(param_1 + 0x40))) ||
         (((unsigned __int64)*(unsigned int *)(param_1 + 0x48) < (uVar15 + 4 & 0xffffffff) &&
          (*(unsigned int *)(param_1 + 0x48) < *(unsigned int *)(param_1 + 0xa0))))) {
        uVar20 = *(unsigned int *)(param_1 + 0xc4);
        uVar19 = (unsigned __int64)puVar1[1];
        lVar9 = (__int64)(int)(uVar10 >> 2) * (__int64)*(int *)(param_1 + 0x60) +
                (__int64)(int)(uVar20 >> 2) * (__int64)*(int *)(param_1 + 0x88) +
                (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
                (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
        if (uVar20 < *(unsigned int *)(param_1 + 0xcc)) {
          do {
            (**(int (***)())(param_1 + 0x8c))(uVar19,lVar9);
            uVar20 = uVar20 + 4;
            uVar19 = uVar19 + 0x100;
            lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88) + lVar9;
          } while (uVar20 < *(unsigned int *)(param_1 + 0xcc));
        }
      }
      else {
        if ((*(unsigned int *)(param_1 + 0xc4) < *(unsigned int *)(param_1 + 0x3c)) &&
           (*(unsigned int *)(param_1 + 0x94) < *(unsigned int *)(param_1 + 0x3c))) {
          (**(int (***)())(param_1 + 0x8c))
                    (puVar1[1],
                     (__int64)(int)(*(unsigned int *)(param_1 + 0xc4) >> 2) *
                     (__int64)*(int *)(param_1 + 0x88) +
                     (__int64)(int)((uVar18 & 0xffffffff) >> 2) *
                     (__int64)*(int *)(param_1 + 0x60) +
                     (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
                     (unsigned __int64)*(unsigned int *)(param_1 + 0x20));
        }
        if ((*(unsigned int *)(param_1 + 0x44) < *(unsigned int *)(param_1 + 0xcc)) &&
           (*(unsigned int *)(param_1 + 0x44) < *(unsigned int *)(param_1 + 0x9c))) {
          (**(int (***)())(param_1 + 0x8c))
                    (puVar1[1],
                     (__int64)(int)(*(unsigned int *)(param_1 + 0xcc) - 4 >> 2) *
                     (__int64)*(int *)(param_1 + 0x88) +
                     (__int64)(int)(uVar10 >> 2) * (__int64)*(int *)(param_1 + 0x60) +
                     (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
                     (unsigned __int64)*(unsigned int *)(param_1 + 0x20));
        }
      }
      lVar9 = 0;
      lVar21 = 4;
      do {
        if (((lVar9 + uVar15 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x40)) ||
           ((unsigned __int64)*(unsigned int *)(param_1 + 0x48) <= (lVar9 + uVar15 & 0xffffffff))) {
          *puVar1 = 1 << ((unsigned int)lVar9 & 0x3f) | *puVar1;
        }
        lVar9 = lVar9 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      param_4 = (unsigned int *)fn_82924628(param_1,param_4);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      param_4 = (unsigned int *)fn_82B8FDD0(param_1,param_4);
    }
    uVar20 = *(unsigned int *)(param_1 + 200);
    uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3c) - (unsigned __int64)*(unsigned int *)(param_1 + 0xc4);
    uVar19 = *(unsigned int *)(param_1 + 0x68) + uVar15;
    if ((uVar15 & 0xffffffff) < (uVar19 & 0xffffffff)) {
      lVar9 = uVar19 - uVar15;
      do {
        lVar9 = lVar9 + -1;
        iVar5 = ((unsigned int)((uVar15 & 0x3fffffc | uVar18 - uVar20 & 3) << 2) | (unsigned int)uVar15 & 3) * 0x10;
        iVar2 = iVar5 + puVar1[1];
        *(unsigned int *)(iVar5 + puVar1[1]) = *param_4;
        *(unsigned int *)(iVar2 + 4) = param_4[1];
        *(unsigned int *)(iVar2 + 8) = param_4[2];
        puVar3 = param_4 + 3;
        param_4 = param_4 + 4;
        *(unsigned int *)(iVar2 + 0xc) = *puVar3;
        uVar15 = uVar15 + 1;
      } while (lVar9 != 0);
    }
    uVar20 = 1 << (uVar10 & 3) | *puVar1;
    *puVar1 = uVar20;
    if (uVar20 == 0xf) {
      uVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc4);
      uVar20 = puVar1[1];
      lVar9 = (__int64)(int)(uVar10 >> 2) * (__int64)*(int *)(param_1 + 0x60) +
              (__int64)(int)(*(unsigned int *)(param_1 + 0xc4) >> 2) * (__int64)*(int *)(param_1 + 0x88) +
              (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
              (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
      if (uVar15 < *(unsigned int *)(param_1 + 0xcc)) {
        *(unsigned int *)(iVar4 + 0x50) = 0;
        *(unsigned int *)(iVar4 + 0x54) = 0;
        *(unsigned int *)(iVar4 + 0x58) = 0;
        *(unsigned int *)(iVar4 + 0x5c) = 1;
        do {
          uVar13 = *(unsigned int *)(param_1 + 0x9c) - uVar15;
          uVar19 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa0) - (uVar18 & 0xfffffffc);
          if (((uVar13 & 0xffffffff) < 4) && (uVar11 = 0, (uVar19 & 0xffffffff) != 0)) {
            do {
              if (3 < (uVar11 & 0xffffffff)) break;
              lVar21 = (uVar13 & 0x3fffffff) * 4 + lVar8 + 0x4c;
              lVar16 = 4 - uVar13;
              uVar14 = uVar13;
              do {
                lVar21 = lVar21 + 4;
                lVar16 = lVar16 + -1;
                uVar10 = (unsigned int)((uVar11 & 0x3fffffff) << 2);
                iVar6 = (uVar10 | (unsigned int)uVar14) * 0x10;
                iVar5 = (uVar10 | *(unsigned int *)lVar21) * 0x10;
                iVar2 = iVar6 + uVar20;
                iVar4 = iVar5 + uVar20;
                uVar14 = uVar14 + 1;
                *(unsigned int *)(iVar6 + uVar20) = *(unsigned int *)(iVar5 + uVar20);
                *(unsigned int *)(iVar2 + 4) = *(unsigned int *)(iVar4 + 4);
                *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(iVar4 + 8);
                *(unsigned int *)(iVar2 + 0xc) = *(unsigned int *)(iVar4 + 0xc);
              } while (lVar16 != 0);
              uVar11 = uVar11 + 1;
            } while ((uVar11 & 0xffffffff) < (uVar19 & 0xffffffff));
          }
          if ((uVar19 & 0xffffffff) < 4) {
            lVar21 = (uVar19 & 0x3fffffff) * 4 + (ZEXT48(&stack0x00000000) - 0x70);
            do {
              iVar4 = *(int *)lVar21;
              uVar10 = 0;
              lVar16 = 4;
              do {
                iVar6 = (uVar10 | iVar4 << 2) * 0x10;
                iVar7 = ((unsigned int)((uVar19 & 0x3fffffff) << 2) | uVar10) * 0x10;
                iVar2 = iVar6 + uVar20;
                iVar5 = iVar7 + uVar20;
                lVar16 = lVar16 + -1;
                uVar10 = uVar10 + 1;
                *(unsigned int *)(iVar7 + uVar20) = *(unsigned int *)(iVar6 + uVar20);
                *(unsigned int *)(iVar5 + 4) = *(unsigned int *)(iVar2 + 4);
                *(unsigned int *)(iVar5 + 8) = *(unsigned int *)(iVar2 + 8);
                *(unsigned int *)(iVar5 + 0xc) = *(unsigned int *)(iVar2 + 0xc);
              } while (lVar16 != 0);
              uVar19 = uVar19 + 1;
              lVar21 = lVar21 + 4;
            } while ((uVar19 & 0xffffffff) < 4);
          }
          if ((*(int *)(param_1 + 0xfc) != 0) || (uVar12 = 0, *(int *)(param_1 + 0x5c) != 0)) {
            uVar12 = 1;
          }
          (**(int (***)())(param_1 + 0x90))(lVar9,uVar20,uVar12);
          uVar15 = uVar15 + 4;
          uVar20 = uVar20 + 0x100;
          lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88) + lVar9;
        } while ((uVar15 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xcc));
      }
      uVar18 = lVar17 + 8;
      if ((((uVar18 & 0xffffffff) <
            (((__int64)*(int *)(param_1 + 0xe4) * (__int64)*(int *)(param_1 + 0xe0) & 0x1fffffffU)
             * 8 + (unsigned __int64)*(unsigned int *)(param_1 + 0xf8) & 0xffffffff)) && (*(int *)uVar18 == 0)) &&
         (puVar1[3] == 0)) {
        uVar10 = puVar1[1];
        puVar1[1] = 0;
        puVar1[3] = uVar10;
      }
      else {
        fn_8265CA20(puVar1[1]);
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
      }
      puVar1[1] = 0;
    }
  }
  return;
}

