extern unsigned int lbl_82015BD0;
extern unsigned int lbl_82015BD8;
extern unsigned int lbl_8207F6F4;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82A0D8C0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = lbl_8207F6F4;
  fVar5 = lbl_82015BD8;
  fVar4 = lbl_82015BD0;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  param_1[2] = fVar3;
  param_1[1] = (fVar5 - (float)(__int64)(int)fVar2) * fVar3 * fVar6;
  *param_1 = ((float)(__int64)(int)fVar1 - fVar4) * fVar3 * fVar6;
  param_1[3] = param_2[3];
  return;
}

