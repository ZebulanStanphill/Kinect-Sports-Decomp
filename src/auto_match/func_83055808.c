typedef struct { int v[7]; } CRITICAL_SECTION;
extern void RtlEnterCriticalSection(CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(CRITICAL_SECTION *cs);

typedef struct Info {
    char pad0[0x50];
    unsigned __int64 x50;
    char pad58[0x84 - 0x58];
    unsigned int x84;
} Info;

struct Obj;
typedef struct Vtbl {
    void *slots[11];
    unsigned __int64 (*getPos)(struct Obj *self);
} Vtbl;

typedef struct Obj {
    Vtbl *vt;
    char pad4[0x18 - 0x4];
    char x18[0x20 - 0x18];
    unsigned int x20;
    char pad24[0x38 - 0x24];
    CRITICAL_SECTION cs;
    char pad54[0x58 - 0x54];
    unsigned __int64 x58;
    Info *info;
    int pad64;
    unsigned int x68;
    unsigned int x6c;
    int pad70;
    unsigned int pad0 : 4;
    unsigned int b4 : 1;
    unsigned int pad5 : 2;
    unsigned int b7 : 1;
    unsigned int pad8 : 24;
    char pad78[0x8c - 0x78];
    unsigned int x8c;
    unsigned int x90;
    int pad94;
    int x98;
    char pad9c[0xb8 - 0x9c];
    unsigned char xb8;
} Obj;

extern int fn_83055310(Obj *o, unsigned __int64 pos, unsigned int size);
extern void fn_830514A8(Obj *o);

int fn_83055808(Obj *o, void **out, unsigned __int64 *pos, unsigned int *size)
{
    unsigned __int64 p;
    unsigned int t;
    int n;

    *out = o->x18;
    RtlEnterCriticalSection(&o->cs);
    if (!o->b4 && (unsigned char)o->b7) {
        if (o->x68 > o->info->x84)
            *size = o->info->x84;
        else
            *size = o->x68;
        p = o->vt->getPos(o);
        *pos = p;
        if (o->x90 != 0) {
            t = o->x6c * o->x20;
            if (p >= (unsigned __int64)o->x90 + t)
                *pos = (unsigned __int64)o->x8c + t;
        }
        n = fn_83055310(o, *pos, *size);
        o->x98 += n;
        fn_830514A8(o);
        o->x58 = o->info->x50;
        o->xb8 |= 0x40;
        RtlLeaveCriticalSection(&o->cs);
        return 1;
    }
    RtlLeaveCriticalSection(&o->cs);
    return 0;
}
