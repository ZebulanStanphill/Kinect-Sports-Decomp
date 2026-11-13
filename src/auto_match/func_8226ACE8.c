extern unsigned int ltcg_pool_0_0f;


void fn_8226ACE8(double param_1,int param_2)

{
  float fVar1;
  
  fVar1 = -(float)((double)*(float *)(param_2 + 0x24) * param_1 - (double)*(float *)(param_2 + 0x30)
                  );
  *(float *)(param_2 + 0x30) = fVar1;
  if (ltcg_pool_0_0f <= fVar1) {
    return;
  }
  *(float *)(param_2 + 0x30) = ltcg_pool_0_0f;
  return;
}

