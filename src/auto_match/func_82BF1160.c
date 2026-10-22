typedef struct Req Req;
typedef struct ReqVtbl {
    void *f0;
    void *f4;
    const char *(*getUrl)(Req *);
} ReqVtbl;

struct Req {
    ReqVtbl *vtbl;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
};

typedef struct Obj {
    char pad0[0x10];
    int f10;
    char pad14[0x64 - 0x14];
    unsigned int f64;
} Obj;

extern void fn_82BE5240(Obj *, int, const char *, ...);
extern void fn_82BEB838(Obj *, Req *);

void fn_82BF1160(Obj *param_1, Req *param_2)
{
    if (param_2->f14 == 0x54) {
        fn_82BE5240(param_1, 0x25a, "URL: %s", param_2->vtbl->getUrl(param_2));
        param_1->f10 = 0x18;
    }
    if (param_1->f64 != 0) {
        param_1->f64--;
    }
    fn_82BEB838(param_1, param_2);
}
