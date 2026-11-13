extern unsigned int lbl_821AAD20;


double fn_8284F400(int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)*(float *)(param_1 + 0xb0);
  dVar2 = (double)lbl_821AAD20;
  if (dVar3 == dVar2) {
    return dVar2;
  }
  dVar1 = (double)(float)((double)*(float *)(param_1 + 0x8c) * dVar3);
  if (dVar1 < dVar2) {
    dVar1 = dVar2;
  }
  if (dVar3 <= dVar1) {
    dVar1 = dVar3;
  }
  return dVar1;
}

