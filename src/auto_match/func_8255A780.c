extern float lbl_82195590;
extern float lbl_821955A0;


unsigned __int64 fn_8255A780(double param_1,double param_2,double param_3)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)(param_2 - param_1) * lbl_82195590;
  dVar2 = (double)(float)(((double)fVar1 - (double)(__int64)fVar1) * lbl_821955A0);
  if ((-param_3 <= dVar2) && (dVar2 <= param_3)) {
    return 1;
  }
  return 0;
}

