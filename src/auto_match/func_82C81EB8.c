extern int fn_82CAB2D8();
extern unsigned int iStack00000014;
extern unsigned int iStack00000034;
extern unsigned int iStack0000003c;
extern unsigned int iStack_a0;
extern unsigned int uStack_a4;


void fn_82C81EB8(int param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
                  int param_6)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  unsigned char bVar9;
  unsigned char bVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  int iVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned int uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  unsigned int uVar27;
  int iVar28;
  unsigned int uVar29;
  int iVar30;
  unsigned char *pbVar31;
  unsigned char *pbVar32;
  unsigned char *pbVar33;
  unsigned char *pbVar34;
  unsigned char *pbVar35;
  unsigned char *pbVar36;
  unsigned char *pbVar37;
  unsigned char *pbVar38;
  unsigned char *pbVar39;
  unsigned char *pbVar40;
  unsigned __int64 uVar41;
  unsigned __int64 uVar42;
  unsigned __int64 uVar43;
  unsigned __int64 uVar44;
  unsigned __int64 uVar45;
  unsigned __int64 uVar46;
  unsigned __int64 uVar47;
  unsigned __int64 uVar48;
  int iStack00000014;
  unsigned char *pbStack0000001c;
  int iStack00000034;
  int iStack0000003c;
  int in_stack_00000054;
  int in_stack_0000005c;
  int in_stack_00000064;
  unsigned char *pbStack_c0;
  unsigned char *pbStack_bc;
  unsigned char *pbStack_b8;
  unsigned char *pbStack_b4;
  unsigned int uStack_a4;
  int iStack_a0;
  
  iStack00000014 = param_1;
  pbStack0000001c = param_2;
  iStack00000034 = param_5;
  iStack0000003c = param_6;
  if (in_stack_00000054 != 0) {
    pbVar37 = param_2 + 8;
    iVar11 = *(int *)(param_1 + 0x100);
    pbVar36 = param_2 + 7;
    pbVar32 = param_2 + 9;
    pbStack_bc = (unsigned char *)0x0;
    pbVar33 = param_2 + 6;
    pbVar31 = param_2 + 10;
    pbVar34 = param_2 + 5;
    pbStack_c0 = param_2 + 0xb;
    pbVar35 = param_2 + 4;
    pbStack_b4 = param_2 + 0xc;
    pbStack_b8 = param_2 + 3;
    do {
      bVar1 = *pbVar35;
      uVar42 = (unsigned __int64)bVar1;
      bVar2 = *pbStack_b8;
      bVar3 = *pbStack_b4;
      bVar4 = *pbVar34;
      uVar44 = (unsigned __int64)bVar4;
      bVar5 = *pbVar33;
      uVar46 = (unsigned __int64)bVar5;
      bVar6 = *pbVar36;
      uVar48 = (unsigned __int64)bVar6;
      bVar7 = *pbVar37;
      uVar47 = (unsigned __int64)bVar7;
      bVar8 = *pbVar32;
      uVar45 = (unsigned __int64)bVar8;
      bVar9 = *pbVar31;
      uVar43 = (unsigned __int64)bVar9;
      bVar10 = *pbStack_c0;
      uVar41 = (unsigned __int64)bVar10;
      if (((unsigned int)pbStack_bc & 3) == 0) {
        uVar26 = uVar41 - bVar3;
        uVar24 = (unsigned __int64)((int)uVar26 >> 0x1f);
        uVar24 = (uVar26 ^ uVar24) - uVar24;
        uVar26 = (unsigned __int64)((int)(uVar43 - uVar41) >> 0x1f);
        uVar26 = (uVar43 - uVar41 ^ uVar26) - uVar26;
        uVar17 = (unsigned __int64)((int)(uVar45 - uVar43) >> 0x1f);
        uVar17 = (uVar45 - uVar43 ^ uVar17) - uVar17;
        uVar20 = (unsigned __int64)((int)(uVar47 - uVar45) >> 0x1f);
        uVar20 = (uVar47 - uVar45 ^ uVar20) - uVar20;
        uVar21 = (unsigned __int64)((int)(uVar48 - uVar47) >> 0x1f);
        uVar21 = (uVar48 - uVar47 ^ uVar21) - uVar21;
        uVar19 = (unsigned __int64)((int)(uVar46 - uVar48) >> 0x1f);
        uVar19 = (uVar46 - uVar48 ^ uVar19) - uVar19;
        uVar18 = (unsigned __int64)((int)(uVar44 - uVar46) >> 0x1f);
        uVar18 = (uVar44 - uVar46 ^ uVar18) - uVar18;
        uVar22 = bVar2 - uVar42;
        uVar14 = (unsigned __int64)((int)(uVar42 - uVar44) >> 0x1f);
        uVar14 = (uVar42 - uVar44 ^ uVar14) - uVar14;
        uVar25 = (unsigned __int64)((int)uVar22 >> 0x1f);
        uVar25 = (uVar22 ^ uVar25) - uVar25;
        iStack_a0 = ((unsigned int)(uVar24 < 3) - ((int)uVar24 >> 0x1f)) +
                    ((unsigned int)(uVar26 < 3) - ((int)uVar26 >> 0x1f)) +
                    ((unsigned int)(uVar17 < 3) - ((int)uVar17 >> 0x1f)) +
                    ((unsigned int)(uVar20 < 3) - ((int)uVar20 >> 0x1f)) +
                    ((unsigned int)(uVar21 < 3) - ((int)uVar21 >> 0x1f)) +
                    ((unsigned int)(uVar19 < 3) - ((int)uVar19 >> 0x1f)) +
                    ((unsigned int)(uVar18 < 3) - ((int)uVar18 >> 0x1f)) +
                    ((unsigned int)(uVar14 < 3) - ((int)uVar14 >> 0x1f)) +
                    ((unsigned int)(uVar25 < 3) - ((int)uVar25 >> 0x1f));
      }
      if (iStack_a0 < 6) {
        uVar26 = uVar48 - uVar47;
        iVar12 = (int)uVar26;
        uVar15 = (int)(((uVar46 - uVar45) + 2 & 0xffffffff) << 1) -
                 (iVar12 + (int)((uVar26 & 0xffffffff) << 2));
        uVar15 = ((int)uVar15 >> 3) + (unsigned int)((int)uVar15 < 0 && (uVar15 & 7) != 0);
        iVar16 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
        if (iVar16 < in_stack_0000005c) {
          uVar13 = (int)(((uVar42 - uVar48) + 2 & 0xffffffff) << 1) +
                   (int)(uVar46 - uVar44) + (int)((uVar46 - uVar44 & 0xffffffff) << 2);
          uVar23 = (int)(((uVar47 - uVar41) + 2 & 0xffffffff) << 1) +
                   (int)(uVar43 - uVar45) + (int)((uVar43 - uVar45 & 0xffffffff) << 2);
          uVar29 = ((int)uVar13 >> 3) + (unsigned int)((int)uVar13 < 0 && (uVar13 & 7) != 0);
          uVar27 = ((int)uVar23 >> 3) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 7) != 0);
          uVar13 = (int)uVar27 >> 0x1f;
          uVar23 = (int)uVar29 >> 0x1f;
          iVar30 = (uVar27 ^ uVar13) - uVar13;
          iVar28 = (uVar29 ^ uVar23) - uVar23;
          if (iVar28 < iVar30) {
            iVar30 = iVar28;
          }
          if (iVar30 < iVar16) {
            iVar16 = -1;
            if (-1 < (int)uVar15) {
              iVar16 = 1;
            }
            uVar42 = (__int64)(iVar12 >> 1) + (unsigned __int64)(iVar12 < 0 && (uVar26 & 1) != 0);
            uVar15 = (iVar16 * iVar30 - uVar15) * 5;
            uVar41 = (__int64)((int)uVar15 >> 3) +
                     (unsigned __int64)((int)uVar15 < 0 && (uVar15 & 7) != 0);
            if ((__int64)uVar42 < 1) {
              uVar41 = -((unsigned __int64)(uVar41 == 0) + ((uVar41 & 0xffffffff) >> 0x1f)) & uVar41;
              if ((int)uVar41 < (int)uVar42) goto LAB_82c82420;
            }
            else {
              uVar41 = ((uVar41 & 0xffffffff) >> 0x1f) - 1 & uVar41;
              if ((int)uVar42 < (int)uVar41) {
LAB_82c82420:
                uVar41 = uVar42;
              }
            }
            *pbVar36 = *(unsigned char *)(((unsigned int)bVar6 - (int)uVar41) + iVar11);
            *pbVar37 = *(unsigned char *)((int)uVar41 + (unsigned int)bVar7 + iVar11);
          }
        }
      }
      else {
        iVar12 = fn_82CAB2D8(uVar42,uVar44,uVar46,uVar48,uVar47,uVar45,uVar43,uVar41);
        if (iVar12 != 0) {
          uVar15 = (int)((unsigned int)bVar1 - (unsigned int)bVar2) >> 0x1f;
          uVar43 = (unsigned __int64)bVar2;
          if (in_stack_0000005c <= (int)(((unsigned int)bVar1 - (unsigned int)bVar2 ^ uVar15) - uVar15)) {
            uVar43 = uVar42;
          }
          uVar15 = (int)((unsigned int)bVar10 - (unsigned int)bVar3) >> 0x1f;
          uVar42 = (unsigned __int64)bVar3;
          if (in_stack_0000005c <= (int)(((unsigned int)bVar10 - (unsigned int)bVar3 ^ uVar15) - uVar15)) {
            uVar42 = uVar41;
          }
          iVar12 = (int)uVar43;
          *pbVar35 = *(unsigned char *)(((int)(((bVar1 + 2) * 2 + iVar12 * 3 + (unsigned int)bVar5 + (unsigned int)bVar4) * 2
                                      + (unsigned int)bVar7 + (unsigned int)bVar6) >> 4) + iVar11);
          iVar16 = (int)uVar42;
          *pbVar34 = *(unsigned char *)(((int)((((unsigned int)bVar4 + iVar12 + 2) * 2 + (unsigned int)bVar6 + (unsigned int)bVar5 +
                                      (unsigned int)bVar1) * 2 + (unsigned int)bVar8 + (unsigned int)bVar7) >> 4) + iVar11);
          *pbVar33 = *(unsigned char *)(((int)(((bVar5 + 2) * 2 + (unsigned int)bVar7 + (unsigned int)bVar6 + (unsigned int)bVar4 +
                                       (unsigned int)bVar1 + iVar12) * 2 + (unsigned int)bVar9 + (unsigned int)bVar8) >> 4)
                              + iVar11);
          *pbVar36 = *(unsigned char *)(((int)(((bVar6 + 2) * 2 + (unsigned int)bVar8 + (unsigned int)bVar7 + (unsigned int)bVar5 +
                                      (unsigned int)bVar4) * 2 + (unsigned int)bVar10 + (unsigned int)bVar9 + (unsigned int)bVar1 +
                                     iVar12) >> 4) + iVar11);
          *pbVar37 = *(unsigned char *)(((int)(((bVar7 + 2) * 2 + (unsigned int)bVar9 + (unsigned int)bVar8 + (unsigned int)bVar6 +
                                      (unsigned int)bVar5) * 2 + iVar16 + (unsigned int)bVar10 + (unsigned int)bVar4 +
                                     (unsigned int)bVar1) >> 4) + iVar11);
          *pbVar32 = *(unsigned char *)(((int)(((bVar8 + 2) * 2 + iVar16 + (unsigned int)bVar10 + (unsigned int)bVar9 +
                                       (unsigned int)bVar7 + (unsigned int)bVar6) * 2 + (unsigned int)bVar5 + (unsigned int)bVar4)
                               >> 4) + iVar11);
          *pbVar31 = *(unsigned char *)(((int)(((iVar16 + (unsigned int)bVar9 + 2) * 2 + (unsigned int)bVar10 + (unsigned int)bVar8 +
                                      (unsigned int)bVar7) * 2 + (unsigned int)bVar6 + (unsigned int)bVar5) >> 4) + iVar11);
          *pbStack_c0 = *(unsigned char *)(((int)(((bVar10 + 2) * 2 + iVar16 * 3 + (unsigned int)bVar9 + (unsigned int)bVar8)
                                         * 2 + (unsigned int)bVar7 + (unsigned int)bVar6) >> 4) + iVar11);
        }
      }
      pbVar34 = pbVar34 + in_stack_00000064;
      pbStack_bc = (unsigned char *)((int)pbStack_bc + 1);
      pbStack_b8 = pbStack_b8 + in_stack_00000064;
      pbVar33 = pbVar33 + in_stack_00000064;
      pbVar32 = pbVar32 + in_stack_00000064;
      pbVar31 = pbVar31 + in_stack_00000064;
      pbStack_c0 = pbStack_c0 + in_stack_00000064;
      pbStack_b4 = pbStack_b4 + in_stack_00000064;
      pbVar35 = pbVar35 + in_stack_00000064;
      pbVar36 = pbVar36 + in_stack_00000064;
      pbVar37 = pbVar37 + in_stack_00000064;
    } while ((int)pbStack_bc < 0x10);
  }
  if (iStack00000034 != 0) {
    pbVar36 = pbStack0000001c + -1;
    iVar11 = *(int *)(iStack00000014 + 0x100);
    pbVar33 = pbStack0000001c + -2;
    pbVar32 = pbStack0000001c + 2;
    pbVar34 = pbStack0000001c + -3;
    pbStack_c0 = pbStack0000001c + 3;
    pbVar35 = pbStack0000001c + -4;
    pbStack_bc = pbStack0000001c + 4;
    pbStack_b8 = pbStack0000001c + -5;
    pbStack_b4 = (unsigned char *)0x0;
    pbVar31 = pbStack0000001c;
    do {
      bVar1 = *pbVar35;
      uVar42 = (unsigned __int64)bVar1;
      bVar2 = *pbStack_b8;
      bVar3 = *pbStack_bc;
      bVar4 = *pbVar34;
      uVar44 = (unsigned __int64)bVar4;
      bVar5 = *pbVar33;
      uVar46 = (unsigned __int64)bVar5;
      bVar6 = *pbVar36;
      uVar48 = (unsigned __int64)bVar6;
      bVar7 = *pbVar31;
      uVar47 = (unsigned __int64)bVar7;
      bVar8 = pbVar31[1];
      uVar45 = (unsigned __int64)bVar8;
      bVar9 = *pbVar32;
      uVar43 = (unsigned __int64)bVar9;
      bVar10 = *pbStack_c0;
      uVar41 = (unsigned __int64)bVar10;
      if (((unsigned int)pbStack_b4 & 3) == 0) {
        uVar26 = uVar41 - bVar3;
        uVar19 = (unsigned __int64)((int)uVar26 >> 0x1f);
        uVar19 = (uVar26 ^ uVar19) - uVar19;
        uVar26 = (unsigned __int64)((int)(uVar43 - uVar41) >> 0x1f);
        uVar26 = (uVar43 - uVar41 ^ uVar26) - uVar26;
        uVar14 = (unsigned __int64)((int)(uVar45 - uVar43) >> 0x1f);
        uVar14 = (uVar45 - uVar43 ^ uVar14) - uVar14;
        uVar24 = (unsigned __int64)((int)(uVar47 - uVar45) >> 0x1f);
        uVar24 = (uVar47 - uVar45 ^ uVar24) - uVar24;
        uVar17 = (unsigned __int64)((int)(uVar48 - uVar47) >> 0x1f);
        uVar17 = (uVar48 - uVar47 ^ uVar17) - uVar17;
        uVar21 = (unsigned __int64)((int)(uVar46 - uVar48) >> 0x1f);
        uVar21 = (uVar46 - uVar48 ^ uVar21) - uVar21;
        uVar25 = (unsigned __int64)((int)(uVar44 - uVar46) >> 0x1f);
        uVar25 = (uVar44 - uVar46 ^ uVar25) - uVar25;
        uVar20 = bVar2 - uVar42;
        uVar18 = (unsigned __int64)((int)(uVar42 - uVar44) >> 0x1f);
        uVar18 = (uVar42 - uVar44 ^ uVar18) - uVar18;
        uVar22 = (unsigned __int64)((int)uVar20 >> 0x1f);
        uVar22 = (uVar20 ^ uVar22) - uVar22;
        iStack_a0 = ((unsigned int)(uVar19 < 3) - ((int)uVar19 >> 0x1f)) +
                    ((unsigned int)(uVar26 < 3) - ((int)uVar26 >> 0x1f)) +
                    ((unsigned int)(uVar14 < 3) - ((int)uVar14 >> 0x1f)) +
                    ((unsigned int)(uVar24 < 3) - ((int)uVar24 >> 0x1f)) +
                    ((unsigned int)(uVar17 < 3) - ((int)uVar17 >> 0x1f)) +
                    ((unsigned int)(uVar21 < 3) - ((int)uVar21 >> 0x1f)) +
                    ((unsigned int)(uVar25 < 3) - ((int)uVar25 >> 0x1f)) +
                    ((unsigned int)(uVar18 < 3) - ((int)uVar18 >> 0x1f)) +
                    ((unsigned int)(uVar22 < 3) - ((int)uVar22 >> 0x1f));
      }
      if (iStack_a0 < 6) {
        uVar26 = uVar48 - uVar47;
        iVar12 = (int)uVar26;
        uVar15 = (int)(((uVar46 - uVar45) + 2 & 0xffffffff) << 1) -
                 (iVar12 + (int)((uVar26 & 0xffffffff) << 2));
        uVar15 = ((int)uVar15 >> 3) + (unsigned int)((int)uVar15 < 0 && (uVar15 & 7) != 0);
        iVar16 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
        if (iVar16 < in_stack_0000005c) {
          uVar13 = (int)(((uVar42 - uVar48) + 2 & 0xffffffff) << 1) +
                   (int)(uVar46 - uVar44) + (int)((uVar46 - uVar44 & 0xffffffff) << 2);
          uVar23 = (int)(((uVar47 - uVar41) + 2 & 0xffffffff) << 1) +
                   (int)(uVar43 - uVar45) + (int)((uVar43 - uVar45 & 0xffffffff) << 2);
          uVar29 = ((int)uVar13 >> 3) + (unsigned int)((int)uVar13 < 0 && (uVar13 & 7) != 0);
          uVar27 = ((int)uVar23 >> 3) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 7) != 0);
          uVar13 = (int)uVar27 >> 0x1f;
          uVar23 = (int)uVar29 >> 0x1f;
          iVar30 = (uVar27 ^ uVar13) - uVar13;
          iVar28 = (uVar29 ^ uVar23) - uVar23;
          if (iVar28 < iVar30) {
            iVar30 = iVar28;
          }
          if (iVar30 < iVar16) {
            iVar16 = -1;
            if (-1 < (int)uVar15) {
              iVar16 = 1;
            }
            uVar42 = (__int64)(iVar12 >> 1) + (unsigned __int64)(iVar12 < 0 && (uVar26 & 1) != 0);
            uVar15 = (iVar16 * iVar30 - uVar15) * 5;
            uVar41 = (__int64)((int)uVar15 >> 3) +
                     (unsigned __int64)((int)uVar15 < 0 && (uVar15 & 7) != 0);
            if ((__int64)uVar42 < 1) {
              uVar41 = -((unsigned __int64)(uVar41 == 0) + ((uVar41 & 0xffffffff) >> 0x1f)) & uVar41;
              if ((int)uVar41 < (int)uVar42) goto LAB_82c829ec;
            }
            else {
              uVar41 = ((uVar41 & 0xffffffff) >> 0x1f) - 1 & uVar41;
              if ((int)uVar42 < (int)uVar41) {
LAB_82c829ec:
                uVar41 = uVar42;
              }
            }
            *pbVar36 = *(unsigned char *)(((unsigned int)bVar6 - (int)uVar41) + iVar11);
            *pbVar31 = *(unsigned char *)((int)uVar41 + (unsigned int)bVar7 + iVar11);
          }
        }
      }
      else {
        iVar12 = fn_82CAB2D8(uVar42,uVar44,uVar46,uVar48,uVar47,uVar45,uVar43,uVar41);
        if (iVar12 != 0) {
          uVar15 = (int)((unsigned int)bVar1 - (unsigned int)bVar2) >> 0x1f;
          uVar43 = (unsigned __int64)bVar2;
          if (in_stack_0000005c <= (int)(((unsigned int)bVar1 - (unsigned int)bVar2 ^ uVar15) - uVar15)) {
            uVar43 = uVar42;
          }
          uVar15 = (int)((unsigned int)bVar10 - (unsigned int)bVar3) >> 0x1f;
          uVar42 = (unsigned __int64)bVar3;
          if (in_stack_0000005c <= (int)(((unsigned int)bVar10 - (unsigned int)bVar3 ^ uVar15) - uVar15)) {
            uVar42 = uVar41;
          }
          iVar12 = (int)uVar43;
          *pbVar35 = *(unsigned char *)(((int)(((bVar1 + 2) * 2 + iVar12 * 3 + (unsigned int)bVar5 + (unsigned int)bVar4) * 2
                                      + (unsigned int)bVar7 + (unsigned int)bVar6) >> 4) + iVar11);
          iVar16 = (int)uVar42;
          *pbVar34 = *(unsigned char *)(((int)((((unsigned int)bVar4 + iVar12 + 2) * 2 + (unsigned int)bVar6 + (unsigned int)bVar5 +
                                      (unsigned int)bVar1) * 2 + (unsigned int)bVar8 + (unsigned int)bVar7) >> 4) + iVar11);
          *pbVar33 = *(unsigned char *)(((int)(((bVar5 + 2) * 2 + (unsigned int)bVar7 + (unsigned int)bVar6 + (unsigned int)bVar4 +
                                       (unsigned int)bVar1 + iVar12) * 2 + (unsigned int)bVar9 + (unsigned int)bVar8) >> 4)
                              + iVar11);
          *pbVar36 = *(unsigned char *)(((int)(((bVar6 + 2) * 2 + (unsigned int)bVar8 + (unsigned int)bVar7 + (unsigned int)bVar5 +
                                      (unsigned int)bVar4) * 2 + (unsigned int)bVar10 + (unsigned int)bVar9 + (unsigned int)bVar1 +
                                     iVar12) >> 4) + iVar11);
          *pbVar31 = *(unsigned char *)(((int)(((bVar7 + 2) * 2 + (unsigned int)bVar9 + (unsigned int)bVar8 + (unsigned int)bVar6 +
                                      (unsigned int)bVar5) * 2 + iVar16 + (unsigned int)bVar10 + (unsigned int)bVar4 +
                                     (unsigned int)bVar1) >> 4) + iVar11);
          pbVar31[1] = *(unsigned char *)(((int)(((bVar8 + 2) * 2 + iVar16 + (unsigned int)bVar10 + (unsigned int)bVar9 +
                                         (unsigned int)bVar7 + (unsigned int)bVar6) * 2 + (unsigned int)bVar5 + (unsigned int)bVar4)
                                 >> 4) + iVar11);
          *pbVar32 = *(unsigned char *)(((int)(((iVar16 + (unsigned int)bVar9 + 2) * 2 + (unsigned int)bVar10 + (unsigned int)bVar8 +
                                      (unsigned int)bVar7) * 2 + (unsigned int)bVar6 + (unsigned int)bVar5) >> 4) + iVar11);
          *pbStack_c0 = *(unsigned char *)(((int)(((bVar10 + 2) * 2 + iVar16 * 3 + (unsigned int)bVar9 + (unsigned int)bVar8)
                                         * 2 + (unsigned int)bVar7 + (unsigned int)bVar6) >> 4) + iVar11);
        }
      }
      pbVar34 = pbVar34 + in_stack_00000064;
      pbStack_b4 = (unsigned char *)((int)pbStack_b4 + 1);
      pbStack_b8 = pbStack_b8 + in_stack_00000064;
      pbVar33 = pbVar33 + in_stack_00000064;
      pbVar32 = pbVar32 + in_stack_00000064;
      pbStack_c0 = pbStack_c0 + in_stack_00000064;
      pbStack_bc = pbStack_bc + in_stack_00000064;
      pbVar35 = pbVar35 + in_stack_00000064;
      pbVar36 = pbVar36 + in_stack_00000064;
      pbVar31 = pbVar31 + in_stack_00000064;
    } while ((int)pbStack_b4 < 0x10);
  }
  if (iStack0000003c != 0) {
    pbVar36 = pbStack0000001c + 0x10;
    iVar11 = *(int *)(iStack00000014 + 0x100);
    pbVar40 = pbStack0000001c + 0xf;
    pbVar35 = pbStack0000001c + 0x11;
    uStack_a4 = 0x10;
    pbVar37 = pbStack0000001c + 0xe;
    pbVar33 = pbStack0000001c + 0x12;
    pbVar38 = pbStack0000001c + 0xd;
    pbVar34 = pbStack0000001c + 0x13;
    pbVar39 = pbStack0000001c + 0xc;
    pbVar31 = pbStack0000001c + 0x14;
    pbVar32 = pbStack0000001c + 0xb;
    do {
      bVar1 = *pbVar34;
      uVar24 = (unsigned __int64)bVar1;
      bVar2 = *pbVar32;
      bVar3 = *pbVar33;
      uVar17 = (unsigned __int64)bVar3;
      bVar4 = *pbVar35;
      uVar18 = (unsigned __int64)bVar4;
      uVar46 = (unsigned __int64)((int)(uVar24 - *pbVar31) >> 0x1f);
      bVar5 = *pbVar36;
      uVar25 = (unsigned __int64)bVar5;
      bVar6 = *pbVar37;
      uVar22 = (unsigned __int64)bVar6;
      bVar7 = *pbVar40;
      uVar19 = (unsigned __int64)bVar7;
      bVar8 = *pbVar38;
      uVar20 = (unsigned __int64)bVar8;
      uVar46 = (uVar24 - *pbVar31 ^ uVar46) - uVar46;
      bVar9 = *pbVar39;
      uVar21 = (unsigned __int64)bVar9;
      uVar41 = (unsigned __int64)((int)(uVar17 - uVar24) >> 0x1f);
      uVar41 = (uVar17 - uVar24 ^ uVar41) - uVar41;
      uVar47 = (unsigned __int64)((int)(uVar18 - uVar17) >> 0x1f);
      uVar47 = (uVar18 - uVar17 ^ uVar47) - uVar47;
      uVar42 = (unsigned __int64)((int)(uVar25 - uVar18) >> 0x1f);
      uVar42 = (uVar25 - uVar18 ^ uVar42) - uVar42;
      uVar26 = (unsigned __int64)((int)(uVar22 - uVar19) >> 0x1f);
      uVar26 = (uVar22 - uVar19 ^ uVar26) - uVar26;
      uVar44 = (unsigned __int64)((int)(uVar20 - uVar22) >> 0x1f);
      uVar44 = (uVar20 - uVar22 ^ uVar44) - uVar44;
      uVar14 = uVar19 - uVar25;
      uVar45 = (unsigned __int64)((int)(uVar21 - uVar20) >> 0x1f);
      uVar45 = (uVar21 - uVar20 ^ uVar45) - uVar45;
      uVar48 = bVar2 - uVar21;
      uVar43 = (unsigned __int64)((int)uVar48 >> 0x1f);
      uVar43 = (uVar48 ^ uVar43) - uVar43;
      iVar12 = (int)uVar14;
      uVar48 = (uVar14 ^ (__int64)(iVar12 >> 0x1f)) - (__int64)(iVar12 >> 0x1f);
      if (((unsigned int)(uVar46 < 3) - ((int)uVar46 >> 0x1f)) +
          ((unsigned int)(uVar41 < 3) - ((int)uVar41 >> 0x1f)) +
          ((unsigned int)(uVar47 < 3) - ((int)uVar47 >> 0x1f)) +
          ((unsigned int)(uVar42 < 3) - ((int)uVar42 >> 0x1f)) +
          ((unsigned int)(uVar26 < 3) - ((int)uVar26 >> 0x1f)) +
          ((unsigned int)(uVar44 < 3) - ((int)uVar44 >> 0x1f)) +
          ((unsigned int)(uVar45 < 3) - ((int)uVar45 >> 0x1f)) +
          ((unsigned int)(uVar43 < 3) - ((int)uVar43 >> 0x1f)) +
          ((unsigned int)(uVar48 < 3) - ((int)uVar48 >> 0x1f)) < 6) {
        uVar15 = (int)(((uVar22 - uVar18) + 2 & 0xffffffff) << 1) -
                 (iVar12 + (int)((uVar14 & 0xffffffff) << 2));
        uVar15 = ((int)uVar15 >> 3) + (unsigned int)((int)uVar15 < 0 && (uVar15 & 7) != 0);
        iVar16 = (uVar15 ^ (int)uVar15 >> 0x1f) - ((int)uVar15 >> 0x1f);
        if (iVar16 < in_stack_0000005c) {
          uVar13 = (int)(((uVar21 - uVar19) + 2 & 0xffffffff) << 1) +
                   (int)(uVar22 - uVar20) + (int)((uVar22 - uVar20 & 0xffffffff) << 2);
          uVar23 = (int)(((uVar25 - uVar24) + 2 & 0xffffffff) << 1) +
                   (int)(uVar17 - uVar18) + (int)((uVar17 - uVar18 & 0xffffffff) << 2);
          uVar29 = ((int)uVar13 >> 3) + (unsigned int)((int)uVar13 < 0 && (uVar13 & 7) != 0);
          uVar27 = ((int)uVar23 >> 3) + (unsigned int)((int)uVar23 < 0 && (uVar23 & 7) != 0);
          uVar13 = (int)uVar27 >> 0x1f;
          uVar23 = (int)uVar29 >> 0x1f;
          iVar30 = (uVar27 ^ uVar13) - uVar13;
          iVar28 = (uVar29 ^ uVar23) - uVar23;
          if (iVar28 < iVar30) {
            iVar30 = iVar28;
          }
          if (iVar30 < iVar16) {
            iVar16 = -1;
            if (-1 < (int)uVar15) {
              iVar16 = 1;
            }
            uVar42 = (__int64)(iVar12 >> 1) + (unsigned __int64)(iVar12 < 0 && (uVar14 & 1) != 0);
            uVar15 = (iVar16 * iVar30 - uVar15) * 5;
            uVar41 = (__int64)((int)uVar15 >> 3) +
                     (unsigned __int64)((int)uVar15 < 0 && (uVar15 & 7) != 0);
            if ((__int64)uVar42 < 1) {
              uVar41 = -((unsigned __int64)(uVar41 == 0) + ((uVar41 & 0xffffffff) >> 0x1f)) & uVar41;
              if ((int)uVar41 < (int)uVar42) goto LAB_82c82e84;
            }
            else {
              uVar41 = ((uVar41 & 0xffffffff) >> 0x1f) - 1 & uVar41;
              if ((int)uVar42 < (int)uVar41) {
LAB_82c82e84:
                uVar41 = uVar42;
              }
            }
            *pbVar40 = *(unsigned char *)(((unsigned int)bVar7 - (int)uVar41) + iVar11);
          }
        }
      }
      else {
        iVar12 = fn_82CAB2D8(uVar21,uVar20,uVar22,uVar19,uVar25,uVar18,uVar17,uVar24);
        if (iVar12 != 0) {
          uVar15 = (int)((unsigned int)bVar9 - (unsigned int)bVar2) >> 0x1f;
          uVar41 = (unsigned __int64)bVar2;
          if (in_stack_0000005c <= (int)(((unsigned int)bVar9 - (unsigned int)bVar2 ^ uVar15) - uVar15)) {
            uVar41 = uVar21;
          }
          iVar12 = (int)uVar41;
          *pbVar39 = *(unsigned char *)(((int)(((bVar9 + 2) * 2 + iVar12 * 3 + (unsigned int)bVar6 + (unsigned int)bVar8) * 2
                                      + (unsigned int)bVar5 + (unsigned int)bVar7) >> 4) + iVar11);
          *pbVar38 = *(unsigned char *)(((int)((((unsigned int)bVar8 + iVar12 + 2) * 2 + (unsigned int)bVar7 + (unsigned int)bVar6 +
                                      (unsigned int)bVar9) * 2 + (unsigned int)bVar4 + (unsigned int)bVar5) >> 4) + iVar11);
          *pbVar37 = *(unsigned char *)(((int)(((bVar6 + 2) * 2 + (unsigned int)bVar5 + (unsigned int)bVar7 + (unsigned int)bVar8 +
                                       (unsigned int)bVar9 + iVar12) * 2 + (unsigned int)bVar3 + (unsigned int)bVar4) >> 4)
                              + iVar11);
          *pbVar40 = *(unsigned char *)(((int)(((bVar7 + 2) * 2 + (unsigned int)bVar4 + (unsigned int)bVar5 + (unsigned int)bVar6 +
                                      (unsigned int)bVar8) * 2 + (unsigned int)bVar1 + (unsigned int)bVar3 + (unsigned int)bVar9 +
                                     iVar12) >> 4) + iVar11);
        }
      }
      uVar41 = (unsigned __int64)uStack_a4;
      pbVar39 = pbVar39 + in_stack_00000064;
      pbVar32 = pbVar32 + in_stack_00000064;
      pbVar33 = pbVar33 + in_stack_00000064;
      pbVar34 = pbVar34 + in_stack_00000064;
      uStack_a4 = (unsigned int)(uVar41 - 1);
      pbVar31 = pbVar31 + in_stack_00000064;
      pbVar38 = pbVar38 + in_stack_00000064;
      pbVar37 = pbVar37 + in_stack_00000064;
      pbVar40 = pbVar40 + in_stack_00000064;
      pbVar36 = pbVar36 + in_stack_00000064;
      pbVar35 = pbVar35 + in_stack_00000064;
    } while (uVar41 - 1 != 0);
  }
  return;
}

