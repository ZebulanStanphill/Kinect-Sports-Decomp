typedef int (*code)();

int fn_82F34D60(int *param_1, unsigned int param_2)
{
  int hr;

  if ((*(code *)(*param_1 + 0x78))(param_1) == 0 && param_2 == 0) {
    hr = 0x80070057;
  }
  else {
    param_1[0x4d] = param_2;
    hr = 0;
  }
  return hr;
}
