typedef struct { int v[2]; } Ref_828CBBE0;
typedef struct Bits_828CBBE0 Bits_828CBBE0;
typedef struct Sizer_828CBBE0 Sizer_828CBBE0;
typedef struct {
    int (*f0)(Sizer_828CBBE0 *s);
    int (*f4)(Sizer_828CBBE0 *s);
    int (*getBits)(Sizer_828CBBE0 *s);
} SizerVt_828CBBE0;
struct Sizer_828CBBE0 { SizerVt_828CBBE0 *vt; };
typedef struct {
    char pad0[0x18];
    int id;
    char pad1c[0x6c - 0x1c];
    void *owner;
    char pad70[0x80 - 0x70];
    Ref_828CBBE0 ref;
    unsigned int value;
    unsigned char hasRef;
    unsigned char single;
    char pad8e[2];
    char ctx[0x10];
    unsigned int raw;
} Obj_828CBBE0;

extern void fn_828B57E8(Ref_828CBBE0 *r, void *owner, Bits_828CBBE0 *b);
extern int fn_828E9DA8(Bits_828CBBE0 *b);
extern int fn_828E9D90(Bits_828CBBE0 *b);
extern unsigned int fn_828E9FF8(Bits_828CBBE0 *b, int n);
extern Sizer_828CBBE0 *fn_8288A398(void);
extern Ref_828CBBE0 *fn_828B5580(Ref_828CBBE0 *d, Ref_828CBBE0 *s);
extern void fn_8288F730(void *owner, Ref_828CBBE0 *r, int id, Bits_828CBBE0 *b, void *ctx);

static __forceinline unsigned int readBits(Bits_828CBBE0 *b, int n)
{
    if (fn_828E9DA8(b) - fn_828E9D90(b) >= n) {
        return fn_828E9FF8(b, n);
    }
    return 0;
}

void fn_828CBBE0(Obj_828CBBE0 *o, Bits_828CBBE0 *b)
{
    Ref_828CBBE0 tmp;
    o->hasRef = readBits(b, 1) != 0;
    fn_828B57E8(&o->ref, o->owner, b);
    o->value = readBits(b, 8);
    if (o->hasRef) {
        o->single = readBits(b, 1) == 1;
        if (!o->single) {
            int id = o->id;
            void *ow = o->owner;
            fn_8288F730(ow, fn_828B5580(&tmp, &o->ref), id, b, o->ctx);
        }
    } else {
        Sizer_828CBBE0 *s = fn_8288A398();
        int n = s->vt->getBits(s);
        unsigned int v;
        if (n <= fn_828E9DA8(b) - fn_828E9D90(b)) {
            v = fn_828E9FF8(b, n);
        } else {
            v = 0;
        }
        o->raw = v;
    }
}
