extern int fn_82A43368();
extern unsigned int fn_82A43380(void *a, int *b, int (*f)(), int c);

int fn_82A43C30(char *param_1, int param_2)
{
  int hr;
  int arg;

  hr = 0;
  arg = param_2;
  if (fn_82A43380(param_1 + 0xe4, &arg, fn_82A43368, 0) != 0) {
    hr = 0x80004005;
  }
  return hr;
}
