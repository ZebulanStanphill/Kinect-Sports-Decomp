extern unsigned int *auStack_60;


void fn_82DD8470(unsigned char *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  char cVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int in_r0;
  char cVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned char *pbVar11;
  __int64 lVar12;
  unsigned int *puVar13;
  unsigned char *pbVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  char acStack_70 [16];
  unsigned int auStack_60 [24];
  
  bVar1 = param_1[2];
  puVar5 = (unsigned int *)((unsigned int)(acStack_70 + in_r0) & 0xfffffff0);
  uVar15 = puVar5[1];
  uVar16 = puVar5[2];
  uVar17 = puVar5[3];
  puVar6 = (unsigned int *)((unsigned int)(acStack_70 + in_r0) & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar15;
  puVar6[2] = uVar16;
  puVar6[3] = uVar17;
  uVar9 = (unsigned int)bVar1;
  pbVar14 = param_1;
  for (uVar8 = uVar9; uVar8 != 0; uVar8 = uVar8 - 1) {
    bVar1 = pbVar14[9];
    bVar2 = pbVar14[5];
    bVar3 = pbVar14[4];
    acStack_70[pbVar14[8] >> 4] = '\x01';
    acStack_70[bVar1 >> 4] = '\x01';
    if (2 < (unsigned int)bVar2 + (unsigned int)bVar3) {
      acStack_70[pbVar14[10] >> 4] = '\x01';
    }
    if ((unsigned int)bVar2 + (unsigned int)bVar3 == 4) {
      acStack_70[pbVar14[0xb] >> 4] = '\x01';
    }
    pbVar14 = pbVar14 + 8;
  }
  iVar10 = 0;
  cVar7 = '\0';
  pbVar14 = param_1 + uVar9 * 8 + 4;
  lVar12 = (unsigned __int64)param_1[1] + (unsigned __int64)*param_1;
  uVar8 = 0;
  if (lVar12 != 0) {
    pbVar11 = param_1 + uVar9 * 8 + 2;
    puVar13 = auStack_60;
    cVar7 = '\0';
    do {
      cVar4 = acStack_70[iVar10];
      *puVar13 = uVar8;
      if (cVar4 != '\0') {
        cVar7 = cVar7 + '\x01';
        uVar8 = uVar8 + 0x10;
        pbVar11 = pbVar11 + 2;
        *(unsigned short *)pbVar11 = *(unsigned short *)pbVar14;
      }
      iVar10 = iVar10 + 1;
      puVar13 = puVar13 + 1;
      pbVar14 = pbVar14 + 2;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  uVar8 = 0;
  bVar1 = (unsigned char)(auStack_60[*param_1] >> 4);
  *param_1 = bVar1;
  param_1[1] = cVar7 - bVar1;
  if (param_1[2] != 0) {
    pbVar14 = param_1 + 3;
    do {
      uVar8 = uVar8 + 1;
      uVar15 = *(unsigned int *)((int)auStack_60 + (pbVar14[6] >> 2 & 0x3ffffffc));
      uVar16 = *(unsigned int *)((int)auStack_60 + (pbVar14[7] >> 2 & 0x3ffffffc));
      uVar17 = *(unsigned int *)((int)auStack_60 + (pbVar14[8] >> 2 & 0x3ffffffc));
      pbVar14[5] = (unsigned char)*(unsigned int *)((int)auStack_60 + (pbVar14[5] >> 2 & 0x3ffffffc));
      pbVar14[6] = (unsigned char)uVar15;
      pbVar14[7] = (unsigned char)uVar16;
      pbVar14 = pbVar14 + 8;
      *pbVar14 = (unsigned char)uVar17;
    } while (uVar8 < param_1[2]);
  }
  return;
}

