typedef struct Obj_828507F8 { char pad[0x144]; void *f144; } Obj_828507F8;
extern int fn_82817B08(void *p);
extern void fn_82817B50(void *p, int idx, int *out);
extern void fn_82851858(int a, int *out);

int fn_828507F8(Obj_828507F8 *o, int off, int idx, int val)
{
  int a, b;
  if (o->f144 != 0) {
    int n = fn_82817B08(o->f144);
    if (idx >= 0 && idx < n) {
      fn_82817B50(o->f144, idx, &a);
      fn_82851858(a, &b);
      *(int *)(b + off) = val;
      return 1;
    }
  }
  return 0;
}
