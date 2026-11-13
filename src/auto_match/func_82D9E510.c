extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_830A6890();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82D9E510(unsigned __int64 param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4,
                  int param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
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
  unsigned int uVar15;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  puVar2 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar2 = (unsigned int *)*param_3;
  puVar3 = (unsigned int *)(param_5 + 0x10U & 0xfffffff0);
  uVar12 = *puVar3;
  uVar13 = puVar3[1];
  uVar14 = puVar3[2];
  uVar15 = puVar3[3];
  puVar3 = (unsigned int *)((*(int *)(iVar1 + 4) + 2) * 0x10 + param_5 & 0xfffffff0);
  uVar8 = *puVar3;
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  *param_3 = puVar2 + 4;
  puVar3 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = uVar8;
  puVar3[1] = uVar9;
  puVar3[2] = uVar10;
  puVar3[3] = uVar11;
  puVar3 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar3 = uVar4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar3 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar3 = uVar12;
  puVar3[1] = uVar13;
  puVar3[2] = uVar14;
  puVar3[3] = uVar15;
  uStack_40 = *puVar2;
  uStack_3c = puVar2[1];
  fn_830A6890(auStack_70,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

