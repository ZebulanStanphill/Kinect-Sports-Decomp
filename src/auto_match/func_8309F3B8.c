extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_830A5D78();
extern unsigned int lbl_82187DE1;
extern unsigned int lbl_82187DE2;


void fn_8309F3B8(int param_1,unsigned __int64 param_2,int param_3,int param_4,unsigned __int64 param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  bVar1 = *(unsigned char *)(param_1 + 2);
  bVar2 = (&lbl_82187DE1)[bVar1];
  bVar3 = (&lbl_82187DE2)[bVar1];
  puVar4 = (unsigned int *)((unsigned int)bVar1 * 0x10 + param_3 & 0xfffffff0);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar5 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar6;
  puVar5[2] = uVar7;
  puVar5[3] = uVar8;
  puVar4 = (unsigned int *)((unsigned int)bVar2 + param_4 & 0xfffffff0);
  uVar10 = puVar4[1];
  uVar11 = puVar4[2];
  uVar12 = puVar4[3];
  puVar5 = (unsigned int *)((unsigned int)bVar3 + param_4 & 0xfffffff0);
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  uVar9 = puVar5[3];
  puVar5 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar10;
  puVar5[2] = uVar11;
  puVar5[3] = uVar12;
  puVar4 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar4 = uVar6;
  puVar4[1] = uVar7;
  puVar4[2] = uVar8;
  puVar4[3] = uVar9;
  fn_830A5D78(auStack_70,param_2,param_5);
  puVar4 = (unsigned int *)((unsigned int)bVar3 + param_4 & 0xfffffff0);
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar5 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar6;
  puVar5[2] = uVar7;
  puVar5[3] = uVar8;
  puVar4 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar4 = in_register_000100a0;
  puVar4[1] = in_register_000100a4;
  puVar4[2] = in_register_000100a8;
  puVar4[3] = in_vr10;
  fn_830A5D78(auStack_70,param_2,param_5);
  return;
}

