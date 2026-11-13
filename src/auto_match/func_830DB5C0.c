typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_b0;
extern int fn_82C75948();
extern int fn_830DBB28();
extern int fn_830E8AE0();
extern unsigned int iStack_c8;
extern unsigned int iStack_cc;
extern unsigned int lbl_83232470;
extern unsigned int uStack0000003c;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern V16 vectorSplatHalfWord();
extern void *memcpy(void *, const void *, unsigned int);


unsigned __int64 fn_830DB5C0(int param_1,int param_2,int *param_3,int param_4,unsigned int param_5,unsigned int param_6)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  short *psVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned short uVar8;
  unsigned short uVar9;
  unsigned __int64 in_r0;
  unsigned int uVar10;
  unsigned __int64 *puVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  int iVar15;
  unsigned __int64 uVar14;
  int iVar16;
  __int64 lVar17;
  unsigned int uVar18;
  unsigned short *puVar19;
  unsigned __int64 uVar20;
  int iVar21;
  __int64 lVar22;
  unsigned __int64 uVar23;
  unsigned char in_vs32 [16];
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uStack0000003c;
  int iStack_cc;
  int iStack_c8;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int auStack_b0 [44];
  
  uVar2 = *(unsigned short *)(param_2 + 0x34);
  puVar11 = *(unsigned __int64 **)(param_2 + 0x520);
  uVar8 = *(unsigned short *)(param_2 + 0x32) >> 1;
  param_3[9] = *(int *)(param_2 + 0x268);
  param_3[10] = *(int *)(param_2 + 0x1ac);
  param_3[0xb] = *(int *)(param_2 + 0x48c);
  uVar3 = *(unsigned short *)(param_2 + 0x4a);
  uVar4 = *(unsigned short *)(param_2 + 0x4c);
  iVar21 = (unsigned int)(uVar2 >> 1) * (unsigned int)uVar8 * 6;
  if (param_4 == 0) {
    iStack_c8 = 0;
    iStack_cc = 0;
    param_3[5] = *(int *)(param_2 + 0x558) * iVar21 * 0x80 + *(int *)(param_1 + 0x56f8);
    iVar15 = *(int *)(param_2 + 0x558);
    iVar16 = *(int *)(param_1 + 0x5704);
    *param_3 = 0;
    param_3[1] = 0;
    *(unsigned short *)(param_3 + 4) = 0;
    param_3[6] = iVar15 * iVar21 * 4 + iVar16;
  }
  else {
    iVar15 = uVar8 * param_5;
    iVar16 = (param_4 + 0x5c) * 0x10;
    iVar21 = iVar16 + param_2;
    param_3[5] = *(int *)(iVar16 + param_2);
    puVar11 = puVar11 + iVar15;
    iStack_c8 = (unsigned int)uVar3 * 0x10 * param_5;
    iStack_cc = (unsigned int)uVar4 * 8 * param_5;
    param_3[6] = *(int *)(iVar21 + 4);
    param_3[7] = *(int *)(iVar21 + 8);
    param_3[8] = *(int *)(iVar21 + 0xc);
    *param_3 = (unsigned int)uVar8 * 4 * param_5;
    param_3[1] = iVar15;
    *(short *)(param_3 + 4) = (short)param_5 << 1;
  }
  *(unsigned short *)((int)param_3 + 0x12) = 0;
  uStack0000003c = param_6;
  uStack_c0 = param_5;
  if (param_5 < param_6) {
    do {
      uStack_c4 = 0;
      *(unsigned short *)((int)param_3 + 0x12) = 0;
      param_3[2] = iStack_c8;
      param_3[3] = iStack_cc;
      if (uVar8 != 0) {
        do {
          uVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          uVar20 = uVar14 >> 0x30 & 0x3f;
          if (uVar20 != 0) {
            lVar22 = (unsigned __int64)*(unsigned int *)(param_2 + 0x184) +
                     ((uVar14 >> 0x38 & 0x3f) + (uVar14 >> 0x38 & 0x3f) * 4) * 4;
            if (lbl_83232470 < 10) {
              in_r0 = (unsigned __int64)*(unsigned int *)(lbl_83232470 * 4 + -0x7cf24858);
              switch(lbl_83232470) {
              case 0:
              case 8:
                lVar17 = (unsigned __int64)*(unsigned int *)(param_2 + 0x230) + (unsigned __int64)(unsigned int)param_3[2];
                goto LAB_830db800;
              case 1:
              case 9:
                uVar6 = param_3[2];
                uVar18 = *(unsigned int *)(param_2 + 0x238);
                goto LAB_830db7fc;
              case 2:
                uVar18 = *(unsigned int *)(param_2 + 0x240);
                break;
              case 3:
                uVar18 = *(unsigned int *)(param_2 + 0x244);
                break;
              default:
                goto switchD_830db7a4_caseD_4;
              }
              uVar6 = param_3[3];
LAB_830db7fc:
              lVar17 = (unsigned __int64)uVar18 + (unsigned __int64)uVar6;
LAB_830db800:
              lVar17 = lVar17 + 0x80;
              dataCacheBlockTouch(lVar17);
              uVar12 = (unsigned __int64)*(unsigned short *)(param_2 + 0x5a);
              dataCacheBlockTouch(uVar12 + lVar17);
              dataCacheBlockTouch(uVar12 * 2 + lVar17);
              dataCacheBlockTouch(uVar12 * 3 + lVar17);
              dataCacheBlockTouch(uVar12 * 4 + lVar17);
              dataCacheBlockTouch(uVar12 * 5 + lVar17);
              dataCacheBlockTouch(uVar12 * 6 + lVar17);
              dataCacheBlockTouch(uVar12 * 7 + lVar17);
            }
switchD_830db7a4_caseD_4:
            uVar18 = lbl_83232470 + 1;
            iVar21 = 0;
            lbl_83232470 = uVar18 + (((int)uVar18 >> 4) +
                                    (unsigned int)((int)uVar18 < 0 && (uVar18 & 0xf) != 0)) * -0x10;
            do {
              uVar18 = *(unsigned int *)((iVar21 + 0x8c) * 4 + param_2);
              uVar6 = param_3[(iVar21 >> 2) + 2];
              if (((uVar14 >> 0x2c & 8) == 0) && ((uVar20 & 1) != 0)) {
                if ((uVar14 >> 0x2c & 0xf) == 0) {
                  iVar15 = *(int *)(param_2 + 0x1bc);
                  iVar16 = 0;
                  uVar24 = *(unsigned int *)lVar22;
                  uVar25 = ((unsigned int *)lVar22)[1];
                  uVar13 = 0;
                  uVar10 = 0;
                  psVar5 = (short *)param_3[10];
                  uVar23 = ZEXT48(psVar5);
                  bVar1 = *(unsigned char *)param_3[6];
                  uVar12 = (unsigned __int64)bVar1;
                  puVar19 = (unsigned short *)param_3[5];
                  param_3[6] = (int)((unsigned char *)param_3[6] + 1);
                  dataCacheBlockClearToZero(uVar23);
                  if (uVar12 < 0x80) {
                    if (bVar1 != 0) {
                      do {
                        uVar2 = *puVar19;
                        puVar19 = puVar19 + 1;
                        uVar10 = (uVar2 & 0x3f) + iVar16 & 0x3f;
                        uVar9 = uVar2 >> 7 & 1;
                        bVar1 = *(unsigned char *)(uVar10 + iVar15);
                        iVar16 = uVar10 + 1;
                        uVar10 = *(unsigned char *)((unsigned int)bVar1 + param_2 + 0xa8) | uVar13;
                        psVar5[bVar1] =
                             ((uVar2 >> 8) * (short)uVar24 + (short)uVar25 ^ -uVar9) + uVar9;
                        uVar12 = uVar12 - 1;
                        uVar13 = uVar10;
                      } while (uVar12 != 0);
                    }
                    param_3[5] = (int)puVar19;
                  }
                  else {
                    uVar10 = fn_82C75948(param_2,iVar15,param_2 + 0xa8,lVar22,param_3);
                  }
                  if (uVar10 == 0) {
                    auStack_b0[0] = ((*psVar5 + 1 >> 1) + (int)*psVar5) * 3 + 0x10 >> 5 & 0xffff;
                    iVar15 = (int)in_r0;
                    puVar7 = (unsigned int *)((int)auStack_b0 + iVar15 & 0xfffffff0);
                    uVar24 = *puVar7;
                    uVar25 = puVar7[1];
                    uVar26 = puVar7[2];
                    uVar27 = puVar7[3];{ V16 _vt0 = vectorSplatHalfWord(in_vs32,1); memcpy(in_vs32, &_vt0, 16); }
                    puVar7 = (unsigned int *)((int)auStack_b0 + iVar15 & 0xfffffff0);
                    *puVar7 = uVar24;
                    puVar7[1] = uVar25;
                    puVar7[2] = uVar26;
                    puVar7[3] = uVar27;
                    puVar7 = (unsigned int *)(iVar15 + (int)psVar5 & 0xfffffff0);
                    *puVar7 = uVar24;
                    puVar7[1] = uVar25;
                    puVar7[2] = uVar26;
                    puVar7[3] = uVar27;
                    puVar7 = (unsigned int *)((unsigned int)(psVar5 + 8) & 0xfffffff0);
                    *puVar7 = uVar24;
                    puVar7[1] = uVar25;
                    puVar7[2] = uVar26;
                    puVar7[3] = uVar27;
                    puVar7 = (unsigned int *)((unsigned int)(psVar5 + 0x10) & 0xfffffff0);
                    *puVar7 = uVar24;
                    puVar7[1] = uVar25;
                    puVar7[2] = uVar26;
                    puVar7[3] = uVar27;
                    puVar7 = (unsigned int *)((unsigned int)(psVar5 + 0x18) & 0xfffffff0);
                    *puVar7 = uVar24;
                    puVar7[1] = uVar25;
                    puVar7[2] = uVar26;
                    puVar7[3] = uVar27;
                    puVar7 = (unsigned int *)((unsigned int)(psVar5 + 0x20) & 0xfffffff0);
                    *puVar7 = uVar24;
                    puVar7[1] = uVar25;
                    puVar7[2] = uVar26;
                    puVar7[3] = uVar27;
                    puVar7 = (unsigned int *)((unsigned int)(psVar5 + 0x28) & 0xfffffff0);
                    *puVar7 = uVar24;
                    puVar7[1] = uVar25;
                    puVar7[2] = uVar26;
                    puVar7[3] = uVar27;
                    puVar7 = (unsigned int *)((unsigned int)(psVar5 + 0x30) & 0xfffffff0);
                    *puVar7 = uVar24;
                    puVar7[1] = uVar25;
                    puVar7[2] = uVar26;
                    puVar7[3] = uVar27;
                    puVar7 = (unsigned int *)((unsigned int)(psVar5 + 0x38) & 0xfffffff0);
                    *puVar7 = uVar24;
                    puVar7[1] = uVar25;
                    puVar7[2] = uVar26;
                    puVar7[3] = uVar27;
                  }
                  else {
                    fn_830DBB28(uVar23,uVar23);
                  }
                }
                else {
                  uVar23 = (unsigned __int64)(unsigned int)param_3[9];
                  uVar12 = uVar14 >> 0x28 & 0xf;
                  (**(int (***)())((((unsigned int)(uVar14 >> 0x2c) & 6) +
                                (unsigned int)*(unsigned char *)((int)uVar12 + param_2 + 0x140) + 0x9e) * 4 + param_2
                              ))(param_2,lVar22,uVar12,param_3);
                }
                fn_830E8AE0((unsigned __int64)uVar18 + (unsigned __int64)uVar6,uVar23,
                                  *(unsigned short *)(((iVar21 >> 2) + 0x2d) * 2 + param_2));
              }
              iVar21 = iVar21 + 1;
              uVar20 = uVar20 >> 1;
              uVar14 = uVar14 << 8;
            } while (iVar21 < 6);
          }
          uStack_c4 = uStack_c4 + 1;
          param_3[1] = param_3[1] + 1;
          *param_3 = *param_3 + 2;
          param_3[2] = param_3[2] + 0x10;
          param_3[3] = param_3[3] + 8;
          *(short *)((int)param_3 + 0x12) = *(short *)((int)param_3 + 0x12) + 2;
          param_6 = uStack0000003c;
        } while (uStack_c4 < uVar8);
      }
      iStack_cc = (unsigned int)uVar4 * 8 + iStack_cc;
      uStack_c0 = uStack_c0 + 1;
      *(short *)(param_3 + 4) = *(short *)(param_3 + 4) + 2;
      iStack_c8 = (unsigned int)uVar3 * 0x10 + iStack_c8;
      *param_3 = (unsigned int)*(unsigned short *)(param_2 + 0x32) + *param_3;
    } while (uStack_c0 < param_6);
  }
  return 0;
}

