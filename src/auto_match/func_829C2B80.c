typedef struct Alloc { char pad[0x24]; void (*free)(void *ctx, void *p); void *ctx; } Alloc;
typedef struct Obj { char pad[0x24]; void *a; void *b; } Obj;
extern void fn_829C2180(Obj *o, Alloc *al, int flag);

int fn_829C2B80(Obj *param_1, Alloc *param_2)
{
  fn_829C2180(param_1, param_2, 0);
  param_2->free(param_2->ctx, param_1->b);
  param_2->free(param_2->ctx, param_1->a);
  param_2->free(param_2->ctx, param_1);
  return 0;
}
