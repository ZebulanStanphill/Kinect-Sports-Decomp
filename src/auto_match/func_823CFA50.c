extern int fn_82359698();
extern int fn_8236B080();
extern int fn_823D6088();
extern int fn_823DBA60();
extern int fn_823E4EF0();
extern int fn_8255AE78();


void fn_823CFA50(int *param_1,int *param_2)

{
  unsigned short uVar1;
  int *piVar2;
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
  *(int *)(iVar5 + 0xf00) = *param_2;
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
  iVar5 = param_1[0x3c0];
  puVar3 = (unsigned int *)((unsigned int)(param_1 + 0x3d4) & 0xfffffff0);
  *puVar3 = in_register_00010470;
  puVar3[1] = in_register_00010474;
  puVar3[2] = in_register_00010478;
  puVar3[3] = in_vr71;
  param_1[0x3d8] = (unsigned int)*(unsigned char *)(param_2 + 8);
  uVar1 = *(unsigned short *)param_1[(iVar5 == 0) + 0xa1];
  if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
    puVar3 = (unsigned int *)((unsigned int)((unsigned short *)param_1[(iVar5 == 0) + 0xa1] + 0x10) & 0xfffffff0);
    uVar6 = puVar3[1];
    uVar7 = puVar3[2];
    uVar8 = puVar3[3];
    puVar4 = (unsigned int *)((int)param_1 + in_r0 + 0xf20 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar6;
    puVar4[2] = uVar7;
    puVar4[3] = uVar8;
  }
  param_1[0x3c9] = *(int *)(*(int *)(param_1[7] + 4) + 4);
  fn_823E4EF0(param_1,param_2);
  piVar2 = *(int **)(*param_2 * 4 + param_1[8]);
  if (piVar2[1] - *piVar2 >> 2 != 0) {
    param_1[0x38e] = 1;
  }
  fn_82359698(param_1,3);
  iVar5 = (**(int (***)())(*param_1 + 200))(param_1);
  if (iVar5 == 0) {
    fn_823DBA60(param_1[300],param_1[0x26b]);
  }
  fn_823D6088(param_1 + 0x27e);
  return;
}

