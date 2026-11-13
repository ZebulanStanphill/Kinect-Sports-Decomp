unsigned __int64
fn_8285C670(double param_1,int param_2,unsigned int param_3,float *param_4,unsigned __int64 param_5,
             unsigned char *param_6)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  float *pfVar4;
  double dVar5;
  
  param_3 = param_3 & 0xff;
  uVar3 = 0;
  if (*param_6 < param_3) {
    uVar3 = (unsigned int)*param_6;
  }
  uVar1 = 2;
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      pfVar4 = (float *)(uVar3 * 0x10 + param_2);
      dVar5 = (double)((*pfVar4 * *param_4 + pfVar4[1] * param_4[1] + pfVar4[2] * param_4[2]) -
                      pfVar4[3]);
      if ((-param_1 < dVar5) && (uVar1 = 1, param_1 < dVar5)) {
        *param_6 = (unsigned char)uVar3;
        return 0;
      }
      uVar3 = uVar3 + 1 & 0xff;
      uVar2 = uVar2 + 1 & 0xff;
      uVar3 = -(unsigned int)(param_3 != uVar3) & uVar3;
    } while (uVar2 < param_3);
  }
  return uVar1;
}

