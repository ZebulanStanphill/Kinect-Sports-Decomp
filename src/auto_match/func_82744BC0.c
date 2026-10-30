typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_82744BC0;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_82744378(void *self, Obj_82744BC0 *o);

void *fn_82744BC0(int unused, Obj_82744BC0 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x30, 0);
  if (p != 0) {
    return fn_82744378(p, o);
  }
  return 0;
}
