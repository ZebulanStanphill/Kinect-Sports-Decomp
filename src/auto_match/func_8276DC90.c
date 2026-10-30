extern void fn_826E1E10(void *p, unsigned int n);
extern void fn_826E1F68(void *a, void *b, unsigned int n);
extern void fn_827683E8(void *dst, void *src);

typedef struct { char b[0x28]; } Elem_8276DC90;
typedef struct { Elem_8276DC90 *data; unsigned int count; } Vec_8276DC90;
typedef struct { char pad[0x18]; Vec_8276DC90 v; } Obj_8276DC90;

void fn_8276DC90(Obj_8276DC90 *o, unsigned int idx, void *val)
{
  if (o->v.count <= idx) {
    Vec_8276DC90 *v = &o->v;
    unsigned int n = idx + 1;
    unsigned int old = v->count;
    fn_826E1F68(v, v, n);
    if (n > old) {
      fn_826E1E10(v->data + old, n - old);
    }
    if (o->v.count <= idx) {
      return;
    }
  }
  fn_827683E8(o->v.data + idx, val);
}
