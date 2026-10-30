typedef struct Str_826A1E40 { char *text; int f4; int rc; } Str_826A1E40;
typedef struct Obj_826A1E40 { char pad[0x34]; void **items; unsigned count; } Obj_826A1E40;
extern void fn_8268B118(void *sink);
extern void fn_8268B1F0(void *sink, char *s, int n);
extern void fn_826944C8(void *p);
extern void fn_82696330(void *p);
extern void fn_82696D38(Str_826A1E40 **out, void *src, void *ctx, int a, int b);

static __inline void Release(Str_826A1E40 *p) { if (--p->rc == 0) fn_826944C8(p); }

void fn_826A1E40(Obj_826A1E40 *o, void *ctx, void *sink, void *sep)
{
  Str_826A1E40 *t1;
  Str_826A1E40 *t2;
  Str_826A1E40 *p;
  unsigned char empty[16];
  unsigned i;
  fn_8268B118(sink);
  empty[0] = 0;
  for (i = 0; i < o->count; i++) {
    if (i != 0) fn_8268B1F0(sink, sep, -1);
    if (o->items[i] != 0) {
      fn_82696D38(&t1, o->items[i], ctx, -1, 0);
      fn_8268B1F0(sink, t1->text, -1);
      p = t1;
      Release(p);
    } else {
      fn_82696D38(&t2, empty, ctx, -1, 0);
      fn_8268B1F0(sink, t2->text, -1);
      p = t2;
      Release(p);
    }
  }
  fn_82696330(empty);
}
