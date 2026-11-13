#define true 1
extern unsigned int uStack_b4;
extern unsigned int uStack_c4;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;


void fn_82F1CFB0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned int param_5,
                  unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  short sVar5;
  unsigned int uVar6;
  unsigned char *pbVar7;
  unsigned short *puVar8;
  unsigned char *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  unsigned __int64 uVar14;
  unsigned short uVar16;
  int iVar15;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  __int64 lVar21;
  __int64 lVar22;
  __int64 lVar23;
  __int64 lVar24;
  __int64 lVar25;
  unsigned __int64 uVar26;
  __int64 lVar27;
  __int64 lVar28;
  __int64 lVar29;
  unsigned __int64 uVar30;
  __int64 lVar31;
  __int64 lVar32;
  __int64 lVar33;
  __int64 lVar34;
  short *psVar35;
  __int64 lVar36;
  unsigned short *puVar37;
  __int64 lVar38;
  unsigned short *puVar39;
  unsigned __int64 uVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  __int64 lVar45;
  __int64 lVar46;
  __int64 lVar47;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int in_stack_0000006c;
  unsigned int in_stack_00000074;
  int in_stack_0000007c;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int uStack_c4;
  unsigned int uStack_b4;
  
  uVar26 = 0;
  uStack_c4 = 0;
  do {
    uVar6 = (unsigned int)uVar26;
    bVar2 = *(unsigned char *)(uVar6 + param_4);
    if (bVar2 != 0) {
      uVar20 = 0;
      uStack_b4 = 0;
      if ((int)uVar6 < 4) {
        lVar21 = (uVar26 & 2) * 8 + (uVar26 & 1);
        uVar40 = lVar21 * 0x10 + (unsigned __int64)in_stack_00000064;
        uVar19 = lVar21 * 8 + (unsigned __int64)param_5;
        uStack_d0 = (unsigned int)uVar19;
        if (*(int *)(param_1 + 0x7b38) == 0) {
          uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x31c);
        }
        else {
          uVar17 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x31c) & 0x7fffffff) << 1;
        }
        lVar21 = 0x10;
        uVar18 = ((__int64)(int)(uVar6 & 2) * (__int64)(int)uVar17 + (uVar26 & 1) * 2 & 0x3fffffff
                 ) * 4 + (unsigned __int64)param_8;
        uStack_cc = (unsigned int)uVar18;
        uVar20 = uVar26;
        uStack_b4 = uVar6;
      }
      else {
        if (uVar6 == 4) {
          uVar19 = (unsigned __int64)param_6;
          uVar18 = (unsigned __int64)in_stack_00000054;
          uVar40 = (unsigned __int64)in_stack_0000006c;
          uStack_cc = in_stack_00000054;
          uStack_d0 = param_6;
          if (*(int *)(param_1 + 0x7b38) == 0) {
LAB_82f1d0c0:
            uVar17 = (unsigned __int64)(*(int *)(param_1 + 0x31c) >> 1);
          }
          else {
            uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x31c);
          }
        }
        else {
          uVar19 = (unsigned __int64)param_7;
          uVar18 = (unsigned __int64)in_stack_0000005c;
          uVar40 = (unsigned __int64)in_stack_00000074;
          uStack_cc = in_stack_0000005c;
          uStack_d0 = param_7;
          if (*(int *)(param_1 + 0x7b38) == 0) goto LAB_82f1d0c0;
          uVar17 = (unsigned __int64)*(unsigned int *)(param_1 + 0x31c);
        }
        lVar21 = 8;
      }
      uVar30 = uVar40 + 4;
      lVar28 = lVar21 * 2;
      lVar22 = uVar19 + 2;
      lVar45 = 8;
      uVar14 = uVar30;
      do {
        pbVar7 = (unsigned char *)lVar22;
        puVar8 = (unsigned short *)uVar14;
        puVar8[-2] = (unsigned short)pbVar7[-2];
        puVar8[-1] = (unsigned short)pbVar7[-1];
        *puVar8 = (unsigned short)*pbVar7;
        puVar8[1] = (unsigned short)pbVar7[1];
        puVar8[2] = (unsigned short)pbVar7[2];
        puVar8[3] = (unsigned short)pbVar7[3];
        puVar8[4] = (unsigned short)pbVar7[4];
        lVar22 = lVar22 + lVar21;
        puVar8[5] = (unsigned short)pbVar7[5];
        uVar14 = uVar14 + lVar28;
        lVar45 = lVar45 + -1;
      } while (lVar45 != 0);
      uVar14 = uVar30;
      if (in_stack_0000007c == 0) {
        iVar10 = (int)lVar21;
        uVar6 = (unsigned int)uVar17;
        if ((bVar2 & 2) != 0) {
          lVar22 = -lVar21;
          lVar46 = 2;
          lVar45 = uVar17 + (uVar17 & 0x7fffffff) * 2 + uVar18 + -2;
          lVar31 = lVar21 * 4;
          lVar36 = lVar28 + uVar40;
          lVar25 = uVar18 - 2;
          lVar24 = uVar19 - 1;
          lVar29 = uVar18 + uVar17 + -2;
          lVar27 = (uVar17 & 0x3fffffff) * 4;
          lVar32 = lVar21 * 8;
          lVar33 = lVar21 * 6 + uVar40;
          lVar38 = lVar21 * 3 + uVar19 + -1;
          lVar34 = lVar31 + uVar40;
          lVar23 = lVar21 + uVar19 + -1;
          uVar26 = lVar22 - 1U;
          uVar18 = lVar22 + 1U;
          uVar19 = uVar40;
          uVar14 = 1 - uVar17;
          while( true ) {
            pbVar7 = (unsigned char *)lVar23;
            bVar3 = pbVar7[(int)lVar22 + 2];
            pbVar9 = (unsigned char *)lVar29;
            if ((uVar20 & 1) == 0) {
              bVar4 = *(unsigned char *)lVar25;
              bVar1 = pbVar9[(int)uVar14];
            }
            else {
              bVar1 = *(unsigned char *)lVar24;
              bVar4 = pbVar7[(int)uVar26];
            }
            uVar16 = (unsigned short)bVar4;
            uVar26 = (__int64)(short)(unsigned short)bVar3 - (__int64)(short)uVar16;
            *(unsigned short *)uVar19 =
                 (short)(((((int)((uVar26 & 0xffffffff) << 3) - (int)uVar26) +
                          (short)(unsigned short)pbVar7[(int)uVar18] * 0x25) -
                         ((int)(short)(unsigned short)bVar1 + (short)(unsigned short)bVar1 * 4)) + 0x10 >> 5);
            ((unsigned short *)uVar19)[1] =
                 (short)(((short)(unsigned short)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10 >> 5);
            bVar3 = pbVar7[2];
            if ((uVar20 & 1) == 0) {
              bVar4 = pbVar9[1];
              bVar1 = *pbVar9;
            }
            else {
              bVar4 = *pbVar7;
              bVar1 = pbVar7[-1];
            }
            uVar16 = (unsigned short)bVar1;
            uVar26 = (__int64)(short)(unsigned short)bVar3 - (__int64)(short)uVar16;
            *(unsigned short *)lVar36 =
                 (short)(((((int)((uVar26 & 0xffffffff) << 3) - (int)uVar26) +
                          (short)(unsigned short)pbVar7[1] * 0x25) -
                         ((int)(short)(unsigned short)bVar4 + (short)(unsigned short)bVar4 * 4)) + 0x10 >> 5);
            ((unsigned short *)lVar36)[1] =
                 (short)(((short)(unsigned short)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10 >> 5);
            bVar3 = pbVar7[iVar10 + 2];
            if ((uVar20 & 1) == 0) {
              bVar4 = pbVar9[uVar6 + 1];
              bVar1 = pbVar9[uVar6];
            }
            else {
              bVar4 = pbVar7[iVar10];
              bVar1 = pbVar7[iVar10 + -1];
            }
            uVar16 = (unsigned short)bVar1;
            uVar26 = (__int64)(short)(unsigned short)bVar3 - (__int64)(short)uVar16;
            *(unsigned short *)lVar34 =
                 (short)(((((int)((uVar26 & 0xffffffff) << 3) - (int)uVar26) +
                          (short)(unsigned short)pbVar7[iVar10 + 1] * 0x25) -
                         ((int)(short)(unsigned short)bVar4 + (short)(unsigned short)bVar4 * 4)) + 0x10 >> 5);
            ((unsigned short *)lVar34)[1] =
                 (short)(((short)(unsigned short)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10 >> 5);
            pbVar7 = (unsigned char *)lVar38;
            bVar3 = pbVar7[2];
            if ((uVar20 & 1) == 0) {
              bVar1 = ((unsigned char *)lVar45)[1];
              bVar4 = *(unsigned char *)lVar45;
            }
            else {
              bVar1 = *pbVar7;
              bVar4 = pbVar7[-1];
            }
            uVar16 = (unsigned short)bVar4;
            uVar26 = (__int64)(short)(unsigned short)bVar3 - (__int64)(short)uVar16;
            *(unsigned short *)lVar33 =
                 (short)(((((int)((uVar26 & 0xffffffff) << 3) - (int)uVar26) +
                          (short)(unsigned short)pbVar7[1] * 0x25) -
                         ((int)(short)(unsigned short)bVar1 + (short)(unsigned short)bVar1 * 4)) + 0x10 >> 5);
            lVar25 = lVar25 + lVar27;
            ((unsigned short *)lVar33)[1] =
                 (short)(((short)(unsigned short)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10 >> 5);
            lVar29 = lVar29 + lVar27;
            lVar45 = lVar45 + lVar27;
            lVar24 = lVar24 + lVar31;
            uVar19 = lVar32 + uVar19;
            lVar36 = lVar32 + lVar36;
            lVar34 = lVar32 + lVar34;
            lVar33 = lVar32 + lVar33;
            lVar23 = lVar23 + lVar31;
            lVar38 = lVar38 + lVar31;
            lVar46 = lVar46 + -1;
            if (lVar46 == 0) break;
            uVar14 = 1 - uVar17 & 0xffffffff;
            uVar18 = lVar22 + 1U & 0xffffffff;
            uVar26 = lVar22 - 1U & 0xffffffff;
          }
          uVar14 = uVar30 & 0xffffffff;
          uVar18 = (unsigned __int64)uStack_cc;
          uVar19 = (unsigned __int64)uStack_d0;
          uVar26 = (unsigned __int64)uStack_c4;
        }
        if ((bVar2 & 0x10) != 0) {
          lVar22 = -lVar21;
          lVar47 = 2;
          lVar23 = uVar17 + 3 + (uVar17 + 3 & 0x7fffffff) * 2 + uVar18;
          lVar24 = uVar18 + 9;
          lVar25 = uVar19 + 7;
          lVar34 = (lVar21 + 3) * 4 + uVar40;
          lVar46 = lVar21 * 3 + uVar19 + 7;
          lVar38 = (lVar21 + 6) * 2 + uVar40;
          lVar29 = lVar21 * 4;
          lVar27 = (uVar17 & 0x3fffffff) * 4;
          lVar32 = lVar21 * 8;
          lVar31 = uVar18 + uVar17 + 9;
          lVar45 = lVar21 + uVar19 + 7;
          lVar36 = uVar40 + 0xc;
          lVar33 = (lVar21 + 2) * 6 + uVar40;
          uVar20 = -uVar17 - 1;
          uVar18 = lVar22 + 2U;
          uVar19 = lVar22 + 1U;
          while( true ) {
            pbVar7 = (unsigned char *)lVar45;
            bVar3 = pbVar7[(int)lVar22 + -1];
            pbVar9 = (unsigned char *)lVar31;
            if ((uVar26 & 5) == 0) {
              bVar4 = pbVar7[(int)uVar19];
              bVar1 = pbVar7[(int)uVar18];
            }
            else {
              bVar1 = *(unsigned char *)lVar24;
              bVar4 = pbVar9[(int)uVar20];
            }
            uVar16 = (unsigned short)bVar1;
            uVar20 = (__int64)(short)(unsigned short)bVar3 - (__int64)(short)uVar16;
            ((unsigned short *)lVar36)[1] =
                 (short)((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) -
                         ((int)(short)(unsigned short)bVar4 + (short)(unsigned short)bVar4 * 4)) +
                         (short)(unsigned short)*(unsigned char *)lVar25 * 0x25 + 0x10 >> 5);
            *(unsigned short *)lVar36 =
                 (short)(((short)(unsigned short)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10 >> 5);
            bVar3 = pbVar7[-1];
            if ((uVar26 & 5) == 0) {
              bVar1 = pbVar7[1];
              bVar4 = pbVar7[2];
            }
            else {
              bVar1 = pbVar9[-1];
              bVar4 = *pbVar9;
            }
            uVar16 = (unsigned short)bVar4;
            uVar20 = (__int64)(short)(unsigned short)bVar3 - (__int64)(short)uVar16;
            ((unsigned short *)lVar38)[1] =
                 (short)((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) -
                         ((int)(short)(unsigned short)bVar1 + (short)(unsigned short)bVar1 * 4)) +
                         (short)(unsigned short)*pbVar7 * 0x25 + 0x10 >> 5);
            *(unsigned short *)lVar38 =
                 (short)(((short)(unsigned short)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10 >> 5);
            bVar3 = pbVar7[iVar10 + -1];
            if ((uVar26 & 5) == 0) {
              bVar1 = pbVar7[(int)(lVar21 + 2)];
              bVar4 = pbVar7[iVar10 + 1];
            }
            else {
              bVar1 = pbVar9[uVar6];
              bVar4 = pbVar9[uVar6 - 1];
            }
            uVar16 = (unsigned short)bVar1;
            uVar20 = (__int64)(short)(unsigned short)bVar3 - (__int64)(short)uVar16;
            ((unsigned short *)lVar34)[1] =
                 (short)((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) -
                         ((int)(short)(unsigned short)bVar4 + (short)(unsigned short)bVar4 * 4)) +
                         (short)(unsigned short)pbVar7[iVar10] * 0x25 + 0x10 >> 5);
            *(unsigned short *)lVar34 =
                 (short)(((short)(unsigned short)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10 >> 5);
            pbVar7 = (unsigned char *)lVar46;
            bVar3 = pbVar7[-1];
            if ((uVar26 & 5) == 0) {
              bVar4 = pbVar7[1];
              bVar1 = pbVar7[2];
            }
            else {
              bVar4 = ((unsigned char *)lVar23)[-1];
              bVar1 = *(unsigned char *)lVar23;
            }
            uVar16 = (unsigned short)bVar1;
            uVar20 = (__int64)(short)(unsigned short)bVar3 - (__int64)(short)uVar16;
            ((unsigned short *)lVar33)[1] =
                 (short)((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) -
                         ((int)(short)(unsigned short)bVar4 + (short)(unsigned short)bVar4 * 4)) +
                         (short)(unsigned short)*pbVar7 * 0x25 + 0x10 >> 5);
            lVar24 = lVar27 + lVar24;
            *(unsigned short *)lVar33 =
                 (short)(((short)(unsigned short)bVar3 * 0x25 -
                         ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10 >> 5);
            lVar31 = lVar31 + lVar27;
            lVar23 = lVar23 + lVar27;
            lVar36 = lVar32 + lVar36;
            lVar38 = lVar32 + lVar38;
            lVar34 = lVar32 + lVar34;
            lVar33 = lVar32 + lVar33;
            lVar25 = lVar29 + lVar25;
            lVar45 = lVar45 + lVar29;
            lVar46 = lVar46 + lVar29;
            lVar47 = lVar47 + -1;
            if (lVar47 == 0) break;
            uVar18 = lVar22 + 2U & 0xffffffff;
            uVar19 = lVar22 + 1U & 0xffffffff;
            uVar20 = -uVar17 - 1 & 0xffffffff;
          }
          uVar26 = (unsigned __int64)uStack_c4;
          uVar19 = (unsigned __int64)uStack_d0;
          uVar18 = (unsigned __int64)uStack_cc;
          uVar14 = uVar30 & 0xffffffff;
        }
        iVar11 = (int)uVar19;
        iVar12 = (int)uVar18;
        iVar13 = (int)uVar40;
        if ((bVar2 & 4) != 0) {
          uStack_b4 = uStack_b4 & 2;
          lVar23 = 0;
          lVar27 = 2;
          lVar22 = uVar14 - 6;
          lVar24 = (uVar18 - uVar17) + 2;
          lVar45 = (uVar19 - lVar21) + 2;
          lVar25 = lVar28 + uVar40;
          do {
            psVar35 = (short *)lVar25;
            sVar5 = *psVar35;
            iVar15 = (int)lVar22;
            pbVar7 = (unsigned char *)lVar45;
            iVar43 = (int)lVar23;
            pbVar9 = (unsigned char *)lVar24;
            if (uStack_b4 == 0) {
              bVar3 = pbVar9[-2];
              bVar1 = *(unsigned char *)((iVar43 - (int)((uVar17 & 0xffffffff) << 1)) + iVar12);
            }
            else {
              bVar3 = pbVar7[-2];
              bVar1 = *(unsigned char *)((iVar43 - (int)lVar28) + iVar11);
            }
            uVar16 = (unsigned short)bVar1;
            uVar20 = (__int64)sVar5 - (__int64)(short)uVar16;
            *(short *)(iVar15 + 2) =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar15 + 2) * 0x25) -
                         ((int)(short)(unsigned short)bVar3 + (short)(unsigned short)bVar3 * 4)) + 0x10 >> 5);
            *psVar35 = (short)((sVar5 * 0x25 -
                               ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10 >>
                              5);
            sVar5 = psVar35[1];
            if (uStack_b4 == 0) {
              bVar3 = pbVar9[-1];
              iVar41 = iVar43 + (uVar6 & 0x7fffffff) * -2 + iVar12;
            }
            else {
              bVar3 = pbVar7[-1];
              iVar41 = iVar43 + iVar10 * -2 + iVar11;
            }
            uVar16 = (unsigned short)*(unsigned char *)(iVar41 + 1);
            uVar20 = (__int64)sVar5 - (__int64)(short)uVar16;
            *(short *)(iVar15 + 4) =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar15 + 4) * 0x25) -
                         ((int)(short)(unsigned short)bVar3 + (short)(unsigned short)bVar3 * 4)) + 0x10 >> 5);
            iVar41 = (int)((lVar21 + 2 + lVar23 & 0xffffffffU) << 1);
            psVar35[1] = (short)((sVar5 * 0x25 -
                                 ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10
                                >> 5);
            sVar5 = *(short *)(iVar41 + iVar13);
            if (uStack_b4 == 0) {
              bVar3 = *pbVar9;
              iVar42 = iVar43 + (uVar6 & 0x7fffffff) * -2 + iVar12;
            }
            else {
              bVar3 = *pbVar7;
              iVar42 = iVar43 + iVar10 * -2 + iVar11;
            }
            uVar16 = (unsigned short)*(unsigned char *)(iVar42 + 2);
            uVar20 = (__int64)sVar5 - (__int64)(short)uVar16;
            *(short *)(iVar15 + 6) =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar15 + 6) * 0x25) -
                         ((int)(short)(unsigned short)bVar3 + (short)(unsigned short)bVar3 * 4)) + 0x10 >> 5);
            *(short *)(iVar41 + iVar13) =
                 (short)((sVar5 * 0x25 - ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2)))
                         + 0x10 >> 5);
            iVar41 = (int)((lVar21 + 3 + lVar23 & 0xffffffffU) << 1);
            sVar5 = *(short *)(iVar41 + iVar13);
            if (uStack_b4 == 0) {
              bVar3 = pbVar9[1];
              iVar43 = iVar43 + (uVar6 & 0x7fffffff) * -2 + iVar12;
            }
            else {
              bVar3 = pbVar7[1];
              iVar43 = iVar43 + iVar10 * -2 + iVar11;
            }
            uVar16 = (unsigned short)*(unsigned char *)(iVar43 + 3);
            uVar20 = (__int64)sVar5 - (__int64)(short)uVar16;
            lVar22 = lVar22 + 8;
            *(unsigned short *)lVar22 =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar15 + 8) * 0x25) -
                         ((int)(short)(unsigned short)bVar3 + (short)(unsigned short)bVar3 * 4)) + 0x10 >> 5);
            lVar23 = lVar23 + 4;
            *(short *)(iVar41 + iVar13) =
                 (short)((sVar5 * 0x25 - ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2)))
                         + 0x10 >> 5);
            lVar25 = lVar25 + 8;
            lVar45 = lVar45 + 4;
            lVar24 = lVar24 + 4;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
        }
        if ((bVar2 & 0x20) != 0) {
          lVar45 = lVar21 * 7;
          lVar22 = lVar21 * 6;
          lVar23 = 0;
          lVar24 = 2;
          do {
            iVar41 = (int)lVar23;
            iVar43 = ((int)lVar22 + iVar41) * 2;
            iVar15 = ((int)lVar45 + iVar41) * 2;
            puVar39 = (unsigned short *)(iVar43 + iVar13);
            puVar37 = (unsigned short *)(iVar15 + iVar13);
            sVar5 = *(short *)(iVar43 + iVar13);
            if ((uVar26 & 6) == 0) {
              bVar2 = *(unsigned char *)((int)(lVar21 << 3) + iVar41 + iVar11);
              bVar3 = *(unsigned char *)(iVar10 + (int)(lVar21 << 3) + iVar41 + iVar11);
            }
            else {
              bVar2 = *(unsigned char *)((int)((uVar17 & 0xffffffff) << 3) + iVar41 + iVar12);
              bVar3 = *(unsigned char *)(uVar6 + (int)((uVar17 & 0xffffffff) << 3) + iVar41 + iVar12);
            }
            uVar16 = (unsigned short)bVar3;
            uVar20 = (__int64)sVar5 - (__int64)(short)uVar16;
            *puVar37 = (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                                *(short *)(iVar15 + iVar13) * 0x25) -
                               ((int)(short)(unsigned short)bVar2 + (short)(unsigned short)bVar2 * 4)) + 0x10 >> 5);
            *puVar39 = (short)((sVar5 * 0x25 -
                               ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10 >>
                              5);
            sVar5 = puVar39[1];
            if ((uVar26 & 6) == 0) {
              iVar43 = iVar10 * 8 + iVar41 + iVar11;
              iVar15 = iVar10 * 9 + iVar41 + iVar11;
            }
            else {
              iVar43 = uVar6 * 8 + iVar41 + iVar12;
              iVar15 = uVar6 * 9 + iVar41 + iVar12;
            }
            uVar16 = (unsigned short)*(unsigned char *)(iVar15 + 1);
            uVar20 = (__int64)sVar5 - (__int64)(short)uVar16;
            iVar15 = (int)((lVar22 + lVar23 + 2U & 0xffffffff) << 1);
            puVar37[1] = (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                                  (short)puVar37[1] * 0x25) -
                                 ((int)(short)(unsigned short)*(unsigned char *)(iVar43 + 1) +
                                 (short)(unsigned short)*(unsigned char *)(iVar43 + 1) * 4)) + 0x10 >> 5);
            iVar43 = (int)((lVar45 + lVar23 + 2U & 0xffffffff) << 1);
            puVar39[1] = (short)((sVar5 * 0x25 -
                                 ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2))) + 0x10
                                >> 5);
            sVar5 = *(short *)(iVar15 + iVar13);
            if ((uVar26 & 6) == 0) {
              iVar44 = iVar10 * 8 + iVar41 + iVar11;
              iVar42 = iVar10 * 9 + iVar41 + iVar11;
            }
            else {
              iVar44 = uVar6 * 8 + iVar41 + iVar12;
              iVar42 = uVar6 * 9 + iVar41 + iVar12;
            }
            uVar16 = (unsigned short)*(unsigned char *)(iVar42 + 2);
            uVar20 = (__int64)sVar5 - (__int64)(short)uVar16;
            *(short *)(iVar43 + iVar13) =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar43 + iVar13) * 0x25) -
                         ((int)(short)(unsigned short)*(unsigned char *)(iVar44 + 2) +
                         (short)(unsigned short)*(unsigned char *)(iVar44 + 2) * 4)) + 0x10 >> 5);
            *(short *)(iVar15 + iVar13) =
                 (short)((sVar5 * 0x25 - ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2)))
                         + 0x10 >> 5);
            iVar15 = (int)((lVar22 + 3 + lVar23 & 0xffffffffU) << 1);
            iVar43 = (int)((lVar45 + 3 + lVar23 & 0xffffffffU) << 1);
            sVar5 = *(short *)(iVar15 + iVar13);
            if ((uVar26 & 6) == 0) {
              iVar42 = iVar10 * 8 + iVar41 + iVar11;
              iVar41 = iVar10 * 9 + iVar41 + iVar11;
            }
            else {
              iVar42 = uVar6 * 8 + iVar41 + iVar12;
              iVar41 = uVar6 * 9 + iVar41 + iVar12;
            }
            uVar16 = (unsigned short)*(unsigned char *)(iVar41 + 3);
            uVar20 = (__int64)sVar5 - (__int64)(short)uVar16;
            *(short *)(iVar43 + iVar13) =
                 (short)(((((int)((uVar20 & 0xffffffff) << 3) - (int)uVar20) +
                          *(short *)(iVar43 + iVar13) * 0x25) -
                         ((int)(short)(unsigned short)*(unsigned char *)(iVar42 + 3) +
                         (short)(unsigned short)*(unsigned char *)(iVar42 + 3) * 4)) + 0x10 >> 5);
            lVar23 = lVar23 + 4;
            *(short *)(iVar15 + iVar13) =
                 (short)((sVar5 * 0x25 - ((int)(short)uVar16 + (int)((__int64)(short)uVar16 << 2)))
                         + 0x10 >> 5);
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
      }
      lVar21 = 8;
      do {
        psVar35 = (short *)uVar14;
        psVar35[-2] = psVar35[-2] + -0x80;
        psVar35[-1] = psVar35[-1] + -0x80;
        *psVar35 = *psVar35 + -0x80;
        psVar35[1] = psVar35[1] + -0x80;
        psVar35[2] = psVar35[2] + -0x80;
        psVar35[3] = psVar35[3] + -0x80;
        psVar35[4] = psVar35[4] + -0x80;
        psVar35[5] = psVar35[5] + -0x80;
        uVar14 = lVar28 + uVar14;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    uVar26 = uVar26 + 1;
    uStack_c4 = (unsigned int)uVar26;
    if (5 < (int)uStack_c4) {
      return;
    }
  } while( true );
}

