unsigned int fn_82FA5B20(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  uVar2 = (unsigned __int64)*param_2;
  uVar1 = *(unsigned int *)((int)((uVar2 + 1 & 0xffffffff) << 2) + (int)param_1) & -1 << (*param_3 & 0x3f);
  if (uVar1 == 0) {
    uVar1 = -1 << (*param_2 + 1 & 0x3f) & *param_1;
    if (uVar1 == 0) {
      return 0;
    }
    lVar3 = -LZCOUNT(~uVar1 + 1 & uVar1);
    uVar2 = lVar3 + 0x1f;
    *param_2 = (unsigned int)uVar2;
    uVar1 = *(unsigned int *)((int)((lVar3 + 0x20U & 0xffffffff) << 2) + (int)param_1);
  }
  lVar3 = 0x1f - LZCOUNT(~uVar1 + 1 & uVar1);
  *param_3 = (unsigned int)lVar3;
  return *(unsigned int *)
          ((int)(((uVar2 & 0x7ffffff) * 0x20 + lVar3 + 0x19 & 0xffffffff) << 2) + (int)param_1);
}

