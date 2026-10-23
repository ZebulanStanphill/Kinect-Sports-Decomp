typedef int (*code)();

int fn_82F48470(unsigned int *param_1, unsigned short *param_2)
{
  int hr;

  hr = 0;
  if ((*(code *)(*param_1 + 0x50))(param_1) == 0) {
    hr = 0x80004001;
  }
  else if (param_1[4] == 0) {
    hr = 0xc00d36b6;
  }
  else {
    *param_2 = *(unsigned short *)(param_1 + 0x16);
  }
  return hr;
}
