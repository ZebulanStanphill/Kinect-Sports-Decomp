typedef struct Sub {
    int f0;
    int f4;
    int f8;
    int fc;
} Sub;

typedef struct Obj {
    void *vtbl;
    char pad4[0x50 - 0x4];
    Sub f50;
    Sub f60;
    __int64 f70;
    short f78;
    short f7a;
    int f7c;
    char f80;
    int f84;
    char f88;
    int f8c;
    char f90;
    int f94;
} Obj;

extern void fn_82BE5908(Obj *, int, const char *);
extern char lbl_820EAFB0[];

static void Sub_init(Sub *s)
{
    s->f0 = 0;
    s->f4 = 0;
    s->f8 = 0;
    s->fc = 0;
}

Obj *fn_82BEBD00(Obj *param_1)
{
    fn_82BE5908(param_1, 0x1011, "RequestLocateService");
    param_1->vtbl = lbl_820EAFB0;
    Sub_init(&param_1->f50);
    Sub_init(&param_1->f60);
    param_1->f70 = 0;
    param_1->f78 = 0;
    param_1->f7a = 0;
    param_1->f7c = 0;
    param_1->f80 = 0;
    param_1->f84 = 0;
    param_1->f88 = 0;
    param_1->f8c = 0;
    param_1->f90 = 0;
    param_1->f94 = 0;
    return param_1;
}
