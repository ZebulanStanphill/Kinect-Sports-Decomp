extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_8280E890(float *param_1,float *param_2)

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
  
  fVar7 = lbl_821AAD20;
  fVar8 = lbl_82005344;
  fVar1 = param_1[2];
  fVar2 = param_1[1];
  fVar3 = *param_1;
  fVar4 = param_1[3];
  fVar5 = fVar1 * lbl_82005344;
  fVar6 = fVar2 * lbl_82005344;
  param_2[0xc] = lbl_821AAD20;
  param_2[0xd] = fVar7;
  param_2[0xe] = fVar7;
  param_2[3] = fVar7;
  param_2[7] = fVar7;
  param_2[0xb] = fVar7;
  fVar9 = lbl_82002AE0;
  param_2[0xf] = lbl_82002AE0;
  fVar1 = fVar1 * fVar5;
  fVar7 = fVar3 * fVar3 * fVar8;
  fVar8 = fVar4 * fVar3 * fVar8;
  param_2[4] = fVar3 * fVar6 - fVar4 * fVar5;
  param_2[1] = fVar3 * fVar6 + fVar4 * fVar5;
  param_2[9] = fVar2 * fVar5 - fVar8;
  param_2[6] = fVar2 * fVar5 + fVar8;
  param_2[8] = fVar3 * fVar5 + fVar4 * fVar6;
  param_2[2] = fVar3 * fVar5 - fVar4 * fVar6;
  param_2[5] = fVar9 - (fVar1 + fVar7);
  *param_2 = fVar9 - (fVar1 + fVar2 * fVar6);
  param_2[10] = fVar9 - (fVar2 * fVar6 + fVar7);
  return;
}

