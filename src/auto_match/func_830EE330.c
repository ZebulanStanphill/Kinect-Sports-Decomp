#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82C75948();
extern int fn_830DC3F8();


void fn_830EE330(int param_1,unsigned int *param_2,int param_3,int param_4,__int64 param_5)

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
  int iVar10;
  unsigned int uVar11;
  int iVar12;
  unsigned short *puVar13;
  unsigned __int64 uVar14;
  
  bVar1 = *(unsigned char *)(param_1 + param_3 + 0x29c);
  dataCacheBlockClearToZero(param_5);
  iVar10 = *(int *)(param_1 + 0x278);
  iVar12 = 0;
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar11 = 0;
  uVar9 = 0;
  psVar6 = *(short **)(param_4 + 0x28);
  bVar2 = **(unsigned char **)(param_4 + 0x18);
  uVar14 = (unsigned __int64)bVar2;
  puVar13 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar14 < 0x80) {
    if (bVar2 != 0) {
      do {
        uVar3 = *puVar13;
        puVar13 = puVar13 + 1;
        uVar9 = (uVar3 & 0x3f) + iVar12 & 0x3f;
        uVar8 = uVar3 >> 7 & 1;
        bVar2 = *(unsigned char *)(uVar9 + iVar10);
        iVar12 = uVar9 + 1;
        uVar9 = *(unsigned char *)((unsigned int)bVar2 + param_1 + 0xe8) | uVar11;
        psVar6[bVar2] = ((uVar3 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar8) + uVar8;
        uVar14 = uVar14 - 1;
        uVar11 = uVar9;
      } while (uVar14 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar13;
  }
  else {
    uVar9 = fn_82C75948();
  }
  uVar14 = (unsigned __int64)bVar1 & 1;
  if (uVar9 == 0) {
    puVar7 = (unsigned __int64 *)(((bVar1 & 2) * 4 + (int)uVar14) * 8 + (int)param_5);
    iVar10 = *psVar6 * 0x10 + (int)*psVar6 + 4;
    uVar14 = (unsigned __int64)(unsigned int)((iVar10 >> 7) + (iVar10 >> 3) + 4 >> 3);
    uVar14 = (uVar14 & 0xffff) << 0x10 | uVar14 & 0xffff;
    uVar14 = uVar14 << 0x20 | uVar14;
    puVar7[6] = uVar14;
    puVar7[4] = uVar14;
    puVar7[2] = uVar14;
    *puVar7 = uVar14;
  }
  else {
    fn_830DC3F8(ZEXT48(psVar6),(((unsigned __int64)bVar1 & 2) * 4 + uVar14) * 8 + param_5);
  }
  return;
}

