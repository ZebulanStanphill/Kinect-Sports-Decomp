extern void *fn_82CF7F50(void *, int, int);
extern void fn_82CF68D0(void *, void *, int);
extern void fn_82CF8038(void *, int, void *, int);

void *fn_82CF8200(void *param_1, void *param_2, int param_3, int *param_4, int param_5)
{
  void *dst;
  int n;

  dst = fn_82CF7F50(param_1, 1, *param_4 * param_5);
  n = *param_4;
  if (n >= param_3) {
    n = param_3;
  }
  fn_82CF68D0(dst, param_2, n * param_5);
  fn_82CF8038(param_1, 1, param_2, param_3 * param_5);
  return dst;
}
