extern void *fn_8265C9E0(int);
extern int lbl_821ADA08;

void **fn_822D7AC0(int *param_1)
{
  void **p;

  p = (void **)fn_8265C9E0(8);
  if (p != 0) {
    p[0] = &lbl_821ADA08;
    p[1] = (void *)param_1[1];
    return p;
  }
  return 0;
}
