extern unsigned int lbl_821AAD20;


void fn_82800EA0(int param_1)

{
  if (lbl_821AAD20 <= *(float *)(param_1 + 0xc)) {
    return;
  }
  *(float *)(param_1 + 0xc) = -*(float *)(param_1 + 0xc);
  return;
}

