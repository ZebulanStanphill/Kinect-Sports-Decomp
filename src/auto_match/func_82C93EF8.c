extern unsigned int lbl_820FDD78;


void fn_82C93EF8(int param_1,int param_2,short *param_3,short *param_4,int param_5)

{
  int iVar1;
  short *psVar2;
  __int64 lVar3;
  
  if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 4)) || (param_2 == 5)) {
    lVar3 = 3;
    iVar1 = (int)param_3 - (int)param_4;
    psVar2 = param_4 + 2;
    *param_4 = (short)(*(int *)((unsigned int)*(unsigned char *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                                0x14 + *(int *)(param_1 + 0x19d0) + 0x10) *
                       *(int *)(&lbl_820FDD78 +
                               (*(unsigned int *)((unsigned int)*(unsigned char *)(param_5 + 4) * 0x14 +
                                          *(int *)(param_1 + 0x19d0) + 0x10) & 0x3f) * 4) *
                       (int)*param_3 + 0x20000 >> 0x12);
    do {
      psVar2[-1] = (short)((int)((unsigned int)*(unsigned char *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                                 *(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_5 + 4) & 0x3f) * 4) *
                                 (int)param_3[1] + 0x20000) >> 0x12);
      *psVar2 = (short)((int)((unsigned int)*(unsigned char *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                              *(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_5 + 4) & 0x3f) * 4) *
                              (int)*(short *)((int)psVar2 + iVar1) + 0x20000) >> 0x12);
      psVar2[1] = (short)((int)((unsigned int)*(unsigned char *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                                *(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_5 + 4) & 0x3f) * 4) *
                                (int)param_3[3] + 0x20000) >> 0x12);
      psVar2[2] = (short)((int)((unsigned int)*(unsigned char *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                                *(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_5 + 4) & 0x3f) * 4) *
                                (int)param_3[4] + 0x20000) >> 0x12);
      param_3 = param_3 + 5;
      psVar2[3] = (short)((int)((unsigned int)*(unsigned char *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                                *(int *)(&lbl_820FDD78 + (*(unsigned char *)(param_5 + 4) & 0x3f) * 4) *
                                (int)*param_3 + 0x20000) >> 0x12);
      psVar2 = psVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    param_4[8] = *param_4;
  }
  else {
    iVar1 = (int)param_3 - (int)param_4;
    lVar3 = 0x10;
    do {
      *param_4 = *(short *)(iVar1 + (int)param_4);
      param_4 = param_4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

