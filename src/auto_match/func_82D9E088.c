extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_830A6170();


void fn_82D9E088(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5
                  ,unsigned __int64 param_6,unsigned __int64 param_7)

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
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  puVar2 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar2 = (unsigned int *)(param_5 + 0x10U & 0xfffffff0);
  uVar11 = *puVar2;
  uVar12 = puVar2[1];
  uVar13 = puVar2[2];
  uVar14 = puVar2[3];
  puVar2 = (unsigned int *)((*(int *)(iVar1 + 4) + 2) * 0x10 + param_5 & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = uVar11;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  fn_830A6170(auStack_40,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

