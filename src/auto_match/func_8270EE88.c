__int64 fn_8270EE88(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  uVar2 = *(unsigned int *)(param_1 + 0x24);
  if ((unsigned __int64)uVar2 < param_3 / 10) {
    uVar2 = (unsigned int)(param_3 / 10);
  }
  if (uVar2 == 0) {
    return 0;
  }
  uVar1 = (unsigned __int64)(int)uVar2;
  trapDoubleWordImmediate(6,uVar1,0);
  return (((uVar1 - *(__int64 *)(param_1 + 0x28)) + param_2) / uVar1) * uVar1;
}

