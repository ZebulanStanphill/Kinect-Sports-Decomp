typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_827431F8;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_82742B70(void *self, Obj_827431F8 *o);

void *fn_827431F8(int unused, Obj_827431F8 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x30, 0);
  if (p != 0) {
    return fn_82742B70(p, o);
  }
  return 0;
}
