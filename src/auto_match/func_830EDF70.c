#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82C75948();
extern int fn_830DBED0();


void fn_830EDF70(int param_1,unsigned int *param_2,__int64 param_3,int param_4,__int64 param_5)

{
  unsigned char bVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  short *psVar6;
  unsigned __int64 *puVar7;
  unsigned short uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned short *puVar13;
  __int64 lVar12;
  unsigned __int64 uVar14;
  
  dataCacheBlockClearToZero(param_5);
  iVar3 = *(int *)(param_1 + 0x270);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  iVar11 = 0;
  psVar6 = *(short **)(param_4 + 0x28);
  uVar10 = 0;
  uVar9 = 0;
  bVar1 = **(unsigned char **)(param_4 + 0x18);
  uVar14 = (unsigned __int64)bVar1;
  puVar13 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero(ZEXT48(psVar6));
  if (uVar14 < 0x80) {
    if (bVar1 != 0) {
      do {
        uVar2 = *puVar13;
        puVar13 = puVar13 + 1;
        uVar9 = (uVar2 & 0x3f) + iVar11 & 0x3f;
        uVar8 = uVar2 >> 7 & 1;
        bVar1 = *(unsigned char *)(uVar9 + iVar3);
        iVar11 = uVar9 + 1;
        uVar9 = *(unsigned char *)((unsigned int)bVar1 + param_1 + 0xa8) | uVar10;
        psVar6[bVar1] = ((uVar2 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar8) + uVar8;
        uVar14 = uVar14 - 1;
        uVar10 = uVar9;
      } while (uVar14 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar13;
  }
  else {
    uVar9 = fn_82C75948();
  }
  lVar12 = (2U - param_3 & 0x1fffffff) * 8;
  if (uVar9 == 0) {
    puVar7 = (unsigned __int64 *)((int)lVar12 + (int)param_5);
    uVar14 = (unsigned __int64)(unsigned int)((*psVar6 * 0x10 + (int)*psVar6 + 4 >> 3) * 3 + 0x10 >> 5);
    uVar14 = (uVar14 & 0xffff) << 0x10 | uVar14 & 0xffff;
    uVar14 = uVar14 << 0x20 | uVar14;
    puVar7[0xe] = uVar14;
    puVar7[0xc] = uVar14;
    puVar7[10] = uVar14;
    puVar7[8] = uVar14;
    puVar7[6] = uVar14;
    puVar7[4] = uVar14;
    puVar7[2] = uVar14;
    *puVar7 = uVar14;
  }
  else {
    fn_830DBED0(ZEXT48(psVar6),lVar12 + param_5);
  }
  return;
}

