extern int fn_82F6E7A8();


unsigned char fn_82C75948(unsigned __int64 param_1,int param_2,int param_3,unsigned int *param_4,int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned short uVar9;
  unsigned char bVar10;
  unsigned short uVar11;
  int iVar12;
  int iVar13;
  unsigned short *puVar14;
  unsigned short *puVar15;
  
  iVar12 = 0;
  uVar5 = *param_4;
  bVar10 = 0;
  uVar6 = param_4[1];
  uVar7 = *(unsigned int *)(param_5 + 0x28);
  puVar15 = *(unsigned short **)(param_5 + 0x14);
  bVar1 = *(unsigned char *)(*(int *)(param_5 + 0x18) + -1);
  dataCacheBlockClearToZero((unsigned __int64)uVar7);
  if (bVar1 == 0xffffffff) {
    fn_82F6E7A8(0xffffffff820fbbbc,0xffffffff820fc5a8,0x54d);
    fn_82F6E7A8(0xffffffff820fc598);
    fn_82F6E7A8(0xffffffff821cc86c);
    bVar10 = 0;
  }
  else {
    iVar13 = 0;
    puVar14 = puVar15;
    if ((bVar1 & 0x7f) != 0) {
      do {
        uVar3 = *puVar14;
        puVar15 = puVar14 + 1;
        uVar9 = uVar3 >> 7 & 1;
        uVar11 = uVar3 >> 8;
        if ((uVar3 & 0x40) != 0) {
          uVar4 = *puVar15;
          puVar15 = puVar14 + 2;
          iVar13 = iVar13 + 1;
          uVar11 = uVar4 << 8 | uVar11;
        }
        uVar8 = (uVar3 & 0x3f) + iVar12 & 0x3f;
        iVar13 = iVar13 + 1;
        iVar12 = uVar8 + 1;
        bVar2 = *(unsigned char *)(uVar8 + param_2);
        bVar10 = *(unsigned char *)((unsigned int)bVar2 + param_3) | bVar10;
        *(unsigned short *)((unsigned int)bVar2 * 2 + uVar7) =
             (uVar11 * (short)uVar5 + (short)uVar6 ^ -uVar9) + uVar9;
        puVar14 = puVar15;
      } while (iVar13 < (int)(bVar1 & 0x7f));
    }
    *(unsigned short **)(param_5 + 0x14) = puVar15;
  }
  return bVar10;
}

