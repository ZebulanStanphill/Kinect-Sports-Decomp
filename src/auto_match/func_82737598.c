typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_82737598;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_82735960(void *self, Obj_82737598 *o);

void *fn_82737598(int unused, Obj_82737598 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x74, 0);
  if (p != 0) {
    return fn_82735960(p, o);
  }
  return 0;
}
