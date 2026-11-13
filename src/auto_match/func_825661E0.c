extern int fn_827EFC90();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821C52DC;
extern unsigned int ltcg_pool_0_0f;


unsigned int *
fn_825661E0(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int *param_6,unsigned int *param_7,unsigned int *param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  unsigned int *in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned int *in_stack_00000064;
  
  param_1[1] = 1;
  puVar11 = param_1 + 4;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  if (puVar11 != (unsigned int *)0x0) {
    uVar9 = *param_3;
    uVar1 = *param_8;
    uVar2 = *in_stack_00000064;
    uVar3 = *in_stack_0000005c;
    uVar4 = *in_stack_00000054;
    uVar5 = *param_7;
    uVar6 = *param_6;
    uVar7 = *param_5;
    uVar8 = *param_4;
    param_1[5] = param_2;
    uVar10 = ltcg_pool_0_0f;
    *puVar11 = &lbl_821C52DC;
    param_1[6] = uVar10;
    param_1[7] = 0;
    param_1[8] = uVar10;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = uVar10;
    param_1[0x1d] = uVar9;
    param_1[0x11] = uVar10;
    param_1[0x12] = uVar8;
    param_1[0x13] = uVar7;
    param_1[0x14] = uVar6;
    param_1[0x15] = uVar10;
    param_1[0x16] = uVar10;
    param_1[0x17] = uVar5;
    param_1[0x18] = uVar1;
    param_1[0x19] = uVar10;
    param_1[0x1a] = uVar4;
    param_1[0x1b] = uVar3;
    param_1[0x1c] = uVar2;
    fn_827EFC90(*(unsigned int *)(param_1[5] + 0x24),uVar9 & 0xffff,puVar11,0);
  }
  return param_1;
}

