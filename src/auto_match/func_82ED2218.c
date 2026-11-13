__int64 fn_82ED2218(int param_1)

{
  unsigned __int64 uVar1;
  
  if ((-1 < (int)*(unsigned int *)(param_1 + 0x2c)) &&
     (((uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30), -1 < (int)*(unsigned int *)(param_1 + 0x30) ||
       (uVar1 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) - (unsigned __int64)*(unsigned int *)(param_1 + 0x28)) + 1,
       -1 < (__int64)uVar1)) || (uVar1 = *(unsigned int *)(param_1 + 0x1c) + uVar1, -1 < (int)uVar1)))) {
    return uVar1 * 0x402c + (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
  }
  return 0;
}

