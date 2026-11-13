typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_c0;
extern unsigned int *auStack_c8;
extern int fn_82C75948();
extern int fn_830DBB28();
extern unsigned int lbl_83232474;
extern unsigned int uStack0000003c;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_d4;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;
extern V16 vectorSplatHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_830DAA20(int param_1,int param_2,int param_3,int param_4,unsigned int param_5,unsigned int param_6)

{
  unsigned char bVar1;
  unsigned short uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  unsigned __int64 uVar9;
  unsigned int *puVar10;
  unsigned short uVar11;
  unsigned short uVar12;
  unsigned __int64 in_r0;
  unsigned int uVar13;
  unsigned __int64 *puVar14;
  unsigned __int64 *puVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  int iVar18;
  int iVar22;
  int iVar23;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  __int64 lVar21;
  unsigned int uVar24;
  unsigned short *puVar25;
  unsigned int uVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  int iVar31;
  __int64 lVar32;
  unsigned char in_vs32 [16];
  unsigned int uVar33;
  unsigned int uVar34;
  unsigned int uVar35;
  unsigned int uVar36;
  unsigned int uStack0000003c;
  unsigned int *puStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f4;
  unsigned int uStack_d4;
  unsigned int auStack_c8 [2];
  unsigned int auStack_c0 [4];
  int aiStack_b0 [4];
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  
  iVar31 = *(int *)(param_1 + 0xec0);
  iVar3 = *(int *)(param_1 + 0xdc);
  iVar18 = *(int *)(param_1 + 0xe0);
  iVar4 = *(int *)(param_1 + 0xec8);
  iVar5 = *(int *)(param_1 + 0xec4);
  iVar6 = *(int *)(param_1 + 0x110);
  iVar7 = *(int *)(param_2 + 0x520);
  if (param_4 == 0) {
    *(unsigned int *)(param_3 + 0x14) = *(unsigned int *)(param_1 + 0x56f8);
    *(unsigned int *)(param_3 + 0x18) = *(unsigned int *)(param_1 + 0x5704);
    *(unsigned int *)(param_3 + 0x1c) = *(unsigned int *)(param_1 + 0x56fc);
    *(unsigned int *)(param_3 + 0x20) = *(unsigned int *)(param_1 + 0x5708);
  }
  else {
    iVar22 = (param_4 + 0x5c) * 0x10;
    iVar23 = iVar22 + param_2;
    *(unsigned int *)(param_3 + 0x14) = *(unsigned int *)(iVar22 + param_2);
    *(unsigned int *)(param_3 + 0x18) = *(unsigned int *)(iVar23 + 4);
    *(unsigned int *)(param_3 + 0x1c) = *(unsigned int *)(iVar23 + 8);
    *(unsigned int *)(param_3 + 0x20) = *(unsigned int *)(iVar23 + 0xc);
  }
  *(unsigned int *)(param_3 + 0x24) = *(unsigned int *)(param_2 + 0x268);
  *(unsigned int *)(param_3 + 0x28) = *(unsigned int *)(param_2 + 0x1ac);
  *(unsigned int *)(param_3 + 0x2c) = *(unsigned int *)(param_2 + 0x48c);
  uVar11 = *(unsigned short *)(param_2 + 0x32) >> 1;
  iVar23 = (unsigned int)*(unsigned short *)(param_2 + 0x4c) * 8 * param_5;
  uStack_fc = iVar23 + iVar5 + iVar18;
  puStack_100 = (unsigned int *)(uVar11 * param_5 * 0x18 + iVar6);
  uStack_f8 = (unsigned int)*(unsigned short *)(param_2 + 0x4a) * 0x10 * param_5 + iVar31 + iVar3;
  uStack_f4 = iVar23 + iVar4 + iVar18;
  puVar14 = (unsigned __int64 *)(uVar11 * param_5 * 8 + iVar7);
  uStack0000003c = param_6;
  uStack_d4 = param_5;
  if (param_5 < param_6) {
    do {
      uVar26 = 0;
      uVar30 = (unsigned __int64)uStack_f8;
      uVar29 = (unsigned __int64)uStack_fc;
      uVar28 = (unsigned __int64)uStack_f4;
      puVar15 = puVar14;
      if (uVar11 != 0) {
        do {
          puVar14 = puVar15 + 1;
          uVar19 = *puVar15;
          if ((*puStack_100 & 0x700) == 0x400) goto LAB_830dafa0;
          aiStack_b0[0] = (int)uVar30;
          uStack_a0 = (unsigned int)uVar29;
          uVar20 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4c);
          uStack_9c = (unsigned int)uVar28;
          aiStack_b0[1] = aiStack_b0[0] + 8;
          auStack_c8[1] = (unsigned int)*(unsigned short *)(param_2 + 0x4c);
          uVar27 = uVar19 >> 0x30 & 0x3f;
          lVar32 = ((uVar19 >> 0x38 & 0x3f) + (uVar19 >> 0x38 & 0x3f) * 4) * 4 +
                   (unsigned __int64)*(unsigned int *)(param_2 + 0x184);
          uVar16 = (unsigned __int64)*(unsigned short *)(param_2 + 0x4a);
          if ((*puStack_100 & 0x10000) == 0) {
            uVar9 = uVar16 << 3;
            uVar17 = uVar16;
          }
          else {
            uVar17 = uVar16 << 1;
            uVar9 = uVar16;
          }
          aiStack_b0[2] = (int)(uVar9 + uVar30);
          aiStack_b0[3] = aiStack_b0[2] + 8;
          auStack_c8[0] = (unsigned int)uVar17;
          if (9 < lbl_83232474) goto switchD_830dac70_caseD_4;
          in_r0 = (unsigned __int64)*(unsigned int *)(lbl_83232474 * 4 + -0x7cf2538c);
          switch(lbl_83232474) {
          case 0:
          case 8:
            lVar21 = uVar30 + 0x80;
            dataCacheBlockTouch(lVar21);
            dataCacheBlockTouch(uVar17 + lVar21);
            dataCacheBlockTouch(uVar17 * 2 + lVar21);
            dataCacheBlockTouch(uVar17 * 3 + lVar21);
            dataCacheBlockTouch(uVar17 * 4 + lVar21);
            dataCacheBlockTouch(uVar17 * 5 + lVar21);
            dataCacheBlockTouch(uVar17 * 6 + lVar21);
            dataCacheBlockTouch(uVar17 * 7 + lVar21);
            break;
          case 1:
          case 9:
            lVar21 = uVar9 + uVar30 + 0x80;
            dataCacheBlockTouch(lVar21);
            dataCacheBlockTouch(uVar17 + lVar21);
            dataCacheBlockTouch(uVar17 * 2 + lVar21);
            dataCacheBlockTouch(uVar17 * 3 + lVar21);
            dataCacheBlockTouch(uVar17 * 4 + lVar21);
            dataCacheBlockTouch(uVar17 * 5 + lVar21);
            dataCacheBlockTouch(uVar17 * 6 + lVar21);
            dataCacheBlockTouch(uVar17 * 7 + lVar21);
            break;
          case 2:
            uVar16 = uVar29;
            goto LAB_830dad50;
          case 3:
            uVar16 = uVar28;
LAB_830dad50:
            lVar21 = uVar16 + 0x80;
            dataCacheBlockTouch(lVar21);
            dataCacheBlockTouch(uVar20 + lVar21);
            dataCacheBlockTouch(uVar20 * 2 + lVar21);
            dataCacheBlockTouch(uVar20 * 3 + lVar21);
            dataCacheBlockTouch(uVar20 * 4 + lVar21);
            dataCacheBlockTouch(uVar20 * 5 + lVar21);
            dataCacheBlockTouch(uVar20 * 6 + lVar21);
            dataCacheBlockTouch(uVar20 * 7 + lVar21);
          }
switchD_830dac70_caseD_4:
          uVar24 = lbl_83232474 + 1;
          iVar31 = 0;
          lbl_83232474 = uVar24 + (((int)uVar24 >> 4) +
                                  (unsigned int)((int)uVar24 < 0 && (uVar24 & 0xf) != 0)) * -0x10;
          do {
            if ((uVar27 & 1) != 0) {
              if ((uVar19 >> 0x2c & 7) == 0) {
                iVar3 = *(int *)(param_2 + 0x1bc);
                iVar18 = 0;
                uVar33 = *(unsigned int *)lVar32;
                uVar34 = ((unsigned int *)lVar32)[1];
                uVar24 = 0;
                uVar13 = 0;
                psVar8 = *(short **)(param_3 + 0x28);
                uVar20 = ZEXT48(psVar8);
                bVar1 = **(unsigned char **)(param_3 + 0x18);
                uVar16 = (unsigned __int64)bVar1;
                puVar25 = *(unsigned short **)(param_3 + 0x14);
                *(unsigned char **)(param_3 + 0x18) = *(unsigned char **)(param_3 + 0x18) + 1;
                dataCacheBlockClearToZero(uVar20);
                if (uVar16 < 0x80) {
                  if (bVar1 != 0) {
                    do {
                      uVar2 = *puVar25;
                      puVar25 = puVar25 + 1;
                      uVar13 = (uVar2 & 0x3f) + iVar18 & 0x3f;
                      uVar12 = uVar2 >> 7 & 1;
                      bVar1 = *(unsigned char *)(uVar13 + iVar3);
                      iVar18 = uVar13 + 1;
                      uVar13 = *(unsigned char *)((unsigned int)bVar1 + param_2 + 0xa8) | uVar24;
                      psVar8[bVar1] =
                           ((uVar2 >> 8) * (short)uVar33 + (short)uVar34 ^ -uVar12) + uVar12;
                      uVar16 = uVar16 - 1;
                      uVar24 = uVar13;
                    } while (uVar16 != 0);
                  }
                  *(unsigned short **)(param_3 + 0x14) = puVar25;
                }
                else {
                  uVar13 = fn_82C75948(param_2,iVar3,param_2 + 0xa8,lVar32,param_3);
                }
                if (uVar13 == 0) {
                  auStack_c0[0] = ((*psVar8 + 1 >> 1) + (int)*psVar8) * 3 + 0x10 >> 5 & 0xffff;
                  iVar3 = (int)in_r0;
                  puVar10 = (unsigned int *)((int)auStack_c0 + iVar3 & 0xfffffff0);
                  uVar33 = *puVar10;
                  uVar34 = puVar10[1];
                  uVar35 = puVar10[2];
                  uVar36 = puVar10[3];{ V16 _vt0 = vectorSplatHalfWord(in_vs32,1); memcpy(in_vs32, &_vt0, 16); }
                  puVar10 = (unsigned int *)((int)auStack_c0 + iVar3 & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (unsigned int *)(iVar3 + (int)psVar8 & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (unsigned int *)((unsigned int)(psVar8 + 8) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (unsigned int *)((unsigned int)(psVar8 + 0x10) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (unsigned int *)((unsigned int)(psVar8 + 0x18) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (unsigned int *)((unsigned int)(psVar8 + 0x20) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (unsigned int *)((unsigned int)(psVar8 + 0x28) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (unsigned int *)((unsigned int)(psVar8 + 0x30) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                  puVar10 = (unsigned int *)((unsigned int)(psVar8 + 0x38) & 0xfffffff0);
                  *puVar10 = uVar33;
                  puVar10[1] = uVar34;
                  puVar10[2] = uVar35;
                  puVar10[3] = uVar36;
                }
                else {
                  fn_830DBB28(uVar20,uVar20);
                }
              }
              else {
                uVar20 = (unsigned __int64)*(unsigned int *)(param_3 + 0x24);
                uVar16 = uVar19 >> 0x28 & 0xf;
                (**(int (***)())((((unsigned int)(uVar19 >> 0x2c) & 6) +
                              (unsigned int)*(unsigned char *)((int)uVar16 + param_2 + 0x140) + 0x9e) * 4 + param_2))
                          (param_2,lVar32,uVar16,param_3);
              }
              (**(int (***)())(param_2 + 0x3c0))(uVar20,aiStack_b0[iVar31],auStack_c8[iVar31 >> 2]);
            }
            iVar31 = iVar31 + 1;
            uVar27 = uVar27 >> 1;
            uVar19 = uVar19 << 8;
          } while (iVar31 < 6);
LAB_830dafa0:
          puStack_100 = puStack_100 + 6;
          uVar26 = uVar26 + 1;
          uVar30 = uVar30 + 0x10;
          uVar29 = uVar29 + 8;
          uVar28 = uVar28 + 8;
          puVar15 = puVar14;
        } while (uVar26 < uVar11);
      }
      uStack_fc = uStack_fc + *(int *)(param_1 + 0xe8);
      uStack_f8 = uStack_f8 + *(int *)(param_1 + 0xe4);
      uStack_f4 = uStack_f4 + *(int *)(param_1 + 0xe8);
      uStack_d4 = uStack_d4 + 1;
    } while (uStack_d4 < uStack0000003c);
  }
  return 0;
}

