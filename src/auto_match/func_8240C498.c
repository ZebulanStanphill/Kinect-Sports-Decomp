typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f0;
    void *f4;
    void *(*get)(Obj *o);
} ObjVtbl;

typedef struct Sub Sub;
typedef struct SubVtbl {
    void *f0;
    void *f4;
    void *f8;
    int (*make)(Sub *s, void *arg);
} SubVtbl;

struct Sub {
    SubVtbl *vtbl;
};

typedef struct Arg {
    char pad[0x24];
    void *ref;
} Arg;

struct Obj {
    ObjVtbl *vtbl;
    char pad4[0x20];
    void **ctx;
    char pad28[0xec - 0x28];
    int busy;
    int padf0;
    void *snd;
};

extern void fn_8240BCE8(Obj *o, int a, Arg *arg, int v);
extern void fn_82508078(void *ctx, unsigned int id, int c);
extern void fn_824569A8(void *p);
extern void fn_822B17A8(void *p, int a, int b);
extern unsigned int lbl_821BA6C0[];

void fn_8240C498(Obj *o, Arg *arg)
{
    Sub *s;
    void *p;

    s = (Sub *)o->vtbl->get(o);
    fn_8240BCE8(o, 2, arg, s->vtbl->make(s, arg));
    fn_82508078(*o->ctx, lbl_821BA6C0[12], 0);
    fn_824569A8(o->snd);
    if (arg->ref != 0 && o->busy == 0) {
        p = *(void **)((char *)arg->ref + 0x34);
        if (p != 0) {
            fn_822B17A8(p, 0x14, 0);
        }
    }
}
