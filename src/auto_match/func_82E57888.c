void fn_82E57888(int *param_1,unsigned short *param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  
  for (uVar2 = (param_3 & 0xffffffff) >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
    uVar1 = *param_2;
    param_2 = param_2 + 1;
    *(unsigned short *)*param_1 = uVar1 << 8 | uVar1 >> 8;
    *param_1 = *param_1 + 2;
  }
  if ((param_3 & 1) == 0) {
    return;
  }
  *(unsigned char *)*param_1 = *(unsigned char *)param_2;
  *param_1 = *param_1 + 1;
  return;
}

