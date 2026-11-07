typedef struct Head_8303A030 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned short d;
    unsigned short e;
} Head_8303A030;

typedef struct Item_8303A030 {
    Head_8303A030 h;
    unsigned int rest[6];
} Item_8303A030;

typedef struct Obj_8303A030 {
    unsigned char pad[0x4c];
    unsigned char kind;
    unsigned char level;
} Obj_8303A030;

extern int fn_83037510(Item_8303A030 *item, unsigned short d, unsigned int b);
extern void fn_83047D88(Item_8303A030 *dst, Item_8303A030 *src, Obj_8303A030 *o);
extern void fn_83037590(Item_8303A030 *item);

static __forceinline unsigned char fn_8303A030_ok(Obj_8303A030 *o)
{
    unsigned char ok;
    if (o->level <= 2 || o->kind == 8 || o->kind == 9 || o->kind == 10 || o->kind == 11)
        ok = 0;
    else
        ok = 1;
    return ok;
}

int fn_8303A030(Obj_8303A030 *o, Item_8303A030 *p)
{
    Item_8303A030 tmp;
    int r;

    if (fn_8303A030_ok(o)) {
        tmp = *p;
        r = fn_83037510(&tmp, p->h.d, p->h.b);
        if (r != 1)
            return r;
        tmp.h.e = p->h.e;
        fn_83047D88(p, &tmp, o);
        fn_83037590(p);
        p->h = tmp.h;
    }
    return 1;
}
