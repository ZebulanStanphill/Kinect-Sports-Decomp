extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82D1EEF8();
extern unsigned int lbl_8323B1D0;
extern unsigned int lbl_8323B1E0;
extern unsigned int lbl_8323B1F0;
extern unsigned int uRam8323b1e4;
extern unsigned int uRam8323b1e8;
extern unsigned int uRam8323b1ec;
extern unsigned int uRam8323b1f4;
extern unsigned int uRam8323b1f8;
extern unsigned int uRam8323b1fc;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82D1F118(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int in_r0;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [32];
  
  uVar10 = uRam8323b1fc;
  uVar9 = uRam8323b1f8;
  uVar8 = uRam8323b1f4;
  uVar7 = lbl_8323B1F0;
  uVar6 = uRam8323b1ec;
  uVar5 = uRam8323b1e8;
  uVar4 = uRam8323b1e4;
  uVar3 = lbl_8323B1E0;
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar15 = puVar1[1];
  uVar16 = puVar1[2];
  uVar17 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(&lbl_8323B1D0 + in_r0) & 0xfffffff0);
  uVar11 = *puVar2;
  uVar12 = puVar2[1];
  uVar13 = puVar2[2];
  uVar14 = puVar2[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar15;
  puVar2[2] = uVar16;
  puVar2[3] = uVar17;
  puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  fn_82D1EEF8(param_1,auStack_50);
  return;
}

