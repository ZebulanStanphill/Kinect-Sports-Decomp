extern void fn_826A1C28(void *);
extern void fn_826C3448(void *);
extern void fn_826820F0(void *);

typedef struct { int *data; unsigned n; } Vec_826A4940;
typedef struct {
  char pad[0x4c];
  char a[0xc];
  char b[0xc];
  Vec_826A4940 *vec;
} Obj_826A4940;

void fn_826A4940(Obj_826A4940 *o)
{
  unsigned i, n;
  fn_826A1C28(o);
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
