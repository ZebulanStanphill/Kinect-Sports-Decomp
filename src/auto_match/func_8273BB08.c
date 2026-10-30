typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_8273BB08;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_8273B8D0(void *self, Obj_8273BB08 *o);

void *fn_8273BB08(int unused, Obj_8273BB08 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x60, 0);
  if (p != 0) {
    return fn_8273B8D0(p, o);
  }
  return 0;
}
