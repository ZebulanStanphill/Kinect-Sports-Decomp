typedef struct {
    int f0;
    unsigned int key;
    unsigned char seq;
} Chan_8289B290;
typedef struct {
    int f0;
    int f4;
    char pad8[8];
} Tbl_8289B290;
typedef struct Src_8289B290 Src_8289B290;
typedef struct {
    void *f0;
    void *f4;
    Chan_8289B290 *(*GetA)(Src_8289B290 *s);
    void *fc;
    char *(*GetB)(Src_8289B290 *s);
    void *f14;
    Chan_8289B290 *(*GetC)(Src_8289B290 *s);
} SrcVt_8289B290;
struct Src_8289B290 { SrcVt_8289B290 *vt; };
typedef struct {
    int f0;
    char f4[0x14];
    void *f18;
    int f1c;
    Src_8289B290 *src;
} Obj_8289B290;
extern void fn_82897BE0(void *p);
extern int fn_8240D928(unsigned int key);
extern unsigned char fn_82899280(char *t, int e, int arg, int z);
extern void fn_82898308(char *t, int e, int arg, int z);
extern unsigned char fn_82898C40(char *t, int e, int arg, int z);
extern void fn_82243568(char *t, int e, int arg, int z);
extern void fn_8289AC08(Obj_8289B290 *o, int a, int b, unsigned char c, unsigned int key);

static __forceinline Chan_8289B290 *GetA_8289B290(Obj_8289B290 *o)
{
    return o->src != 0 ? o->src->vt->GetA(o->src) : 0;
}
static __forceinline char *GetB_8289B290(Obj_8289B290 *o)
{
    return o->src != 0 ? o->src->vt->GetB(o->src) : 0;
}
static __forceinline Chan_8289B290 *GetC_8289B290(Obj_8289B290 *o)
{
    return o->src != 0 ? o->src->vt->GetC(o->src) : 0;
}

static __forceinline unsigned int SeqDelta_8289B290(unsigned char check, unsigned char seq, unsigned char cur)
{
    unsigned int d = 0;
    if (check) {
        d = seq - cur;
        if (d >= 0x100) {
            d += 0x100;
        }
    }
    return d;
}

static __forceinline int SeqOk_8289B290(unsigned char check, unsigned int d)
{
    if (check) {
        if (d == 0 || d >= 0x80) {
            return 0;
        }
    }
    return 1;
}

int fn_8289B290(Obj_8289B290 *o, unsigned int key, unsigned char check, unsigned char seq, int arg)
{
    unsigned int d;
    unsigned int b;
    fn_82897BE0(o->f18);
    if (o->src != 0 && o->src->vt->GetA(o->src) != 0) {
        Chan_8289B290 *c = GetA_8289B290(o);
        if (key != c->key) {
            return 1;
        }
        d = SeqDelta_8289B290(check, seq, c->seq);
        if (!SeqOk_8289B290(check, d)) {
            return 1;
        }
        if (check) {
            fn_82897BE0(o->f18);
            c->seq = seq;
        }
    } else if (o->src != 0 && o->src->vt->GetB(o->src) != 0) {
        char *t = GetB_8289B290(o);
        int e = fn_8240D928(key);
        d = SeqDelta_8289B290(check, seq, (unsigned char)(e + t)[4]);
        if (!SeqOk_8289B290(check, d)) {
            return 1;
        }
        if (check) {
            (e + t)[4] = seq;
        }
        b = fn_82899280(t + 8, e, arg, 0) == 0;
        fn_8289AC08(o, 0, 0, b != 0, key);
        if (b) {
            fn_82898308(t + 8, e, arg, 0);
        }
        fn_8289AC08(o, 0, 1, b != 0, key);
        return 1;
    } else {
        Chan_8289B290 *c;
        if (o->src == 0 || o->src->vt->GetC(o->src) == 0) {
            return 1;
        }
        c = GetC_8289B290(o);
        if (key != c->key) {
            return 1;
        }
        d = SeqDelta_8289B290(check, seq, c->seq);
        if (!SeqOk_8289B290(check, d)) {
            return 1;
        }
        if (check) {
            c->seq = seq;
        }
    }
    b = fn_82898C40(o->f4, 0, arg, 0) == 0;
    fn_8289AC08(o, 0, 0, b != 0, 0);
    if (b) {
        fn_82243568(o->f4, 0, arg, 0);
    }
    fn_8289AC08(o, 0, 1, b != 0, 0);
    return 1;
}
