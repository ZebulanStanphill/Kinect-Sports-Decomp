typedef struct Obj Obj;
typedef void (*VFn)(Obj *, int, int);
struct Obj {
    VFn *vtbl;
};

typedef struct Ctx {
    char pad0[8];
    char cs[0x2c];
    Obj *obj;
    int pad38;
    short s3c;
    short s3e;
    int vals[2];
    short s48;
} Ctx;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

void fn_830234C8(Ctx *p)
{
    Obj *o;
    int i;

    o = p->obj;
    if (o != 0) {
        o->vtbl[0x50 / 4](o, 0, 0);
    }
    RtlEnterCriticalSection(p->cs);
    p->s3c = 0;
    p->s3e = 0;
    p->s48 = 0;
    for (i = 0; i < 2; i++) {
        p->vals[i] = 0;
    }
    RtlLeaveCriticalSection(p->cs);
}
