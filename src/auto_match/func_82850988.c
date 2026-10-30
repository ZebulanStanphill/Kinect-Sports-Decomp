typedef struct Obj_82850988 { char pad[0x144]; void *f144; } Obj_82850988;
extern int fn_82817B08(void *);
extern void fn_82817B50(void *, int, void **);
extern void fn_82817BC8(void *, int);

int fn_82850988(Obj_82850988 *o, int idx, int arg)
{
  void *item;
  if (o->f144 != 0) {
    int n = fn_82817B08(o->f144);
    if (idx >= 0 && idx < n) {
      fn_82817B50(o->f144, idx, &item);
      fn_82817BC8(item, arg);
      return 1;
    }
  }
  return 0;
}
