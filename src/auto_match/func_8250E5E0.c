extern int fn_8250E678();
extern int fn_827F2038();
extern int fn_827F2D60();
extern int fn_827F2F90();
extern unsigned int ltcg_pool_0_0f;


unsigned int fn_8250E5E0(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  double dVar4;
  
  *(unsigned int *)(param_1 + 0x20) = 0;
  fVar1 = ltcg_pool_0_0f;
  dVar4 = (double)ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(float *)(param_1 + 0x2c) = fVar1;
  uVar2 = fn_827F2038(0x110);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_827F2F90(uVar2,param_2,0,0,0,0);
  }
  *(unsigned int *)(param_1 + 0x10) = uVar3;
  fn_8250E678(param_1);
  fn_827F2D60(dVar4,*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0x14));
  return *(unsigned int *)(param_1 + 0x10);
}

