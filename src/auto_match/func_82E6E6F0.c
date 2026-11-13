int fn_82E6E6F0(int param_1, int *param_2, unsigned __int64 param_3)
{
  int hr;
  unsigned __int64 size;

  if (param_2 == (int *)0) {
    return 0x80004003;
  }
  else {
    size = 0;
    hr = (*(int (**)())(*param_2 + 0x10))(param_2, &size);
    if (hr >= 0) {
      if (param_3 > size) {
        hr = 0xc00d36bb;
      }
      else {
        *(int **)(param_1 + 8) = param_2;
        (*(int (**)())(*param_2 + 4))(param_2);
        *(unsigned __int64 *)(param_1 + 0x10) = param_3;
        *(unsigned __int64 *)(param_1 + 0x20) = size - param_3;
      }
    }
  }
  return hr;
}
