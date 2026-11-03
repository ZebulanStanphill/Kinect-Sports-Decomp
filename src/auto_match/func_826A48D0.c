extern void fn_826A1C78(void *);
extern void fn_826C3290(void *);
extern void fn_82681F88(void *);

typedef struct { int *data; unsigned n; } Vec_826A48D0;
typedef struct {
  char pad[0x4c];
  char a[0xc];
  char b[0xc];
  Vec_826A48D0 *vec;
} Obj_826A48D0;

void fn_826A48D0(Obj_826A48D0 *o)
{
  unsigned i, n;
  fn_826A1C78(o);
  fn_826C3290(o->a);
  fn_826C3290(o->b);
  if (o->vec != 0) {
    n = o->vec->n;
    if (n != 0) {
      for (i = 0; i < n; i++) {
        int *e = &o->vec->data[i];
        if (*e != 0) fn_82681F88((void *)*e);
      }
    }
  }
}
