int fn_82DB0238(int param_1,int param_2)

{
  if (*(short *)(param_1 + 0x20) != -1) {
    return param_1;
  }
  if (*(short *)(param_2 + 0x20) == -1) {
    return param_1;
  }
  return param_2;
}

