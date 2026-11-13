extern int fn_82F64A40();
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_829E5430(double param_1,double param_2)

{
  unsigned __int64 uVar1;
  float *in_r6;
  double dVar2;
  
  if ((param_1 <= (double)lbl_821AAD20) || (param_2 <= (double)lbl_821AAD20)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    dVar2 = (double)fn_82F64A40(-(double)(float)(param_1 / param_2));
    *in_r6 = (float)dVar2;
    uVar1 = 0;
  }
  return uVar1;
}

