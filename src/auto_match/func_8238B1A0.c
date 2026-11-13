extern int fn_822A1630();
extern int fn_822A1968();
extern int fn_82359698();
extern unsigned int ltcg_pool_0_0f;


void fn_8238B1A0(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xc) - param_1);
    *(float *)(param_2 + 0xc) = fVar1;
    if (fVar1 <= ltcg_pool_0_0f) {
      *(unsigned int *)(param_2 + 0x10) = 1;
      fn_822A1630(*(unsigned int *)(*(int *)(param_2 + 8) + 0xd4),6);
    }
  }
  else {
    uVar3 = (unsigned __int64)*(unsigned int *)(param_2 + 8);
    iVar2 = fn_822A1968(*(unsigned int *)(*(unsigned int *)(param_2 + 8) + 0xd4));
    if (iVar2 == 0) {
      fn_82359698(uVar3,0xf);
    }
  }
  return;
}

