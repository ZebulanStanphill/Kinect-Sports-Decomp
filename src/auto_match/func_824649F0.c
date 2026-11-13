extern unsigned int lbl_82193AF0;


void fn_824649F0(double param_1,int param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)*(float *)(param_2 + 0x1c);
  dVar2 = (double)*(float *)(param_2 + 0x18);
  if (((double)(float)(dVar3 - (double)lbl_82193AF0) <= dVar2) &&
     (dVar2 <= (double)(float)(dVar3 + (double)lbl_82193AF0))) {
    return;
  }
  if (dVar2 <= dVar3) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x20) * param_1 + dVar2);
  }
  else {
    fVar1 = -(float)((double)*(float *)(param_2 + 0x20) * param_1 - dVar2);
  }
  *(float *)(param_2 + 0x18) = fVar1;
  return;
}

