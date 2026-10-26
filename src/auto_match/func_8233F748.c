extern void *fn_8265C9E0(int);
extern int lbl_821B16DC;

void **fn_8233F748(int *param_1)
{
  void **p;

  p = (void **)fn_8265C9E0(8);
  if (p != 0) {
    p[0] = &lbl_821B16DC;
    p[1] = (void *)param_1[1];
    return p;
  }
  return 0;
}
