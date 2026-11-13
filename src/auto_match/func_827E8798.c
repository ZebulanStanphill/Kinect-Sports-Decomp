extern unsigned int lbl_821AAD20;


unsigned __int64 fn_827E8798(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_r6;
  unsigned int *in_r7;
  unsigned int uVar4;
  
  fVar3 = -(float)((double)(float)((double)in_r6[1] / param_3) * (double)(float)(param_2 - param_1)
                  - param_2);
  fVar2 = *in_r6 * *in_r6 + in_r6[2] * in_r6[2];
  if ((double)in_r6[1] <= param_3) {
    fVar1 = in_r6[1];
    if (lbl_821AAD20 <= fVar1) {
      if (fVar2 <= fVar3 * fVar3) {
        uVar4 = 3;
        goto LAB_827e8828;
      }
    }
    else if (fVar1 * fVar1 + fVar2 <= (float)(param_2 * param_2)) {
      uVar4 = 2;
LAB_827e8828:
      *in_r7 = uVar4;
      return 1;
    }
  }
  else if ((float)((double)in_r6[1] - param_3) * (float)((double)in_r6[1] - param_3) + fVar2 <=
           (float)(param_1 * param_1)) {
    uVar4 = 1;
    goto LAB_827e8828;
  }
  return 0;
}

