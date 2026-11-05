extern int fn_82A1E658(int);
extern int fn_82A1F470(void);

int fn_82E499E0(int self)
{
  int hr = 0;
  int h = *(int *)(self + 0x9c);
  if (h == -1)
    return 0x80070057;
  if (fn_82A1E658(h) == 0) {
    int t = fn_82A1F470();
    if (t <= 0)
      hr = t;
    else
      hr = (t & 0xffff) | 0x80070000;
  } else {
    *(int *)(self + 0xa4) = 0;
    *(int *)(self + 0xa0) = 0;
    *(int *)(self + 0x9c) = -1;
  }
  return hr;
}
