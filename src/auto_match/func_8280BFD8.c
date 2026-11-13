extern int fn_82810280();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int lbl_821AAD20;


void fn_8280BFD8(float *param_1,unsigned __int64 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar9 = (double)(*param_3 * param_3[1] * lbl_82005340);
  dVar8 = (double)(param_3[2] * *param_3 * lbl_82005340);
  dVar7 = (double)(param_3[2] * param_3[1] * lbl_82005340);
  dVar6 = (double)fn_82810280(param_2,param_3);
  fVar2 = *param_3;
  param_1[4] = (float)dVar9;
  param_1[8] = (float)dVar8;
  fVar4 = lbl_821AAD20;
  fVar3 = lbl_82002AE0;
  dVar5 = (double)lbl_82005344;
  fVar1 = (float)(dVar6 * dVar5);
  dVar6 = (double)lbl_82002AE0;
  *param_1 = -(float)((double)(fVar2 * fVar2) * dVar5 - dVar6);
  fVar2 = *param_3;
  param_1[1] = (float)dVar9;
  param_1[0xc] = fVar2 * fVar1;
  param_1[5] = -(float)((double)(param_3[1] * param_3[1]) * dVar5 - dVar6);
  param_1[9] = (float)dVar7;
  param_1[0xd] = fVar1 * param_3[1];
  param_1[2] = (float)dVar8;
  param_1[6] = (float)dVar7;
  param_1[10] = -(float)((double)(param_3[2] * param_3[2]) * dVar5 - dVar6);
  param_1[0xe] = param_3[2] * fVar1;
  param_1[3] = fVar4;
  param_1[7] = fVar4;
  param_1[0xb] = fVar4;
  param_1[0xf] = fVar3;
  return;
}

