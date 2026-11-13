unsigned __int64 fn_83055310(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = (param_3 & 0xffffffff) + param_2;
  uVar2 = ((__int64)*(int *)(param_1 + 0x6c) * (__int64)*(int *)(param_1 + 0x20) & 0xffffffffU) +
          *(__int64 *)(param_1 + 0x18);
  if (uVar1 <= uVar2) {
    *(unsigned __int64 *)(param_1 + 0xb0) = uVar1;
    *(unsigned char *)(param_1 + 0xb8) = *(unsigned char *)(param_1 + 0xb8) | 0x80;
    return param_3;
  }
  *(unsigned __int64 *)(param_1 + 0xb0) = uVar2;
  *(unsigned char *)(param_1 + 0xb8) = *(unsigned char *)(param_1 + 0xb8) | 0x80;
  return (uVar2 & 0xffffffff) - (param_2 & 0xffffffff);
}

