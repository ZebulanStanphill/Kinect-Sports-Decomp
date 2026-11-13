extern int fn_828102A8();
extern int fn_828105C8();


void fn_82859EF0(double param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned int *param_5)

{
  float fVar1;
  
  if (param_3 == 0) {
    fn_828105C8((double)(__int64)*(short *)(param_2 + 4),(double)(__int64)*(short *)(param_2 + 6)
                 ,(double)(__int64)*(short *)(param_2 + 8),param_5);
    fn_828102A8(param_1,param_5,param_5);
    fVar1 = (float)((double)*(unsigned short *)(param_2 + 10) * param_1);
  }
  else {
    if (param_3 != 1) {
      return;
    }
    *param_5 = *(unsigned int *)(param_2 + 4);
    param_5[1] = *(unsigned int *)(param_2 + 8);
    param_5[2] = *(unsigned int *)(param_2 + 0xc);
    fVar1 = *(float *)(param_2 + 0x10);
  }
  param_5[3] = fVar1;
  return;
}

