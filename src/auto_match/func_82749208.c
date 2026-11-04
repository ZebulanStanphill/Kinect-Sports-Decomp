extern void fn_826BE840(void *);
extern void fn_826C3290(void *);
extern void fn_82681F88(void *);

typedef struct { int *data; unsigned n; } Vec_82749208;
typedef struct {
  char pad[0x54];
  char a[0xc];
  char b[0xc];
  Vec_82749208 *vec;
} Obj_82749208;

void fn_82749208(Obj_82749208 *o)
{
  unsigned i, n;
  fn_826BE840(o);
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
