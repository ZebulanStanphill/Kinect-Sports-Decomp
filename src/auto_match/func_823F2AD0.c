typedef struct Item_823F2AD0 {
    char *vt;
    int value;
} Item_823F2AD0;

typedef struct SharedPtr_823F2AD0 {
    void *ptr;
    void *rep;
} SharedPtr_823F2AD0;

typedef struct Sub_823F2AD0 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823F2AD0;

typedef struct Obj_823F2AD0 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823F2AD0 sub;
    int pad64;
    SharedPtr_823F2AD0 a;
    SharedPtr_823F2AD0 b;
    SharedPtr_823F2AD0 c;
    SharedPtr_823F2AD0 d;
} Obj_823F2AD0;

extern void fn_828E3508(Obj_823F2AD0 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, int c);
extern SharedPtr_823F2AD0 *fn_8223A7A8(SharedPtr_823F2AD0 *sp, void *p);
extern char lbl_82198014[], lbl_82197924[], lbl_821B47F8[], lbl_82196E48[];

Obj_823F2AD0 *fn_823F2AD0(Obj_823F2AD0 *o)
{
    Item_823F2AD0 *m;
    void *r;
    Sub_823F2AD0 *s;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82198014;
    m = (Item_823F2AD0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82197924;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_823F2AD0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B47F8;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    m = (Item_823F2AD0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->d, r);
    return o;
}
