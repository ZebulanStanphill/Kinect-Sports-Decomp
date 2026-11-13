int fn_82E472D0(int param_1, unsigned int *param_2, unsigned int *param_3, unsigned int *param_4)
{
  int hr = 0;
  if (param_2 == 0) {
    hr = 0x80070057;
  } else {
    *param_2 = *(unsigned int *)(param_1 + 0x14);
    if (param_3 != 0) {
      *param_3 = *(unsigned int *)(param_1 + 0xc);
    }
    if (param_4 != 0) {
      *param_4 = *(unsigned int *)(param_1 + 8);
    }
  }
  return hr;
}
