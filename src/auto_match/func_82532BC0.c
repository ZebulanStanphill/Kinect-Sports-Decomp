extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int lbl_8329EAD0;
extern unsigned int lbl_8329EAE0;
extern unsigned int lbl_8329EAF0;
extern unsigned int lbl_8329EB00;
extern unsigned int uRam8329eae4;
extern unsigned int uRam8329eae8;
extern unsigned int uRam8329eaec;
extern unsigned int uRam8329eaf4;
extern unsigned int uRam8329eaf8;
extern unsigned int uRam8329eafc;
extern unsigned int uRam8329eb04;
extern unsigned int uRam8329eb08;
extern unsigned int uRam8329eb0c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82532BC0(unsigned int *param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int in_r0;
  int iVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int uVar7;
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
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  uVar4 = (unsigned __int64)param_1[1];
  if (uVar4 == 0) {
    uVar4 = (unsigned __int64)*param_1;
  }
  iVar3 = 0;
  if (*(short *)(param_1 + 2) != 0) {
    lVar5 = uVar4 + 0x20;
    do {
      uVar16 = uRam8329eb0c;
      uVar15 = uRam8329eb08;
      uVar14 = uRam8329eb04;
      uVar13 = uRam8329eaec;
      uVar12 = uRam8329eae8;
      uVar11 = uRam8329eae4;
      uVar10 = lbl_8329EAE0;
      puVar1 = (unsigned int *)((int)&lbl_8329EAD0 + in_r0 & 0xfffffff0);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
      *puVar1 = lbl_8329EB00;
      puVar1[1] = uVar14;
      puVar1[2] = uVar15;
      puVar1[3] = uVar16;
      puVar1 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      uVar12 = uRam8329eafc;
      uVar11 = uRam8329eaf8;
      uVar10 = uRam8329eaf4;
      puVar1 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
      uVar14 = *puVar1;
      uVar15 = puVar1[1];
      uVar16 = puVar1[2];
      uVar17 = puVar1[3];
      puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
      uVar18 = *puVar1;
      uVar19 = puVar1[1];
      uVar20 = puVar1[2];
      uVar21 = puVar1[3];
      puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar1 = lbl_8329EAF0;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar1 = (unsigned int *)(in_r0 + (int)(lVar5 + -0x20) & 0xfffffff0);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      iVar2 = (int)lVar5;
      puVar1 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
      puVar1 = (unsigned int *)(iVar2 - 0x10U & 0xfffffff0);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1[2] = uVar12;
      puVar1[3] = uVar13;
      dataCacheBlockFlush(lVar5 + -0x20);
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + 0x40;
    } while (iVar3 < (int)(unsigned int)*(unsigned short *)(param_1 + 2));
  }
  return;
}

