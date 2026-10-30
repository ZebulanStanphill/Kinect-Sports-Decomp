typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_827140C0;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_82714008(void *self, Obj_827140C0 *o);

void *fn_827140C0(int unused, Obj_827140C0 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x34, 0);
  if (p != 0) {
    return fn_82714008(p, o);
  }
  return 0;
}
