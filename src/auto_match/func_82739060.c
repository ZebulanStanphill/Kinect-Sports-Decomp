extern void fn_826BE840(void *);
extern void fn_826C3290(void *);
extern void fn_82681F88(void *);

typedef struct { int *data; unsigned n; } Vec_82739060;
typedef struct {
  char pad[0x48];
  char a[0xc];
  char b[0xc];
  Vec_82739060 *vec;
} Obj_82739060;

void fn_82739060(Obj_82739060 *o)
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
