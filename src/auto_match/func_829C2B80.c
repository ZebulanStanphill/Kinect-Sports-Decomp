typedef struct Alloc { char pad[0x24]; void (*free)(void *ctx, void *p); void *ctx; } Alloc;
typedef struct Obj { char pad[0x24]; void *a; void *b; } Obj;
extern void d3dx_inflate_blocks_reset(Obj *o, Alloc *al, int flag);

int d3dx_inflate_blocks_free(Obj *param_1, Alloc *param_2)
{
  d3dx_inflate_blocks_reset(param_1, param_2, 0);
  param_2->free(param_2->ctx, param_1->b);
  param_2->free(param_2->ctx, param_1->a);
  param_2->free(param_2->ctx, param_1);
  return 0;
}
