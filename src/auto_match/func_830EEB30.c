#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82C75948();
extern int fn_830DC3F8();


void fn_830EEB30(int param_1,unsigned int *param_2,int param_3,int param_4,int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  short *psVar6;
  unsigned __int64 *puVar7;
  unsigned char bVar8;
  unsigned short uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned int uVar13;
  int iVar14;
  unsigned short *puVar15;
  int iVar16;
  
  uVar4 = *param_2;
  bVar1 = *(unsigned char *)(param_1 + param_3 + 0x29c);
  bVar2 = **(unsigned char **)(param_4 + 0x18);
  uVar11 = (unsigned __int64)bVar2;
  iVar16 = param_1 + 0xe8;
  iVar12 = *(int *)(param_1 + 0x278);
  iVar14 = 0;
  uVar5 = param_2[1];
  uVar13 = 0;
  uVar10 = 0;
  psVar6 = *(short **)(param_4 + 0x28);
  puVar15 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar11 < 0x80) {
    if (bVar2 != 0) {
      do {
        uVar3 = *puVar15;
        puVar15 = puVar15 + 1;
        uVar10 = (uVar3 & 0x3f) + iVar14 & 0x3f;
        uVar9 = uVar3 >> 7 & 1;
        bVar2 = *(unsigned char *)(uVar10 + iVar12);
        iVar14 = uVar10 + 1;
        uVar10 = *(unsigned char *)(iVar16 + (unsigned int)bVar2) | uVar13;
        psVar6[bVar2] = ((uVar3 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar9) + uVar9;
        uVar11 = uVar11 - 1;
        uVar13 = uVar10;
      } while (uVar11 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar15;
  }
  else {
    uVar10 = fn_82C75948(param_1,iVar12,iVar16,param_2,param_4);
  }
  if (uVar10 == 0) {
    puVar7 = (unsigned __int64 *)(((bVar1 & 2) * 4 + (bVar1 & 1)) * 8 + param_5);
    iVar12 = *psVar6 * 0x10 + (int)*psVar6 + 4;
    uVar11 = (unsigned __int64)(unsigned int)((iVar12 >> 7) + (iVar12 >> 3) + 4 >> 3);
    uVar11 = (uVar11 & 0xffff) << 0x10 | uVar11 & 0xffff;
    uVar11 = uVar11 << 0x20 | uVar11;
    puVar7[6] = uVar11;
    puVar7[4] = uVar11;
    puVar7[2] = uVar11;
    *puVar7 = uVar11;
  }
  else {
    fn_830DC3F8(ZEXT48(psVar6),((bVar1 & 2) * 4 + (bVar1 & 1)) * 8 + param_5);
  }
  bVar8 = bVar1 >> 2;
  iVar12 = *(int *)(param_1 + 0x278);
  iVar14 = 0;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  psVar6 = *(short **)(param_4 + 0x28);
  uVar13 = 0;
  uVar10 = 0;
  bVar2 = **(unsigned char **)(param_4 + 0x18);
  uVar11 = (unsigned __int64)bVar2;
  puVar15 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar11 < 0x80) {
    if (bVar2 != 0) {
      do {
        uVar3 = *puVar15;
        puVar15 = puVar15 + 1;
        uVar10 = (uVar3 & 0x3f) + iVar14 & 0x3f;
        uVar9 = uVar3 >> 7 & 1;
        bVar2 = *(unsigned char *)(uVar10 + iVar12);
        iVar14 = uVar10 + 1;
        uVar10 = *(unsigned char *)(iVar16 + (unsigned int)bVar2) | uVar13;
        psVar6[bVar2] = ((uVar3 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar9) + uVar9;
        uVar11 = uVar11 - 1;
        uVar13 = uVar10;
      } while (uVar11 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar15;
  }
  else {
    uVar10 = fn_82C75948(param_1,iVar12,iVar16,param_2,param_4);
  }
  if (uVar10 == 0) {
    puVar7 = (unsigned __int64 *)(((bVar8 & 2) * 4 + (bVar8 & 1)) * 8 + param_5);
    iVar12 = *psVar6 * 0x10 + (int)*psVar6 + 4;
    uVar11 = (unsigned __int64)(unsigned int)((iVar12 >> 7) + (iVar12 >> 3) + 4 >> 3);
    uVar11 = (uVar11 & 0xffff) << 0x10 | uVar11 & 0xffff;
    uVar11 = uVar11 << 0x20 | uVar11;
    puVar7[6] = uVar11;
    puVar7[4] = uVar11;
    puVar7[2] = uVar11;
    *puVar7 = uVar11;
  }
  else {
    fn_830DC3F8(ZEXT48(psVar6),((bVar8 & 2) * 4 + (bVar8 & 1)) * 8 + param_5);
  }
  bVar8 = bVar1 >> 4;
  iVar12 = *(int *)(param_1 + 0x278);
  iVar14 = 0;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  psVar6 = *(short **)(param_4 + 0x28);
  uVar13 = 0;
  uVar10 = 0;
  bVar2 = **(unsigned char **)(param_4 + 0x18);
  uVar11 = (unsigned __int64)bVar2;
  puVar15 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar11 < 0x80) {
    if (bVar2 != 0) {
      do {
        uVar3 = *puVar15;
        puVar15 = puVar15 + 1;
        uVar10 = (uVar3 & 0x3f) + iVar14 & 0x3f;
        uVar9 = uVar3 >> 7 & 1;
        bVar2 = *(unsigned char *)(uVar10 + iVar12);
        iVar14 = uVar10 + 1;
        uVar10 = *(unsigned char *)(iVar16 + (unsigned int)bVar2) | uVar13;
        psVar6[bVar2] = ((uVar3 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar9) + uVar9;
        uVar11 = uVar11 - 1;
        uVar13 = uVar10;
      } while (uVar11 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar15;
  }
  else {
    uVar10 = fn_82C75948(param_1,iVar12,iVar16,param_2,param_4);
  }
  if (uVar10 == 0) {
    puVar7 = (unsigned __int64 *)(((bVar8 & 2) * 4 + (bVar8 & 1)) * 8 + param_5);
    iVar12 = *psVar6 * 0x10 + (int)*psVar6 + 4;
    uVar11 = (unsigned __int64)(unsigned int)((iVar12 >> 7) + (iVar12 >> 3) + 4 >> 3);
    uVar11 = (uVar11 & 0xffff) << 0x10 | uVar11 & 0xffff;
    uVar11 = uVar11 << 0x20 | uVar11;
    puVar7[6] = uVar11;
    puVar7[4] = uVar11;
    puVar7[2] = uVar11;
    *puVar7 = uVar11;
  }
  else {
    fn_830DC3F8(ZEXT48(psVar6),((bVar8 & 2) * 4 + (bVar8 & 1)) * 8 + param_5);
  }
  bVar1 = bVar1 >> 6;
  iVar12 = *(int *)(param_1 + 0x278);
  iVar14 = 0;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  psVar6 = *(short **)(param_4 + 0x28);
  uVar13 = 0;
  uVar10 = 0;
  bVar2 = **(unsigned char **)(param_4 + 0x18);
  uVar11 = (unsigned __int64)bVar2;
  puVar15 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar11 < 0x80) {
    if (bVar2 != 0) {
      do {
        uVar3 = *puVar15;
        puVar15 = puVar15 + 1;
        uVar10 = (uVar3 & 0x3f) + iVar14 & 0x3f;
        uVar9 = uVar3 >> 7 & 1;
        bVar2 = *(unsigned char *)(uVar10 + iVar12);
        iVar14 = uVar10 + 1;
        uVar10 = *(unsigned char *)(iVar16 + (unsigned int)bVar2) | uVar13;
        psVar6[bVar2] = ((uVar3 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar9) + uVar9;
        uVar11 = uVar11 - 1;
        uVar13 = uVar10;
      } while (uVar11 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar15;
  }
  else {
    uVar10 = fn_82C75948(param_1,iVar12,iVar16,param_2,param_4);
  }
  if (uVar10 == 0) {
    puVar7 = (unsigned __int64 *)(((bVar1 & 2) * 4 + (bVar1 & 1)) * 8 + param_5);
    iVar12 = *psVar6 * 0x10 + (int)*psVar6 + 4;
    uVar11 = (unsigned __int64)(unsigned int)((iVar12 >> 7) + (iVar12 >> 3) + 4 >> 3);
    uVar11 = (uVar11 & 0xffff) << 0x10 | uVar11 & 0xffff;
    uVar11 = uVar11 << 0x20 | uVar11;
    puVar7[6] = uVar11;
    puVar7[4] = uVar11;
    puVar7[2] = uVar11;
    *puVar7 = uVar11;
  }
  else {
    fn_830DC3F8(ZEXT48(psVar6),((bVar1 & 2) * 4 + (bVar1 & 1)) * 8 + param_5);
  }
  return;
}

