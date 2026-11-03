typedef struct Vec_826A2D50 { int *data; unsigned count; } Vec_826A2D50;
typedef struct Obj_826A2D50 { char pad[0x34]; Vec_826A2D50 v; } Obj_826A2D50;
extern void fn_827A9810(Vec_826A2D50 *, unsigned);
void fn_826A2D50(Obj_826A2D50 *a, Obj_826A2D50 *b)
{
  unsigned i, n; int *d, *s;
  fn_827A9810(&a->v, b->v.count);
  n = a->v.count;
  for (i = 0; i < n; i++) { s = b->v.data + i; d = a->v.data + i; *d = *s; }
}
