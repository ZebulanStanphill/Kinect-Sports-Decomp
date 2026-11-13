extern int fn_82590DB8();
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int stack0x00000040;
extern unsigned int stack0x00000050;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack00000050;


unsigned __int64
fn_82533428(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
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
  unsigned int uVar19;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned __int64 uStack00000050;
  unsigned int in_stack_00000064;
  int in_stack_0000006c;
  
  puVar1 = (unsigned int *)((unsigned int)((int)&stack0x00000040 + in_r0) & 0xfffffff0);
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  uVar14 = puVar1[2];
  uVar15 = puVar1[3];
  puVar1 = (unsigned int *)((unsigned int)((int)&stack0x00000030 + in_r0) & 0xfffffff0);
  uVar16 = *puVar1;
  uVar17 = puVar1[1];
  uVar18 = puVar1[2];
  uVar19 = puVar1[3];
  puVar1 = (unsigned int *)((unsigned int)((int)&stack0x00000020 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar1 = (unsigned int *)((unsigned int)((int)&stack0x00000050 + in_r0) & 0xfffffff0);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  uVar5 = *(unsigned int *)(param_1 + 0x1b0);
  *(unsigned char *)(param_1 + 0xe3) = 1;
  puVar1 = (unsigned int *)(param_1 + 0x80U & 0xfffffff0);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  puVar1 = (unsigned int *)(in_r0 + param_1 + 0x60 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (unsigned int *)(param_1 + 0x70U & 0xfffffff0);
  *puVar1 = uVar16;
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  puVar1 = (unsigned int *)(param_1 + 0x90U & 0xfffffff0);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  uStack00000020 = param_2;
  uStack00000028 = param_3;
  uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  uStack00000048 = param_7;
  uStack00000050 = param_8;
  fn_82590DB8(uVar5,in_stack_00000064,1);
  if (in_stack_0000006c != 0) {
    puVar1 = (unsigned int *)(param_1 + 0xa0U & 0xfffffff0);
    uVar5 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + in_stack_0000006c & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar5;
    puVar2[2] = uVar3;
    puVar2[3] = uVar4;
  }
  return 1;
}

