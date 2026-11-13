unsigned __int64
fn_82368CD8(int param_1,int param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

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
  
  if ((*(int *)(param_1 + 0x54) == 9) && (*(int *)(param_1 + 0xea4) == 2)) {
    puVar1 = (unsigned int *)(param_1 + 0xeb0U & 0xfffffff0);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar1 = (unsigned int *)(param_1 + 0xec0U & 0xfffffff0);
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    puVar2 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    puVar2[2] = uVar8;
    puVar2[3] = uVar9;
    uVar7 = *(unsigned int *)(param_1 + 0xed0);
    *param_5 = *(unsigned int *)(param_1 + 0xed4);
    uVar8 = *(unsigned int *)(param_1 + 0xed8);
    *param_4 = uVar7;
    param_5[1] = uVar8;
    puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    param_5[2] = *(unsigned int *)(param_1 + 0xedc);
    return 1;
  }
  return 0;
}

