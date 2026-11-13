extern int fn_82F67DE8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int lbl_82175460;
extern unsigned int lbl_8217D35C;


void fn_8303AA38(double param_1,unsigned __int64 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  dVar7 = (double)fn_82F67DE8((double)(float)(param_1 * (double)lbl_8217D35C));
  fVar6 = lbl_82005344;
  fVar5 = lbl_82005340;
  fVar1 = lbl_82002AE0 / (float)dVar7;
  fVar4 = fVar1 * fVar1;
  fVar2 = lbl_82002AE0 - fVar4;
  fVar3 = lbl_82002AE0 - fVar1 * lbl_82175460;
  fVar1 = lbl_82002AE0 / (fVar4 + fVar1 * lbl_82175460 + lbl_82002AE0);
  *param_3 = fVar1;
  param_3[1] = fVar1 * fVar6;
  param_3[2] = fVar2 * fVar1 * fVar5;
  param_3[3] = -((fVar3 + fVar4) * fVar1);
  return;
}

