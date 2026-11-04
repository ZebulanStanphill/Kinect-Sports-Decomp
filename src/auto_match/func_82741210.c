extern void fn_827401E0(void *);
extern void fn_826C3400(void *);
extern void fn_826824B0(void *);

typedef struct { int *data; unsigned n; } Vec_82741210;
typedef struct {
  char pad[0x48];
  char a[0xc];
  char b[0xc];
  Vec_82741210 *vec;
} Obj_82741210;

void fn_82741210(Obj_82741210 *o)
{
  unsigned i, n;
  fn_827401E0(o);
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
