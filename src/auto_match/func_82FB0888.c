extern int fn_82F65350();


unsigned __int64 fn_82FB0888(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned short uVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xa8) == 1) {
    if (*(int *)(param_1 + 0x94) != 0) {
      uVar2 = fn_82F65350();
      uVar1 = *(unsigned int *)(param_1 + 0x94);
      trapWord(6,(unsigned __int64)uVar1,0);
      uVar2 = uVar2 - (__int64)(int)((uVar2 & 0xffffffff) / (unsigned __int64)uVar1) *
                      (__int64)(int)uVar1 & 0xffff;
    }
  }
  else if (*(int *)(param_1 + 0xa8) == 2) {
    uVar3 = *(short *)(param_1 + 0xac) + 1;
    *(unsigned short *)(param_1 + 0xac) = uVar3;
    if (*(unsigned int *)(param_1 + 0x94) <= (unsigned int)uVar3) {
      *(unsigned short *)(param_1 + 0xac) = 0;
    }
    return (unsigned __int64)*(unsigned short *)(param_1 + 0xac);
  }
  return uVar2;
}

