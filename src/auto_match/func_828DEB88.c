void *memset(void *d, int c, unsigned int n);
extern void fn_828AC428(void *p);
extern void fn_828BDDA0(void *p);
extern char lbl_820270D4[];
extern char lbl_820270D8[];

typedef struct Vec {
    int alloc;
    void *first;
    void *last;
    void *end;
} Vec;

typedef struct Obj {
    void *vt;
    char pad4[0x4c];
    void *vt2;
    char pad54[0x2c];
    __int64 q80;
    int d88;
    int d8c;
    char name[8];
    char b98[0x10];
    char ca8[0x24];
    Vec v1;
    Vec v2;
    int pec;
    char f0[4];
} Obj;

Obj *fn_828DEB88(Obj *o)
{
    fn_828BDDA0(o);
    o->q80 = 0;
    o->vt = lbl_820270D8;
    o->vt2 = lbl_820270D4;
    o->v1.first = 0;
    o->v1.last = 0;
    o->v1.end = 0;
    o->v2.first = 0;
    o->v2.last = 0;
    o->v2.end = 0;
    fn_828AC428(o->f0);
    memset(o->name, 0, sizeof(o->name));
    memset(o->b98, 0, sizeof(o->b98));
    memset(o->ca8, 0, sizeof(o->ca8));
    return o;
}
