typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_826D2338;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_826D1BE8(void *self, Obj_826D2338 *o);

void *fn_826D2338(int unused, Obj_826D2338 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x38, 0);
  if (p != 0) {
    return fn_826D1BE8(p, o);
  }
  return 0;
}
