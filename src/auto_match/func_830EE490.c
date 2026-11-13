#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82C75948();
extern int fn_830DC3F8();


void fn_830EE490(int param_1,unsigned int *param_2,int param_3,int param_4,__int64 param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  short *psVar6;
  unsigned __int64 *puVar7;
  unsigned short uVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned int uVar12;
  int iVar13;
  unsigned short *puVar14;
  int iVar15;
  
  bVar1 = *(unsigned char *)(param_1 + param_3 + 0x29c);
  dataCacheBlockClearToZero(param_5);
  iVar15 = param_1 + 0xe8;
  uVar4 = *param_2;
  iVar13 = 0;
  iVar11 = *(int *)(param_1 + 0x278);
  uVar5 = param_2[1];
  psVar6 = *(short **)(param_4 + 0x28);
  bVar2 = **(unsigned char **)(param_4 + 0x18);
  uVar10 = (unsigned __int64)bVar2;
  uVar12 = 0;
  uVar9 = 0;
  puVar14 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar10 < 0x80) {
    if (bVar2 != 0) {
      do {
        uVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        uVar9 = (uVar3 & 0x3f) + iVar13 & 0x3f;
        uVar8 = uVar3 >> 7 & 1;
        bVar2 = *(unsigned char *)(uVar9 + iVar11);
        iVar13 = uVar9 + 1;
        uVar9 = *(unsigned char *)(iVar15 + (unsigned int)bVar2) | uVar12;
        psVar6[bVar2] = ((uVar3 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar8) + uVar8;
        uVar10 = uVar10 - 1;
        uVar12 = uVar9;
      } while (uVar10 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar14;
  }
  else {
    uVar9 = fn_82C75948(param_1,iVar11,iVar15,param_2,param_4);
  }
  if (uVar9 == 0) {
    puVar7 = (unsigned __int64 *)(((bVar1 & 2) * 4 + (bVar1 & 1)) * 8 + (int)param_5);
    iVar11 = *psVar6 * 0x10 + (int)*psVar6 + 4;
    uVar10 = (unsigned __int64)(unsigned int)((iVar11 >> 7) + (iVar11 >> 3) + 4 >> 3);
    uVar10 = (uVar10 & 0xffff) << 0x10 | uVar10 & 0xffff;
    uVar10 = uVar10 << 0x20 | uVar10;
    puVar7[6] = uVar10;
    puVar7[4] = uVar10;
    puVar7[2] = uVar10;
    *puVar7 = uVar10;
  }
  else {
    fn_830DC3F8(ZEXT48(psVar6),
                    (((unsigned __int64)bVar1 & 2) * 4 + ((unsigned __int64)bVar1 & 1)) * 8 + param_5);
  }
  bVar1 = bVar1 >> 2;
  iVar11 = *(int *)(param_1 + 0x278);
  iVar13 = 0;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  psVar6 = *(short **)(param_4 + 0x28);
  uVar12 = 0;
  uVar9 = 0;
  bVar2 = **(unsigned char **)(param_4 + 0x18);
  uVar10 = (unsigned __int64)bVar2;
  puVar14 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar10 < 0x80) {
    if (bVar2 != 0) {
      do {
        uVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        uVar9 = (uVar3 & 0x3f) + iVar13 & 0x3f;
        uVar8 = uVar3 >> 7 & 1;
        bVar2 = *(unsigned char *)(uVar9 + iVar11);
        iVar13 = uVar9 + 1;
        uVar9 = *(unsigned char *)(iVar15 + (unsigned int)bVar2) | uVar12;
        psVar6[bVar2] = ((uVar3 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar8) + uVar8;
        uVar10 = uVar10 - 1;
        uVar12 = uVar9;
      } while (uVar10 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar14;
  }
  else {
    uVar9 = fn_82C75948(param_1,iVar11,iVar15,param_2,param_4);
  }
  uVar10 = (unsigned __int64)bVar1 & 1;
  if (uVar9 == 0) {
    puVar7 = (unsigned __int64 *)(((bVar1 & 2) * 4 + (int)uVar10) * 8 + (int)param_5);
    iVar11 = *psVar6 * 0x10 + (int)*psVar6 + 4;
    uVar10 = (unsigned __int64)(unsigned int)((iVar11 >> 7) + (iVar11 >> 3) + 4 >> 3);
    uVar10 = (uVar10 & 0xffff) << 0x10 | uVar10 & 0xffff;
    uVar10 = uVar10 << 0x20 | uVar10;
    puVar7[6] = uVar10;
    puVar7[4] = uVar10;
    puVar7[2] = uVar10;
    *puVar7 = uVar10;
  }
  else {
    fn_830DC3F8(ZEXT48(psVar6),(((unsigned __int64)bVar1 & 2) * 4 + uVar10) * 8 + param_5);
  }
  return;
}

