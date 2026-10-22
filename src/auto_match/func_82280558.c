extern void fn_827EF828(void *h, float f);
extern void fn_827EFFE8(void *h);
extern void fn_827F0180(void *h, void *a, int b, int c, int d);

typedef struct {
    char pad0[0x14];
    void ***items;
    char pad18[4];
    void *h;
    char pad20[0x20];
    float f;
    char pad44[4];
    unsigned char flag;
} Obj;

typedef struct {
    char pad0[8];
    int idx;
} Arg;

void fn_82280558(Obj *o, Arg *a)
{
    int idx = a->idx;
    if (o->flag) {
        fn_827EF828(o->h, o->f);
        fn_827EFFE8(o->h);
        fn_827F0180(o->h, *o->items[idx + 0x20], 1, 0, 0);
    }
}
