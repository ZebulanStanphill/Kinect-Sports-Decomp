void fn_8304DED0(int param_1,unsigned __int64 param_2,int param_3)

{
  if ((*(unsigned short *)(param_1 + 0x1c) != 0) && (*(unsigned short *)(param_1 + 0x1c) <= 1)) {
    *(unsigned int *)(param_3 + 4) = 0;
    *(unsigned int *)(param_3 + 8) = 0;
    return;
  }
  *(unsigned int *)(param_3 + 4) = *(unsigned int *)(param_1 + 0x4c);
  *(unsigned int *)(param_3 + 8) = *(unsigned int *)(param_1 + 0x50);
  return;
}

