typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;

extern void *fn_8265CA60(unsigned int size);
extern int fn_82F64840(U16 *dst, unsigned int dstCount, const U16 *src, unsigned int count);
extern void *memcpy(void *dst, const void *src, unsigned int size);
extern unsigned int lbl_82025404;

typedef struct Raw_828BA1C0 {
    U64 lo;
    U64 hi;
} Raw_828BA1C0;

typedef struct Fields_828BA1C0 {
    U8 type;
    U8 pad[7];
    unsigned int count;
    void *data;
} Fields_828BA1C0;

typedef union Value_828BA1C0 {
    Raw_828BA1C0 raw;
    Fields_828BA1C0 f;
} Value_828BA1C0;

typedef struct Obj_828BA1C0 {
    void *vtbl;
    int pad4;
    Value_828BA1C0 val;
    int kind;
} Obj_828BA1C0;

Obj_828BA1C0 *fn_828BA1C0(Obj_828BA1C0 *p, Value_828BA1C0 *src)
{
    Value_828BA1C0 *v;
    unsigned int n;

    p->kind = 0;
    p->vtbl = &lbl_82025404;
    v = &p->val;
    v->raw.lo = 0;
    v->raw.hi = 0;
    *v = *src;

    switch (p->val.f.type) {
    case 1: p->kind = 1; break;
    case 2: p->kind = 2; break;
    case 3: p->kind = 3; break;
    case 4: p->kind = 4; break;
    case 5: p->kind = 5; break;
    case 6: p->kind = 6; break;
    case 7: p->kind = 7; break;
    default: p->kind = 0; break;
    }

    if (p->kind == 4) {
        n = p->val.f.count;
        if (n != 0 && src->f.data != 0) {
            p->val.f.data = fn_8265CA60(n <= 0x7fffffff ? n * 2 : 0xffffffff);
            fn_82F64840((U16 *)p->val.f.data, p->val.f.count, (const U16 *)src->f.data,
                        p->val.f.count - 1);
            ((U16 *)p->val.f.data)[p->val.f.count - 1] = 0;
            return p;
        }
    } else if (p->kind == 6) {
        n = p->val.f.count;
        if (n != 0 && src->f.data != 0) {
            p->val.f.data = fn_8265CA60(n);
            memcpy(p->val.f.data, src->f.data, p->val.f.count);
            return p;
        }
    } else {
        return p;
    }
    p->val.f.data = 0;
    p->val.f.count = 0;
    return p;
}
