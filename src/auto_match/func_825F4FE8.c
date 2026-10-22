typedef struct {
    char pad[0x18];
    void *h;
} Res;

typedef struct {
    Res *res;
    int pad[7];
    int state;
    int pad2;
    int flag;
    int pad3[8];
    void *mem;
} Sub;

typedef struct {
    char pad[0x858];
    int *world;
    char pad2[0x8dc - 0x85c];
    Sub sub;
} Obj;

extern void fn_8251FA58(void *p);
extern void fn_82554DA8(Res *r);
extern void fn_82BFEDD8(void *h, int x);
extern void fn_82CE04E8(Obj *o);

void fn_825F4FE8(Obj *o)
{
    Sub *s = &o->sub;
    int *w;

    if (s->flag != 0) {
        s->flag = 0;
    }
    if (s->res != 0) {
        w = o->world;
        if (w[0x248 / 4] != 0) {
            ((char *)w)[w[w[0x248 / 4] + 0x8b] * 0x2c + 0x2e] = 0;
        }
        w = o->world;
        if (w[0x22c / 4] != 0) {
            ((char *)w)[w[w[0x22c / 4] + 0x84] * 0x2c + 0x2e] = 0;
        }
        fn_82CE04E8(o);
        if (s->state == 2 || s->state == 4) {
            if (s->res->h != 0) {
                fn_82BFEDD8(s->res->h, 0);
            }
            s->state = 1;
        }
        fn_82554DA8(s->res);
        s->res = 0;
        s->state = 0;
    }
    if (s->mem != 0) {
        fn_8251FA58(s->mem);
        s->mem = 0;
    }
}
