typedef struct { int pad0; int v; int pad8, padc; } E_826D9828;
extern int fn_826D89A8(int *, int);

int fn_826D9828(E_826D9828 **param_1, int param_2, int *param_3)
{
  int i = fn_826D89A8((int *)param_1, param_2);
  E_826D9828 *e;
  if (i >= 0) e = *param_1 + (i + 1); else e = 0;
  if (e != 0) {
    if (param_3 != 0) *param_3 = e->v;
    return 1;
  }
  return 0;
}
