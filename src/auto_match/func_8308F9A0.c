#define true 1
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_8308B6C0();
extern int fn_8308B7A0();


void fn_8308F9A0(int param_1,unsigned int *param_2,unsigned int *param_3,int param_4,int *param_5,
                  int *param_6)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned short uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  int *piVar12;
  unsigned int *puVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int *puVar16;
  unsigned int uVar17;
  unsigned int *puVar18;
  unsigned int uVar19;
  unsigned short *puVar20;
  unsigned short *puVar21;
  short *psVar22;
  unsigned int uVar23;
  unsigned short uVar25;
  unsigned int uVar24;
  unsigned int *puVar26;
  unsigned int *puStack00000024;
  
  puVar13 = param_2 + param_4;
  puStack00000024 = param_3;
  do {
    if (puVar13 <= param_2) {
      return;
    }
    uVar24 = puStack00000024[4] >> 0xf;
    if (uVar24 != 0xffff) {
      uVar24 = uVar24 + 1;
    }
    uVar24 = uVar24 | 1;
    uVar19 = puStack00000024[5] >> 0xf;
    if (uVar19 != 0xffff) {
      uVar19 = uVar19 + 1;
    }
    uVar19 = uVar19 | 1;
    uVar14 = puStack00000024[6] >> 0xf;
    if (uVar14 != 0xffff) {
      uVar14 = uVar14 + 1;
    }
    uVar14 = uVar14 | 1;
    iVar5 = *(int *)(param_1 + 0xa0);
    uVar17 = *puStack00000024 >> 0xf & 0xfffe;
    uVar9 = puStack00000024[1] >> 0xf & 0xfffe;
    uVar10 = puStack00000024[2] >> 0xf & 0xfffe;
    uVar6 = *(unsigned int *)*param_2;
    puVar20 = (unsigned short *)(uVar6 * 0x10 + iVar5);
    uVar23 = (unsigned int)puVar20[4];
    puVar26 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xac));
    uVar1 = *(unsigned short *)(puVar26 + -1);
    puVar18 = puVar26;
    while (uVar25 = (unsigned short)uVar23, uVar17 < uVar1) {
      piVar12 = (int *)((unsigned int)*(unsigned short *)((int)puVar18 + -2) * 0x10 + iVar5);
      *puVar26 = puVar18[-1];
      puVar26 = puVar26 + -1;
      if ((uVar1 & 1) == 0) {
        *(unsigned short *)(piVar12 + 2) = uVar25;
      }
      else {
        iVar11 = *(int *)(puVar20 + 2);
        iVar7 = *(int *)puVar20;
        *(unsigned short *)((int)piVar12 + 10) = uVar25;
        if (((iVar11 - *piVar12 | piVar12[1] - iVar7) & 0x80008000U) == 0) {
          fn_8308B6C0(*(unsigned int *)(param_1 + 0xd8),puVar20,uVar6,piVar12,param_5);
        }
      }
      uVar23 = uVar23 - 1;
      uVar1 = *(unsigned short *)(puVar18 + -2);
      puVar18 = puVar18 + -1;
    }
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar17 == uVar1) {
      uVar25 = (unsigned short)uVar23;
      uVar1 = puVar21[1];
      if (uVar1 <= uVar6) break;
      uVar23 = uVar23 - 1;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar5 + 8) = uVar25;
      puVar21 = puVar21 + -2;
      uVar25 = (unsigned short)uVar23;
      uVar1 = *puVar21;
    }
    uVar8 = (unsigned short)uVar6;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar17;
    puVar20[4] = uVar25;
    uVar23 = (unsigned int)puVar20[5];
    puVar26 = (unsigned int *)(uVar23 * 4 + *(int *)(param_1 + 0xac));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar18 = puVar26;
    while (uVar1 < uVar24) {
      uVar23 = uVar23 + 1;
      *puVar26 = puVar18[1];
      puVar26 = puVar26 + 1;
      piVar12 = (int *)((unsigned int)*(unsigned short *)((int)puVar18 + 6) * 0x10 + iVar5);
      if ((uVar1 & 1) == 0) {
        iVar11 = *(int *)(puVar20 + 2);
        iVar7 = *(int *)puVar20;
        *(short *)(piVar12 + 2) = *(short *)(piVar12 + 2) + -1;
        if (((iVar11 - *piVar12 | piVar12[1] - iVar7) & 0x80008000U) == 0) {
          fn_8308B6C0(*(unsigned int *)(param_1 + 0xd8),puVar20,uVar6,piVar12,param_5);
        }
      }
      else {
        *(short *)((int)piVar12 + 10) = *(short *)((int)piVar12 + 10) + -1;
      }
      uVar1 = *(unsigned short *)(puVar18 + 2);
      puVar18 = puVar18 + 1;
    }
    puVar21 = (unsigned short *)(puVar26 + 1);
    uVar1 = *(unsigned short *)(puVar26 + 1);
    while (uVar24 == uVar1) {
      uVar1 = puVar21[1];
      if ((uVar6 <= uVar1) || (uVar1 == 0)) break;
      uVar23 = uVar23 + 1;
      iVar11 = (unsigned int)uVar1 * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar11 + 10) = *(short *)(iVar11 + 10) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    uVar15 = (unsigned int)*(unsigned short *)(puVar26 + -1);
    if (uVar24 < uVar15) {
      puVar21 = (unsigned short *)((int)puVar26 + 2);
      do {
        uVar1 = puVar21[-2];
        uVar23 = uVar23 - 1;
        *puVar26 = *(unsigned int *)(puVar21 + -3);
        piVar12 = (int *)((unsigned int)uVar1 * 0x10 + iVar5);
        puVar26 = puVar26 + -1;
        if ((uVar15 & 1) == 0) {
          iVar11 = *(int *)(puVar20 + 2);
          iVar7 = *(int *)puVar20;
          *(short *)(piVar12 + 2) = *(short *)(piVar12 + 2) + 1;
          if (((iVar11 - *piVar12 | piVar12[1] - iVar7) & 0x80008000U) == 0) {
            fn_8308B7A0(*(unsigned int *)(param_1 + 0xd8),puVar20,uVar6,piVar12,param_6);
          }
        }
        else {
          *(short *)((int)piVar12 + 10) = *(short *)((int)piVar12 + 10) + 1;
        }
        uVar15 = (unsigned int)puVar21[-5];
        puVar21 = puVar21 + -2;
      } while (uVar24 < uVar15);
    }
    uVar25 = (unsigned short)uVar23;
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar24 == uVar1) {
      uVar25 = (unsigned short)uVar23;
      if (puVar21[1] <= uVar6) break;
      uVar23 = uVar23 - 1;
      uVar25 = (unsigned short)uVar23;
      iVar11 = (unsigned int)puVar21[1] * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(short *)(iVar11 + 10) = *(short *)(iVar11 + 10) + 1;
      puVar21 = puVar21 + -2;
      uVar1 = *puVar21;
    }
    puVar20[5] = uVar25;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar24;
    uVar24 = (unsigned int)puVar20[4];
    puVar26 = (unsigned int *)(uVar24 * 4 + *(int *)(param_1 + 0xac));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar18 = puVar26;
    while (uVar1 < uVar17) {
      uVar24 = uVar24 + 1;
      piVar12 = (int *)((unsigned int)*(unsigned short *)((int)puVar18 + 6) * 0x10 + iVar5);
      *puVar26 = puVar18[1];
      puVar26 = puVar26 + 1;
      if ((uVar1 & 1) == 0) {
        *(short *)(piVar12 + 2) = *(short *)(piVar12 + 2) + -1;
      }
      else {
        iVar11 = *(int *)(puVar20 + 2);
        iVar7 = *(int *)puVar20;
        *(short *)((int)piVar12 + 10) = *(short *)((int)piVar12 + 10) + -1;
        if (((iVar11 - *piVar12 | piVar12[1] - iVar7) & 0x80008000U) == 0) {
          fn_8308B7A0(*(unsigned int *)(param_1 + 0xd8),puVar20,uVar6,piVar12,param_6);
        }
      }
      uVar1 = *(unsigned short *)(puVar18 + 2);
      puVar18 = puVar18 + 1;
    }
    uVar25 = (unsigned short)uVar24;
    puVar21 = (unsigned short *)(puVar26 + 1);
    uVar1 = *(unsigned short *)(puVar26 + 1);
    while (uVar17 == uVar1) {
      uVar25 = (unsigned short)uVar24;
      if (uVar6 <= puVar21[1]) break;
      uVar24 = uVar24 + 1;
      uVar25 = (unsigned short)uVar24;
      iVar11 = (unsigned int)puVar21[1] * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar11 + 8) = *(short *)(iVar11 + 8) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    puVar20[4] = uVar25;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar17;
    uVar24 = (unsigned int)*puVar20;
    puVar26 = (unsigned int *)(uVar24 * 4 + *(int *)(param_1 + 0xb8));
    uVar1 = *(unsigned short *)(puVar26 + -1);
    puVar18 = puVar26;
    while (uVar25 = (unsigned short)uVar24, uVar9 < uVar1) {
      puVar21 = (unsigned short *)((unsigned int)*(unsigned short *)((int)puVar18 + -2) * 0x10 + iVar5);
      *puVar26 = puVar18[-1];
      puVar26 = puVar26 + -1;
      if ((uVar1 & 1) == 0) {
        *puVar21 = uVar25;
      }
      else {
        uVar1 = puVar20[3];
        uVar2 = puVar20[1];
        uVar3 = puVar20[5];
        uVar4 = puVar20[4];
        puVar21[2] = uVar25;
        if ((((__int64)(short)uVar1 - (__int64)(short)puVar21[1] |
              (__int64)(short)puVar21[3] - (__int64)(short)uVar2 |
              (__int64)(short)uVar3 - (__int64)(short)puVar21[4] |
             (__int64)(short)puVar21[5] - (__int64)(short)uVar4) & 0x8000U) == 0) {
          iVar11 = fn_82CE5410();
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),param_5,8);
          }
          iVar11 = param_5[1];
          param_5[1] = iVar11 + 1;
          puVar16 = (unsigned int *)(iVar11 * 8 + *param_5);
          *puVar16 = *(unsigned int *)(puVar20 + 6);
          puVar16[1] = *(unsigned int *)(puVar21 + 6);
        }
      }
      uVar24 = uVar24 - 1;
      uVar1 = *(unsigned short *)(puVar18 + -2);
      puVar18 = puVar18 + -1;
    }
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar9 == uVar1) {
      uVar25 = (unsigned short)uVar24;
      uVar1 = puVar21[1];
      if (uVar1 <= uVar6) break;
      uVar24 = uVar24 - 1;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar5) = uVar25;
      puVar21 = puVar21 + -2;
      uVar25 = (unsigned short)uVar24;
      uVar1 = *puVar21;
    }
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar9;
    *puVar20 = uVar25;
    uVar24 = (unsigned int)puVar20[2];
    puVar26 = (unsigned int *)(uVar24 * 4 + *(int *)(param_1 + 0xb8));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar18 = puVar26;
    while (uVar1 < uVar19) {
      uVar24 = uVar24 + 1;
      *puVar26 = puVar18[1];
      puVar26 = puVar26 + 1;
      psVar22 = (short *)((unsigned int)*(unsigned short *)((int)puVar18 + 6) * 0x10 + iVar5);
      if ((uVar1 & 1) == 0) {
        uVar1 = puVar20[1];
        uVar25 = puVar20[3];
        uVar2 = puVar20[5];
        uVar3 = puVar20[4];
        *psVar22 = *psVar22 + -1;
        if ((((__int64)psVar22[3] - (__int64)(short)uVar1 |
              (__int64)(short)uVar25 - (__int64)psVar22[1] |
              (__int64)(short)uVar2 - (__int64)psVar22[4] |
             (__int64)psVar22[5] - (__int64)(short)uVar3) & 0x8000U) == 0) {
          iVar11 = fn_82CE5410();
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),param_5,8);
          }
          iVar11 = param_5[1];
          param_5[1] = iVar11 + 1;
          puVar16 = (unsigned int *)(iVar11 * 8 + *param_5);
          *puVar16 = *(unsigned int *)(puVar20 + 6);
          puVar16[1] = *(unsigned int *)(psVar22 + 6);
        }
      }
      else {
        psVar22[2] = psVar22[2] + -1;
      }
      uVar1 = *(unsigned short *)(puVar18 + 2);
      puVar18 = puVar18 + 1;
    }
    puVar21 = (unsigned short *)(puVar26 + 1);
    uVar1 = *(unsigned short *)(puVar26 + 1);
    while (uVar19 == uVar1) {
      uVar1 = puVar21[1];
      if ((uVar6 <= uVar1) || (uVar1 == 0)) break;
      uVar24 = uVar24 + 1;
      iVar11 = (unsigned int)uVar1 * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar11 + 4) = *(short *)(iVar11 + 4) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    uVar17 = (unsigned int)*(unsigned short *)(puVar26 + -1);
    if (uVar19 < uVar17) {
      puVar21 = (unsigned short *)((int)puVar26 + 2);
      do {
        uVar1 = puVar21[-2];
        uVar24 = uVar24 - 1;
        *puVar26 = *(unsigned int *)(puVar21 + -3);
        psVar22 = (short *)((unsigned int)uVar1 * 0x10 + iVar5);
        puVar26 = puVar26 + -1;
        if ((uVar17 & 1) == 0) {
          uVar1 = puVar20[1];
          uVar25 = puVar20[3];
          uVar2 = puVar20[5];
          uVar3 = puVar20[4];
          *psVar22 = *psVar22 + 1;
          if ((((__int64)psVar22[3] - (__int64)(short)uVar1 |
                (__int64)(short)uVar25 - (__int64)psVar22[1] |
                (__int64)(short)uVar2 - (__int64)psVar22[4] |
               (__int64)psVar22[5] - (__int64)(short)uVar3) & 0x8000U) == 0) {
            iVar11 = fn_82CE5410();
            if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),param_6,8);
            }
            iVar11 = param_6[1];
            param_6[1] = iVar11 + 1;
            puVar18 = (unsigned int *)(iVar11 * 8 + *param_6);
            *puVar18 = *(unsigned int *)(puVar20 + 6);
            puVar18[1] = *(unsigned int *)(psVar22 + 6);
          }
        }
        else {
          psVar22[2] = psVar22[2] + 1;
        }
        uVar17 = (unsigned int)puVar21[-5];
        puVar21 = puVar21 + -2;
      } while (uVar19 < uVar17);
    }
    uVar25 = (unsigned short)uVar24;
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar19 == uVar1) {
      uVar25 = (unsigned short)uVar24;
      if (puVar21[1] <= uVar6) break;
      uVar24 = uVar24 - 1;
      uVar25 = (unsigned short)uVar24;
      iVar11 = (unsigned int)puVar21[1] * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(short *)(iVar11 + 4) = *(short *)(iVar11 + 4) + 1;
      puVar21 = puVar21 + -2;
      uVar1 = *puVar21;
    }
    puVar20[2] = uVar25;
    *(short *)puVar26 = (short)uVar19;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    uVar24 = (unsigned int)*puVar20;
    puVar26 = (unsigned int *)(uVar24 * 4 + *(int *)(param_1 + 0xb8));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar18 = puVar26;
    while (uVar1 < uVar9) {
      uVar24 = uVar24 + 1;
      psVar22 = (short *)((unsigned int)*(unsigned short *)((int)puVar18 + 6) * 0x10 + iVar5);
      *puVar26 = puVar18[1];
      puVar26 = puVar26 + 1;
      if ((uVar1 & 1) == 0) {
        *psVar22 = *psVar22 + -1;
      }
      else {
        uVar1 = puVar20[1];
        uVar25 = puVar20[3];
        uVar2 = puVar20[5];
        uVar3 = puVar20[4];
        psVar22[2] = psVar22[2] + -1;
        if ((((__int64)psVar22[3] - (__int64)(short)uVar1 |
              (__int64)(short)uVar25 - (__int64)psVar22[1] |
              (__int64)(short)uVar2 - (__int64)psVar22[4] |
             (__int64)psVar22[5] - (__int64)(short)uVar3) & 0x8000U) == 0) {
          iVar11 = fn_82CE5410();
          if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),param_6,8);
          }
          iVar11 = param_6[1];
          param_6[1] = iVar11 + 1;
          puVar16 = (unsigned int *)(iVar11 * 8 + *param_6);
          *puVar16 = *(unsigned int *)(puVar20 + 6);
          puVar16[1] = *(unsigned int *)(psVar22 + 6);
        }
      }
      uVar1 = *(unsigned short *)(puVar18 + 2);
      puVar18 = puVar18 + 1;
    }
    uVar25 = (unsigned short)uVar24;
    puVar21 = (unsigned short *)(puVar26 + 1);
    uVar1 = *(unsigned short *)(puVar26 + 1);
    while (uVar9 == uVar1) {
      uVar25 = (unsigned short)uVar24;
      if (uVar6 <= puVar21[1]) break;
      iVar11 = (unsigned int)puVar21[1] * 0x10;
      uVar24 = uVar24 + 1;
      uVar25 = (unsigned short)uVar24;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar11 + iVar5) = *(short *)(iVar11 + iVar5) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    *puVar20 = uVar25;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar9;
    uVar24 = (unsigned int)puVar20[1];
    puVar26 = (unsigned int *)(uVar24 * 4 + *(int *)(param_1 + 0xc4));
    uVar1 = *(unsigned short *)(puVar26 + -1);
    puVar18 = puVar26;
    while (uVar25 = (unsigned short)uVar24, uVar10 < uVar1) {
      psVar22 = (short *)((unsigned int)*(unsigned short *)((int)puVar18 + -2) * 0x10 + iVar5);
      *puVar26 = puVar18[-1];
      puVar26 = puVar26 + -1;
      if ((uVar1 & 1) == 0) {
        psVar22[1] = uVar25;
      }
      else {
        uVar1 = puVar20[5];
        uVar2 = puVar20[4];
        uVar3 = *puVar20;
        uVar4 = puVar20[2];
        psVar22[3] = uVar25;
        if (((uVar1 - psVar22[4] | psVar22[5] - uVar2 | psVar22[2] - uVar3 | uVar4 - *psVar22) &
            0x8000) == 0) {
          iVar11 = fn_82CE5410();
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),param_5,8);
          }
          iVar11 = param_5[1];
          param_5[1] = iVar11 + 1;
          puVar16 = (unsigned int *)(iVar11 * 8 + *param_5);
          *puVar16 = *(unsigned int *)(puVar20 + 6);
          puVar16[1] = *(unsigned int *)(psVar22 + 6);
        }
      }
      uVar24 = uVar24 - 1;
      uVar1 = *(unsigned short *)(puVar18 + -2);
      puVar18 = puVar18 + -1;
    }
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar10 == uVar1) {
      uVar25 = (unsigned short)uVar24;
      uVar1 = puVar21[1];
      if (uVar1 <= uVar6) break;
      uVar24 = uVar24 - 1;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(unsigned short *)((unsigned int)uVar1 * 0x10 + iVar5 + 2) = uVar25;
      puVar21 = puVar21 + -2;
      uVar25 = (unsigned short)uVar24;
      uVar1 = *puVar21;
    }
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar10;
    puVar20[1] = uVar25;
    uVar24 = (unsigned int)puVar20[3];
    puVar26 = (unsigned int *)(uVar24 * 4 + *(int *)(param_1 + 0xc4));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar18 = puVar26;
    while (uVar1 < uVar14) {
      uVar24 = uVar24 + 1;
      *puVar26 = puVar18[1];
      puVar26 = puVar26 + 1;
      psVar22 = (short *)((unsigned int)*(unsigned short *)((int)puVar18 + 6) * 0x10 + iVar5);
      if ((uVar1 & 1) == 0) {
        uVar1 = puVar20[5];
        uVar25 = *puVar20;
        uVar2 = puVar20[4];
        uVar3 = puVar20[2];
        psVar22[1] = psVar22[1] + -1;
        if (((uVar1 - psVar22[4] | psVar22[2] - uVar25 | psVar22[5] - uVar2 | uVar3 - *psVar22) &
            0x8000) == 0) {
          iVar11 = fn_82CE5410();
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),param_5,8);
          }
          iVar11 = param_5[1];
          param_5[1] = iVar11 + 1;
          puVar16 = (unsigned int *)(iVar11 * 8 + *param_5);
          *puVar16 = *(unsigned int *)(puVar20 + 6);
          puVar16[1] = *(unsigned int *)(psVar22 + 6);
        }
      }
      else {
        psVar22[3] = psVar22[3] + -1;
      }
      uVar1 = *(unsigned short *)(puVar18 + 2);
      puVar18 = puVar18 + 1;
    }
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar21 = (unsigned short *)(puVar26 + 1);
    while (((uVar14 == uVar1 && (uVar19 = (unsigned int)puVar21[1], uVar19 < uVar6)) && (uVar19 != 0))) {
      uVar24 = uVar24 + 1;
      iVar11 = uVar19 * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar11 + 6) = *(short *)(iVar11 + 6) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    uVar19 = (unsigned int)*(unsigned short *)(puVar26 + -1);
    if (uVar14 < uVar19) {
      puVar21 = (unsigned short *)((int)puVar26 + 2);
      do {
        uVar1 = puVar21[-2];
        uVar24 = uVar24 - 1;
        *puVar26 = *(unsigned int *)(puVar21 + -3);
        psVar22 = (short *)((unsigned int)uVar1 * 0x10 + iVar5);
        puVar26 = puVar26 + -1;
        if ((uVar19 & 1) == 0) {
          uVar1 = puVar20[5];
          uVar25 = *puVar20;
          uVar2 = puVar20[4];
          uVar3 = puVar20[2];
          psVar22[1] = psVar22[1] + 1;
          if (((uVar1 - psVar22[4] | psVar22[2] - uVar25 | psVar22[5] - uVar2 | uVar3 - *psVar22) &
              0x8000) == 0) {
            iVar11 = fn_82CE5410();
            if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
              fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),param_6,8);
            }
            iVar11 = param_6[1];
            param_6[1] = iVar11 + 1;
            puVar18 = (unsigned int *)(iVar11 * 8 + *param_6);
            *puVar18 = *(unsigned int *)(puVar20 + 6);
            puVar18[1] = *(unsigned int *)(psVar22 + 6);
          }
        }
        else {
          psVar22[3] = psVar22[3] + 1;
        }
        uVar19 = (unsigned int)puVar21[-5];
        puVar21 = puVar21 + -2;
      } while (uVar14 < uVar19);
    }
    uVar25 = (unsigned short)uVar24;
    puVar21 = (unsigned short *)(puVar26 + -1);
    uVar1 = *(unsigned short *)(puVar26 + -1);
    while (uVar14 == uVar1) {
      uVar25 = (unsigned short)uVar24;
      if (puVar21[1] <= uVar6) break;
      uVar24 = uVar24 - 1;
      uVar25 = (unsigned short)uVar24;
      iVar11 = (unsigned int)puVar21[1] * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + -1;
      *(short *)(iVar11 + 6) = *(short *)(iVar11 + 6) + 1;
      puVar21 = puVar21 + -2;
      uVar1 = *puVar21;
    }
    puVar20[3] = uVar25;
    *(short *)puVar26 = (short)uVar14;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    uVar24 = (unsigned int)puVar20[1];
    puVar26 = (unsigned int *)(uVar24 * 4 + *(int *)(param_1 + 0xc4));
    uVar1 = *(unsigned short *)(puVar26 + 1);
    puVar18 = puVar26;
    while (uVar1 < uVar10) {
      uVar24 = uVar24 + 1;
      psVar22 = (short *)((unsigned int)*(unsigned short *)((int)puVar18 + 6) * 0x10 + iVar5);
      *puVar26 = puVar18[1];
      puVar26 = puVar26 + 1;
      if ((uVar1 & 1) == 0) {
        psVar22[1] = psVar22[1] + -1;
      }
      else {
        uVar1 = puVar20[5];
        uVar25 = *puVar20;
        uVar2 = puVar20[4];
        uVar3 = puVar20[2];
        psVar22[3] = psVar22[3] + -1;
        if (((uVar1 - psVar22[4] | psVar22[2] - uVar25 | psVar22[5] - uVar2 | uVar3 - *psVar22) &
            0x8000) == 0) {
          iVar11 = fn_82CE5410();
          if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar11 + 0x10),param_6,8);
          }
          iVar11 = param_6[1];
          param_6[1] = iVar11 + 1;
          puVar16 = (unsigned int *)(iVar11 * 8 + *param_6);
          *puVar16 = *(unsigned int *)(puVar20 + 6);
          puVar16[1] = *(unsigned int *)(psVar22 + 6);
        }
      }
      uVar1 = *(unsigned short *)(puVar18 + 2);
      puVar18 = puVar18 + 1;
    }
    uVar25 = (unsigned short)uVar24;
    puVar21 = (unsigned short *)(puVar26 + 1);
    uVar1 = *(unsigned short *)(puVar26 + 1);
    while (uVar10 == uVar1) {
      uVar25 = (unsigned short)uVar24;
      if (uVar6 <= puVar21[1]) break;
      uVar24 = uVar24 + 1;
      uVar25 = (unsigned short)uVar24;
      iVar11 = (unsigned int)puVar21[1] * 0x10 + iVar5;
      *puVar26 = *(unsigned int *)puVar21;
      puVar26 = puVar26 + 1;
      *(short *)(iVar11 + 2) = *(short *)(iVar11 + 2) + -1;
      puVar21 = puVar21 + 2;
      uVar1 = *puVar21;
    }
    param_2 = param_2 + 1;
    puStack00000024 = puStack00000024 + 8;
    puVar20[1] = uVar25;
    *(unsigned short *)((int)puVar26 + 2) = uVar8;
    *(short *)puVar26 = (short)uVar10;
  } while( true );
}

