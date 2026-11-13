extern unsigned int lbl_821917B0;


unsigned __int64 fn_82370A60(double param_1,int param_2)

{
  float fVar1;
  
  fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x288));
  *(float *)(param_2 + 0x288) = fVar1;
  if (((*(int *)(param_2 + 0xa0) != 0) && (*(int *)(*(int *)(param_2 + 0xa0) + 0x40) == 1)) &&
     (fVar1 <= lbl_821917B0)) {
    return 0;
  }
  return 1;
}

