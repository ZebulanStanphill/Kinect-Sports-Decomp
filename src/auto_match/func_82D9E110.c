extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_830A5D78();
extern unsigned int lbl_83184698;
extern unsigned int lbl_8318469C;


void fn_82D9E110(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5
                  ,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [48];
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  iVar1 = *(int *)(iVar1 + 4);
  iVar3 = iVar1 * 4;
  iVar2 = *(int *)(&lbl_8318469C + iVar3);
  puVar4 = (unsigned int *)((iVar1 + 8) * 0x10 + param_5 & 0xfffffff0);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  puVar4 = (unsigned int *)((*(int *)(&lbl_83184698 + iVar3) + 5) * 0x10 + param_5 & 0xfffffff0);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  puVar5 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  puVar4 = (unsigned int *)((iVar2 + 5) * 0x10 + param_5 & 0xfffffff0);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  puVar5 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  puVar4 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar4 = uVar6;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  fn_830A5D78(auStack_50,param_6,param_7);
  puVar4 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar5 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar6;
  puVar5[2] = uVar7;
  puVar5[3] = uVar8;
  puVar4 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_000100a0;
  puVar4[1] = in_register_000100a4;
  puVar4[2] = in_register_000100a8;
  puVar4[3] = in_vr10;
  fn_830A5D78(auStack_50,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 2;
  return;
}

