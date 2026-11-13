extern unsigned int lbl_82196288;


double fn_827F4970(int param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x30);
  return (double)((float)(lbl_82196288 <= fVar1) * fVar1);
}

