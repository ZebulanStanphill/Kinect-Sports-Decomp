typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_82716648;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_827164B0(void *self, Obj_82716648 *o);

void *fn_82716648(int unused, Obj_82716648 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x34, 0);
  if (p != 0) {
    return fn_827164B0(p, o);
  }
  return 0;
}
