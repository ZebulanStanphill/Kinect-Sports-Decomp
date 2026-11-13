typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82C75948();
extern int fn_830DC190();
extern V16 vectorSplatHalfWord();


void fn_830EDD18(int param_1,unsigned int *param_2,unsigned __int64 param_3,int param_4,__int64 param_5)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned short uVar8;
  int in_r0;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  int iVar12;
  int iVar13;
  unsigned short *puVar14;
  int iVar15;
  unsigned char in_vs32 [16];
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  uVar3 = *param_2;
  iVar4 = *(int *)(param_1 + 0x26c);
  bVar1 = **(unsigned char **)(param_4 + 0x18);
  uVar10 = (unsigned __int64)bVar1;
  iVar15 = param_1 + 0xa8;
  uVar5 = param_2[1];
  iVar12 = 0;
  uVar6 = *(unsigned int *)(param_4 + 0x28);
  uVar11 = 0;
  uVar9 = 0;
  puVar14 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero((unsigned __int64)uVar6);
  if (uVar10 < 0x80) {
    if (bVar1 != 0) {
      do {
        uVar2 = *puVar14;
        puVar14 = puVar14 + 1;
        uVar9 = (uVar2 & 0x3f) + iVar12 & 0x3f;
        uVar8 = uVar2 >> 7 & 1;
        bVar1 = *(unsigned char *)(uVar9 + iVar4);
        iVar12 = uVar9 + 1;
        uVar9 = *(unsigned char *)(iVar15 + (unsigned int)bVar1) | uVar11;
        *(unsigned short *)((unsigned int)bVar1 * 2 + uVar6) =
             ((uVar2 >> 8) * (short)uVar3 + (short)uVar5 ^ -uVar8) + uVar8;
        uVar10 = uVar10 - 1;
        uVar11 = uVar9;
      } while (uVar10 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar14;
  }
  else {
    uVar9 = fn_82C75948(param_1,iVar4,iVar15,param_2,param_4);
  }
  iVar4 = (int)param_5;
  if (uVar9 == 0) {
    vectorSplatHalfWord(in_vs32,1);
    puVar7 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (unsigned int *)(iVar4 + 0x10U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (unsigned int *)(iVar4 + 0x20U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (unsigned int *)(iVar4 + 0x30U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
  }
  else {
    fn_830DC190((unsigned __int64)uVar6,param_5);
  }
  iVar13 = 0;
  iVar12 = *(int *)(param_1 + 0x26c);
  uVar11 = 0;
  uVar9 = 0;
  uVar3 = *param_2;
  uVar5 = param_2[1];
  uVar6 = *(unsigned int *)(param_4 + 0x28);
  bVar1 = **(unsigned char **)(param_4 + 0x18);
  uVar10 = (unsigned __int64)bVar1;
  puVar14 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero((unsigned __int64)uVar6);
  if (uVar10 < 0x80) {
    if (bVar1 != 0) {
      do {
        uVar2 = *puVar14;
        puVar14 = puVar14 + 1;
        uVar9 = (uVar2 & 0x3f) + iVar13 & 0x3f;
        uVar8 = uVar2 >> 7 & 1;
        bVar1 = *(unsigned char *)(uVar9 + iVar12);
        iVar13 = uVar9 + 1;
        uVar9 = *(unsigned char *)(iVar15 + (unsigned int)bVar1) | uVar11;
        *(unsigned short *)((unsigned int)bVar1 * 2 + uVar6) =
             ((uVar2 >> 8) * (short)uVar3 + (short)uVar5 ^ -uVar8) + uVar8;
        uVar10 = uVar10 - 1;
        uVar11 = uVar9;
      } while (uVar10 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar14;
  }
  else {
    uVar9 = fn_82C75948(param_1,iVar12,iVar15,param_2,param_4);
  }
  if (uVar9 == 0) {
    vectorSplatHalfWord(in_vs32,1);
    puVar7 = (unsigned int *)(in_r0 + iVar4 + 0x40 & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (unsigned int *)(iVar4 + 0x50U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (unsigned int *)(iVar4 + 0x60U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (unsigned int *)(iVar4 + 0x70U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
  }
  else {
    fn_830DC190((unsigned __int64)uVar6,param_5 + 0x40);
  }
  return;
}

