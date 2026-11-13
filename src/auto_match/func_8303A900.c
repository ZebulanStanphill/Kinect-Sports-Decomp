extern unsigned int lbl_8217BA98;


void fn_8303A900(int param_1)

{
  float fVar1;
  
  fVar1 = lbl_8217BA98;
  *(float *)(param_1 + 8) = (*(float *)(param_1 + 8) + lbl_8217BA98) - lbl_8217BA98;
  *(float *)(param_1 + 0xc) = (*(float *)(param_1 + 0xc) + fVar1) - fVar1;
  return;
}

