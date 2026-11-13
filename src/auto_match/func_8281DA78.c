extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;


void fn_8281DA78(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = lbl_82002AE0;
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar7 = lbl_82005344 / (fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar8 = fVar3 * fVar7;
  fVar5 = fVar1 * fVar7;
  fVar6 = fVar2 * fVar2 * fVar7;
  fVar7 = fVar4 * fVar2 * fVar7;
  param_1[3] = fVar2 * fVar5 - fVar4 * fVar8;
  param_1[1] = fVar2 * fVar5 + fVar4 * fVar8;
  param_1[6] = fVar2 * fVar8 + fVar4 * fVar5;
  param_1[7] = fVar1 * fVar8 - fVar7;
  param_1[2] = fVar2 * fVar8 - fVar4 * fVar5;
  *param_1 = fVar9 - (fVar3 * fVar8 + fVar1 * fVar5);
  param_1[4] = fVar9 - (fVar3 * fVar8 + fVar6);
  param_1[5] = fVar1 * fVar8 + fVar7;
  param_1[8] = fVar9 - (fVar1 * fVar5 + fVar6);
  return;
}

