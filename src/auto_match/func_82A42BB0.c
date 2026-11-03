typedef struct Vt_82A42BB0 { int pad[9]; void (*f24)(void *, int); } Vt_82A42BB0;
typedef struct { Vt_82A42BB0 *vt; } Obj_82A42BB0;
extern int *fn_82A40AD8(int *);
extern int fn_82A4F4E0(int *);

void fn_82A42BB0(Obj_82A42BB0 **param_1, int *param_2)
{
  int *p;
  int *n;
  int i;

  p = param_2 + 2;
  i = 2;
  do {
    if (*p != 0x7fffffff) {
      (*param_1)->vt->f24(*param_1, *p);
    }
    i = i - 1;
    p = p + 2;
  } while (i != 0);
  while ((n = fn_82A40AD8(param_2 + 5)) != 0) {
    if (n[1] != 0x7fffffff) {
      (*param_1)->vt->f24(*param_1, n[1]);
    }
    fn_82A4F4E0(n);
  }
}
