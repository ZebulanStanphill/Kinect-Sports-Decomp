extern unsigned int iStack_100;
extern unsigned int lbl_821090D8;
extern unsigned int lbl_821090DA;
extern unsigned int uStack_178;


void fn_82CBA528(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar2;
  unsigned char *pbVar5;
  unsigned char *puVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned char *puVar12;
  unsigned char *puVar13;
  unsigned char *puVar14;
  __int64 lVar15;
  unsigned char *pbStack_188;
  unsigned char *pbStack_184;
  unsigned char *pbStack_180;
  unsigned char *pbStack_17c;
  unsigned int uStack_178;
  unsigned char *pbStack_174;
  unsigned char *pbStack_170;
  int aiStack_120 [8];
  int iStack_100;
  
  param_6 = param_6 * 4;
  psVar7 = (short *)(&lbl_821090D8 + param_6);
  pbStack_188 = (unsigned char *)(param_2 * 6 + param_1);
  pbStack_184 = (unsigned char *)(param_2 * 7 + param_1);
  pbStack_174 = (unsigned char *)(param_2 * 5 + param_1);
  pbStack_180 = (unsigned char *)(param_2 * 8 + param_1);
  pbStack_170 = (unsigned char *)(param_2 * 4 + param_1);
  pbStack_17c = (unsigned char *)(param_2 * 3 + param_1);
  iVar3 = param_3 - param_1;
  pbVar5 = (unsigned char *)(param_1 + param_2);
  puVar6 = (unsigned char *)(param_4 * 2 + param_3);
  uStack_178 = 8;
  do {
    pbStack_170 = pbStack_170 + 1;
    pbStack_174 = pbStack_174 + 1;
    pbStack_17c = pbStack_17c + 1;
    pbStack_180 = pbStack_180 + 1;
    pbStack_184 = pbStack_184 + 1;
    pbStack_188 = pbStack_188 + 1;
    lVar15 = 2;
    iVar10 = (int)*(short *)(&lbl_821090DA + param_5 * 4);
    iVar11 = (int)*(short *)(&lbl_821090DA + param_5 * 4);
    iVar8 = (int)*(short *)(&lbl_821090D8 + param_5 * 4);
    iVar9 = (int)*(short *)(&lbl_821090D8 + param_5 * 4);
    aiStack_120[7] = (unsigned int)pbVar5[param_2 * 6] * iVar8 + (unsigned int)*pbStack_184 * iVar10;
    iStack_100 = (unsigned int)pbVar5[param_2 * 7] * iVar8 + (unsigned int)*pbStack_180 * iVar10;
    aiStack_120[6] = (unsigned int)pbVar5[param_2 * 5] * iVar9 + (unsigned int)*pbStack_188 * iVar11;
    iVar1 = param_4 * 4;
    aiStack_120[1] = (unsigned int)pbVar5[1] * iVar11 + (unsigned int)*pbVar5 * iVar9;
    aiStack_120[2] = (unsigned int)pbVar5[param_2] * iVar9 + (unsigned int)pbVar5[param_2 + 1] * iVar11;
    aiStack_120[5] = (unsigned int)pbVar5[param_2 * 4] * iVar8 + (unsigned int)*pbStack_174 * iVar10;
    puVar14 = (unsigned char *)(iVar3 + param_1);
    piVar4 = aiStack_120 + 1;
    puVar12 = puVar6 + param_4 * -3;
    aiStack_120[3] = (unsigned int)pbVar5[param_2 * 2] * iVar8 + (unsigned int)*pbStack_17c * iVar10;
    aiStack_120[4] = (unsigned int)pbVar5[param_2 * 3] * iVar8 + (unsigned int)*pbStack_170 * iVar10;
    puVar13 = puVar6;
    do {
      iVar8 = *piVar4;
      iVar9 = ((*(short *)(&lbl_821090DA + param_6) * iVar8 + (int)*psVar7 * piVar4[-1]) - param_7)
              + 8 >> 4;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      *puVar14 = (char)iVar9;
      iVar9 = piVar4[1];
      iVar8 = ((*(short *)(&lbl_821090DA + param_6) * iVar9 + *psVar7 * iVar8) - param_7) + 8 >> 4;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0xff < iVar8) {
        iVar8 = 0xff;
      }
      puVar14[param_4] = (char)iVar8;
      iVar8 = piVar4[2];
      iVar9 = ((*psVar7 * iVar9 + *(short *)(&lbl_821090DA + param_6) * iVar8) - param_7) + 8 >> 4;
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0xff < iVar9) {
        iVar9 = 0xff;
      }
      *puVar13 = (char)iVar9;
      iVar8 = (((int)*(short *)(&lbl_821090DA + param_6) * piVar4[3] + *psVar7 * iVar8) - param_7) +
              8 >> 4;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0xff < iVar8) {
        iVar8 = 0xff;
      }
      puVar14 = puVar14 + iVar1;
      puVar12 = puVar12 + iVar1;
      *puVar12 = (char)iVar8;
      puVar13 = puVar13 + iVar1;
      piVar4 = piVar4 + 4;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    param_1 = param_1 + 1;
    pbVar5 = pbVar5 + 1;
    uVar2 = (unsigned __int64)uStack_178;
    uStack_178 = (unsigned int)(uVar2 - 1);
    puVar6 = puVar6 + 1;
  } while (uVar2 - 1 != 0);
  return;
}

