extern int fn_8267BF50(void *p);
extern void fn_8279B270(void *p);
extern void fn_8279B4E0(void *p);

typedef struct { int a; int b; int c; int d; int e; int f; int g; int h; int i; int j; int k; int l; } Owner;
typedef struct { int a; int b; Owner *o; } Ctx;

typedef struct {
    int f930;
    int f934;
    int f938;
    int f93c;
    char pad940[0x94c - 0x940];
    unsigned char b94c;
    unsigned char b94d;
} Sub;

static void sub_init(Sub *s, int v)
{
    s->f930 = 0;
    s->f938 = 0;
    s->f934 = 0;
    s->b94c = 0;
    s->b94d = 0;
    s->f93c = v;
}

typedef struct Obj {
    Ctx *ctx;
    int f4;
    int f8;
    int fc;
    char s10[0xbc - 0x10];
    int fbc;
    int fc0;
    int *fc4;
    int fc8;
    int fcc;
    int fd0;
    char sd4[0x180 - 0xd4];
    char s180[0x22c - 0x180];
    char s22c[0x504 - 0x22c];
    int f504;
    char pad508[0x930 - 0x508];
    Sub sub;
} Obj;

Obj *fn_8279E700(Obj *o, Ctx *ctx, int param_3)
{
    o->ctx = ctx;
    o->f4 = 0;
    o->f8 = 0;
    o->fc = 0;
    fn_8279B4E0(o->s10);
    o->fc0 = ctx->o->c == 0 ? fn_8267BF50(ctx->o) : *(int *)(ctx->o->c + 0x1c);
    o->fbc = 0;
    o->fc4 = &o->fbc;
    o->fd0 = 0;
    fn_8279B270(&o->fc4);
    fn_8279B4E0(o->sd4);
    fn_8279B4E0(o->s180);
    fn_8279B4E0(o->s22c);
    o->f504 = 0;
    sub_init(&o->sub, param_3);
    return o;
}
