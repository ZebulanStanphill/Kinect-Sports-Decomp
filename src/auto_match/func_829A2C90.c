typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_f0;
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C28;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8201546C;
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_82021540;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_104;


/* WARNING: Type propagation algorithm not settling */

__int64 fn_829A2C90(int param_1)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  bool bVar6;
  unsigned int *puVar8;
  int iVar9;
  unsigned int *puVar10;
  __int64 lVar7;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar17;
  int iVar18;
  unsigned int *puVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  int *piVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  int *piVar27;
  int *piVar28;
  unsigned int uVar29;
  unsigned __int64 uVar30;
  __int64 lVar31;
  unsigned int uVar32;
  double dVar33;
  double dVar34;
  unsigned int uStack_104;
  int aiStack_100 [4];
  unsigned int auStack_f0 [60];
  
  uVar25 = 0;
  piVar28 = (int *)(*(unsigned int **)(param_1 + 0x104))[2];
  dVar34 = (double)lbl_82005344;
  uVar29 = **(unsigned int **)(param_1 + 0x104);
  piVar14 = (int *)0x0;
  iVar18 = *(int *)(param_1 + 0x88);
  bVar6 = false;
  uVar20 = uVar29 & 0xfffff;
  piVar24 = piVar28 + (uVar29 & 0xfffff);
  iVar9 = *(int *)(*piVar28 * 4 + *(int *)(param_1 + 0x14));
  iVar16 = *(int *)(*piVar24 * 4 + *(int *)(param_1 + 0x14));
  if ((((*(int *)(iVar9 + 4) == iVar18) &&
       ((*(unsigned int *)(*(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0)
       ) && (piVar27 = piVar28, piVar13 = piVar24,
            (**(unsigned int **)(param_1 + 0x104) & 0xfff00000) == 0x20500000)) ||
     (((*(int *)(iVar16 + 4) == iVar18 &&
       ((*(unsigned int *)(*(int *)(*(int *)(iVar9 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0))
      && (piVar27 = piVar24, piVar13 = piVar28,
         (**(unsigned int **)(param_1 + 0x104) & 0xfff00000) == 0x20500000)))) {
    dVar33 = *(double *)(*(int *)(*piVar13 * 4 + *(int *)(param_1 + 0x14)) + 0x20);
    piVar28 = piVar27;
    piVar14 = piVar13;
LAB_829a2d60:
    dVar33 = (double)(float)dVar33;
    uVar26 = 0;
    if ((uVar29 & 0xfffff) != 0) {
      iVar18 = *(int *)(param_1 + 0x14);
      iVar9 = *(int *)(param_1 + 0x100);
      puVar8 = &uStack_104;
      iVar16 = (int)piVar28 - (int)piVar14;
      do {
        iVar3 = *(int *)(*(int *)(iVar16 + (int)piVar14) * 4 + iVar18);
        if (bVar6) {
          iVar15 = 0;
        }
        else {
          iVar15 = *(int *)(*piVar14 * 4 + iVar18);
        }
        if (((*(int *)(iVar3 + 0x58) != iVar9) || (*(int *)(iVar3 + 0x54) != iVar9)) ||
           ((*(unsigned int *)(iVar3 + 0x3c) & 0x1ffe00) != 0)) goto LAB_829a3370;
        uVar22 = 0;
        if (uVar25 != 0) {
          piVar24 = aiStack_100;
          do {
            if (*(int *)(iVar3 + 0x48) == *piVar24) break;
            uVar22 = uVar22 + 1;
            piVar24 = piVar24 + 1;
          } while (uVar22 < uVar25);
        }
        if (uVar22 == uVar25) {
          uVar25 = uVar25 + 1;
          puVar8 = puVar8 + 1;
          *puVar8 = *(unsigned int *)(iVar3 + 0x48);
        }
        if ((!bVar6) && (dVar33 != (double)(float)*(double *)(iVar15 + 0x20))) goto LAB_829a3370;
        uVar26 = uVar26 + 1;
        piVar14 = piVar14 + 1;
      } while (uVar26 < uVar20);
    }
    if ((ABS(ABS(dVar33)) == dVar34) && ((*(unsigned int *)(param_1 + 0x6c) & 0x100000) != 0)) {
      uVar26 = 0x400;
    }
    else if ((ABS(dVar33) == (double)lbl_82021540) && ((*(unsigned int *)(param_1 + 0x6c) & 0x80000) != 0))
    {
      uVar26 = 0x800;
    }
    else if ((ABS(dVar33) == (double)lbl_82015BD4) && ((*(unsigned int *)(param_1 + 0x6c) & 0x40000) != 0))
    {
      uVar26 = 0x1000;
    }
    else if ((ABS(dVar33) == (double)lbl_82002C5C) && ((*(unsigned int *)(param_1 + 0x6c) & 0x20000) != 0))
    {
      uVar26 = 0x2000;
    }
    else if ((ABS(dVar33) == (double)lbl_82002C28) && ((*(unsigned int *)(param_1 + 0x6c) & 0x10000) != 0))
    {
      uVar26 = 0x4000;
    }
    else {
      if ((ABS(dVar33) != (double)lbl_8201546C) || ((*(unsigned int *)(param_1 + 0x6c) & 0x8000) == 0))
      goto LAB_829a3370;
      uVar26 = 0x8000;
    }
    dVar34 = (double)lbl_821AAD20;
    if (dVar33 < dVar34) {
      uVar26 = uVar26 | 0x80000;
    }
    uVar22 = 0;
    auStack_f0[2] = 0;
    auStack_f0[3] = 0;
    if (uVar25 != 0) {
      iVar18 = *(int *)(param_1 + 0x18);
      iVar9 = 0;
      puVar19 = auStack_f0;
      do {
        puVar19 = puVar19 + 4;
        puVar4 = *(unsigned int **)(*(int *)((int)aiStack_100 + iVar9) * 4 + iVar18);
        if (((*puVar4 & 0xf0000000) == 0x60000000) || ((*puVar4 & 0xff000000) == 0x72000000))
        goto LAB_829a3370;
        *puVar19 = 0xffffffff;
        uVar32 = 0;
        puVar19[1] = 0xffffffff;
        uVar23 = 0;
        puVar19[2] = 0xffffffff;
        puVar19[3] = 0xffffffff;
        uVar21 = puVar4[3];
        if ((uVar29 & 0xfffff) != 0) {
          do {
            uVar17 = 0;
            if (uVar21 != 0) {
              uVar2 = puVar4[4];
              iVar16 = 0;
              do {
                if (*(int *)(iVar16 + uVar2) == piVar28[uVar23]) {
                  iVar3 = *(int *)(param_1 + 0x14);
                  iVar15 = *(int *)(*(int *)(param_1 + 0x104) + 0x10);
                  iVar5 = *(int *)((int)auStack_f0 + iVar9);
                  auStack_f0[iVar9 + uVar17 + 4] = uVar23;
                  iVar15 = *(int *)(iVar15 + uVar23 * 4);
                  *(int *)((int)auStack_f0 + iVar9) = iVar5 + 1;
                  if (((*(unsigned int *)(*(int *)(iVar15 * 4 + iVar3) + 0x3c) & 0x200) != 0) &&
                     (dVar33 < dVar34)) goto LAB_829a3370;
                  uVar32 = uVar32 + 1;
                }
                uVar17 = uVar17 + 1;
                iVar16 = iVar16 + 4;
              } while (uVar17 < uVar21);
            }
            uVar23 = uVar23 + 1;
          } while (uVar23 < uVar20);
        }
        if (uVar32 != uVar21) goto LAB_829a3370;
        uVar22 = uVar22 + 1;
        iVar9 = iVar9 + 4;
      } while (uVar22 < uVar25);
    }
    uVar29 = 0;
    if (uVar25 != 0) {
      lVar31 = 0;
      do {
        uVar30 = (unsigned __int64)*(unsigned int *)((int)auStack_f0 + (int)lVar31);
        iVar18 = *(int *)((int)aiStack_100 + (int)lVar31) * 4;
        puVar8 = *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar18);
        puVar10 = puVar8;
        if (uVar30 != (unsigned int)puVar8[3]) {
          iVar9 = fn_82963998(0x74);
          if (iVar9 == 0) {
            puVar10 = (unsigned int *)0x0;
          }
          else {
            puVar10 = (unsigned int *)fn_829632A0();
          }
          if (puVar10 == (unsigned int *)0x0) {
            return -0x7ff8fff2;
          }
          lVar7 = fn_82963A30(puVar10,*puVar8,puVar8[1],uVar30,0);
          if ((lVar7 < 0) || (lVar7 = fn_829632F0(puVar10,puVar8), lVar7 < 0)) {
            fn_82BA02A8(puVar10);
            fn_829639F0(puVar10);
            return lVar7;
          }
          fn_82F68CC0(puVar10[2],puVar8[2],puVar8[1] << 2);
          fn_82BA02A8(puVar8);
          fn_829639F0(puVar8);
          *(unsigned int **)(*(int *)(param_1 + 0x18) + iVar18) = puVar10;
        }
        uVar11 = 0;
        if (uVar30 != 0) {
          iVar18 = 0;
          uVar12 = uVar11;
          do {
            while (((uVar11 & 0xffffffff) < 4 &&
                   (*(int *)((int)auStack_f0 + (int)((lVar31 + uVar11 & 0xffffffff) << 2) + 0x10) ==
                    -1))) {
              uVar11 = uVar11 + 1;
            }
            uVar20 = 0;
            iVar16 = *(int *)((int)auStack_f0 + (int)((lVar31 + uVar11 & 0xffffffff) << 2) + 0x10) *
                     4;
            *(unsigned int *)(iVar18 + puVar10[4]) =
                 *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar16);
            iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar16) * 4 +
                            *(int *)(param_1 + 0x14));
            *(unsigned int *)(iVar9 + 0x3c) = *(unsigned int *)(iVar9 + 0x3c) | uVar26;
            if (*(int *)(param_1 + 8) != 0) {
              iVar9 = 0;
              do {
                iVar3 = *(int *)(iVar9 + *(int *)(param_1 + 0x14));
                if (*(int *)(iVar3 + 0x38) ==
                    *(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar16)) {
                  uVar22 = *(unsigned int *)(iVar3 + 0x3c);
                  uVar21 = uVar26 & 0xfff7ffff | uVar22;
                  *(unsigned int *)(iVar3 + 0x3c) = uVar21;
                  if (dVar33 < dVar34) {
                    if ((uVar22 & 0x80000) == 0) {
                      uVar21 = uVar21 | 0x80000;
                    }
                    else {
                      uVar21 = uVar26 & 0xfff7ffff | uVar22 & 0xfff7ffff;
                    }
                    *(unsigned int *)(iVar3 + 0x3c) = uVar21;
                  }
                }
                uVar20 = uVar20 + 1;
                iVar9 = iVar9 + 4;
              } while (uVar20 < *(unsigned int *)(param_1 + 8));
            }
            uVar11 = uVar12 + 1;
            iVar18 = iVar18 + 4;
            uVar12 = uVar11;
          } while ((uVar11 & 0xffffffff) < uVar30);
        }
        uVar29 = uVar29 + 1;
        lVar31 = lVar31 + 4;
      } while (uVar29 < uVar25);
    }
    lVar31 = 0;
    **(unsigned int **)(param_1 + 0x104) = 0;
  }
  else {
    if (((*(int *)(iVar9 + 4) == iVar18) && (*(int *)(iVar16 + 4) == iVar18)) &&
       ((**(unsigned int **)(param_1 + 0x104) & 0xfff00000) == 0x20400000)) {
      bVar6 = true;
      if ((uVar29 & 0xfffff) != 0) {
        piVar27 = piVar28;
        uVar26 = uVar20;
        bVar6 = true;
        do {
          iVar18 = *piVar27;
          piVar13 = (int *)(((int)piVar24 - (int)piVar28) + (int)piVar27);
          piVar27 = piVar27 + 1;
          bVar6 = (bool)(*piVar13 == iVar18 & bVar6);
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      uVar26 = *(unsigned int *)(iVar9 + 0x3c);
      if ((uVar26 == *(unsigned int *)(iVar16 + 0x3c)) &&
         (((fVar1 = lbl_8200133C, uVar26 == 0x80000 ||
           (fVar1 = lbl_82002AE0, (uVar26 & 0x80000) == 0)) && (bVar6)))) {
        dVar33 = (double)fVar1 * dVar34;
        bVar6 = true;
        goto LAB_829a2d60;
      }
    }
LAB_829a3370:
    lVar31 = 1;
  }
  return lVar31;
}

