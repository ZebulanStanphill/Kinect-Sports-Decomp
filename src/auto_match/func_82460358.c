extern int fn_8246B2A8();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C6D70;


void fn_82460358(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  double dVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  
  iVar2 = *(int *)(param_1 + 0x50);
  uVar7 = 0;
  dVar8 = (double)ltcg_pool_0_0f;
  do {
    iVar6 = uVar7 * 0x40 + iVar2;
    iVar3 = *(int *)(iVar6 + 0x34);
    if (iVar3 != 0) {
      uVar1 = *(unsigned int *)(iVar6 + 0x30);
      puVar4 = (unsigned int *)(iVar6 + 0x20U & 0xfffffff0);
      uVar9 = *puVar4;
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      *(unsigned int *)(iVar3 + 0x30) = 0;
      *(unsigned int *)(iVar3 + 0x20) = uVar1;
      puVar4 = (unsigned int *)((int)in_r0 + iVar3 + 0x10 & 0xfffffff0);
      *puVar4 = uVar9;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      puVar4 = (unsigned int *)(iVar3 + 0xa0U & 0xfffffff0);
      *puVar4 = uVar9;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      *(float *)(iVar3 + 0xb8) = (float)dVar8;
      *(unsigned int *)(iVar3 + 0xb4) = uVar1;
      iVar5 = iVar2 + 0x94;
      *(float *)(iVar3 + 0xb0) = (float)dVar8;
      if (uVar7 != 0) {
        iVar5 = iVar2 + 0x90;
      }
      iVar3 = *(int *)(iVar6 + 0x34);
      *(unsigned int *)(iVar3 + 0x8c) = lbl_831C6D70;
      *(float *)(iVar3 + 0x90) = (float)dVar8;
      fn_8246B2A8(iVar3,iVar5);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  return;
}

