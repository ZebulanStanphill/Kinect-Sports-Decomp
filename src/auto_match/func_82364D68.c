typedef int (*VFn_82364D68)(int *self, int *a, int *b);
extern int fn_82358810(int *obj, int arg);

int fn_82364D68(int *param_1, int param_2)
{
  int a;
  int b;

  a = 0;
  b = 0;
  if (((VFn_82364D68 *)(*param_1))[0x1c](param_1, &a, &b) > 0) {
    if (param_2 != 0) {
      return 1;
    }
    return fn_82358810(param_1, 0);
  }
  return 0;
}
