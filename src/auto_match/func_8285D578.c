extern int fn_82811700();
extern int fn_82811898();


void fn_8285D578(float *param_1,unsigned int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  unsigned int uVar8;
  
  fn_82811898((double)*param_1,(double)param_1[1],param_3);
  fn_82811700(param_3,param_4);
  if (1 < (param_2 & 0xffff)) {
    uVar8 = 1;
    do {
      fVar1 = *param_4;
      iVar7 = uVar8 * 4;
      fVar2 = param_3[1];
      fVar3 = param_4[1];
      uVar8 = uVar8 + 1 & 0xffff;
      fVar4 = param_1[iVar7];
      fVar5 = (param_1 + iVar7)[1];
      fVar6 = fVar4;
      if (*param_3 - fVar4 < 0.0) {
        fVar6 = *param_3;
      }
      *param_3 = fVar6;
      if (fVar1 - fVar4 < 0.0) {
        fVar1 = fVar4;
      }
      *param_4 = fVar1;
      fVar1 = fVar5;
      if (fVar2 - fVar5 < 0.0) {
        fVar1 = fVar2;
      }
      param_3[1] = fVar1;
      if (fVar3 - fVar5 < 0.0) {
        fVar3 = fVar5;
      }
      param_4[1] = fVar3;
    } while (uVar8 < (param_2 & 0xffff));
  }
  return;
}

