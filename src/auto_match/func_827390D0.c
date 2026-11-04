extern void fn_826BEF40(void *);
extern void fn_826C3448(void *);
extern void fn_826820F0(void *);

typedef struct { int *data; unsigned n; } Vec_827390D0;
typedef struct {
  char pad[0x48];
  char a[0xc];
  char b[0xc];
  Vec_827390D0 *vec;
} Obj_827390D0;

void fn_827390D0(Obj_827390D0 *o)
{
  unsigned i, n;
  fn_826BEF40(o);
  fn_826C3448(o->a);
  fn_826C3448(o->b);
  if (o->vec != 0) {
    n = o->vec->n;
    if (n != 0) {
      for (i = 0; i < n; i++) {
        int *e = &o->vec->data[i];
        if (*e != 0) fn_826820F0((void *)*e);
      }
    }
  }
}
