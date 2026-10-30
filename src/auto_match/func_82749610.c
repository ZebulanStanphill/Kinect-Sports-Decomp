typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_82749610;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_82749410(void *self, Obj_82749610 *o);

void *fn_82749610(int unused, Obj_82749610 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x50, 0);
  if (p != 0) {
    return fn_82749410(p, o);
  }
  return 0;
}
