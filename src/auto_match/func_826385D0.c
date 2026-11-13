typedef unsigned char bool;
extern unsigned int lbl_821956B4;
extern unsigned int ltcg_pool_0_0f;


void fn_826385D0(int param_1,float param_2)

{
  unsigned int uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  
  fVar2 = ltcg_pool_0_0f;
  param_2 = param_2 * lbl_821956B4;
  if ((param_2 != ltcg_pool_0_0f) || (iVar3 = 0, *(float *)(param_1 + 0x2a54) != ltcg_pool_0_0f)) {
    iVar3 = 1;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x2948);
  bVar6 = param_2 != ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x2948) = iVar3 << 0xb | uVar1 & 0xfffff7ff;
  if ((bVar6) || (iVar4 = 0, *(float *)(param_1 + 0x2a5c) != fVar2)) {
    iVar4 = 1;
  }
  *(float *)(param_1 + 0x2a50) = param_2;
  *(float *)(param_1 + 0x2a58) = param_2;
  *(unsigned int *)(param_1 + 0x2948) = iVar4 << 0xc | iVar3 << 0xb | uVar1 & 0xffffe7ff;
  uVar5 = *(unsigned __int64 *)(param_1 + 0x20);
  *(unsigned __int64 *)(param_1 + 0x20) = uVar5 | 0x200000000000;
  *(unsigned __int64 *)(param_1 + 0x20) = uVar5 | 0x280000000000;
  *(unsigned __int64 *)(param_1 + 0x10) = *(unsigned __int64 *)(param_1 + 0x10) | 0x40;
  return;
}

