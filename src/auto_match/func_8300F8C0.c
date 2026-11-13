extern unsigned char fn_83032FE8(void *);

typedef struct Vt_8300F8C0 { char pad[0x28]; void (*f28)(void *, void *); } Vt_8300F8C0;
typedef struct Obj_8300F8C0 { Vt_8300F8C0 *vt; char pad[0x10]; unsigned flags; } Obj_8300F8C0;
typedef struct Ctx_8300F8C0 { char pad[8]; Obj_8300F8C0 *obj; } Ctx_8300F8C0;

void fn_8300F8C0(void *param_1, Ctx_8300F8C0 *ctx)
{
  unsigned buf[20];
  int v;
  buf[0] = 0;
  v = ctx->obj->flags >> 8;
  if (v == 0x4011 || (v == 0x5011 && fn_83032FE8(ctx->obj) != 0)) {
    ctx->obj->vt->f28(ctx->obj, buf);
  }
}
