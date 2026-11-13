extern int fn_8280AC48();


void fn_8281CC00(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float afStack_50 [16];
  
  pfVar1 = afStack_50;
  if (param_1 != param_3) {
    pfVar1 = param_3;
  }
  *pfVar1 = param_2[2] * param_1[8] + *param_1 * *param_2 + param_2[1] * param_1[4];
  pfVar1[4] = param_2[5] * param_1[8] + param_2[4] * param_1[4] + *param_1 * param_2[3];
  pfVar1[8] = param_2[8] * param_1[8] + param_2[7] * param_1[4] + *param_1 * param_2[6];
  pfVar1[0xc] = param_2[0xb] * param_1[8] + param_2[10] * param_1[4] + *param_1 * param_2[9] +
                param_1[0xc];
  pfVar1[1] = param_1[5] * param_2[1] + param_1[9] * param_2[2] + *param_2 * param_1[1];
  pfVar1[5] = param_1[1] * param_2[3] + param_1[9] * param_2[5] + param_1[5] * param_2[4];
  pfVar1[9] = param_2[6] * param_1[1] + param_1[9] * param_2[8] + param_1[5] * param_2[7];
  pfVar1[0xd] = param_2[9] * param_1[1] + param_1[9] * param_2[0xb] + param_2[10] * param_1[5] +
                param_1[0xd];
  pfVar1[2] = param_2[1] * param_1[6] + param_1[2] * *param_2 + param_2[2] * param_1[10];
  pfVar1[6] = param_1[2] * param_2[3] + param_2[5] * param_1[10] + param_2[4] * param_1[6];
  pfVar1[10] = param_1[2] * param_2[6] + param_2[8] * param_1[10] + param_2[7] * param_1[6];
  pfVar1[0xe] = param_1[2] * param_2[9] + param_2[0xb] * param_1[10] + param_2[10] * param_1[6] +
                param_1[0xe];
  pfVar1[3] = param_1[3] * *param_2 + param_1[7] * param_2[1] + param_2[2] * param_1[0xb];
  pfVar1[7] = param_1[7] * param_2[4] + param_1[3] * param_2[3] + param_2[5] * param_1[0xb];
  pfVar1[0xb] = param_1[7] * param_2[7] + param_1[3] * param_2[6] + param_2[8] * param_1[0xb];
  pfVar1[0xf] = param_1[7] * param_2[10] + param_1[3] * param_2[9] + param_2[0xb] * param_1[0xb] +
                param_1[0xf];
  if (pfVar1 == afStack_50) {
    fn_8280AC48(pfVar1,param_3);
  }
  return;
}

