extern unsigned int lbl_82195518;


void fn_823ABE40(double param_1,int param_2)

{
  double dVar1;
  
  if (*(int *)(param_2 + 0x68) == 0) {
    return;
  }
  dVar1 = (double)(float)((double)*(float *)(param_2 + 0x8c) - param_1);
  *(float *)(param_2 + 0x94) = (float)(param_1 + (double)*(float *)(param_2 + 0x94));
  if (dVar1 < 0.0) {
    dVar1 = lbl_82195518;
  }
  *(float *)(param_2 + 0x8c) = (float)dVar1;
  return;
}

