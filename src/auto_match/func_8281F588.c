extern int fn_82F6B030();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005C88;
extern unsigned int lbl_8201EB88;
extern unsigned int lbl_8201EB90;
extern unsigned int lbl_821AAD20;


void fn_8281F588(int param_1,float *param_2,__int64 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  param_2[5] = *param_2;
  if (param_3 == 0) {
    param_2[2] = 0.0;
    fVar2 = lbl_821AAD20;
    param_2[3] = 0.0;
    param_2[1] = 0.0;
    fVar1 = lbl_82005C88;
    *param_2 = fVar2;
    param_2[6] = fVar1;
    param_2[4] = fVar2;
  }
  else {
    *(__int64 *)(param_2 + 2) = param_3;
    dVar4 = (double)fn_82F6B030(param_3);
    dVar7 = lbl_8201EB90;
    dVar6 = lbl_8201EB88;
    fVar3 = lbl_82002AE0;
    dVar5 = dVar4 * lbl_8201EB90;
    param_2[1] = (float)(int)(dVar4 * lbl_8201EB88);
    fVar1 = (float)dVar5;
    *param_2 = fVar1;
    fVar2 = *(float *)(param_1 + 0x7c);
    *(__int64 *)(param_2 + 10) = param_3 + *(__int64 *)(param_2 + 10);
    param_2[6] = fVar3 / fVar1;
    param_2[4] = fVar2 * fVar1;
    dVar4 = (double)fn_82F6B030();
    param_2[7] = param_2[4] + param_2[7];
    *(__int64 *)(param_2 + 0xc) = (__int64)(dVar4 * dVar6);
    param_2[8] = (float)(dVar4 * dVar7);
  }
  return;
}

