typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_7c;
extern int fn_8277E998();
extern int fn_82780C88();
extern int fn_82781330();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_80;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_827813F8(int param_1,unsigned int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  int iVar21;
  unsigned int uVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  unsigned int uVar26;
  float *pfVar27;
  unsigned int *puVar28;
  unsigned int uVar29;
  unsigned int *puVar30;
  unsigned int uVar31;
  unsigned __int64 uVar32;
  float *pfVar34;
  unsigned __int64 uVar33;
  unsigned __int64 uVar35;
  float *pfVar36;
  unsigned int *puVar37;
  bool bVar38;
  bool bVar39;
  double dVar40;
  unsigned int uStack_80;
  unsigned int auStack_7c [31];
  
  *(unsigned int *)(param_1 + 0x184) = 0;
  *(unsigned int *)(param_1 + 0x194) = 0;
  *(unsigned int *)(param_1 + 0x1a4) = 0;
  *(unsigned int *)(param_1 + 0x1c4) = 0;
  *(unsigned int *)(param_1 + 0x1c8) = 0;
  *(unsigned int *)(param_1 + 0x1cc) = 0;
  *(unsigned int *)(param_1 + 0x1d0) = 0;
  puVar28 = (unsigned int *)(param_1 + 0x194);
  puVar30 = (unsigned int *)(param_1 + 0x1a4);
  puVar37 = *(unsigned int **)(*(int *)((param_2 >> 4 & 0xffffffc) + *(int *)(param_1 + 0x160)) +
                      (param_2 & 0x3f) * 0x18);
  if (puVar37 != (unsigned int *)0x0) {
    bVar38 = true;
    pfVar36 = (float *)(*(int *)(((*puVar37 & 0xbfffffff) >> 8 & 0xfffffc) +
                                *(int *)(param_1 + 0x110)) + (*puVar37 & 0x3ff) * 8);
    dVar40 = (double)lbl_821AAD20;
    pfVar27 = pfVar36;
    pfVar25 = pfVar36;
    pfVar34 = pfVar36;
    do {
      pfVar24 = pfVar34;
      pfVar23 = pfVar25;
      if ((*puVar37 >> 0x1e & 1) == 0) {
        fn_8277E998(puVar30,puVar37);
        if ((bVar38) &&
           (pfVar25 = pfVar27 + 1, fVar1 = *pfVar27,
           pfVar24 = (float *)(*(int *)((*puVar37 >> 8 & 0xfffffc) + *(int *)(param_1 + 0x110)) +
                              (*puVar37 & 0x3ff) * 8), pfVar27 = pfVar34,
           dVar40 < (double)((pfVar34[1] - *pfVar25) * (*pfVar24 - *pfVar34) -
                            (pfVar24[1] - pfVar34[1]) * (*pfVar34 - fVar1)))) {
          bVar38 = false;
        }
      }
      else {
        uStack_80 = *puVar37 & 0xbfffffff;
        fn_8277E998(puVar28,&uStack_80);
        if ((bVar38) &&
           (pfVar34 = pfVar36 + 1, fVar1 = *pfVar36,
           pfVar23 = (float *)(*(int *)(((*puVar37 & 0xbfffffff) >> 8 & 0xfffffc) +
                                       *(int *)(param_1 + 0x110)) + (*puVar37 & 0x3ff) * 8),
           pfVar36 = pfVar25,
           (double)((pfVar25[1] - *pfVar34) * (*pfVar23 - *pfVar25) -
                   (pfVar23[1] - pfVar25[1]) * (*pfVar25 - fVar1)) < dVar40)) {
          bVar38 = false;
        }
      }
      pfVar25 = pfVar23;
      pfVar34 = pfVar24;
      puVar37 = (unsigned int *)puVar37[1];
    } while (puVar37 != (unsigned int *)0x0);
    if ((*puVar28 < 2) || (*puVar30 < 2)) {
      return 0;
    }
    if (!bVar38) {
      puVar37 = (unsigned int *)(param_1 + 0x174);
      uVar31 = 1;
      iVar8 = *(int *)**(unsigned int **)(param_1 + 0x1a0);
      iVar9 = *(int *)**(unsigned int **)(param_1 + 0x1b0);
      *(unsigned int *)(param_1 + 0x174) = 0;
      bVar38 = iVar9 == iVar8;
      uVar32 = (unsigned __int64)bVar38;
      uStack_80 = *(unsigned int *)**(unsigned int **)(param_1 + 0x1a0) | 0x40000000;
      fn_8277E998(puVar37,&uStack_80);
      uVar10 = *(unsigned int *)(**(int **)(param_1 + 0x1a0) + 4);
      if (uVar10 < *(unsigned int *)(**(int **)(param_1 + 0x1b0) + (unsigned int)bVar38 * 4)) {
        uStack_80 = uVar10 | 0x40000000;
        uVar31 = 2;
        fn_8277E998(puVar37,&uStack_80);
      }
      else {
        fn_8277E998(puVar37);
        uVar32 = uVar32 + 1;
      }
      uVar10 = *puVar28;
      uVar29 = uVar31 - 1;
      uVar20 = *puVar30;
      do {
        if (uVar10 <= uVar31) {
          if ((unsigned __int64)uVar20 <= (uVar32 & 0xffffffff)) {
            uVar10 = *puVar37;
            uVar17 = *(unsigned int *)
                      (*(int *)((*puVar28 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                      ((*puVar28 - 1) * 4 & 0x3fc));
            while( true ) {
              if (uVar10 < 2) {
                return 1;
              }
              uVar10 = *(unsigned int *)(*(int *)((*puVar37 - 1 >> 6 & 0x3fffffc) +
                                         *(int *)(param_1 + 0x180)) + ((*puVar37 - 1) * 4 & 0x3fc));
              if (*puVar37 != 0) {
                *puVar37 = *puVar37 - 1;
              }
              iVar8 = *(int *)(((unsigned int)(((unsigned __int64)*puVar37 - 1 & 0xffffffff) >> 6) & 0x3fffffc) +
                              *(int *)(param_1 + 0x180));
              iVar9 = (int)(((unsigned __int64)*puVar37 - 1 & 0xff) << 2);
              if ((uVar10 >> 0x1e & 1) == 0) {
                uVar31 = *(unsigned int *)(iVar8 + iVar9);
                uVar20 = uVar10;
              }
              else {
                uVar20 = *(unsigned int *)(iVar8 + iVar9);
                uVar31 = uVar10;
              }
              cVar16 = fn_82781330(param_1,uVar17,uVar31,uVar20);
              if (cVar16 == '\0') break;
              uVar10 = *puVar37;
            }
            return 0;
          }
          uVar35 = (unsigned __int64)
                   *(unsigned int *)(*(int *)(((unsigned int)uVar32 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0)) +
                            ((unsigned int)((uVar32 & 0xffffffff) << 2) & 0x3fc));
          goto LAB_82781690;
        }
        if ((uVar32 & 0xffffffff) < (unsigned __int64)uVar20) {
          if ((uVar32 & 0xffffffff) == 0) {
            uVar33 = (unsigned __int64)
                     *(unsigned int *)(*(int *)((uVar31 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                              (uVar31 & 0xff) * 4);
            uVar35 = (unsigned __int64)*(unsigned int *)**(unsigned int **)(param_1 + 0x1b0);
            if (uVar33 < uVar35) goto LAB_8278176c;
            uVar32 = 1;
          }
          else {
            iVar8 = *(int *)(param_1 + 0x110);
            uVar11 = *(unsigned int *)(*(int *)((uVar31 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                              (uVar31 & 0xff) * 4);
            uVar33 = (unsigned __int64)uVar11;
            uVar26 = *(unsigned int *)(*(int *)(((unsigned int)(uVar32 - 1) >> 6 & 0x3fffffc) +
                                       *(int *)(param_1 + 0x1b0)) +
                              ((unsigned int)((uVar32 - 1 & 0xffffffff) << 2) & 0x3fc));
            uVar22 = *(unsigned int *)(*(int *)((uVar29 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) +
                              (uVar29 & 0xff) * 4);
            iVar14 = (uVar11 & 0x3ff) * 8;
            iVar15 = (uVar22 & 0x3ff) * 8;
            iVar9 = *(int *)((uVar11 >> 8 & 0xfffffc) + iVar8);
            pfVar27 = (float *)(*(int *)((uVar26 >> 8 & 0xfffffc) + iVar8) + (uVar26 & 0x3ff) * 8);
            iVar13 = *(int *)((uVar22 >> 8 & 0xfffffc) + iVar8);
            iVar21 = iVar9 + iVar14;
            uVar11 = *(unsigned int *)(*(int *)(((unsigned int)uVar32 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x1b0))
                              + ((unsigned int)((uVar32 & 0xffffffff) << 2) & 0x3fc));
            uVar35 = (unsigned __int64)uVar11;
            fVar6 = *(float *)(iVar9 + iVar14);
            fVar1 = *pfVar27;
            fVar12 = fVar6 - fVar1;
            fVar7 = *(float *)(iVar13 + iVar15);
            fVar5 = *(float *)(iVar21 + 4);
            fVar2 = *(float *)(iVar13 + iVar15 + 4);
            pfVar25 = (float *)(*(int *)((uVar11 >> 8 & 0xfffffc) + iVar8) + (uVar11 & 0x3ff) * 8);
            bVar38 = (double)((pfVar27[1] - fVar2) * fVar12 - (fVar5 - pfVar27[1]) * (fVar1 - fVar7)
                             ) <= dVar40;
            fVar3 = *pfVar25;
            fVar4 = pfVar25[1];
            bVar39 = (double)((pfVar27[1] - fVar2) * (fVar3 - fVar1) -
                             (fVar4 - pfVar27[1]) * (fVar1 - fVar7)) <= dVar40;
            if ((bVar38) && (bVar39)) {
              bVar38 = (double)((pfVar25[1] - pfVar27[1]) * (fVar6 - fVar3) -
                               (fVar5 - pfVar25[1]) * (fVar3 - fVar1)) <= dVar40;
              fVar1 = *(float *)(iVar21 + 4);
              bVar39 = dVar40 <= (double)((fVar1 - fVar2) * (fVar3 - fVar6) -
                                         (fVar4 - fVar1) * (fVar6 - fVar7));
            }
            if ((bVar38) && (bVar39)) {
              if ((fVar4 - fVar2) * (fVar4 - fVar2) + (fVar3 - fVar7) * (fVar3 - fVar7) <=
                  (fVar5 - pfVar27[1]) * (fVar5 - pfVar27[1]) + fVar12 * fVar12) {
LAB_82781690:
                uVar32 = uVar32 + 1;
                goto LAB_82781694;
              }
            }
            else if (!bVar38) {
              if (!bVar39) {
                return 0;
              }
              goto LAB_82781690;
            }
LAB_8278176c:
            uVar35 = uVar33 | 0x40000000;
            uVar31 = uVar31 + 1;
            uVar29 = uVar29 + 1;
          }
        }
        else {
          uVar11 = uVar31 >> 6;
          uVar26 = uVar31 & 0xff;
          uVar31 = uVar31 + 1;
          uVar29 = uVar29 + 1;
          uVar35 = (unsigned __int64)
                   *(unsigned int *)(*(int *)((uVar11 & 0x3fffffc) + *(int *)(param_1 + 0x1a0)) + uVar26 * 4
                            ) | 0x40000000;
        }
LAB_82781694:
        uVar11 = *puVar37;
        uVar33 = uVar35 >> 0x1e & 1;
        uStack_80 = (unsigned int)uVar35;
        auStack_7c[0] =
             *(unsigned int *)(*(int *)((uVar11 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                      ((uVar11 - 1) * 4 & 0x3fc));
        if (uVar33 == ((unsigned __int64)(auStack_7c[0] >> 0x1e) & 1)) {
          if (1 < *puVar37) {
            uVar11 = uStack_80 & 0xbfffffff;
            do {
              iVar8 = *(int *)(param_1 + 0x110);
              uVar26 = *puVar37 - 1;
              uVar22 = *puVar37 - 2;
              pfVar27 = (float *)(*(int *)(iVar8 + (uVar11 >> 8 & 0xfffffc)) +
                                 ((unsigned int)((uVar35 & 0xbfffffff) << 3) & 0x1ff8));
              uVar26 = *(unsigned int *)(*(int *)((uVar26 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                                (uVar26 * 4 & 0x3fc));
              uVar22 = *(unsigned int *)(*(int *)((uVar22 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                                (uVar22 * 4 & 0x3fc));
              iVar13 = (uVar22 & 0x3ff) * 8;
              iVar9 = *(int *)(((uVar22 & 0xbfffffff) >> 8 & 0xfffffc) + iVar8);
              pfVar25 = (float *)(*(int *)(((uVar26 & 0xbfffffff) >> 8 & 0xfffffc) + iVar8) +
                                 (uVar26 & 0x3ff) * 8);
              fVar1 = pfVar25[1];
              fVar5 = *pfVar25;
              if ((unsigned int)((double)((fVar1 - pfVar27[1]) * (*(float *)(iVar9 + iVar13) - fVar5) -
                                 (*(float *)(iVar9 + iVar13 + 4) - fVar1) * (fVar5 - *pfVar27)) <
                        dVar40) != (uVar26 >> 0x1e & 1)) break;
              uVar18 = uVar22;
              if ((uVar26 >> 0x1e & 1) != 0) {
                uVar18 = uVar26;
                uVar26 = uVar22;
              }
              cVar16 = fn_82781330(param_1,uVar35,uVar18,uVar26);
              if (cVar16 == '\0') {
                return 0;
              }
              if (*puVar37 != 0) {
                *puVar37 = *puVar37 - 1;
              }
            } while (1 < *puVar37);
          }
        }
        else {
          while (1 < uVar11) {
            uVar17 = *(unsigned int *)
                      (*(int *)((uVar11 - 1 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x180)) +
                      ((uVar11 - 1) * 4 & 0x3fc));
            if (*puVar37 != 0) {
              *puVar37 = *puVar37 - 1;
            }
            iVar8 = *(int *)(((unsigned int)(((unsigned __int64)*puVar37 - 1 & 0xffffffff) >> 6) & 0x3fffffc) +
                            *(int *)(param_1 + 0x180));
            iVar9 = (int)(((unsigned __int64)*puVar37 - 1 & 0xff) << 2);
            if (uVar33 == 0) {
              uVar19 = *(unsigned int *)(iVar8 + iVar9);
            }
            else {
              uVar19 = uVar17;
              uVar17 = *(unsigned int *)(iVar8 + iVar9);
            }
            cVar16 = fn_82781330(param_1,uVar35,uVar17,uVar19);
            if (cVar16 == '\0') {
              return 0;
            }
            uVar11 = *puVar37;
          }
          if (*puVar37 != 0) {
            *puVar37 = *puVar37 - 1;
          }
          fn_8277E998(puVar37,auStack_7c);
        }
        fn_8277E998(puVar37,&uStack_80);
      } while( true );
    }
    fn_82780C88(param_1);
  }
  return 1;
}

