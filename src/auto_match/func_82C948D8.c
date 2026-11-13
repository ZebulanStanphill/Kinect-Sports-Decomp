extern unsigned int lbl_820FDD78;


unsigned __int64
fn_82C948D8(int param_1,unsigned int *param_2,int param_3,__int64 param_4,int param_5,int *param_6,
             unsigned int *param_7,short *param_8)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  short *psVar6;
  unsigned int uVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  unsigned int uVar11;
  __int64 lVar12;
  
  uVar5 = 0;
  psVar8 = (short *)0x0;
  iVar9 = 0;
  if (((param_5 != 0) && (*(int *)(*(int *)(param_1 + 0x55d0) + param_5 * 4) == 0)) &&
     ((*(short *)((int)(((__int64)(param_5 + -1) * (__int64)(int)*(unsigned int *)(param_1 + 0x88) +
                         param_4 & 0xffffffffU) << 1) + *(int *)(param_1 + 0x6f8)) == 0x4000 ||
      ((*(int *)(param_1 + 0x120) == 0 || (*(int *)(param_1 + 0x120) == 4)))))) {
    iVar9 = *(int *)(param_1 + 0x78c);
    psVar8 = (short *)(param_3 + (*(unsigned int *)(param_1 + 0x88) & 0x7ffffff) * -0x20);
  }
  psVar6 = psVar8;
  if ((int)param_4 != 0) {
    if (((*(short *)((int)(((__int64)*(int *)(param_1 + 0x88) * (__int64)param_5 + param_4 &
                           0xffffffffU) << 1) + *(int *)(param_1 + 0x6f8) + -2) == 0x4000) ||
        (*(int *)(param_1 + 0x120) == 0)) || (*(int *)(param_1 + 0x120) == 4)) {
      iVar9 = *(int *)(param_1 + 0x788);
      psVar6 = (short *)(param_3 + -0x20);
      if (psVar6 == (short *)0x0) goto LAB_82c94e44;
      if (psVar8 != (short *)0x0) {
        iVar10 = 0;
        if (((*(short *)((int)(((__int64)(param_5 + -1) * (__int64)*(int *)(param_1 + 0x88) +
                                param_4 & 0xffffffffU) << 1) + *(int *)(param_1 + 0x6f8) + -2) ==
              0x4000) || (*(int *)(param_1 + 0x120) == 0)) || (*(int *)(param_1 + 0x120) == 4)) {
          iVar10 = (int)psVar8[*(int *)(param_1 + 0x784) + -0x10];
        }
        iVar1 = *(int *)(param_1 + 0x19d0);
        iVar2 = *(int *)(&lbl_820FDD78 +
                        (*(unsigned int *)((unsigned int)*(unsigned char *)(param_2 + 1) * 0x14 + iVar1 + 0x10) & 0x3f) * 4);
        iVar10 = *(int *)((unsigned int)*(unsigned char *)(param_2 + *(int *)(param_1 + 0x88) * -6 + -5) * 0x14 +
                          iVar1 + 0x10) * iVar2 * iVar10 + 0x20000 >> 0x12;
        uVar11 = iVar10 - (*(int *)((unsigned int)*(unsigned char *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                    0x14 + iVar1 + 0x10) * (int)psVar8[*(int *)(param_1 + 0x784)] *
                           iVar2 + 0x20000 >> 0x12);
        uVar3 = (int)uVar11 >> 0x1f;
        uVar7 = iVar10 - (*(int *)((unsigned int)*(unsigned char *)(param_2 + -5) * 0x14 + iVar1 + 0x10) *
                          (int)psVar6[*(int *)(param_1 + 0x780)] * iVar2 + 0x20000 >> 0x12);
        uVar4 = (int)uVar7 >> 0x1f;
        if ((int)((uVar7 ^ uVar4) - uVar4) < (int)((uVar11 ^ uVar3) - uVar3)) {
          iVar9 = *(int *)(param_1 + 0x78c);
          psVar6 = psVar8;
        }
      }
    }
  }
  if (psVar6 != (short *)0x0) {
    uVar3 = *param_2;
    uVar5 = 1;
    lVar12 = 3;
    psVar8 = param_8 + 2;
    if (iVar9 == *(int *)(param_1 + 0x788)) {
      iVar10 = (int)psVar6 - (int)param_8;
      *param_8 = (short)(*(int *)(&lbl_820FDD78 +
                                 (*(unsigned int *)((unsigned int)*(unsigned char *)(param_2 + 1) * 0x14 +
                                            *(int *)(param_1 + 0x19d0) + 0x10) & 0x3f) * 4) *
                         *(int *)((unsigned int)*(unsigned char *)(param_2 + -5) * 0x14 + *(int *)(param_1 + 0x19d0)
                                 + 0x10) * (int)*psVar6 + 0x20000 >> 0x12);
      do {
        psVar8[-1] = (short)((int)(*(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_2 + 1) & 0x3f) * 4) *
                                   (unsigned int)*(unsigned char *)(param_2 + -5) * (int)psVar6[1] + 0x20000) >> 0x12
                            );
        *psVar8 = (short)((int)(*(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_2 + 1) & 0x3f) * 4) *
                                (int)*(short *)(iVar10 + (int)psVar8) *
                                (unsigned int)*(unsigned char *)(param_2 + -5) + 0x20000) >> 0x12);
        psVar8[1] = (short)((int)(*(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_2 + 1) & 0x3f) * 4) *
                                  (unsigned int)*(unsigned char *)(param_2 + -5) * (int)psVar6[3] + 0x20000) >> 0x12)
        ;
        psVar8[2] = (short)((int)(*(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_2 + 1) & 0x3f) * 4) *
                                  (unsigned int)*(unsigned char *)(param_2 + -5) * (int)psVar6[4] + 0x20000) >> 0x12)
        ;
        psVar6 = psVar6 + 5;
        psVar8[3] = (short)((int)(*(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_2 + 1) & 0x3f) * 4) *
                                  (unsigned int)*(unsigned char *)(param_2 + -5) * (int)*psVar6 + 0x20000) >> 0x12);
        psVar8 = psVar8 + 5;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    else {
      iVar10 = (int)psVar6 - (int)param_8;
      *param_8 = (short)(*(int *)((unsigned int)*(unsigned char *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                  0x14 + *(int *)(param_1 + 0x19d0) + 0x10) *
                         *(int *)(&lbl_820FDD78 +
                                 (*(unsigned int *)((unsigned int)*(unsigned char *)(param_2 + 1) * 0x14 +
                                            *(int *)(param_1 + 0x19d0) + 0x10) & 0x3f) * 4) *
                         (int)*psVar6 + 0x20000 >> 0x12);
      do {
        psVar8[-1] = (short)((int)((unsigned int)*(unsigned char *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                   *(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_2 + 1) & 0x3f) * 4) *
                                   (int)psVar6[1] + 0x20000) >> 0x12);
        *psVar8 = (short)((int)((unsigned int)*(unsigned char *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                *(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_2 + 1) & 0x3f) * 4) *
                                (int)*(short *)(iVar10 + (int)psVar8) + 0x20000) >> 0x12);
        psVar8[1] = (short)((int)((unsigned int)*(unsigned char *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                  *(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_2 + 1) & 0x3f) * 4) *
                                  (int)psVar6[3] + 0x20000) >> 0x12);
        psVar8[2] = (short)((int)((unsigned int)*(unsigned char *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                  *(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_2 + 1) & 0x3f) * 4) *
                                  (int)psVar6[4] + 0x20000) >> 0x12);
        psVar6 = psVar6 + 5;
        psVar8[3] = (short)((int)((unsigned int)*(unsigned char *)(param_2 + *(int *)(param_1 + 0x88) * -6 + 1) *
                                  *(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_2 + 1) & 0x3f) * 4) *
                                  (int)*psVar6 + 0x20000) >> 0x12);
        psVar8 = psVar8 + 5;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    param_8[8] = *param_8;
    if ((uVar3 & 0x18) == 0) {
      iVar9 = -1;
    }
  }
LAB_82c94e44:
  *param_7 = (unsigned int)LZCOUNT(*(int *)(param_1 + 0x78c) - iVar9) >> 5;
  *param_6 = iVar9;
  return uVar5;
}

