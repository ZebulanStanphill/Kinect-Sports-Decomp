typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_d0;
extern int fn_82ADF288();
extern int fn_82AE5AC8();
extern unsigned int iStack0000001c;
extern unsigned int stack0x00000034;
extern unsigned int uStack00000034;
extern unsigned int uStack00000044;
extern unsigned int uStack0000004c;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c8;


unsigned int * fn_82ADF910(unsigned int *param_1,int param_2,int param_3,int param_4,unsigned int param_5,
                    unsigned int param_6,unsigned __int64 param_7,unsigned int param_8)

{
  int iVar1;
  unsigned __int64 *puVar2;
  bool bVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 *puVar11;
  unsigned __int64 *puVar14;
  int iVar15;
  unsigned int uVar16;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned __int64 uVar22;
  int iStack0000001c;
  unsigned int uStack00000034;
  unsigned int uStack00000044;
  unsigned int uStack0000004c;
  unsigned int auStack_d0 [2];
  unsigned __int64 uStack_c8;
  int aiStack_c0 [2];
  unsigned __int64 uStack_b8;
  unsigned __int64 uStack_b0;
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  
  *param_1 = 0;
  uStack00000044 = (unsigned int)param_7;
  uVar19 = 0;
  uVar16 = *(unsigned int *)(param_4 + 0xc0);
  uVar8 = *(unsigned int *)(param_3 + 0xc0);
  uVar13 = (unsigned __int64)uVar8 & 7;
  uVar22 = (unsigned __int64)uVar16 & 7;
  uVar17 = param_7;
  if ((uVar16 & 7) != 0) {
    uVar10 = 0;
    iVar6 = 5;
    do {
      if (((unsigned int)(1 << (uVar19 & 0x3f)) & uVar17) == 0) {
        uVar21 = 0;
        uVar20 = (unsigned int)uVar10;
        if ((uVar8 & 7) != 0) {
          iVar1 = *(int *)(param_2 + 0x2a0);
          iVar5 = 5;
          puVar7 = (unsigned int *)(param_3 + 0x10);
          puVar2 = (unsigned __int64 *)((int *)(uVar20 + param_4))[4];
          do {
            if (puVar2 < puVar2 + iVar1) {
              puVar14 = puVar2;
              do {
                if ((*(unsigned __int64 *)((puVar7[-4] - (int)puVar2) + (int)puVar14) & *puVar14) != 0) {
                  bVar3 = true;
                  goto LAB_82adf9f8;
                }
                puVar14 = puVar14 + 1;
              } while (puVar14 < puVar2 + iVar1);
            }
            bVar3 = false;
LAB_82adf9f8:
            if (bVar3) {
LAB_82adfa98:
              uVar9 = (unsigned int)((uVar10 & 0xffffffff) >> 3) & 0x1ffffffc;
              *(unsigned int *)((int)auStack_d0 + uVar9) =
                   (1 << (uVar21 & 0x3f)) << (uVar20 & 0x1f) | *(unsigned int *)((int)auStack_d0 + uVar9);
              uStack_c8 = uVar10;
            }
            else {
              puVar14 = (unsigned __int64 *)*puVar7;
              puVar11 = puVar14 + iVar1;
              if (puVar14 < puVar11) {
                iVar15 = *(int *)(uVar20 + param_4) - (int)puVar14;
                do {
                  if ((*(unsigned __int64 *)(iVar15 + (int)puVar14) & *puVar14) != 0) {
                    bVar3 = true;
                    goto LAB_82adfa40;
                  }
                  puVar14 = puVar14 + 1;
                } while (puVar14 < puVar11);
              }
              bVar3 = false;
LAB_82adfa40:
              if (bVar3) goto LAB_82adfa98;
              if (((uVar16 & 0x40000000) != 0) && ((uVar8 & 0x40000000) != 0)) {
                iVar15 = 0;
                do {
                  if ((*(unsigned __int64 *)((iVar6 + iVar15) * 8 + param_4) |
                      *(unsigned __int64 *)((iVar5 + iVar15) * 8 + param_3)) != 0xffffffffffffffff) {
                    bVar3 = true;
                    goto LAB_82adfa90;
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < 4);
                bVar3 = false;
LAB_82adfa90:
                if (!bVar3) goto LAB_82adfa98;
              }
            }
            uVar21 = uVar21 + 1;
            puVar7 = puVar7 + 1;
            iVar5 = iVar5 + 5;
          } while (uVar21 < uVar13);
          uVar17 = param_7 & 0xffffffff;
        }
        uVar21 = (unsigned int)((uVar10 & 0xffffffff) >> 3) & 0x1ffffffc;
        uVar9 = uVar20 & 0x1f;
        uVar12 = (unsigned __int64)
                 (((2 << (uVar20 + 3 & 0x1f)) - 1U & *(unsigned int *)((int)auStack_d0 + uVar21) &
                  -1 << uVar9) >> uVar9);
        *(unsigned int *)((int)auStack_d0 + uVar21 + 4) =
             4 - ((unsigned int)(((0x8da691691448U >> (uVar12 & 0x7f)) >> (uVar12 & 0x7f)) >>
                        (uVar12 & 0x7f)) & 7) << uVar9 | *(unsigned int *)((int)auStack_d0 + uVar21 + 4);
      }
      uVar19 = uVar19 + 1;
      iVar6 = iVar6 + 5;
      uVar10 = uVar10 + 4;
    } while (uVar19 < uVar22);
  }
  uVar8 = 0;
  if (param_6 != 0) {
    uVar19 = 4;
    do {
      uVar21 = ((2 << (uVar19 + 3 & 0x1f)) - 1U &
                *(unsigned int *)((int)&stack0x00000034 + (uVar19 >> 3 & 0x1ffffffc)) &
               -1 << (uVar19 & 0x1f)) >> (uVar19 & 0x1f);
      uVar20 = uVar19 - 4 & 0x1f;
      iVar6 = (uVar21 & 7) << 2;
      uVar20 = 1 << (((2 << (uVar19 - 1 & 0x1f)) - 1U &
                      *(unsigned int *)((int)&stack0x00000034 + (uVar19 - 4 >> 3 & 0x1ffffffc)) &
                     -1 << uVar20) >> uVar20 & 0x3f);
      if ((((2 << (uVar21 * 4 + 3 & 0x1f)) - 1U &
            *(unsigned int *)((int)auStack_d0 + (uVar21 >> 1 & 0x1ffffffc)) & -1 << iVar6) >> iVar6 & uVar20
          ) != 0) {
        return param_1;
      }
      uVar9 = 0;
      if ((uVar16 & 7) != 0) {
        uVar24 = 0;
        uVar10 = uVar22;
        do {
          uVar4 = uVar24 >> 3 & 0x1ffffffc;
          uVar18 = uVar24 & 0x1f;
          if (uVar9 == uVar21) {
            uVar23 = ~((2 << (uVar24 + 3 & 0x1f)) - 1U & -1 << uVar18);
            *(unsigned int *)((int)auStack_d0 + uVar4 + 4) =
                 uVar23 & *(unsigned int *)((int)auStack_d0 + uVar4 + 4) | 1 << uVar18;
            *(unsigned int *)((int)auStack_d0 + uVar4) =
                 0xf - uVar20 << uVar18 | uVar23 & *(unsigned int *)((int)auStack_d0 + uVar4);
          }
          else {
            uVar23 = *(unsigned int *)((int)auStack_d0 + uVar4 + 4);
            uVar18 = (2 << (uVar24 + 3 & 0x1f)) - 1U & -1 << uVar18;
            *(unsigned int *)((int)auStack_d0 + uVar4 + 4) =
                 uVar23 & ~uVar18 | ((uVar18 & uVar23) >> (uVar24 & 0x1f)) + 1 << (uVar24 & 0x1f);
            *(unsigned int *)((int)auStack_d0 + uVar4) =
                 uVar20 << (uVar24 & 0x1f) | *(unsigned int *)((int)auStack_d0 + uVar4);
          }
          uVar9 = uVar9 + 1;
          uVar24 = uVar24 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      uVar8 = uVar8 + 1;
      uVar19 = uVar19 + 8;
    } while (uVar8 < param_6);
  }
  uVar21 = 0xf;
  uVar20 = 0;
  uVar19 = 0;
  uVar8 = 0;
  if ((uVar16 & 7) != 0) {
    do {
      uVar20 = uVar8;
      if (((unsigned int)(1 << (uVar19 & 0x3f)) & uVar17) == 0) {
        uVar16 = 0xffffffff;
        uVar8 = 0xf;
        uVar9 = 0;
        uVar24 = 0;
        do {
          if ((((unsigned int)(1 << (uVar9 & 0x3f)) & uVar17) == 0) &&
             (uVar18 = ((2 << (uVar24 + 3 & 0x1f)) - 1U &
                        *(unsigned int *)((int)auStack_d0 + (uVar24 >> 3 & 0x1ffffffc) + 4) &
                       -1 << (uVar24 & 0x1f)) >> (uVar24 & 0x1f), uVar18 < 9)) {
            if (uVar18 == 0) {
              return param_1;
            }
            if (uVar18 < uVar8) {
              uVar16 = uVar9;
              uVar8 = uVar18;
            }
          }
          uVar9 = uVar9 + 1;
          uVar24 = uVar24 + 4;
        } while (uVar9 < uVar22);
        uVar8 = uVar16 >> 1 & 0x1ffffffc;
        iVar6 = (uVar16 & 7) << 2;
        uVar16 = ((2 << (uVar16 * 4 + 3 & 0x1f)) - 1U & *(unsigned int *)((int)auStack_d0 + uVar8) &
                 -1 << iVar6) >> iVar6;
        if (uVar16 == 0xf) {
          return param_1;
        }
        uVar9 = uVar21 & ~uVar16;
        uVar24 = 0;
        uVar16 = 0;
        uVar9 = uVar9 & ~(uVar9 - 1);
        uVar21 = uVar21 - uVar9;
        uVar20 = uVar9 | uVar20;
        uVar10 = uVar22;
        do {
          if (((unsigned int)(1 << (uVar24 & 0x3f)) & uVar17) == 0) {
            uVar18 = uVar16 & 0x1f;
            uVar4 = uVar16 >> 3 & 0x1ffffffc;
            if ((((2 << (uVar16 + 3 & 0x1f)) - 1U & -1 << uVar18 &
                 *(unsigned int *)((int)auStack_d0 + uVar4)) >> uVar18 & uVar9) == 0) {
              *(int *)((int)auStack_d0 + uVar4 + 4) =
                   *(int *)((int)auStack_d0 + uVar4 + 4) - (1 << uVar18);
              *(unsigned int *)((int)auStack_d0 + uVar4) =
                   uVar9 << uVar18 | *(unsigned int *)((int)auStack_d0 + uVar4);
            }
          }
          uVar24 = uVar24 + 1;
          uVar16 = uVar16 + 4;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        uVar16 = *(unsigned int *)(uVar8 + (int)param_1);
        *(unsigned int *)((int)auStack_d0 + uVar8 + 4) =
             0xf << iVar6 | *(unsigned int *)((int)auStack_d0 + uVar8 + 4);
        *(unsigned int *)(uVar8 + (int)param_1) = 0x1f - (int)LZCOUNT(uVar9) << iVar6 | uVar16;
      }
      uVar19 = uVar19 + 1;
      uVar8 = uVar20;
    } while (uVar19 < uVar22);
  }
  uVar12 = 0x20 - LZCOUNT(uVar20);
  uVar10 = uVar13;
  if (uVar13 <= (uVar12 & 0xffffffff)) {
    uVar10 = uVar12;
  }
  if ((uVar22 < (uVar10 & 0xffffffff)) && (uVar22 = uVar12, (uVar12 & 0xffffffff) < uVar13)) {
    uVar22 = uVar13;
  }
  if (((*(unsigned int *)(param_4 + 0xc0) & 0x40000000) != 0) &&
     ((*(unsigned int *)(param_3 + 0xc0) & 0x40000000) != 0)) {
    uVar13 = (unsigned __int64)*(unsigned int *)(param_2 + 0x318);
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    if (uVar13 == 0) {
      uVar13 = 0x20;
    }
    iStack0000001c = param_2;
    uStack00000034 = param_5;
    uStack0000004c = param_8;
    aiStack_c0[0] = param_2;
    if (uVar13 < 0x40) {
      fn_82AE5AC8(aiStack_c0,uVar13,0x40 - uVar13);
    }
    iVar6 = fn_82ADF288(param_2,param_3,param_4,*param_1,uVar22,uVar17,uStack0000004c,aiStack_c0);
    if (iVar6 == -1) {
      return param_1;
    }
  }
  *param_1 = (unsigned int)((uVar22 & 0xffffffff) << 0x10) | *param_1;
  return param_1;
}

