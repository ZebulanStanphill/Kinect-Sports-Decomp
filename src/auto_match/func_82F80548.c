unsigned __int64 SkipUnwoundFrames(int param_1,unsigned int *param_2,int param_3)

{
  if ((*(unsigned int *)(param_1 + 4) & 0x66) == 0) {
    return 1;
  }
  param_2[3] = param_3;
  *param_2 = (int)*(unsigned __int64 *)(param_3 + 0x30);
  param_2[1] = (int)*(unsigned __int64 *)(param_3 + 0x38);
  param_2[2] = (int)*(unsigned __int64 *)(param_3 + 0x40);
  return 3;
}

