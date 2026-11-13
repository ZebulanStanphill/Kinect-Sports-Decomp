extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82CE68B8();
extern int fn_82D8BC78();
extern int fn_82D94138();
extern int fn_82D95BE0();


void fn_82D94248(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned char auStack_80 [1];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar7 = (int)param_2;
    iVar6 = 0;
    do {
      iVar3 = (int)in_r0;
      puVar2 = (unsigned int *)(iVar3 + iVar7 & 0xfffffff0);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar4 = (unsigned int *)(iVar3 + iVar7 + 0x10 & 0xfffffff0);
      uVar19 = *puVar4;
      uVar20 = puVar4[1];
      uVar21 = puVar4[2];
      uVar22 = puVar4[3];
      puVar4 = (unsigned int *)(iVar3 + iVar7 + 0x20 & 0xfffffff0);
      uVar15 = *puVar4;
      uVar16 = puVar4[1];
      uVar17 = puVar4[2];
      uVar18 = puVar4[3];
      puVar4 = (unsigned int *)(iVar3 + iVar7 + 0x30 & 0xfffffff0);
      uVar11 = *puVar4;
      uVar12 = puVar4[1];
      uVar13 = puVar4[2];
      uVar14 = puVar4[3];
      iVar1 = *(int *)(param_1 + 8);
      puVar4 = (unsigned int *)((unsigned int)(auStack_80 + iVar3) & 0xfffffff0);
      *puVar4 = *puVar2;
      puVar4[1] = uVar8;
      puVar4[2] = uVar9;
      puVar4[3] = uVar10;
      puVar2 = (unsigned int *)((unsigned int)(auStack_70 + iVar3) & 0xfffffff0);
      *puVar2 = uVar19;
      puVar2[1] = uVar20;
      puVar2[2] = uVar21;
      puVar2[3] = uVar22;
      puVar2 = (unsigned int *)((unsigned int)(auStack_60 + iVar3) & 0xfffffff0);
      *puVar2 = uVar15;
      puVar2[1] = uVar16;
      puVar2[2] = uVar17;
      puVar2[3] = uVar18;
      puVar2 = (unsigned int *)((unsigned int)(auStack_50 + iVar3) & 0xfffffff0);
      *puVar2 = uVar11;
      puVar2[1] = uVar12;
      puVar2[2] = uVar13;
      puVar2[3] = uVar14;
      fn_82CE68B8(auStack_80,(unsigned __int64)*(unsigned int *)(iVar6 + iVar1) + 0xf0);
      fn_82D8BC78(*(unsigned int *)(iVar6 + *(int *)(param_1 + 8)),auStack_80);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0xc));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar7 = 0;
    do {
      fn_82D95BE0(*(unsigned int *)(*(int *)(param_1 + 0x14) + iVar7),param_2);
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x18));
  }
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar7 = 0;
    do {
      fn_82D94138(*(unsigned int *)(*(int *)(param_1 + 0x2c) + iVar7),param_2);
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x30));
  }
  return;
}

