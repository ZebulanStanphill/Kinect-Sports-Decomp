typedef struct CS {
    char data[0x1c];
} CS;

typedef void (*Callback)(unsigned char id, int ctx, int arg);

typedef struct Obj {
    char pad0[0xf];
    unsigned char id;
    char pad10[0x80068 - 0x10];
    int f80068;
    int f8006c;
    int f80070;
    char pad80074[0x80080 - 0x80074];
    Callback cb;
    int cbctx;
    char pad80088[0x8008c - 0x80088];
    CS cs;
    char pad800a8[0x800bc - 0x800a8];
    int f800bc;
} Obj;

typedef struct Mgr {
    CS cs;
    char pad[0x58c - 0x1c];
    int f58c;
} Mgr;

extern void RtlEnterCriticalSection(CS *cs);
extern void RtlLeaveCriticalSection(CS *cs);
extern Mgr *fn_8245B458(void);
extern void fn_82A1EFC0(void *p, int c, unsigned int n);

void fn_8245AAA8(Obj *o, int arg)
{
    CS *cs;
    Mgr *m;

    if (o->cb) {
        o->cb(o->id, o->cbctx, arg);
        o->cb = 0;
    }
    o->f80070 = 0;
    o->f8006c = 0;
    o->f80068 = 0;
    cs = &o->cs;
    RtlEnterCriticalSection(cs);
    o->f800bc = 0;
    m = fn_8245B458();
    RtlEnterCriticalSection(&m->cs);
    m->f58c = 0;
    RtlLeaveCriticalSection(&m->cs);
    if (cs)
        RtlLeaveCriticalSection(cs);
    fn_82A1EFC0((char *)o + 0xc, 0, 0x8005a);
}
