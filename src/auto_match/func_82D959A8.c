extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82CE5040();
extern int fn_82DBE7C8();
extern int fn_82DBE8C8();


void fn_82D959A8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [48];
  
  iVar4 = fn_82DBE7C8(*(unsigned int *)(param_1 + 0xc));
  uVar9 = *(unsigned int *)(param_1 + 0xc);
  puVar2 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  iVar5 = fn_82DBE8C8(uVar9);
  iVar4 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x18);
  puVar2 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
  uVar9 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar9;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  uVar9 = *(unsigned int *)(iVar1 + 0x18);
  fn_82CE5040(param_2,*(unsigned int *)(iVar4 + 0x18),auStack_40);
  fn_82CE5040(param_3,uVar9,auStack_30);
  return;
}

