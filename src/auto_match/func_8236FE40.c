typedef int (*VFn_8236FE40)(int *, int *, int *);

extern int fn_82358810(int *obj, int arg);

int fn_8236FE40(int *param_1, int param_2)
{
  unsigned int kind;
  int a;
  int b;

  a = 0;
  b = 0;
  if (((VFn_8236FE40 *)(*param_1))[0x1c](param_1, &a, &b) > 0) {
    if (param_2 != 0) {
      return param_1[0xd0] == 0;
    }
    kind = (unsigned int)param_1[0x15];
    if (kind >= 2 && (kind <= 4 || (kind > 0xf && kind <= 0x11))) {
      return fn_82358810(param_1, 0);
    }
  }
  return 0;
}
