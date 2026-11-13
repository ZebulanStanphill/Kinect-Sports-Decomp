typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82C4E1D0();
extern unsigned int uStack00000024;


unsigned __int64
fn_82C93060(int param_1,int param_2,unsigned __int64 param_3,unsigned int param_4,unsigned int *param_5,int *param_6,
             unsigned int *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  __int64 *plVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  int *piVar14;
  bool bVar15;
  unsigned __int64 uVar16;
  unsigned int uVar18;
  unsigned __int64 uVar17;
  unsigned int *puVar19;
  unsigned int *puVar21;
  __int64 lVar20;
  unsigned int *puVar22;
  unsigned int *puVar23;
  int iVar24;
  unsigned int *puVar25;
  int iVar27;
  int iVar28;
  unsigned int *puVar29;
  __int64 lVar26;
  unsigned int *puVar31;
  unsigned __int64 uVar30;
  int *piVar32;
  unsigned int uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  unsigned int uStack00000024;
  unsigned int *puStack00000044;
  int *piStack0000004c;
  
  uStack00000024 = (unsigned int)param_3;
  iVar37 = 1;
  if ((*(int *)(param_1 + 0x120) == 0) || (bVar15 = false, *(int *)(param_1 + 0x120) == 4)) {
    bVar15 = true;
  }
  if (*(int *)(param_1 + 0x567c) == 1) {
    iVar27 = *(int *)(param_1 + 0x50d0);
  }
  else {
    iVar27 = 0;
  }
  iVar1 = *(int *)(param_1 + 0xec0);
  iVar2 = *(int *)(param_1 + 0xdc);
  iVar3 = *(int *)(param_1 + 0xe0);
  iVar4 = *(int *)(param_1 + 0xec4);
  iVar5 = *(int *)(param_1 + 0xec8);
  iVar6 = *(int *)(param_1 + 0xed0);
  iVar7 = *(int *)(param_1 + 0xed4);
  iVar24 = (*(int *)(param_1 + 0xcc) >> 1) * iVar27;
  iVar8 = *(int *)(param_1 + 0xee4);
  iVar27 = (*(int *)(param_1 + 0xd0) >> 1) * iVar27;
  if ((param_2 == 1) && (param_5 != (unsigned int *)0x0)) {
    puStack00000044 = param_7;
    piStack0000004c = param_8;
    if (*param_5 < *(unsigned int *)(param_1 + 0x8c)) {
      do {
        uVar18 = *param_5;
        uVar33 = iVar37 * param_4;
        iVar36 = uVar18 * *(int *)(param_1 + 0xe4) + uVar33 * 0x10;
        iVar38 = uVar18 * *(int *)(param_1 + 0xe8) + uVar33 * 8;
        iVar39 = iVar36 + iVar1 + iVar2 + iVar24;
        iVar34 = iVar38 + iVar4 + iVar3 + iVar27;
        iVar35 = iVar38 + iVar5 + iVar3 + iVar27;
        iVar40 = iVar38 + iVar6 + iVar3 + iVar27;
        if (((*(int *)(param_1 + 0x55b4) != 0) &&
            (*(int *)(*(int *)(param_1 + 0x55d0) + uVar18 * 4) != 0)) &&
           ((iVar37 == 0 || (0 < (int)param_3)))) {
          lVar20 = 0;
          iVar37 = 4;
          uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x55c8) + (unsigned __int64)*(unsigned int *)(param_1 + 0x5604);
          for (uVar30 = 1;
              (uVar30 & 0xffffffff) <=
              ((unsigned __int64)*(unsigned int *)(param_1 + 0x55d8) +
               (((param_3 & 0xffffffff) >> 0x1f) - 1) + (unsigned __int64)(param_3 == 0) & 0xffffffff);
              uVar30 = uVar30 + 1) {
            puVar13 = (unsigned int *)(*(int *)(param_1 + 0x55c4) + iVar37);
            iVar37 = iVar37 + 4;
            uVar17 = *puVar13 + uVar17;
          }
          if ((uVar30 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x55bc)) {
            lVar26 = (uVar30 & 0x3fffffff) << 2;
            do {
              iVar37 = (int)lVar26;
              uVar30 = uVar30 + 1;
              lVar26 = lVar26 + 4;
              lVar20 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x55c4) + iVar37) + lVar20;
            } while ((uVar30 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x55bc));
          }
          if ((uVar17 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x5604)) {
            fn_82C4E1D0(*(int *)(param_1 + 0x50),uVar17 - 1,lVar20 + 1,
                              *(unsigned int *)(*(int *)(param_1 + 0x50) + 0x18),
                              *(int *)(param_1 + 0x3cb0) == 7);
            uVar18 = 0;
            while( true ) {
              plVar10 = *(__int64 **)(param_1 + 0x50);
              if (*plVar10 < 0) break;
              uVar18 = uVar18 + 1;
              *plVar10 = *plVar10 << 1;
              *(int *)(plVar10 + 1) = *(int *)(plVar10 + 1) + -1;
              if (7 < uVar18) {
                return 1;
              }
            }
            if (7 < uVar18) goto LAB_82c93130;
            *param_5 = *param_5 - 1;
            if (param_6 != (int *)0x0) {
              *param_6 = *param_6 + -0x10;
            }
            uVar18 = *param_5 + 1;
            uVar33 = *(int *)(param_1 + 0x88) * uVar18;
            if ((int)param_3 < 0) {
              uVar18 = *param_5;
            }
            if (puStack00000044 != (unsigned int *)0x0) {
              *puStack00000044 = uVar33;
            }
            if (*piStack0000004c != 0) {
              piVar32 = piStack0000004c + 3;
              do {
                uVar11 = piVar32[1];
                if ((unsigned __int64)uVar11 == 0) {
                  *(unsigned int *)piVar32[-3] = *piVar32 * uVar18 + piVar32[-1] * uVar33 + piVar32[-2];
                }
                else {
                  trapWord(6,(unsigned __int64)uVar11,0);
                  *(unsigned int *)piVar32[-3] =
                       (uVar33 - (uVar33 / uVar11) * uVar11) * piVar32[-1] + *piVar32 * uVar18 +
                       piVar32[-2];
                }
                piVar14 = piVar32 + 2;
                piVar32 = piVar32 + 5;
              } while (*piVar14 != 0);
            }
            goto LAB_82c935b4;
          }
          goto LAB_82c93130;
        }
        if ((*(int *)(param_1 + 0x120) != 2) || (*(int *)(param_1 + 0xd68) != 0)) {
          if ((bVar15) && (*(__int64 *)(param_1 + 0xe30) == 1)) {
            iVar37 = *(int *)(param_1 + 0x567c);
            iVar36 = (iVar37 == 1) + 1;
            if ((iVar37 != 1) || (iVar38 = 1, *(int *)(param_1 + 0x54c8) == 0)) {
              iVar38 = iVar36;
            }
            if (iVar37 == 1) {
              iVar37 = *(int *)(param_1 + 0x50d0);
              if (7 < iVar37) goto LAB_82c93398;
            }
            else {
              iVar37 = 0;
            }
            do {
              iVar40 = *(int *)(param_1 + 0xcc) >> 2;
              iVar28 = *(int *)(param_1 + 0xd0) * iVar37;
              puVar31 = (unsigned int *)(iVar37 * 2 * *(int *)(param_1 + 0xcc) + iVar39);
              puVar23 = (unsigned int *)(iVar28 + iVar34);
              puVar22 = (unsigned int *)(iVar28 + iVar35);
              uVar18 = (*(int *)(param_1 + 0xd0) >> 2) * iVar38 & 0x3fffffff;
              puVar25 = puVar31 + iVar40 * iVar36;
              puVar29 = puVar31 + -(iVar40 * iVar38 & 0x3fffffffU);
              puVar21 = puVar23 + -uVar18;
              puVar19 = puVar22 + -uVar18;
              if ((*param_5 != 0) && (uVar18 = uVar33, (int)uVar33 < *(int *)(param_1 + 0x88))) {
                do {
                  uVar9 = *puVar29;
                  uVar18 = uVar18 + 1;
                  *puVar31 = uVar9;
                  *puVar25 = uVar9;
                  uVar9 = puVar29[1];
                  puVar31[1] = uVar9;
                  puVar25[1] = uVar9;
                  uVar9 = puVar29[2];
                  puVar31[2] = uVar9;
                  puVar25[2] = uVar9;
                  uVar9 = puVar29[3];
                  puVar29 = puVar29 + 4;
                  puVar31[3] = uVar9;
                  puVar25[3] = uVar9;
                  puVar31 = puVar31 + 4;
                  *puVar23 = *puVar21;
                  puVar25 = puVar25 + 4;
                  puVar12 = puVar21 + 1;
                  puVar21 = puVar21 + 2;
                  puVar23[1] = *puVar12;
                  *puVar22 = *puVar19;
                  puVar23 = puVar23 + 2;
                  puVar12 = puVar19 + 1;
                  puVar19 = puVar19 + 2;
                  puVar22[1] = *puVar12;
                  puVar22 = puVar22 + 2;
                } while ((int)uVar18 < *(int *)(param_1 + 0x88));
              }
              iVar37 = iVar37 + iVar36;
            } while (iVar37 < 8);
          }
          else {
            param_4 = uVar33;
            if (*(unsigned int *)(param_1 + 0x88) <= uVar33) goto LAB_82c9339c;
            iVar38 = (iVar38 + iVar7 + iVar3 + iVar27) - iVar40;
            iVar37 = (iVar36 + iVar8 + iVar24) - iVar39;
            iVar35 = iVar35 - iVar40;
            iVar34 = iVar34 - iVar40;
            do {
              (**(int (***)())(param_1 + 0xc54))
                        (iVar39,iVar34 + iVar40,iVar35 + iVar40,iVar37 + iVar39,iVar40,
                         iVar38 + iVar40,*(unsigned int *)(param_1 + 0xcc),
                         *(unsigned int *)(param_1 + 0xd0));
              param_4 = param_4 + 1;
              iVar40 = iVar40 + 8;
              iVar39 = iVar39 + 0x10;
            } while (param_4 < *(unsigned int *)(param_1 + 0x88));
          }
LAB_82c93398:
          param_3 = (unsigned __int64)uStack00000024;
        }
LAB_82c9339c:
        iVar37 = 0;
        if (param_6 != (int *)0x0) {
          *param_6 = *param_6 + 0x10;
        }
        uVar18 = *param_5;
        *param_5 = uVar18 + 1;
      } while (uVar18 + 1 < *(unsigned int *)(param_1 + 0x8c));
      uVar16 = 0;
      *(unsigned int *)(param_1 + 0xbbc) = 0;
    }
    else {
LAB_82c935b4:
      uVar16 = 0;
      *(unsigned int *)(param_1 + 0xbbc) = 0;
    }
  }
  else {
LAB_82c93130:
    uVar16 = 1;
  }
  return uVar16;
}

