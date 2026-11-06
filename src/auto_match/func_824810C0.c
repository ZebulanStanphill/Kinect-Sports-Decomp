extern void fn_822315A0(void *p);
extern void fn_82246748(int h, int b);
extern void fn_8229E090(int h, int a, int b);
extern void fn_824C04E0(void *o, int b);

typedef struct { int a; void *p; } Ref_824810C0;
typedef struct {
    char pad0[0x48]; int h;
    char pad4c[0x68 - 0x4c]; Ref_824810C0 ref;
} Obj_824810C0;
typedef struct {
    char pad0[0x4c]; int flag;
    char pad50[0xa4 - 0x50]; Obj_824810C0 *obj;
    char pada8[0xb8 - 0xa8]; int handle;
} Ctx_824810C0;

static __forceinline void reset(Ref_824810C0 *r)
{
    void *p = r->p;
    r->p = 0;
    r->a = 0;
    if (p != 0) {
        fn_822315A0(p);
    }
}

void fn_824810C0(int mode, Ctx_824810C0 *ctx)
{
    Obj_824810C0 *o;
    if (mode != 2) {
        fn_8229E090(ctx->handle, 0, 0);
        ctx->handle = 0;
        if (mode == 0) {
            o = ctx->obj;
            ctx->flag = 1;
            if (o != 0) {
                reset(&o->ref);
                if (o->h != 0) {
                    fn_82246748(o->h, 0);
                }
                fn_824C04E0(o, 1);
            }
        }
    } else {
        ctx->handle = 0;
    }
}
