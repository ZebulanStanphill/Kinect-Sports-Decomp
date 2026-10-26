extern void *fn_8265C9E0(int);
extern int lbl_82197B5C;

char **fn_8224BCA8(int *param_1)
{
  char **p;

  p = (char **)fn_8265C9E0(8);
  if (p != 0) {
    p[0] = (char *)&lbl_82197B5C;
    *(char *)(p + 1) = *(char *)(param_1 + 1);
    return p;
  }
  return 0;
}
