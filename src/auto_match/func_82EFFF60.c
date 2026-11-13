void fn_82EFFF60(int param_1)

{
  if (((*(int *)(param_1 + 0x350) != 3) && (*(int *)(param_1 + 0x350) != 4)) &&
     ((*(unsigned int *)(param_1 + 0x358) < 1 || (3 < *(unsigned int *)(param_1 + 0x358))))) {
    *(unsigned int *)(param_1 + 0x7784) = 0;
    return;
  }
  *(unsigned int *)(param_1 + 0x7784) = *(unsigned int *)(param_1 + 0x7784) | 0x2e;
  return;
}

