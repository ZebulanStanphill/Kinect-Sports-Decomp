typedef struct Obj_822C6448 {
    struct {
        char pad[0x1c];
        void (*f1c)(struct Obj_822C6448 *);
    } *vt;
} Obj_822C6448;
typedef struct { Obj_822C6448 *p; void *rep; } Sp_822C6448;
typedef struct {
    char pad[0x14];
    unsigned int id;     /* 0x14 */
} Ctx_822C6448;
typedef struct {
    void *vt;
    Ctx_822C6448 ctx;    /* 0x4 */
} Self_822C6448;
extern Sp_822C6448 *fn_8247B210(Sp_822C6448 *out, Ctx_822C6448 *ctx, unsigned int id);
extern void fn_822315A0(void *);

void fn_822C6448(Self_822C6448 *self)
{
    Sp_822C6448 sp;
    unsigned char ok;
    Ctx_822C6448 *ctx = &self->ctx;

    fn_8247B210(&sp, ctx, ctx->id);
    ok = sp.p != 0;
    if (sp.rep != 0) {
        fn_822315A0(sp.rep);
    }
    if (ok) {
        fn_8247B210(&sp, ctx, ctx->id);
        sp.p->vt->f1c(sp.p);
        if (sp.rep != 0) {
            fn_822315A0(sp.rep);
        }
    }
}
