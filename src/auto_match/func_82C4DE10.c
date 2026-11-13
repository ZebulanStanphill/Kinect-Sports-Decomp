unsigned int fn_82C4DE10(unsigned __int64 *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 1) & 7;
  if ((int)uVar1 == 0) {
    uVar1 = 8;
  }
  *param_2 = uVar1;
  return *param_1 >> (0x40 - uVar1) & 0xffffffff;
}

