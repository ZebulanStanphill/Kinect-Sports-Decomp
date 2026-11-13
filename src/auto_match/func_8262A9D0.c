void fn_8262A9D0(int param_1,int *param_2)

{
  if (*param_2 == 0x44) {
    if (param_2[2] == *(int *)(param_1 + 0x960)) {
      *(unsigned int *)(param_1 + 0x960) = 0;
    }
    if (param_2[2] != *(int *)(param_1 + 0x964)) {
      return;
    }
    *(unsigned int *)(param_1 + 0x964) = 0;
    return;
  }
  if (*param_2 != 0x5d) {
    return;
  }
  if (param_2[2] != *(int *)(param_1 + 0x960)) {
    return;
  }
  *(unsigned char *)(param_1 + 0x974) = 1;
  return;
}

