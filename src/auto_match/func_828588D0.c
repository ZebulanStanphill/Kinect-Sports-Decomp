typedef struct { char pad[0x100]; unsigned int x100; } Ctx_828588D0;
typedef struct { Ctx_828588D0 *ctx; } Obj_828588D0;
extern void (*lbl_83211304[])(Ctx_828588D0 *, unsigned int);

void fn_828588D0(Obj_828588D0 *o)
{
    if (lbl_83211304[0] != 0) {
        lbl_83211304[0](o->ctx, o->ctx->x100);
    }
}
