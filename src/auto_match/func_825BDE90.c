typedef struct {
  int first;
  void *second;
} Pair;

extern void fn_822315A0(void *p);
extern void fn_82517978(Pair *out, int a, void *b, int c);
extern void *fn_8265C9E0(int size);
extern void fn_827DE858(void *self, Pair *pair, void *arg);
extern char lbl_821CAC38[];

void *fn_825BDE90(int param_1, void *param_2)
{
  void **obj;
  void *ref;
  Pair a;
  Pair b;

  obj = fn_8265C9E0(0x14);
  if (obj != 0) {
    a.first = 0;
    a.second = 0;
    fn_82517978(&a, *(int *)(param_1 + 4), *(void **)(param_1 + 8), 1);
    ref = a.second;
    b.first = 0;
    b.second = 0;
    fn_82517978(&b, a.first, ref, 0);
    fn_827DE858(obj, &b, param_2);
    *obj = lbl_821CAC38;
    if (ref != 0) {
      fn_822315A0(ref);
    }
    return obj;
  }
  return 0;
}
