typedef struct { int pad[0x1e]; struct { char pad[0x288]; void *heap; } *ctx; } Obj_82740E50;
extern void *fn_8267B890(void *heap, int size, int flags);
extern void *fn_827403B0(void *self, Obj_82740E50 *o, int arg);

void *fn_82740E50(int unused, Obj_82740E50 *o)
{
  void *p = fn_8267B890(o->ctx->heap, 0x44, 0);
  if (p != 0) {
    return fn_827403B0(p, o, 0);
  }
  return 0;
}
