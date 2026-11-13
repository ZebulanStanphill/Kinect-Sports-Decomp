extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82CEC6E0();


void fn_82CEC840(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [32];
  
  fn_82CEC6E0(auStack_40,param_1,param_2);
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  uVar11 = *puVar2;
  uVar12 = puVar2[1];
  uVar13 = puVar2[2];
  uVar14 = puVar2[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  uVar7 = *puVar2;
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  iVar3 = (int)param_1;
  puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar1 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  puVar1 = (unsigned int *)(iVar3 + 0x20U & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  return;
}

