typedef struct { int v[2]; } Ref_828C7498;
typedef struct Bits_828C7498 Bits_828C7498;
typedef struct {
    char pad0[0x6c];
    void *owner;
    char pad70[0x80 - 0x70];
    Ref_828C7498 ref;
    unsigned v88;
    unsigned v8c;
    char ctx[0x14];
    unsigned char hasInfo;
    unsigned char flag;
} Obj_828C7498;

extern void fn_828B57E8(Ref_828C7498 *r, void *owner, Bits_828C7498 *b);
extern int fn_828E9DA8(Bits_828C7498 *b);
extern int fn_828E9D90(Bits_828C7498 *b);
extern unsigned fn_828E9FF8(Bits_828C7498 *b, int n);
extern void *fn_8289F350(void *owner, unsigned id);
extern int fn_82897BD0(void *info);
extern Ref_828C7498 *fn_828B5580(Ref_828C7498 *d, Ref_828C7498 *s);
extern void fn_8288F730(void *owner, Ref_828C7498 *r, int id, Bits_828C7498 *b, void *ctx);

static __forceinline unsigned readBits(Bits_828C7498 *b, int n)
{
    if (fn_828E9DA8(b) - fn_828E9D90(b) >= n) {
        return fn_828E9FF8(b, n);
    }
    return 0;
}

void fn_828C7498(Obj_828C7498 *o, Bits_828C7498 *b)
{
    Ref_828C7498 tmp;
    void *info;
    fn_828B57E8(&o->ref, o->owner, b);
    o->flag = readBits(b, 1) != 0;
    o->v88 = readBits(b, 8);
    o->v8c = readBits(b, 16);
    info = fn_8289F350(o->owner, o->v8c);
    o->hasInfo = info != 0;
    if (o->hasInfo) {
        void *ow = o->owner;
        int id = fn_82897BD0(info);
        fn_8288F730(ow, fn_828B5580(&tmp, &o->ref), id, b, o->ctx);
    } else {
        void *ow = o->owner;
        fn_8288F730(ow, fn_828B5580(&tmp, &o->ref), -1, b, o->ctx);
    }
}
