typedef struct Obj_822C63A0 {
    struct {
        char pad[0xc];
        void (*fc)(struct Obj_822C63A0 *, float);
    } *vt;
} Obj_822C63A0;
typedef struct { Obj_822C63A0 *p; void *rep; } Sp_822C63A0;
typedef struct {
    char pad[0x14];
    unsigned int id;     /* 0x14 */
} Ctx_822C63A0;
typedef struct {
    void *vt;
    Ctx_822C63A0 ctx;    /* 0x4 */
} Self_822C63A0;
extern Sp_822C63A0 *fn_8247B210(Sp_822C63A0 *out, Ctx_822C63A0 *ctx, unsigned int id);
extern void fn_822315A0(void *);

void fn_822C63A0(Self_822C63A0 *self, float value)
{
    Sp_822C63A0 sp;
    unsigned char ok;
    Ctx_822C63A0 *ctx = &self->ctx;

    fn_8247B210(&sp, ctx, ctx->id);
    ok = sp.p != 0;
    if (sp.rep != 0) {
        fn_822315A0(sp.rep);
    }
    if (ok) {
        fn_8247B210(&sp, ctx, ctx->id);
        sp.p->vt->fc(sp.p, value);
        if (sp.rep != 0) {
            fn_822315A0(sp.rep);
        }
    }
}
