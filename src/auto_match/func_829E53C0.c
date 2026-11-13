extern unsigned int lbl_821AAD20;


unsigned __int64 fn_829E53C0(double param_1,double param_2,double param_3,int param_4)

{
  double dVar1;
  
  dVar1 = (double)lbl_821AAD20;
  if (((dVar1 <= param_1) && (dVar1 < param_2)) && (dVar1 < param_3)) {
    *(float *)(param_4 + 4) = (float)param_1;
    *(float *)(param_4 + 8) = (float)param_2;
    *(float *)(param_4 + 0xc) = (float)param_3;
    return 0;
  }
  return 0xffffffff80070057;
}

