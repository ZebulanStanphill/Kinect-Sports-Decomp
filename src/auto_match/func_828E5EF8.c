extern float fn_828E5538();


void fn_828E5EF8(int param_1,unsigned __int64 param_2,float *param_3)

{
  float dVar1;
  
  dVar1 = (double)fn_828E5538(param_2,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc))
  ;
  if (param_3 != (float *)0x0) {
    *param_3 = (float)dVar1;
  }
  return;
}

