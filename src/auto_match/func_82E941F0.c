extern double lbl_82005710;


void fn_82E941F0(int param_1,int param_2,int param_3)

{
  double dVar1;
  
  dVar1 = ((double)(__int64)(param_2 - param_3) / (double)(__int64)*(int *)(param_1 + 0x560)) /
          (*(double *)(param_1 + 0x7830) - *(double *)(param_1 + 0x7838));
  if (dVar1 <= lbl_82005710) {
    return;
  }
  *(double *)(param_1 + 0x7850) = dVar1;
  *(unsigned int *)(param_1 + 0x781c) = 1;
  *(unsigned int *)(param_1 + 0x77a8) = 1;
  return;
}

