typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82C75948();
extern int fn_830DC190();
extern V16 vectorSplatHalfWord();


void fn_830EDBD0(int param_1,unsigned int *param_2,__int64 param_3,int param_4,__int64 param_5)

{
  unsigned char bVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned short uVar8;
  int in_r0;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned short *puVar13;
  __int64 lVar12;
  unsigned __int64 uVar14;
  unsigned char in_vs32 [16];
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  dataCacheBlockClearToZero(param_5);
  iVar3 = *(int *)(param_1 + 0x26c);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  iVar11 = 0;
  uVar6 = *(unsigned int *)(param_4 + 0x28);
  uVar10 = 0;
  uVar9 = 0;
  bVar1 = **(unsigned char **)(param_4 + 0x18);
  uVar14 = (unsigned __int64)bVar1;
  puVar13 = *(unsigned short **)(param_4 + 0x14);
  *(unsigned char **)(param_4 + 0x18) = *(unsigned char **)(param_4 + 0x18) + 1;
  dataCacheBlockClearToZero((unsigned __int64)uVar6);
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
        *(unsigned short *)((unsigned int)bVar1 * 2 + uVar6) =
             ((uVar2 >> 8) * (short)uVar4 + (short)uVar5 ^ -uVar8) + uVar8;
        uVar14 = uVar14 - 1;
        uVar10 = uVar9;
      } while (uVar14 != 0);
    }
    *(unsigned short **)(param_4 + 0x14) = puVar13;
  }
  else {
    uVar9 = fn_82C75948();
  }
  lVar12 = (2U - param_3 & 0x3ffffff) * 0x40;
  if (uVar9 == 0) {
    iVar3 = (int)lVar12 + (int)param_5;
    vectorSplatHalfWord(in_vs32,1);
    puVar7 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (unsigned int *)(iVar3 + 0x20U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
    puVar7 = (unsigned int *)(iVar3 + 0x30U & 0xfffffff0);
    *puVar7 = in_register_000100d0;
    puVar7[1] = in_register_000100d4;
    puVar7[2] = in_register_000100d8;
    puVar7[3] = in_vr13;
  }
  else {
    fn_830DC190((unsigned __int64)uVar6,lVar12 + param_5);
  }
  return;
}

