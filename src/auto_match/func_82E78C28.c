#define true 1
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82E39CE8();
extern int fn_82E76510();
extern int fn_82E78690();
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;


__int64 fn_82E78C28(int param_1,unsigned int param_2,unsigned char *param_3,unsigned __int64 param_4,unsigned int param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned short uVar3;
  unsigned short uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned char *pbVar7;
  short *psVar8;
  short *psVar9;
  unsigned int uVar10;
  unsigned short *puVar11;
  unsigned int uVar12;
  unsigned short uVar13;
  unsigned short *puVar14;
  unsigned int uVar15;
  unsigned short *apuStack_90 [4];
  unsigned short auStack_80 [2];
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned short auStack_70 [56];
  
  if (*(unsigned int *)(param_1 + 0x1e0) <= (param_2 & 0xffff)) {
    return -0x7ff8ffa9;
  }
  lVar6 = fn_82E78690(param_1 + 0x178,param_2 & 0xffff,apuStack_90);
  psVar8 = *(short **)(param_1 + 8);
  psVar9 = (short *)(-(unsigned int)(lVar6 != 0) & (unsigned int)apuStack_90[0]);
  puVar14 = (unsigned short *)((int)psVar9 + 0x25);
  uVar15 = (unsigned int)*(unsigned short *)((int)psVar9 + 0x1f);
  if (psVar8 == (short *)0x0) {
    return 0;
  }
  while (*psVar8 != *psVar9) {
    psVar8 = *(short **)(psVar8 + 4);
    if (psVar8 == (short *)0x0) {
      return 0;
    }
  }
  iVar5 = *(int *)(psVar8 + 2);
  if (iVar5 == 0) {
    return 0;
  }
  uVar3 = *(unsigned short *)(iVar5 + 4);
  uVar13 = 0;
  uVar12 = 0;
  if (uVar3 == 0) {
    return 0;
  }
  do {
    uStack_7c = 0;
    uStack_78 = 0;
    uStack_74 = 0;
    auStack_70[0] = 0;
    apuStack_90[0] = puVar14;
    lVar6 = fn_82E76510(iVar5,uVar13,auStack_80);
    if (lVar6 < 0) {
      return lVar6;
    }
    uVar10 = (unsigned int)auStack_70[0];
    if (uVar10 == 0xffff) {
      lVar6 = 0;
      if (((unsigned short *)(uVar15 + (int)puVar14) == (unsigned short *)0x0) ||
         (puVar14 + 1 <= (unsigned short *)(uVar15 + (int)puVar14))) {
        uVar4 = *puVar14;
        puVar14 = puVar14 + 1;
        uVar10 = (uVar4 & 0xff) << 8 | (unsigned int)(uVar4 >> 8);
        apuStack_90[0] = puVar14;
      }
      else {
        lVar6 = -0x7fff0001;
        uVar10 = uVar12;
      }
      if ((int)lVar6 < 0) {
        return lVar6;
      }
      uVar15 = uVar15 + 0xfffe & 0xffff;
    }
    if (uVar15 < uVar10) {
      return -0x3ff2c94e;
    }
    puVar11 = auStack_80;
    pbVar7 = param_3;
    do {
      bVar1 = *(unsigned char *)puVar11;
      bVar2 = *pbVar7;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      puVar11 = (unsigned short *)((int)puVar11 + 1);
      pbVar7 = pbVar7 + 1;
    } while (puVar11 != auStack_70);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      if (uVar10 != (param_5 & 0xffff)) {
        return -0x3ff2c94e;
      }
      lVar6 = fn_82E39CE8(param_4,apuStack_90,param_5 & 0xffff,uVar15 + (int)puVar14);
      return lVar6;
    }
    uVar13 = uVar13 + 1;
    puVar14 = (unsigned short *)(uVar10 + (int)puVar14);
    uVar15 = uVar15 - uVar10 & 0xffff;
    uVar12 = uVar10;
    if (uVar3 <= uVar13) {
      return lVar6;
    }
  } while( true );
}

