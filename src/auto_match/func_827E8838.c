unsigned __int64
fn_827E8838(double param_1,double param_2,double param_3,double param_4,double param_5,
             double param_6,double param_7)

{
  float fVar1;
  float *in_r10;
  unsigned int uVar2;
  double dVar3;
  double dVar4;
  unsigned int *in_stack_00000054;
  
  dVar4 = (double)in_r10[1];
  fVar1 = -(float)(dVar4 * param_1 - param_4);
  dVar3 = (double)(*in_r10 * *in_r10 + in_r10[2] * in_r10[2]);
  if (dVar4 <= param_7) {
    dVar4 = (double)in_r10[1];
    if (param_6 <= dVar4) {
      if (dVar3 <= (double)(fVar1 * fVar1)) {
        uVar2 = 3;
        goto LAB_827e88b8;
      }
    }
    else if ((float)(dVar4 * dVar4 + dVar3) <= (float)(param_2 * param_2)) {
      uVar2 = 2;
LAB_827e88b8:
      *in_stack_00000054 = uVar2;
      return 1;
    }
  }
  else if ((float)((double)(float)(dVar4 - param_5) * (double)(float)(dVar4 - param_5) + dVar3) <=
           (float)(param_3 * param_3)) {
    uVar2 = 1;
    goto LAB_827e88b8;
  }
  return 0;
}

