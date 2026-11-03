extern int fn_828E9D90(int);
extern void fn_828E9D60(int, int);
typedef struct Obj_8242A0E0 { int *vt; } Obj_8242A0E0;
int fn_8242A0E0(Obj_8242A0E0 *o, int a, unsigned char flag)
{
  int t0, t1, d;
  t0 = fn_828E9D90(a);
  ((void (*)(Obj_8242A0E0 *, int, int))o->vt[5])(o, a, 0);
  t1 = fn_828E9D90(a);
  d = t1 - t0;
  if (flag != 0) fn_828E9D60(a, t0);
  return d;
}
