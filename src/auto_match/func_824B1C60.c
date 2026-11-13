extern int fn_824B1D10();
extern int fn_824B1E20();


void fn_824B1C60(int param_1)

{
  int iVar1;
  double dVar2;
  
  fn_824B1D10();
  iVar1 = *(int *)(param_1 + 0x3c);
  dVar2 = (double)fn_824B1E20(param_1);
  *(float *)(iVar1 + 0x1c) = (float)dVar2;
  return;
}

