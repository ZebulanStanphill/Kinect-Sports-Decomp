extern unsigned int *auStack_a0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CE6820();
extern int fn_82D7CDB8();
extern unsigned int iStack_bc;
extern unsigned int iStack_c0;
extern unsigned int lbl_8200133C;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;


unsigned char * fn_82D7CE78(unsigned __int64 param_1,int param_2,int param_3,int param_4,int param_5,unsigned char param_6
                    ,int param_7,int *param_8)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  int in_r0;
  unsigned char *pbVar6;
  int iVar7;
  unsigned char *pbVar8;
  int *piVar9;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  unsigned int in_stack_00000054;
  struct { int first; int second; } stack_pair_c0;

  unsigned int uStack_b8;
  int *piStack_b4;
  unsigned int uStack_b0;
  unsigned char auStack_a0 [80];
  
  iVar2 = *param_8;
  pbVar6 = (unsigned char *)fn_82D7CDB8();
  *(int *)(pbVar6 + 0x10) = param_2;
  *(int *)(pbVar6 + 0x14) = param_4;
  *(unsigned int *)(pbVar6 + 8) = in_stack_00000054;
  *(short *)(pbVar6 + 4) = (short)*(unsigned int *)(param_2 + 0x54);
  *(short *)(pbVar6 + 6) = (short)*(unsigned int *)(param_4 + 0x54);
  iVar7 = fn_82CE5410();
  if (*(unsigned int *)(param_2 + 0x54) == (*(unsigned int *)(param_2 + 0x58) & 0x3fffffff)) {
    fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),(int *)(param_2 + 0x50),8);
  }
  iVar7 = *(int *)(param_2 + 0x54);
  *(int *)(param_2 + 0x54) = iVar7 + 1;
  piVar9 = (int *)(iVar7 * 8 + *(int *)(param_2 + 0x50));
  iVar7 = fn_82CE5410();
  if (*(unsigned int *)(param_4 + 0x54) == (*(unsigned int *)(param_4 + 0x58) & 0x3fffffff)) {
    fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),(int *)(param_4 + 0x50),8);
  }
  iVar7 = *(int *)(param_4 + 0x50);
  iVar4 = *(int *)(param_4 + 0x54) * 8;
  *(int *)(param_4 + 0x54) = *(int *)(param_4 + 0x54) + 1;
  *piVar9 = (int)pbVar6;
  *(unsigned char **)(iVar4 + iVar7) = pbVar6;
  piVar9[1] = param_4;
  *(int *)(iVar4 + iVar7 + 4) = param_2;
  uStack_b8 = 0;
  uStack_b0 = *(unsigned int *)(pbVar6 + 8);
  stack_pair_c0.first = param_3;
  stack_pair_c0.second = param_5;
  piStack_b4 = param_8;
  fn_82CE6820(auStack_a0,*(unsigned int *)(param_3 + 8),*(unsigned int *)(param_5 + 8));
  bVar1 = *(unsigned char *)(*(char *)(param_2 + 0x1a) * 10 + (int)*(char *)(param_4 + 0x1a) + *param_8 +
                   0x1bb0);
  pbVar6[0xc] = bVar1;
  param_8[0x18] = (char)bVar1 * 0x40 + *param_8 + 0x1c20;
  pbVar6[1] = (unsigned char)param_7;
  uVar5 = lbl_8200133C;
  if (*(int *)(param_7 * 0x50 + iVar2 + 0x16d8) == 0) {
    pbVar8 = pbVar6 + 0x20;
    *pbVar6 = param_6 | 2;
  }
  else {
    pbVar8 = pbVar6 + 0x30;
    *pbVar6 = param_6 | 4;
    *(unsigned int *)(pbVar6 + 0x18) = uVar5;
    puVar3 = (unsigned int *)((unsigned int)(pbVar6 + 0x20 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_000100d0;
    puVar3[1] = in_register_000100d4;
    puVar3[2] = in_register_000100d8;
    puVar3[3] = in_vr13;
  }
  (**(int (***)())((unsigned int)pbVar6[1] * 0x50 + iVar2 + 0x16b0))(&stack_pair_c0.first,pbVar6,pbVar8);
  pbVar6[3] = 0x80;
  return pbVar6;
}

