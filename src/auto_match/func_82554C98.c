typedef struct Inner_82554C98 Inner_82554C98;

typedef struct Res1_82554C98 {
    int pad0;
    int pad4;
    int value;
} Res1_82554C98;

typedef struct Res2_82554C98 {
    int pad[11];
    int value;
} Res2_82554C98;

typedef struct Vtbl_82554C98 {
    void *slot0;
    void *slot4;
    void *slot8;
    void *slotC;
    void *slot10;
    int (*f14)(Inner_82554C98 *self);
    void *slot18;
    void *slot1C;
    void *slot20;
    Res2_82554C98 *(*f24)(Inner_82554C98 *self);
} Vtbl_82554C98;

struct Inner_82554C98 {
    Vtbl_82554C98 *vt;
    char pad[0xb64];
    void *b68;
};

typedef struct Outer_82554C98 {
    int pad0;
    Inner_82554C98 *inner;
} Outer_82554C98;

extern Res1_82554C98 *fn_827F3C20(void *p);

void fn_82554C98(Outer_82554C98 *o, int *out)
{
    void *p;
    int v;

    *out = 0;
    p = o->inner->b68;
    if (p != 0) {
        Res1_82554C98 *r = fn_827F3C20(p);
        if (r == 0) {
            return;
        }
        v = r->value;
    } else {
        Res2_82554C98 *r2;
        if (o->inner->vt->f14(o->inner) == 0) {
            return;
        }
        r2 = o->inner->vt->f24(o->inner);
        if (r2 == 0) {
            return;
        }
        v = r2->value;
    }
    *out = v;
}
