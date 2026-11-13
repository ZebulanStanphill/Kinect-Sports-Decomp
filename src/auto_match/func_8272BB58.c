typedef struct Ref_8272BB58 { int pad; long refs; } Ref_8272BB58;
typedef struct Var_8272BB58 { unsigned int tagged; int pad; } Var_8272BB58;
typedef struct Pair_8272BB58 { Var_8272BB58 *a; Var_8272BB58 *b; } Pair_8272BB58;

struct Sub_8272BB58;
typedef struct SubVt_8272BB58 {
    void *pad[15];
    void *(*get)(struct Sub_8272BB58 *s);
} SubVt_8272BB58;
typedef struct Sub_8272BB58 { SubVt_8272BB58 *vt; } Sub_8272BB58;

struct Item_8272BB58;
typedef struct ItemVt_8272BB58 {
    void *pad[2];
    unsigned int (*type)(struct Item_8272BB58 *s);
} ItemVt_8272BB58;
typedef struct Item_8272BB58 {
    ItemVt_8272BB58 *vt;
    int pad[2];
    Sub_8272BB58 *sub;
} Item_8272BB58;

typedef struct Self_8272BB58 {
    int pad;
    void *target;
} Self_8272BB58;

extern long _InterlockedExchangeAdd(long volatile *, long);
extern void fn_8267BE38(void *p);
extern void fn_8268C510(Var_8272BB58 *v, void *p);
extern void fn_82688D90(void *a, void *b, Pair_8272BB58 *p);

void fn_8272BB58(Self_8272BB58 *self, void *unused, Item_8272BB58 *item)
{
    Var_8272BB58 v;
    Pair_8272BB58 p;
    Ref_8272BB58 *r;

    if ((item->vt->type(item) & 0xff00) == 0x200) {
        fn_8268C510(&v, item->sub->vt->get(item->sub));
        p.a = &v;
        p.b = &v;
        fn_82688D90(self->target, self->target, &p);
        r = (Ref_8272BB58 *)(v.tagged & ~3u);
        if (_InterlockedExchangeAdd(&r->refs, -1) - 1 == 0) {
            fn_8267BE38(r);
        }
    }
}
