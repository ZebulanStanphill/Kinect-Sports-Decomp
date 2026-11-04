extern void fn_82740240(void *);
extern void fn_826C3448(void *);
extern void fn_826820F0(void *);

typedef struct { int *data; unsigned n; } Vec_82741280;
typedef struct {
  char pad[0x48];
  char a[0xc];
  char b[0xc];
  Vec_82741280 *vec;
} Obj_82741280;

void fn_82741280(Obj_82741280 *o)
{
  unsigned i, n;
  fn_82740240(o);
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
