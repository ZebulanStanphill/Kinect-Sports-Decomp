extern unsigned int lbl_8200133C;


double fn_82DA3118(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)lbl_8200133C;
  if (((double)*(float *)(param_1 + 0x20) != dVar2) &&
     (ABS((float)((double)*(float *)(param_1 + 0x20) - (double)*(float *)(param_1 + 0x18))) <
      *(float *)(param_1 + 0x24))) {
    *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0x18);
  }
  dVar1 = (double)*(float *)(param_1 + 0x20);
  if (dVar1 == dVar2) {
    return (double)*(float *)(param_1 + 0x18);
  }
  if ((float)((double)*(float *)(param_1 + 0x18) - dVar1) < 0.0) {
    dVar1 = (double)*(float *)(param_1 + 0x18);
  }
  return dVar1;
}

