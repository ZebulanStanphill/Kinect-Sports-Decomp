typedef struct { char pad[0x288]; void *heap; } Ctx78;
typedef struct { char pad[0x78]; Ctx78 *c78; } Ctx;
typedef struct { unsigned char flag; } Target;
typedef struct {
    int f0;
    Target *target;
    char pad8[0x18 - 8];
    Ctx *ctx;
    int mode;
} Obj;
typedef struct { unsigned char type; } Info;

extern void *fn_8267B890(void *heap, int size, int flags);
extern void fn_826824B0(void *p);
extern Info *fn_826957D0(Obj *o, int idx);
extern void fn_826959C8(Target *t);
extern void *fn_82696958(Info *info, Ctx *ctx);
extern void fn_82696BC8(Target *t, void *p);
extern void *fn_826C2E50(void *mem, Ctx *ctx);

static unsigned char isType(Info *info)
{
    return info->type == 8 || info->type == 0xb;
}

void fn_826C3818(Obj *o)
{
    if (o->mode == 1) {
        if (isType(fn_826957D0(o, 0)) || fn_826957D0(o, 0)->type == 0xb) {
            fn_82696BC8(o->target, fn_82696958(fn_826957D0(o, 0), o->ctx));
        } else {
            Target *t = o->target;
            fn_826959C8(t);
            t->flag = 1;
        }
    } else {
        void *mem = fn_8267B890(o->ctx->c78->heap, 0x34, 0);
        void *p = mem ? fn_826C2E50(mem, o->ctx) : 0;
        fn_82696BC8(o->target, p);
        if (p) {
            fn_826824B0(p);
        }
    }
}
