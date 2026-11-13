unsigned __int64 fn_82C18048(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar2 = (int)param_2;
  if ((*(int *)(param_1 + 0x13c) != 0) && (0 < iVar2)) {
    return (param_2 & 0x7fffffff) << 1;
  }
  if (*(int *)(param_1 + 0x144) == 0) {
    return param_2;
  }
  if (iVar2 < 1) {
    return param_2;
  }
  uVar1 = *(unsigned int *)(param_1 + 0x148);
  uVar3 = (__int64)*(int *)(param_1 + 0x14c) * (__int64)iVar2 -
          (unsigned __int64)*(unsigned int *)(param_1 + 0x154);
  trapWord(6,(unsigned __int64)uVar1,0);
  trapWord(5,(unsigned __int64)uVar1 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),
           0xffff);
  return (__int64)((int)uVar3 / (int)uVar1) + 1;
}

