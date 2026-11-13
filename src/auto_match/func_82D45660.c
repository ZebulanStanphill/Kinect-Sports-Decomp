extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82CE5040();
extern int fn_82D44F78();


void fn_82D45660(int param_1,int param_2,__int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
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
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [48];
  
  iVar3 = param_2;
  if (*(unsigned short *)(param_2 + 0x44) != 0xffff) {
    iVar3 = (unsigned int)*(unsigned short *)(param_2 + 0x44) * 0x50 + *(int *)(param_1 + 0x78);
  }
  fn_82D44F78((double)*(float *)(param_1 + 0x90),iVar3 + 0x10,iVar3,param_3,param_3);
  if (*(unsigned short *)(param_2 + 0x46) != 0xffff) {
    iVar3 = (unsigned int)*(unsigned short *)(param_2 + 0x46) * 0x40 + *(int *)(param_1 + 0x54);
    puVar1 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(iVar3 + 0x20U & 0xfffffff0);
    uVar15 = *puVar2;
    uVar16 = puVar2[1];
    uVar17 = puVar2[2];
    uVar18 = puVar2[3];
    puVar2 = (unsigned int *)(iVar3 + 0x30U & 0xfffffff0);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    uVar13 = puVar2[2];
    uVar14 = puVar2[3];
    puVar2 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    uVar7 = *puVar2;
    uVar8 = puVar2[1];
    uVar9 = puVar2[2];
    uVar10 = puVar2[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    puVar1 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = uVar15;
    puVar1[1] = uVar16;
    puVar1[2] = uVar17;
    puVar1[3] = uVar18;
    puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar1 = uVar11;
    puVar1[1] = uVar12;
    puVar1[2] = uVar13;
    puVar1[3] = uVar14;
    fn_82CE5040(param_3 + 0x10,auStack_60);
    fn_82CE5040(param_3,auStack_60,param_3);
  }
  return;
}

