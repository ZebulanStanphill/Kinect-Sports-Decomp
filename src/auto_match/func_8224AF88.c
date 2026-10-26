extern void *fn_8265C9E0(int);
extern int lbl_82197B20;

void **fn_8224AF88(int *param_1)
{
  void **p;

  p = (void **)fn_8265C9E0(8);
  if (p != 0) {
    p[0] = &lbl_82197B20;
    p[1] = (void *)param_1[1];
    return p;
  }
  return 0;
}
