extern void fn_826A1B38(void *);
extern void fn_826C3400(void *);
extern void fn_826824B0(void *);

typedef struct { int *data; unsigned n; } Vec_826A49B0;
typedef struct {
  char pad[0x4c];
  char a[0xc];
  char b[0xc];
  Vec_826A49B0 *vec;
} Obj_826A49B0;

void fn_826A49B0(Obj_826A49B0 *o)
{
  unsigned i, n;
  fn_826A1B38(o);
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
