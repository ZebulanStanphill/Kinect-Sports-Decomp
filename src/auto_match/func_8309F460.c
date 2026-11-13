extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_830A5D78();
extern unsigned int lbl_82187DE1;


void fn_8309F460(int param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 in_r0;
  unsigned int uVar7;
  unsigned char *pbVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  bVar1 = *(unsigned char *)(param_1 + 2);
  uVar7 = (unsigned int)bVar1;
  if ((unsigned int)bVar1 < (unsigned int)*(unsigned char *)(param_1 + 3) + (unsigned int)bVar1) {
    pbVar8 = &lbl_82187DE1 + uVar7;
    do {
      pbVar3 = pbVar8 + -1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      bVar2 = *pbVar8;
      puVar4 = (unsigned int *)((unsigned int)*pbVar3 + param_3 & 0xfffffff0);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      iVar6 = (int)in_r0;
      puVar5 = (unsigned int *)((unsigned int)(auStack_60 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      puVar4 = (unsigned int *)((unsigned int)bVar1 + param_3 & 0xfffffff0);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar5 = (unsigned int *)((unsigned int)(auStack_70 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      puVar4 = (unsigned int *)((unsigned int)bVar2 + param_4 & 0xfffffff0);
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar5 = (unsigned int *)((unsigned int)(auStack_50 + iVar6) & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar9;
      puVar5[2] = uVar10;
      puVar5[3] = uVar11;
      fn_830A5D78(auStack_70,param_2,param_5);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)((unsigned int)*(unsigned char *)(param_1 + 3) + (unsigned int)*(unsigned char *)(param_1 + 2)));
  }
  return;
}

