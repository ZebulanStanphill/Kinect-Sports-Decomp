extern unsigned int lbl_821AAD20;


double fn_82DFB158(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  double dVar1;
  
  if ((*(char *)(param_3 + 0xcc) != '\0') && (*(char *)(param_1 + 0x14) != '\0')) {
    dVar1 = -(double)*(float *)(param_4 + 0xc);
    if (-(double)*(float *)(param_4 + 0xc) < 0.0) {
      dVar1 = (double)lbl_821AAD20;
    }
    return dVar1;
  }
  dVar1 = (double)*(float *)(param_4 + 0xc);
  if ((double)*(float *)(param_4 + 0xc) < 0.0) {
    dVar1 = (double)lbl_821AAD20;
  }
  return dVar1;
}

