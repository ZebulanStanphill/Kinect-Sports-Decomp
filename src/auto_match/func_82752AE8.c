extern void fn_826BEDE8(void *);
extern void fn_826C3400(void *);
extern void fn_826824B0(void *);

typedef struct { int *data; unsigned n; } Vec_82752AE8;
typedef struct {
  char pad[0x34];
  char a[0xc];
  char b[0xc];
  Vec_82752AE8 *vec;
} Obj_82752AE8;

void fn_82752AE8(Obj_82752AE8 *o)
{
  unsigned i, n;
  fn_826BEDE8(o);
  fn_826C3400(o->a);
  fn_826C3400(o->b);
  if (o->vec != 0) {
    n = o->vec->n;
    if (n != 0) {
      for (i = 0; i < n; i++) {
        int *e = &o->vec->data[i];
        if (*e != 0) fn_826824B0((void *)*e);
      }
    }
  }
}
