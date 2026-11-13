void fn_82886F60(unsigned int **param_1,int param_2,unsigned int v)
{
  unsigned int *p = param_1[param_2];
  unsigned int lo = p[0];
  unsigned int cur = p[1];
  if (lo > cur) {
    if (v <= cur) return;
    if (v >= lo) return;
  } else {
    if (v <= cur && v >= lo) return;
  }
  p[1] = v;
}
