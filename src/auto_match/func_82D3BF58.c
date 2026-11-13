extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8307FB40();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_82D3BF58(void)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int *in_r7;
  unsigned int *in_r8;
  unsigned int *in_r9;
  int in_r10;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int in_stack_00000054;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  fn_8307FB40();
  puVar1 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar2 = (unsigned int *)(in_r0 + in_r10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (unsigned int *)(in_r0 + in_stack_00000054 & 0xfffffff0);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  *in_r8 = uStack_5c;
  *in_r9 = uStack_58;
  *in_r7 = uStack_60;
  return;
}

