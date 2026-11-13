#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define BADSPACEBASE char
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82924628();
extern int fn_829252C0();
extern int fn_82F691F0();
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


void fn_8292ECE8(int param_1,__int64 param_2,int param_3,int param_4)

{
  __int64 lVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar9;
  unsigned __int64 uVar8;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  __int64 lVar18;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xc0;
  iVar2 = (int)lVar1;
  *(BADSPACEBASE **)iVar2 = register0x0000000c;
  param_3 = *(int *)(param_1 + 0x4c) + param_3;
  uVar14 = param_2 + (unsigned __int64)*(unsigned int *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0xf8) == 0) {
    uVar14 = fn_8265C940(((__int64)*(int *)(param_1 + 0xe0) *
                                (__int64)*(int *)(param_1 + 0xe4) & 0x1fffffffU) << 3,0x24810000);
    *(int *)(param_1 + 0xf8) = (int)uVar14;
    if ((uVar14 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(uVar14,0,((__int64)*(int *)(param_1 + 0xe0) * (__int64)*(int *)(param_1 + 0xe4)
                            & 0x1fffffffU) << 3);
    }
  }
  else {
    lVar13 = ((__int64)(param_3 - *(int *)(param_1 + 0xd4)) * (__int64)*(int *)(param_1 + 0xe0) +
              ((uVar14 - *(unsigned int *)(param_1 + 200) & 0xffffffff) >> 2) & 0x1fffffff) * 8 +
             (unsigned __int64)*(unsigned int *)(param_1 + 0xf8);
    puVar3 = (unsigned int *)lVar13;
    if (puVar3[1] == 0) {
      uVar4 = fn_8265C940(*(int *)(param_1 + 0xdc) << 8,0x24810000);
      puVar3[1] = uVar4;
      if (uVar4 == 0) {
        return;
      }
      *puVar3 = 0;
      *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + 1;
    }
    uVar4 = (unsigned int)uVar14;
    if (*puVar3 == 0) {
      uVar11 = uVar14 & 0xfffffffc;
      if (((uVar11 < *(unsigned int *)(param_1 + 0x40)) &&
          (*(unsigned int *)(param_1 + 0x98) < *(unsigned int *)(param_1 + 0x40))) ||
         (((unsigned __int64)*(unsigned int *)(param_1 + 0x48) < (uVar11 + 4 & 0xffffffff) &&
          (*(unsigned int *)(param_1 + 0x48) < *(unsigned int *)(param_1 + 0xa0))))) {
        uVar17 = *(unsigned int *)(param_1 + 0xc4);
        uVar16 = (unsigned __int64)puVar3[1];
        lVar15 = (__int64)(int)(uVar4 >> 2) * (__int64)*(int *)(param_1 + 0x60) +
                 (__int64)(int)(uVar17 >> 2) * (__int64)*(int *)(param_1 + 0x88) +
                 (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
                 (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
        if (uVar17 < *(unsigned int *)(param_1 + 0xcc)) {
          do {
            (**(int (***)())(param_1 + 0x8c))(uVar16,lVar15);
            uVar17 = uVar17 + 4;
            uVar16 = uVar16 + 0x100;
            lVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88) + lVar15;
          } while (uVar17 < *(unsigned int *)(param_1 + 0xcc));
        }
      }
      else {
        if ((*(unsigned int *)(param_1 + 0xc4) < *(unsigned int *)(param_1 + 0x3c)) &&
           (*(unsigned int *)(param_1 + 0x94) < *(unsigned int *)(param_1 + 0x3c))) {
          (**(int (***)())(param_1 + 0x8c))
                    (puVar3[1],
                     (__int64)(int)(*(unsigned int *)(param_1 + 0xc4) >> 2) *
                     (__int64)*(int *)(param_1 + 0x88) +
                     (__int64)(int)((uVar14 & 0xffffffff) >> 2) *
                     (__int64)*(int *)(param_1 + 0x60) +
                     (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
                     (unsigned __int64)*(unsigned int *)(param_1 + 0x20));
        }
        if ((*(unsigned int *)(param_1 + 0x44) < *(unsigned int *)(param_1 + 0xcc)) &&
           (*(unsigned int *)(param_1 + 0x44) < *(unsigned int *)(param_1 + 0x9c))) {
          (**(int (***)())(param_1 + 0x8c))
                    (puVar3[1],
                     (__int64)(int)(*(unsigned int *)(param_1 + 0xcc) - 4 >> 2) *
                     (__int64)*(int *)(param_1 + 0x88) +
                     (__int64)(int)(uVar4 >> 2) * (__int64)*(int *)(param_1 + 0x60) +
                     (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
                     (unsigned __int64)*(unsigned int *)(param_1 + 0x20));
        }
      }
      lVar15 = 0;
      lVar18 = 4;
      do {
        if (((lVar15 + uVar11 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x40)) ||
           ((unsigned __int64)*(unsigned int *)(param_1 + 0x48) <= (lVar15 + uVar11 & 0xffffffff))) {
          *puVar3 = 1 << ((unsigned int)lVar15 & 0x3f) | *puVar3;
        }
        lVar15 = lVar15 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      param_4 = fn_82924628(param_1,param_4);
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      param_4 = fn_829252C0(param_1,param_4);
    }
    uVar17 = *(unsigned int *)(param_1 + 200);
    uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x3c) - (unsigned __int64)*(unsigned int *)(param_1 + 0xc4);
    uVar16 = *(unsigned int *)(param_1 + 0x68) + uVar11;
    if ((uVar11 & 0xffffffff) < (uVar16 & 0xffffffff)) {
      lVar15 = uVar16 - uVar11;
      puVar10 = (unsigned int *)(param_4 + -4);
      do {
        puVar9 = (unsigned int *)
                 (((unsigned int)((uVar11 & 0x3ffffffc | uVar14 - uVar17 & 3) << 2) | (unsigned int)uVar11 & 3) *
                  0x10 + puVar3[1]);
        *puVar9 = puVar10[1];
        puVar9[1] = puVar10[2];
        puVar9[2] = puVar10[3];
        puVar10 = puVar10 + 4;
        puVar9[3] = *puVar10;
        lVar15 = lVar15 + -1;
        uVar11 = uVar11 + 1;
      } while (lVar15 != 0);
    }
    uVar17 = 1 << (uVar4 & 3) | *puVar3;
    *puVar3 = uVar17;
    if (uVar17 == 0xf) {
      uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc4);
      uVar17 = puVar3[1];
      lVar15 = (__int64)(int)(uVar4 >> 2) * (__int64)*(int *)(param_1 + 0x60) +
               (__int64)(int)(*(unsigned int *)(param_1 + 0xc4) >> 2) * (__int64)*(int *)(param_1 + 0x88)
               + (__int64)*(int *)(param_1 + 100) * (__int64)param_3 +
               (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
      if (uVar11 < *(unsigned int *)(param_1 + 0xcc)) {
        *(unsigned int *)(iVar2 + 0x50) = 0;
        *(unsigned int *)(iVar2 + 0x54) = 0;
        *(unsigned int *)(iVar2 + 0x58) = 0;
        *(unsigned int *)(iVar2 + 0x5c) = 1;
        do {
          uVar7 = *(unsigned int *)(param_1 + 0x9c) - uVar11;
          uVar16 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa0) - (uVar14 & 0xfffffffc);
          if (((uVar7 & 0xffffffff) < 4) && (uVar5 = 0, (uVar16 & 0xffffffff) != 0)) {
            do {
              if (3 < (uVar5 & 0xffffffff)) break;
              lVar12 = 4 - uVar7;
              lVar18 = (uVar7 & 0x3fffffff) * 4 + lVar1 + 0x4c;
              uVar8 = uVar7;
              do {
                lVar18 = lVar18 + 4;
                uVar4 = (unsigned int)((uVar5 & 0x3fffffff) << 2);
                puVar9 = (unsigned int *)((uVar4 | (unsigned int)uVar8) * 0x10 + uVar17);
                puVar10 = (unsigned int *)((uVar4 | *(unsigned int *)lVar18) * 0x10 + uVar17);
                *puVar9 = *puVar10;
                puVar9[1] = puVar10[1];
                puVar9[2] = puVar10[2];
                puVar9[3] = puVar10[3];
                lVar12 = lVar12 + -1;
                uVar8 = uVar8 + 1;
              } while (lVar12 != 0);
              uVar5 = uVar5 + 1;
            } while ((uVar5 & 0xffffffff) < (uVar16 & 0xffffffff));
          }
          if ((uVar16 & 0xffffffff) < 4) {
            lVar18 = (uVar16 & 0x3fffffff) * 4 + (ZEXT48(&stack0x00000000) - 0x70);
            do {
              iVar2 = *(int *)lVar18;
              uVar4 = 0;
              lVar12 = 4;
              do {
                puVar9 = (unsigned int *)((iVar2 << 2 | uVar4) * 0x10 + uVar17);
                puVar10 = (unsigned int *)
                          ((uVar4 | (unsigned int)((uVar16 & 0x3fffffff) << 2)) * 0x10 + uVar17);
                uVar4 = uVar4 + 1;
                *puVar10 = *puVar9;
                puVar10[1] = puVar9[1];
                puVar10[2] = puVar9[2];
                puVar10[3] = puVar9[3];
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
              uVar16 = uVar16 + 1;
              lVar18 = lVar18 + 4;
            } while ((uVar16 & 0xffffffff) < 4);
          }
          if ((*(int *)(param_1 + 0xfc) != 0) || (uVar6 = 0, *(int *)(param_1 + 0x5c) != 0)) {
            uVar6 = 1;
          }
          (**(int (***)())(param_1 + 0x90))(lVar15,uVar17,uVar6);
          uVar11 = uVar11 + 4;
          uVar17 = uVar17 + 0x100;
          lVar15 = (unsigned __int64)*(unsigned int *)(param_1 + 0x88) + lVar15;
        } while ((uVar11 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xcc));
      }
      uVar14 = lVar13 + 8;
      if ((((uVar14 & 0xffffffff) <
            (((__int64)*(int *)(param_1 + 0xe4) * (__int64)*(int *)(param_1 + 0xe0) & 0x1fffffffU)
             * 8 + (unsigned __int64)*(unsigned int *)(param_1 + 0xf8) & 0xffffffff)) && (*(int *)uVar14 == 0)) &&
         (puVar3[3] == 0)) {
        uVar4 = puVar3[1];
        puVar3[1] = 0;
        puVar3[3] = uVar4;
      }
      else {
        fn_8265C990(puVar3[1],0x24810000);
        *(int *)(param_1 + 0xf4) = *(int *)(param_1 + 0xf4) + -1;
      }
      puVar3[1] = 0;
    }
  }
  return;
}

