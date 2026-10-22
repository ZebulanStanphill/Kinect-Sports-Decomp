typedef struct Elem {
    char pad0[0x20];
    float f20;
} Elem;

typedef struct Arr {
    Elem **items;
    int pad4[3];
    int index;
} Arr;

typedef struct Inner {
    char pad0[8];
    Arr ***pp;
} Inner;

typedef struct Self {
    char pad0[8];
    Inner *inner;
} Self;

typedef struct Ctx {
    char pad0[0x174];
    int f174;
    char pad1[0x2184 - 0x178];
    int f2184;
} Ctx;

typedef struct Ref {
    Ctx *ctx;
    void *f4;
} Ref;

typedef struct Out {
    char pad0[0x2e0];
    int f2e0;
    int f2e4;
    int f2e8;
} Out;

typedef struct Tmp {
    int a;
    int b;
} Tmp;

extern int lbl_831DCD58[];
extern void fn_822315A0(void *p);
extern Tmp *fn_82365BD8(Tmp *out, Ref *ref);
extern void fn_82374078(Inner *p, int a, int b);
extern void fn_8238CAC8(Self *self, Tmp *t);
extern void fn_8238CC68(Self *self, Tmp *t);

void fn_823881E8(Self *self, Ref *ref, Out *out, int p4, int idx, int p6, int id)
{
    Arr *arr;
    unsigned int v;

    if (idx < 0x18 && lbl_831DCD58[idx] == 0) {
        out->f2e4 = 0;
        out->f2e8 = 0;
        out->f2e0 = 0x18;
        ref->ctx->f174 = 1;
    } else if (ref->ctx->f2184 == id) {
        {
            Tmp tmp;
            fn_8238CAC8(self, fn_82365BD8(&tmp, ref));
        }
        arr = **self->inner->pp;
        v = (int)arr->items[arr->index]->f20;
        if (v >= 0x55) {
            fn_82374078(self->inner, 0, 0x34);
        }
    } else {
        Tmp tmp;
        fn_8238CC68(self, fn_82365BD8(&tmp, ref));
    }
    if (ref->f4 != 0) {
        fn_822315A0(ref->f4);
    }
}
