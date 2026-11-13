extern int fn_82864988();
extern unsigned int lbl_82005748;
extern unsigned int ltcg_pool_0_0f;


int fn_82533620(int param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  
  fn_82864988(param_1,0xffffffff821c3a24);
  fn_82864988(param_1 + 0x24,0xffffffff821c3a30);
  fn_82864988(param_1 + 0x48,0xffffffff821c3a3c);
  fVar1 = lbl_82005748;
  dVar3 = (double)ltcg_pool_0_0f;
  dVar2 = (double)lbl_82005748;
  *(float *)(param_1 + 0x6c) = ltcg_pool_0_0f;
  *(float *)(param_1 + 0x70) = fVar1;
  fn_82864988(param_1 + 0x74,0xffffffff821c3a54);
  *(float *)(param_1 + 0x98) = (float)dVar3;
  *(float *)(param_1 + 0x9c) = (float)dVar2;
  fn_82864988(param_1 + 0xa0,0xffffffff821c3a68);
  *(float *)(param_1 + 0xc4) = (float)dVar3;
  *(float *)(param_1 + 200) = (float)dVar2;
  return param_1;
}

