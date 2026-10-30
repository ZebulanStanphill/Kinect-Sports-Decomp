typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_827517A8;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_827514C8(void *self, Obj_827517A8 *o);

void *fn_827517A8(int unused, Obj_827517A8 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x3c, 0);
  if (p != 0) {
    return fn_827514C8(p, o);
  }
  return 0;
}
