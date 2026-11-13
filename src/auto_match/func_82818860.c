void fn_82818860(int param_1,unsigned int param_2)

{
  if ((param_2 & 1) != 0) {
    *(unsigned int *)(param_1 + 0x40) = 0;
  }
  if ((param_2 & 2) != 0) {
    *(unsigned int *)(param_1 + 0x44) = 0;
  }
  if ((param_2 & 4) == 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x48) = 0;
  return;
}

