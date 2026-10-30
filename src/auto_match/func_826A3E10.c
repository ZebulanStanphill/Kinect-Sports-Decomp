typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_826A3E10;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_826A2AB8(void *self, Obj_826A3E10 *o);

void *fn_826A3E10(int unused, Obj_826A3E10 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x48, 0);
  if (p != 0) {
    return fn_826A2AB8(p, o);
  }
  return 0;
}
