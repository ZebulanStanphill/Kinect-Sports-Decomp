extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_826244E0(double param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  double dVar3;
  
  uVar1 = *(unsigned int *)(param_2 + 0x814);
  *(unsigned int *)(param_2 + 0x814) = 0xffffffff;
  if (uVar1 != 0xffffffff) {
    dVar3 = (double)ltcg_pool_0_0f;
    iVar2 = *(int *)(*(int *)(*(int *)(((int)uVar1 >> 8 & 0xffU) * 4 + param_2 + 0x7fc) + 4) +
                    (uVar1 & 0xff) * 4);
    *(unsigned int *)(iVar2 + 0x20) = *(unsigned int *)(iVar2 + 0x20) | 8;
    if (dVar3 < param_1) {
      *(float *)(iVar2 + 0x14) = (float)param_1;
    }
    return 1;
  }
  return 0;
}

