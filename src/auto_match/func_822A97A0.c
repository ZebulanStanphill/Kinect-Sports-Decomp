typedef struct Obj Obj;
typedef struct {
    void (*dtor)(Obj *o, int flag);
} ObjVT;
struct Obj {
    ObjVT *vt;
    int f4;
    int type;
    char padc[0x80 - 0xc];
    int f80;
};

typedef struct {
    char pad0[8];
    unsigned char *bits;
} BitSet;

typedef struct {
    char pad0[0xf0];
    BitSet *bs;
} Ctx;

typedef struct {
    char pad0[0x2c];
    Obj *obj;
    int f30;
    int f34;
    int f38;
    unsigned int f3c;
    char pad40[0x68 - 0x40];
    int f68;
    int f6c;
} Self;

extern void fn_8228ED20(Obj *o);
extern void fn_822A98E0(Self *s, int a);
extern Ctx *fn_822A9B80(void);
extern void fn_8266EC60(void);
extern int fn_82D7E470(void);

void fn_822A97A0(Self *s, int a)
{
    Obj *o;
    Ctx *c;
    unsigned int n;
    int b;

    if (s->f34 != 0) {
        o = s->obj;
        s->obj = 0;
        if (o != 0) {
            o->vt->dtor(o, 1);
        }
        s->f34 = 0;
    }
    o = s->obj;
    if (o != 0 && o->type == 10) {
        if (s->f34 == 0 && o->f80 != 0) {
            s->f38 = 1;
            c = fn_822A9B80();
            if (c != 0) {
                n = s->f3c;
                if (n != 0) {
                    c->bs->bits[n >> 3] |= 1 << (n & 7);
                }
            }
        }
        if (s->obj != 0 && s->f34 == 0) {
            fn_8228ED20(s->obj);
            s->f34 = 1;
            s->f30 = -1;
        }
    }
    fn_8266EC60();
    b = fn_82D7E470() == 0;
    if ((b && s->f68 == 0) || (!b && s->f68 != 0)) s->f68 ^= 1;
    if (s->f6c == 0 && s->obj == 0) {
        fn_822A98E0(s, a);
    }
}
