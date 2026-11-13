extern unsigned int lbl_82054EA0;
extern unsigned int lbl_821AAD20;


double fn_83050788(int param_1)

{
  if (*(float *)(param_1 + 0x88) == lbl_821AAD20) {
    return (double)lbl_82054EA0;
  }
  return (double)((float)*(unsigned int *)(param_1 + 0x98) / *(float *)(param_1 + 0x88));
}

