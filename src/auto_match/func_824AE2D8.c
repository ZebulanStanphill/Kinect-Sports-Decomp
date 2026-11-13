extern int fn_82F4EBC0();
extern int fn_82F4ED08();
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_824AE2D8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  uVar1 = *(unsigned int *)(iVar3 + 0x14);
  if (1 < uVar1) {
    if (uVar1 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = uVar1 - 1;
      if (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 0xc) >> 6 <= iVar2) {
        iVar2 = iVar2 - (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 6);
      }
      iVar2 = iVar2 * 0x40 + *(int *)(iVar3 + 0xc);
    }
    if (*(float *)(iVar2 + 0x34) < *(float *)(iVar3 + 0x28)) {
      *(unsigned int *)(iVar3 + 0x20) = ltcg_pool_0_0f;
      return 0;
    }
  }
  fn_82F4EBC0(0);
  iVar3 = *(int *)(param_1 + 0x3c);
  dVar4 = (double)fn_82F4ED08();
  iVar2 = *(int *)(param_1 + 0x3c);
  *(float *)(iVar3 + 0x20) = (float)(dVar4 + (double)*(float *)(iVar3 + 0x20));
  uVar1 = *(unsigned int *)(iVar2 + 0x14);
  if (1 < uVar1) {
    if (uVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = uVar1 - 1;
      if (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc) >> 6 <= iVar3) {
        iVar3 = iVar3 - (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4) >> 6);
      }
      iVar3 = iVar3 * 0x40 + *(int *)(iVar2 + 0xc);
    }
    if ((*(float *)(iVar2 + 0x2c) < *(float *)(iVar3 + 0x34)) &&
       (*(float *)(*(int *)(param_1 + 0x3c) + 0x20) < *(float *)(*(int *)(param_1 + 0x3c) + 0x24)))
    {
      return 1;
    }
  }
  return 0;
}

