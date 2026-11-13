typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_130;
extern unsigned int *auStack_174;
extern unsigned int *auStack_f0;
extern int fn_8294AC48();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_8200E890;
extern unsigned int lbl_8315BDC0;
extern unsigned int lbl_8315BDE4;


/* WARNING: Type propagation algorithm not settling */

__int64 fn_829992D0(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  unsigned int uVar3;
  bool bVar4;
  double dVar5;
  int iVar7;
  int iVar8;
  __int64 lVar6;
  int *piVar10;
  unsigned __int64 uVar9;
  unsigned int uVar12;
  unsigned __int64 uVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  unsigned int *puVar17;
  int *piVar18;
  unsigned char **ppuVar19;
  unsigned char **ppuVar20;
  int iVar21;
  __int64 lVar22;
  unsigned int auStack_174 [17];
  unsigned char auStack_130 [64];
  unsigned char auStack_f0 [16];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int aiStack_a0 [4];
  int aiStack_90 [36];
  
  if (*(unsigned short *)(param_1 + 0xca) < 0x104) {
    iVar8 = 0;
    auStack_174[1] = 0;
    auStack_174[0xd] = 0;
    auStack_174[0xe] = 1;
    auStack_174[0xf] = 2;
    auStack_174[0x10] = 3;
    if ((**(unsigned int **)(param_1 + 0x104) & 0xfffff) == 3) {
      uVar12 = 0;
      ppuVar20 = &lbl_8315BDE4;
      ppuVar19 = &lbl_8315BDC0;
      do {
        iVar7 = fn_8294AC48(param_1,*(unsigned int *)(param_1 + 0x104),*ppuVar19,auStack_130,
                                  auStack_174 + 1,auStack_f0,auStack_174 + 0xd,3);
        if (iVar7 == 0) break;
        uVar12 = uVar12 + 1;
        ppuVar19 = ppuVar19 + 1;
      } while (uVar12 < 9);
      bVar4 = false;
      bVar2 = uVar12 < 5;
      if (iVar7 != 0) {
        uVar12 = 0;
        do {
          iVar7 = fn_8294AC48(param_1,*(unsigned int *)(param_1 + 0x104),*ppuVar20,auStack_130,
                                    auStack_174 + 1,auStack_f0,auStack_174 + 0xd,3);
          if (iVar7 == 0) break;
          uVar12 = uVar12 + 1;
          ppuVar20 = ppuVar20 + 1;
        } while (uVar12 < 3);
        bVar2 = uVar12 < 2;
        bVar4 = true;
        if (iVar7 != 0) {
          return 1;
        }
      }
      dVar5 = lbl_8200E890;
      iVar7 = *(int *)(param_1 + 0x14);
      iVar21 = 0;
      uVar12 = 0;
      while( true ) {
        piVar10 = (int *)((int)aiStack_b0 + uVar12);
        iVar14 = *(int *)((int)aiStack_e0 + uVar12);
        iVar13 = *(int *)(iVar14 * 4 + iVar7);
        if (*(int *)(iVar13 + 0x10) != iVar21) break;
        if (param_2 == 0) {
          if (bVar2) {
            if (*(int *)(iVar13 + 0x48) == -1) {
              return 1;
            }
            piVar18 = *(int **)(*(int *)(iVar13 + 0x48) * 4 + *(int *)(param_1 + 0x18));
            if (*piVar18 != 0x20500003) {
              return 1;
            }
            iVar13 = piVar18[2];
            iVar14 = *(int *)(uVar12 + iVar13);
            iVar16 = *(int *)(iVar14 * 4 + iVar7);
            if ((*(unsigned int *)(*(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                0x200) == 0) {
              return 1;
            }
            if (*(int *)(iVar16 + 0x10) != iVar21) {
              return 1;
            }
            piVar18 = (int *)((int)auStack_174 + uVar12 + 0x1c);
            iVar13 = *(int *)(*(int *)((int)piVar18 + iVar13 + (0xc - (int)(auStack_174 + 7))) * 4 +
                             iVar7);
            if ((*(unsigned int *)(*(int *)(*(int *)(iVar13 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                0x100) == 0) {
              return 1;
            }
            if (*(double *)(iVar13 + 0x20) != dVar5) {
              return 1;
            }
          }
          else {
            if ((*(unsigned int *)(*(int *)(*(int *)(iVar13 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
                0x200) == 0) {
              return 1;
            }
            piVar18 = (int *)((int)auStack_174 + uVar12 + 0x1c);
          }
          *piVar18 = iVar14;
LAB_829995d0:
          piVar18 = (int *)((int)aiStack_c0 + uVar12);
          iVar13 = *(int *)((int)aiStack_c0 + uVar12);
          if (iVar13 == iVar14) {
            iVar16 = *(int *)((int)aiStack_d0 + uVar12);
            if (((*piVar10 == iVar16) &&
                (iVar15 = *(int *)((int)aiStack_a0 + uVar12),
                iVar15 == *(int *)((int)aiStack_90 + uVar12))) && (*piVar10 == iVar15))
            goto LAB_8299963c;
          }
          bVar1 = *piVar10 == iVar14;
LAB_82999614:
          if (!bVar1) {
            return 1;
          }
          iVar16 = piVar18[-4];
          if (iVar13 != iVar16) {
            return 1;
          }
          iVar15 = piVar18[8];
          if (iVar15 != piVar18[0xc]) {
            return 1;
          }
          if (iVar13 != iVar15) {
            return 1;
          }
        }
        else {
          if (*(int *)(iVar13 + 0x48) != -1) {
            return 1;
          }
          if (*(int *)(iVar13 + 4) != *(int *)(param_1 + 0x80)) {
            return 1;
          }
          if ((unsigned int)*(unsigned char *)(iVar13 + 0x6e) != iVar21 + 1U) {
            return 1;
          }
          if (*(char *)(iVar13 + 0x6f) != '\x05') {
            return 1;
          }
          *(int *)((int)auStack_174 + uVar12 + 0x1c) = iVar14;
          if (bVar2) {
            if (*(int *)(iVar13 + 0x3c) != 0x80000) {
              return 1;
            }
            iVar14 = *(int *)(iVar13 + 0x38);
            goto LAB_829995d0;
          }
          if (*(int *)(iVar13 + 0x3c) != 0) {
            return 1;
          }
          piVar18 = (int *)((int)aiStack_c0 + uVar12);
          iVar13 = *piVar18;
          if (iVar13 != iVar14) {
LAB_829994ec:
            bVar1 = *piVar10 == iVar14;
            goto LAB_82999614;
          }
          iVar16 = *(int *)((int)aiStack_d0 + uVar12);
          if (((*piVar10 != iVar16) ||
              (iVar15 = *(int *)((int)aiStack_a0 + uVar12),
              iVar15 != *(int *)((int)aiStack_90 + uVar12))) || (*piVar10 != iVar15))
          goto LAB_829994ec;
        }
LAB_8299963c:
        *(int *)((int)auStack_174 + uVar12 + 0xc) = iVar16;
        if ((bVar4) && (iVar15 != piVar18[0x10])) {
          return 1;
        }
        if (*(int *)(*(int *)(iVar16 * 4 + iVar7) + 0x10) != iVar21) {
          return 1;
        }
        uVar12 = uVar12 + 4;
        iVar21 = iVar21 + 1;
        if (0xb < uVar12) {
          uVar12 = 0;
          if (auStack_174[1] != 0) {
            puVar17 = auStack_174 + 0x10;
            do {
              puVar17 = puVar17 + 1;
              uVar12 = uVar12 + 1;
              *(unsigned int *)*puVar17 = 0;
            } while (uVar12 < auStack_174[1]);
          }
          iVar7 = fn_82963998(0x74);
          if (iVar7 != 0) {
            iVar8 = fn_829632A0();
          }
          if (iVar8 != 0) {
            if (param_2 == 0) {
              uVar9 = 0x72d00000;
              uVar11 = 9;
            }
            else {
              uVar9 = 0x72c00000;
              uVar11 = 6;
            }
            lVar6 = fn_82963A30(iVar8,uVar9 | 3,uVar11,
                                      *(unsigned int *)(*(int *)(param_1 + 0x104) + 0xc),0);
            if (-1 < (int)lVar6) {
              lVar6 = fn_829632F0(iVar8,*(unsigned int *)(param_1 + 0x104));
              if (-1 < lVar6) {
                fn_82F68CC0(*(unsigned int *)(iVar8 + 0x10),
                             *(unsigned int *)(*(int *)(param_1 + 0x104) + 0x10),
                             *(int *)(*(int *)(param_1 + 0x104) + 0xc) << 2);
                iVar7 = 0xc;
                lVar22 = 3;
                do {
                  uVar3 = *(unsigned int *)((int)auStack_174 + iVar7);
                  *(unsigned int *)(iVar7 + *(int *)(iVar8 + 8) + -0xc) =
                       **(unsigned int **)(*(int *)(param_1 + 0x104) + 8);
                  *(unsigned int *)(iVar7 + *(int *)(iVar8 + 8)) = uVar3;
                  if (param_2 == 0) {
                    *(unsigned int *)(iVar7 + *(int *)(iVar8 + 8) + 0xc) =
                         *(unsigned int *)((int)auStack_174 + iVar7 + 0x10U);
                  }
                  iVar7 = iVar7 + 4;
                  lVar22 = lVar22 + -1;
                } while (lVar22 != 0);
                iVar7 = *(int *)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18));
                if (iVar7 != 0) {
                  fn_82BA02A8(iVar7);
                  fn_829639F0(iVar7);
                }
                *(int *)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18)) = iVar8;
                return lVar6;
              }
              fn_82BA02A8(iVar8);
              fn_829639F0(iVar8);
              return lVar6;
            }
            fn_82BA02A8();
            fn_829639F0(iVar8);
            return lVar6;
          }
          return -0x7ff8fff2;
        }
      }
    }
  }
  return 1;
}

