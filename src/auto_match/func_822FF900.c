extern int fn_82300178();
extern int fn_82300D30();
extern int fn_82300E58();
extern int fn_8251F720();
extern unsigned int ltcg_pool_0_0f;


int fn_822FF900(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  double dVar3;
  
  fn_82300D30(param_1 + 0x420);
  *(unsigned int *)(param_1 + 0x520) = 0;
  *(unsigned int *)(param_1 + 0x528) = param_2;
  fVar1 = ltcg_pool_0_0f;
  dVar3 = (double)ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x52c) = 0;
  *(float *)(param_1 + 0x540) = fVar1;
  *(unsigned int *)(param_1 + 0x564) = 0;
  *(float *)(param_1 + 0x544) = fVar1;
  *(unsigned int *)(param_1 + 0x568) = 0xffffffff;
  *(float *)(param_1 + 0x548) = fVar1;
  *(unsigned int *)(param_1 + 0x56c) = 0;
  *(float *)(param_1 + 0x54c) = fVar1;
  *(unsigned int *)(param_1 + 0x574) = 0x7fe;
  *(float *)(param_1 + 0x558) = fVar1;
  *(unsigned int *)(param_1 + 0x578) = 0x7fe;
  uVar2 = fn_8251F720(param_3,0);
  *(int *)(param_1 + 0x52c) = (int)uVar2;
  fn_82300E58(param_1 + 0x420,uVar2);
  fn_82300178(param_1);
  *(float *)(param_1 + 0x560) = (float)dVar3;
  *(unsigned int *)(param_1 + 0x550) = 0;
  *(float *)(param_1 + 0x55c) = (float)dVar3;
  *(unsigned int *)(param_1 + 0x554) = 0;
  *(unsigned int *)(param_1 + 0x564) = 0;
  *(unsigned int *)(param_1 + 0x568) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x56c) = 0;
  *(unsigned int *)(param_1 + 0x574) = 0x1e2;
  *(unsigned int *)(param_1 + 0x578) = 0x1e2;
  return param_1;
}

