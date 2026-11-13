extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


double fn_82DFB0E8(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  double dVar1;
  
  if ((*(char *)(param_3 + 0xcc) == '\0') || (*(char *)(param_1 + 0x14) == '\0')) {
    dVar1 = (double)*(float *)(param_4 + 0xc);
  }
  else {
    dVar1 = -(double)*(float *)(param_4 + 0xc);
  }
  if ((*(char *)(param_1 + 0x14) == '\0') && (*(char *)(param_3 + 0xcc) != '\0')) {
    return (double)lbl_82002AE0;
  }
  if ((double)lbl_821AAD20 < dVar1) {
    return (double)lbl_821AAD20;
  }
  return (double)(float)(dVar1 * (double)lbl_8200133C);
}

