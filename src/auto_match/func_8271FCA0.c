typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_8271FCA0;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_8271FC40(void *self, Obj_8271FCA0 *o);

void *fn_8271FCA0(int unused, Obj_8271FCA0 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x30, 0);
  if (p != 0) {
    return fn_8271FC40(p, o);
  }
  return 0;
}
