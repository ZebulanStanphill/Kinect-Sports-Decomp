extern unsigned int iStack_a8;
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8324D7A4;


void fn_82EFADC0(unsigned char *param_1,int param_2,unsigned char *param_3,int param_4,int *param_5,int *param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  __int64 lVar15;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  
  iVar12 = 0;
  iStack_b0 = 0;
  lbl_8324D7A4 = lbl_8324D7A4 + lbl_82005344;
  iStack_a8 = 0;
  lVar15 = 2;
  iStack_ac = 0;
  do {
    uVar1 = (int)((unsigned int)param_1[3] - (unsigned int)param_3[3]) >> 0x1f;
    uVar2 = (int)((unsigned int)param_1[2] - (unsigned int)param_3[2]) >> 0x1f;
    uVar3 = (int)((unsigned int)param_1[1] - (unsigned int)param_3[1]) >> 0x1f;
    uVar4 = (int)((unsigned int)*param_1 - (unsigned int)*param_3) >> 0x1f;
    pbVar13 = param_3 + param_4;
    pbVar14 = param_1 + param_2;
    uVar5 = (int)((unsigned int)param_1[7] - (unsigned int)param_3[7]) >> 0x1f;
    uVar6 = (int)((unsigned int)param_1[6] - (unsigned int)param_3[6]) >> 0x1f;
    uVar7 = (int)((unsigned int)param_1[5] - (unsigned int)param_3[5]) >> 0x1f;
    uVar8 = (int)((unsigned int)param_1[4] - (unsigned int)param_3[4]) >> 0x1f;
    uVar9 = (int)((unsigned int)pbVar14[3] - (unsigned int)pbVar13[3]) >> 0x1f;
    uVar10 = (int)((unsigned int)pbVar14[2] - (unsigned int)pbVar13[2]) >> 0x1f;
    uVar11 = (int)((unsigned int)pbVar14[1] - (unsigned int)pbVar13[1]) >> 0x1f;
    iStack_b0 = (((unsigned int)param_1[7] - (unsigned int)param_3[7] ^ uVar5) - uVar5) +
                (((unsigned int)param_1[6] - (unsigned int)param_3[6] ^ uVar6) - uVar6) +
                (((unsigned int)param_1[5] - (unsigned int)param_3[5] ^ uVar7) - uVar7) +
                (((unsigned int)param_1[4] - (unsigned int)param_3[4] ^ uVar8) - uVar8) + iStack_b0;
    iVar12 = (((unsigned int)param_1[3] - (unsigned int)param_3[3] ^ uVar1) - uVar1) +
             (((unsigned int)param_1[2] - (unsigned int)param_3[2] ^ uVar2) - uVar2) +
             (((unsigned int)param_1[1] - (unsigned int)param_3[1] ^ uVar3) - uVar3) +
             (((unsigned int)*param_1 - (unsigned int)*param_3 ^ uVar4) - uVar4) + iVar12;
    uVar1 = (int)((unsigned int)*pbVar14 - (unsigned int)*pbVar13) >> 0x1f;
    uVar2 = (int)((unsigned int)pbVar14[7] - (unsigned int)pbVar13[7]) >> 0x1f;
    uVar3 = (int)((unsigned int)pbVar14[6] - (unsigned int)pbVar13[6]) >> 0x1f;
    uVar4 = (int)((unsigned int)pbVar14[5] - (unsigned int)pbVar13[5]) >> 0x1f;
    uVar5 = (int)((unsigned int)pbVar14[4] - (unsigned int)pbVar13[4]) >> 0x1f;
    iStack_ac = (((unsigned int)pbVar14[7] - (unsigned int)pbVar13[7] ^ uVar2) - uVar2) +
                (((unsigned int)pbVar14[6] - (unsigned int)pbVar13[6] ^ uVar3) - uVar3) +
                (((unsigned int)pbVar14[5] - (unsigned int)pbVar13[5] ^ uVar4) - uVar4) +
                (((unsigned int)pbVar14[4] - (unsigned int)pbVar13[4] ^ uVar5) - uVar5) + iStack_ac;
    iStack_a8 = (((unsigned int)pbVar14[3] - (unsigned int)pbVar13[3] ^ uVar9) - uVar9) +
                (((unsigned int)pbVar14[2] - (unsigned int)pbVar13[2] ^ uVar10) - uVar10) +
                (((unsigned int)pbVar14[1] - (unsigned int)pbVar13[1] ^ uVar11) - uVar11) +
                (((unsigned int)*pbVar14 - (unsigned int)*pbVar13 ^ uVar1) - uVar1) + iStack_a8;
    param_1 = pbVar14 + param_2;
    param_3 = pbVar13 + param_4;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  *param_5 = iStack_a8 + iVar12;
  *param_6 = iStack_ac + iStack_b0;
  return;
}

