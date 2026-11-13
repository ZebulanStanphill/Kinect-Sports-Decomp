void fn_82D06398(int param_1,int param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int in_r0;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  pfVar1 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar4 = pfVar1[1];
  fVar5 = pfVar1[2];
  fVar6 = pfVar1[3];
  pfVar2 = (float *)(in_r0 + param_3 & 0xfffffff0);
  fVar7 = pfVar2[1];
  fVar8 = pfVar2[2];
  fVar9 = pfVar2[3];
  pfVar3 = (float *)(in_r0 + param_1 & 0xfffffff0);
  *pfVar3 = *pfVar2 * *pfVar1;
  pfVar3[1] = fVar7 * fVar4;
  pfVar3[2] = fVar8 * fVar5;
  pfVar3[3] = fVar9 * fVar6;
  pfVar1 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  pfVar2 = (float *)(param_3 + 0x10U & 0xfffffff0);
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  pfVar3 = (float *)(param_1 + 0x10U & 0xfffffff0);
  *pfVar3 = *pfVar2 * *pfVar1;
  pfVar3[1] = fVar4 * fVar7;
  pfVar3[2] = fVar5 * fVar8;
  pfVar3[3] = fVar6 * fVar9;
  pfVar1 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  pfVar2 = (float *)(param_3 + 0x20U & 0xfffffff0);
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  pfVar3 = (float *)(param_1 + 0x20U & 0xfffffff0);
  *pfVar3 = *pfVar2 * *pfVar1;
  pfVar3[1] = fVar4 * fVar7;
  pfVar3[2] = fVar5 * fVar8;
  pfVar3[3] = fVar6 * fVar9;
  pfVar1 = (float *)(in_r0 + param_2 & 0xfffffff0);
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  pfVar2 = (float *)(param_3 + 0x30U & 0xfffffff0);
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  pfVar3 = (float *)(param_1 + 0x30U & 0xfffffff0);
  *pfVar3 = *pfVar2 * *pfVar1;
  pfVar3[1] = fVar4 * fVar7;
  pfVar3[2] = fVar5 * fVar8;
  pfVar3[3] = fVar6 * fVar9;
  return;
}

