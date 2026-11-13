extern int fn_8265C9E0();
extern unsigned int lbl_821AE598;


unsigned int *
fn_822F80B8(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
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
  
  puVar11 = (unsigned int *)fn_8265C9E0(0x38);
  if (puVar11 == (unsigned int *)0x0) {
    puVar11 = (unsigned int *)0x0;
  }
  else {
    puVar11[1] = 1;
    *puVar11 = &lbl_821AE598;
    puVar11[2] = 1;
    if (puVar11 + 3 != (unsigned int *)0x0) {
      uVar3 = *param_7;
      uVar4 = param_7[1];
      uVar5 = param_7[2];
      uVar1 = *param_8;
      uVar6 = param_7[3];
      uVar2 = *in_stack_00000054;
      uVar7 = *param_5;
      uVar8 = *param_4;
      uVar9 = *param_3;
      uVar10 = *param_2;
      puVar11[7] = *param_6;
      puVar11[0xc] = uVar1;
      puVar11[0xb] = uVar6;
      puVar11[0xd] = uVar2;
      puVar11[6] = uVar7;
      puVar11[5] = uVar8;
      puVar11[4] = uVar9;
      puVar11[3] = uVar10;
      puVar11[10] = uVar5;
      puVar11[9] = uVar4;
      puVar11[8] = uVar3;
    }
  }
  param_1[1] = puVar11;
  *param_1 = puVar11 + 3;
  return param_1;
}

