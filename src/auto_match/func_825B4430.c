extern int fn_8251E4D0();
extern int fn_825711A0();
extern int fn_8265BF48();
extern int XMemSet();
extern int fn_82D93128();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000050;
extern unsigned int stack0x00000060;
extern unsigned int stack0x00000070;
extern unsigned int stack0x00000080;
extern unsigned int uStack00000050;


int fn_825B4430(double param_1,int param_2,__int64 param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6,int param_7,unsigned int param_8,unsigned __int64 param_9)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
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
  unsigned __int64 uStack00000050;
  unsigned int in_stack_000000ac;
  unsigned int in_stack_000000b4;
  
  uStack00000050 = param_9;
  iVar2 = fn_8251E4D0(param_2 + 0x758);
  XMemSet(iVar2,0,0x3f0);
  *(unsigned int *)(iVar2 + 0xf4) = param_5;
  *(float *)(iVar2 + 0x3e0) = (float)param_1;
  *(int *)(iVar2 + 0xd4) = (int)param_3;
  *(int *)(iVar2 + 0xdc) = param_2;
  puVar1 = (unsigned int *)((unsigned int)((int)&stack0x00000050 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000060 + in_r0) & 0xfffffff0);
  uVar15 = *puVar1;
  uVar16 = puVar1[1];
  uVar17 = puVar1[2];
  uVar18 = puVar1[3];
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000070 + in_r0) & 0xfffffff0);
  uVar11 = *puVar1;
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000080 + in_r0) & 0xfffffff0);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  *(unsigned int *)(iVar2 + 0xe0) = param_6;
  *(unsigned int *)(iVar2 + 0xf0) = 0;
  puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(unsigned int *)(iVar2 + 0xec) = param_8;
  puVar1 = (unsigned int *)(iVar2 + 0x10U & 0xfffffff0);
  *puVar1 = uVar15;
  puVar1[1] = uVar16;
  puVar1[2] = uVar17;
  puVar1[3] = uVar18;
  *(int *)(iVar2 + 0xe4) = param_7;
  puVar1 = (unsigned int *)(iVar2 + 0x20U & 0xfffffff0);
  *puVar1 = uVar11;
  puVar1[1] = uVar12;
  puVar1[2] = uVar13;
  puVar1[3] = uVar14;
  *(unsigned int *)(iVar2 + 0xd8) = param_4;
  puVar1 = (unsigned int *)(iVar2 + 0x30U & 0xfffffff0);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  *(unsigned int *)(iVar2 + 0xf8) = 0;
  puVar1 = (unsigned int *)(iVar2 + 0x80U & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  *(unsigned int *)(iVar2 + 1000) = 0;
  *(unsigned int *)(iVar2 + 0x3e4) = 3;
  if (param_7 == 0) {
    *(unsigned int *)(iVar2 + 0xe8) = 0;
  }
  else {
    uVar3 = fn_8265BF48(*(unsigned int *)(param_7 + 0x19c),0);
    *(unsigned int *)(iVar2 + 0xe8) = uVar3;
  }
  fn_82D93128(param_3 + 0xe0);
  *(unsigned int *)(iVar2 + 0x180) = 0;
  *(unsigned int *)(iVar2 + 400) = 0;
  *(unsigned int *)(iVar2 + 0x194) = ltcg_pool_0_0f;
  fn_825711A0((double)*(float *)(param_2 + 0x448),iVar2 + 0x2d0,in_stack_000000ac,
                    in_stack_000000b4);
  return iVar2;
}

