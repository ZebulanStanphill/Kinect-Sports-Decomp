typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern int fn_82C75948();
extern int fn_830DBB28();
extern unsigned int iStack00000014;
extern unsigned int lbl_83232474;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_d8;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern V16 vectorSplatHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_830DB068(int param_1,int param_2,int param_3)

{
  unsigned char bVar1;
  unsigned short uVar2;
  int iVar3;
  short *psVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar6;
  unsigned short uVar7;
  unsigned short uVar8;
  unsigned short uVar9;
  unsigned __int64 in_r0;
  unsigned int uVar10;
  unsigned __int64 *puVar11;
  unsigned __int64 *puVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  unsigned int uVar19;
  unsigned short *puVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  int iVar25;
  __int64 lVar26;
  unsigned char in_vs32 [16];
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned int uVar29;
  unsigned int uVar30;
  int iStack00000014;
  unsigned int *puStack_f0;
  unsigned int uStack_ec;
  unsigned int uStack_e8;
  unsigned int uStack_e4;
  unsigned int uStack_e0;
  unsigned int uStack_d8;
  unsigned int auStack_c8 [2];
  unsigned int auStack_c0 [4];
  int aiStack_b0 [4];
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  
  uStack_ec = *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xe0);
  uStack_e8 = *(int *)(param_1 + 0xec8) + *(int *)(param_1 + 0xe0);
  puStack_f0 = *(unsigned int **)(param_1 + 0x110);
  puVar12 = *(unsigned __int64 **)(param_2 + 0x520);
  uStack_e4 = *(int *)(param_1 + 0xec0) + *(int *)(param_1 + 0xdc);
  *(unsigned int *)(param_3 + 0x14) = *(unsigned int *)(param_1 + 0x56f8);
  *(unsigned int *)(param_3 + 0x18) = *(unsigned int *)(param_1 + 0x5704);
  *(unsigned int *)(param_3 + 0x24) = *(unsigned int *)(param_2 + 0x268);
  *(unsigned int *)(param_3 + 0x28) = *(unsigned int *)(param_2 + 0x1ac);
  *(unsigned int *)(param_3 + 0x2c) = *(unsigned int *)(param_2 + 0x48c);
  *(unsigned int *)(param_3 + 0x24) = *(unsigned int *)(param_2 + 0x268);
  *(unsigned int *)(param_3 + 0x28) = *(unsigned int *)(param_2 + 0x1ac);
  *(unsigned int *)(param_3 + 0x2c) = *(unsigned int *)(param_2 + 0x48c);
  uVar7 = *(unsigned short *)(param_2 + 0x34) >> 1;
  uVar8 = *(unsigned short *)(param_2 + 0x32) >> 1;
  uStack_d8 = 0;
  iStack00000014 = param_1;
  if (uVar7 != 0) {
    do {
      uVar24 = (unsigned __int64)uStack_e4;
      uVar23 = (unsigned __int64)uStack_ec;
      uVar22 = (unsigned __int64)uStack_e8;
      uStack_e0 = 0;
      puVar11 = puVar12;
      if (uVar8 != 0) {
        do {
          puVar12 = puVar11 + 1;
          uVar16 = *puVar11;
          if ((*puStack_f0 & 0x700) == 0x400) goto LAB_830db540;
          aiStack_b0[0] = (int)uVar24;
          uStack_a0 = (unsigned int)uVar23;
          uVar17 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4c);
          uStack_9c = (unsigned int)uVar22;
          aiStack_b0[1] = aiStack_b0[0] + 8;
          auStack_c8[1] = (unsigned int)*(unsigned short *)(param_2 + 0x4c);
          uVar21 = uVar16 >> 0x30 & 0x3f;
          lVar26 = ((uVar16 >> 0x38 & 0x3f) + (uVar16 >> 0x38 & 0x3f) * 4) * 4 +
                   (unsigned __int64)*(unsigned int *)(param_2 + 0x184);
          uVar13 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4a);
          if ((*puStack_f0 & 0x10000) == 0) {
            uVar5 = uVar13 << 3;
            uVar14 = uVar13;
          }
          else {
            uVar14 = uVar13 << 1;
            uVar5 = uVar13;
          }
          aiStack_b0[2] = (int)(uVar5 + uVar24);
          aiStack_b0[3] = aiStack_b0[2] + 8;
          auStack_c8[0] = (unsigned int)uVar14;
          if (9 < lbl_83232474) goto switchD_830db218_caseD_4;
          in_r0 = (unsigned __int64)*(unsigned int *)(lbl_83232474 * 4 + -0x7cf24de4);
          switch(lbl_83232474) {
          case 0:
          case 8:
            lVar18 = uVar24 + 0x80;
            dataCacheBlockTouch(lVar18);
            dataCacheBlockTouch(uVar14 + lVar18);
            dataCacheBlockTouch(uVar14 * 2 + lVar18);
            dataCacheBlockTouch(uVar14 * 3 + lVar18);
            dataCacheBlockTouch(uVar14 * 4 + lVar18);
            dataCacheBlockTouch(uVar14 * 5 + lVar18);
            dataCacheBlockTouch(uVar14 * 6 + lVar18);
            dataCacheBlockTouch(uVar14 * 7 + lVar18);
            break;
          case 1:
          case 9:
            lVar18 = uVar5 + uVar24 + 0x80;
            dataCacheBlockTouch(lVar18);
            dataCacheBlockTouch(uVar14 + lVar18);
            dataCacheBlockTouch(uVar14 * 2 + lVar18);
            dataCacheBlockTouch(uVar14 * 3 + lVar18);
            dataCacheBlockTouch(uVar14 * 4 + lVar18);
            dataCacheBlockTouch(uVar14 * 5 + lVar18);
            dataCacheBlockTouch(uVar14 * 6 + lVar18);
            dataCacheBlockTouch(uVar14 * 7 + lVar18);
            break;
          case 2:
            uVar13 = uVar23;
            goto LAB_830db2f8;
          case 3:
            uVar13 = uVar22;
LAB_830db2f8:
            lVar18 = uVar13 + 0x80;
            dataCacheBlockTouch(lVar18);
            dataCacheBlockTouch(uVar17 + lVar18);
            dataCacheBlockTouch(uVar17 * 2 + lVar18);
            dataCacheBlockTouch(uVar17 * 3 + lVar18);
            dataCacheBlockTouch(uVar17 * 4 + lVar18);
            dataCacheBlockTouch(uVar17 * 5 + lVar18);
            dataCacheBlockTouch(uVar17 * 6 + lVar18);
            dataCacheBlockTouch(uVar17 * 7 + lVar18);
          }
switchD_830db218_caseD_4:
          uVar19 = lbl_83232474 + 1;
          iVar25 = 0;
          lbl_83232474 = uVar19 + (((int)uVar19 >> 4) +
                                  (unsigned int)((int)uVar19 < 0 && (uVar19 & 0xf) != 0)) * -0x10;
          do {
            if ((uVar21 & 1) != 0) {
              if ((uVar16 >> 0x2c & 7) == 0) {
                iVar3 = *(int *)(param_2 + 0x1bc);
                iVar15 = 0;
                uVar27 = *(unsigned int *)lVar26;
                uVar28 = ((unsigned int *)lVar26)[1];
                uVar19 = 0;
                uVar10 = 0;
                psVar4 = *(short **)(param_3 + 0x28);
                uVar17 = ZEXT48(psVar4);
                bVar1 = **(unsigned char **)(param_3 + 0x18);
                uVar13 = (unsigned __int64)bVar1;
                puVar20 = *(unsigned short **)(param_3 + 0x14);
                *(unsigned char **)(param_3 + 0x18) = *(unsigned char **)(param_3 + 0x18) + 1;
                dataCacheBlockClearToZero(uVar17);
                if (uVar13 < 0x80) {
                  if (bVar1 != 0) {
                    do {
                      uVar2 = *puVar20;
                      puVar20 = puVar20 + 1;
                      uVar10 = (uVar2 & 0x3f) + iVar15 & 0x3f;
                      uVar9 = uVar2 >> 7 & 1;
                      bVar1 = *(unsigned char *)(uVar10 + iVar3);
                      iVar15 = uVar10 + 1;
                      uVar10 = *(unsigned char *)((unsigned int)bVar1 + param_2 + 0xa8) | uVar19;
                      psVar4[bVar1] =
                           ((uVar2 >> 8) * (short)uVar27 + (short)uVar28 ^ -uVar9) + uVar9;
                      uVar13 = uVar13 - 1;
                      uVar19 = uVar10;
                    } while (uVar13 != 0);
                  }
                  *(unsigned short **)(param_3 + 0x14) = puVar20;
                }
                else {
                  uVar10 = fn_82C75948(param_2,iVar3,param_2 + 0xa8,lVar26,param_3);
                }
                if (uVar10 == 0) {
                  auStack_c0[0] = ((*psVar4 + 1 >> 1) + (int)*psVar4) * 3 + 0x10 >> 5 & 0xffff;
                  iVar3 = (int)in_r0;
                  puVar6 = (unsigned int *)((int)auStack_c0 + iVar3 & 0xfffffff0);
                  uVar27 = *puVar6;
                  uVar28 = puVar6[1];
                  uVar29 = puVar6[2];
                  uVar30 = puVar6[3];{ V16 _vt0 = vectorSplatHalfWord(in_vs32,1); memcpy(in_vs32, &_vt0, 16); }
                  puVar6 = (unsigned int *)((int)auStack_c0 + iVar3 & 0xfffffff0);
                  *puVar6 = uVar27;
                  puVar6[1] = uVar28;
                  puVar6[2] = uVar29;
                  puVar6[3] = uVar30;
                  puVar6 = (unsigned int *)(iVar3 + (int)psVar4 & 0xfffffff0);
                  *puVar6 = uVar27;
                  puVar6[1] = uVar28;
                  puVar6[2] = uVar29;
                  puVar6[3] = uVar30;
                  puVar6 = (unsigned int *)((unsigned int)(psVar4 + 8) & 0xfffffff0);
                  *puVar6 = uVar27;
                  puVar6[1] = uVar28;
                  puVar6[2] = uVar29;
                  puVar6[3] = uVar30;
                  puVar6 = (unsigned int *)((unsigned int)(psVar4 + 0x10) & 0xfffffff0);
                  *puVar6 = uVar27;
                  puVar6[1] = uVar28;
                  puVar6[2] = uVar29;
                  puVar6[3] = uVar30;
                  puVar6 = (unsigned int *)((unsigned int)(psVar4 + 0x18) & 0xfffffff0);
                  *puVar6 = uVar27;
                  puVar6[1] = uVar28;
                  puVar6[2] = uVar29;
                  puVar6[3] = uVar30;
                  puVar6 = (unsigned int *)((unsigned int)(psVar4 + 0x20) & 0xfffffff0);
                  *puVar6 = uVar27;
                  puVar6[1] = uVar28;
                  puVar6[2] = uVar29;
                  puVar6[3] = uVar30;
                  puVar6 = (unsigned int *)((unsigned int)(psVar4 + 0x28) & 0xfffffff0);
                  *puVar6 = uVar27;
                  puVar6[1] = uVar28;
                  puVar6[2] = uVar29;
                  puVar6[3] = uVar30;
                  puVar6 = (unsigned int *)((unsigned int)(psVar4 + 0x30) & 0xfffffff0);
                  *puVar6 = uVar27;
                  puVar6[1] = uVar28;
                  puVar6[2] = uVar29;
                  puVar6[3] = uVar30;
                  puVar6 = (unsigned int *)((unsigned int)(psVar4 + 0x38) & 0xfffffff0);
                  *puVar6 = uVar27;
                  puVar6[1] = uVar28;
                  puVar6[2] = uVar29;
                  puVar6[3] = uVar30;
                }
                else {
                  fn_830DBB28(uVar17,uVar17);
                }
              }
              else {
                uVar17 = (unsigned __int64)*(unsigned int *)(param_3 + 0x24);
                uVar13 = uVar16 >> 0x28 & 0xf;
                (**(int (***)())((((unsigned int)(uVar16 >> 0x2c) & 6) +
                              (unsigned int)*(unsigned char *)((int)uVar13 + param_2 + 0x140) + 0x9e) * 4 + param_2))
                          (param_2,lVar26,uVar13,param_3);
              }
              (**(int (***)())(param_2 + 0x3c0))(uVar17,aiStack_b0[iVar25],auStack_c8[iVar25 >> 2]);
              param_1 = iStack00000014;
            }
            iVar25 = iVar25 + 1;
            uVar21 = uVar21 >> 1;
            uVar16 = uVar16 << 8;
          } while (iVar25 < 6);
LAB_830db540:
          puStack_f0 = puStack_f0 + 6;
          uVar24 = uVar24 + 0x10;
          uStack_e0 = uStack_e0 + 1;
          uVar23 = uVar23 + 8;
          uVar22 = uVar22 + 8;
          puVar11 = puVar12;
        } while (uStack_e0 < uVar8);
      }
      uStack_d8 = uStack_d8 + 1;
      uStack_ec = *(int *)(param_1 + 0xe8) + uStack_ec;
      uStack_e8 = *(int *)(param_1 + 0xe8) + uStack_e8;
      uStack_e4 = *(int *)(param_1 + 0xe4) + uStack_e4;
    } while (uStack_d8 < uVar7);
  }
  return 0;
}

