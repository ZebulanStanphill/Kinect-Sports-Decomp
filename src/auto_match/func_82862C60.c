extern int fn_82811700();
extern int fn_82811898();


void fn_82862C60(float *param_1,unsigned int param_2,float *param_3,float *param_4)

{
  float fVar1;
  unsigned int uVar2;
  
  fn_82811898((double)*param_1,(double)param_1[1],param_3);
  fn_82811700(param_3,param_4);
  if (1 < (param_2 & 0xffff)) {
    uVar2 = 1;
    do {
      fVar1 = param_1[uVar2 * 2];
      if (*param_3 <= fVar1) {
        if (*param_4 < fVar1) {
          *param_4 = fVar1;
        }
      }
      else {
        *param_3 = fVar1;
      }
      fVar1 = (param_1 + uVar2 * 2)[1];
      if (param_3[1] <= fVar1) {
        if (param_4[1] < fVar1) {
          param_4[1] = fVar1;
        }
      }
      else {
        param_3[1] = fVar1;
      }
      uVar2 = uVar2 + 1 & 0xffff;
    } while (uVar2 < (param_2 & 0xffff));
  }
  return;
}

