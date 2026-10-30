typedef struct { char pad[0x144]; void *list; } Obj_82850708;
extern int fn_82817B08(void *l);
extern void fn_82817B50(void *l, int idx, void **out);
extern void fn_82851858(void *a, int *out);

int fn_82850708(Obj_82850708 *o, char *base, int idx, int *out)
{
  void *e;
  int off;
  if (o->list != 0) {
    int n = fn_82817B08(o->list);
    if (idx >= 0 && idx < n) {
      fn_82817B50(o->list, idx, &e);
      fn_82851858(e, &off);
      *out = *(int *)(base + off);
      return 1;
    }
  }
  return 0;
}
