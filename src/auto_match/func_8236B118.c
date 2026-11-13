extern int fn_8236B080();
extern int fn_8255AE78();


void fn_8236B118(int param_1,unsigned int *param_2)

{
  unsigned short uVar1;
  unsigned short *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_00010470;
  unsigned int in_register_00010474;
  unsigned int in_register_00010478;
  unsigned int in_vr71;
  
  iVar5 = fn_8236B080();
  *(unsigned int *)(iVar5 + 0xf00) = *param_2;
  puVar3 = (unsigned int *)((unsigned int)(param_2 + 4) & 0xfffffff0);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar4 = (unsigned int *)(iVar5 + 0xf10U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar3 = (unsigned int *)((unsigned int)(param_2 + 0x10) & 0xfffffff0);
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  puVar4 = (unsigned int *)(iVar5 + 0xf40U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  fn_8255AE78((double)(float)param_2[0xc]);
  iVar5 = *(int *)(param_1 + 0xf00);
  puVar3 = (unsigned int *)(param_1 + 0xf50U & 0xfffffff0);
  *puVar3 = in_register_00010470;
  puVar3[1] = in_register_00010474;
  puVar3[2] = in_register_00010478;
  puVar3[3] = in_vr71;
  *(unsigned int *)(param_1 + 0xf60) = (unsigned int)*(unsigned char *)(param_2 + 8);
  puVar2 = *(unsigned short **)(((iVar5 == 0) + 0xa1) * 4 + param_1);
  uVar1 = *puVar2;
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    puVar3 = (unsigned int *)((unsigned int)(puVar2 + 0x10) & 0xfffffff0);
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    puVar4 = (unsigned int *)(in_r0 + param_1 + 0xf20 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
  }
  *(unsigned int *)(param_1 + 0xf24) = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 4);
  return;
}

