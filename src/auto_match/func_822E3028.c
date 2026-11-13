extern unsigned int ltcg_pool_0_0f;


void fn_822E3028(int param_1)

{
  if (*(float *)(param_1 + 0x44) <= ltcg_pool_0_0f) {
    return;
  }
  *(float *)(*(int *)(param_1 + 0x14) + 0x10c) = *(float *)(param_1 + 0x44);
  return;
}

