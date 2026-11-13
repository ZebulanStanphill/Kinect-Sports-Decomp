void fn_8304A580(int param_1,unsigned short param_2,int param_3)

{
  if ((param_2 != 0) && (param_2 <= 1)) {
    *(unsigned int *)(param_3 + 4) = 0;
    *(unsigned int *)(param_3 + 8) = 0;
    return;
  }
  *(unsigned int *)(param_3 + 4) = *(unsigned int *)(param_1 + 0x54);
  *(int *)(param_3 + 8) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x54);
  return;
}

