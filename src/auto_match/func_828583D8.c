typedef struct { char pad[0x100]; unsigned int x100; } Ctx_828583D8;
typedef struct { Ctx_828583D8 *ctx; } Obj_828583D8;
extern void (*lbl_83211304[])(Ctx_828583D8 *, unsigned int);

void fn_828583D8(Obj_828583D8 *o)
{
    if (lbl_83211304[0] != 0) {
        lbl_83211304[0](o->ctx, o->ctx->x100);
    }
}
