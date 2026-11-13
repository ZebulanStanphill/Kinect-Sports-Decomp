typedef struct Item_82390BF8 {
    char *vt;
    int value;
} Item_82390BF8;

typedef struct SharedPtr_82390BF8 {
    void *ptr;
    void *rep;
} SharedPtr_82390BF8;

typedef struct Sub_82390BF8 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_82390BF8;

typedef struct Obj_82390BF8 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_82390BF8 sub;
    int pad64;
    SharedPtr_82390BF8 a;
    SharedPtr_82390BF8 b;
    SharedPtr_82390BF8 c;
    SharedPtr_82390BF8 d;
    SharedPtr_82390BF8 e;
    SharedPtr_82390BF8 f;
    SharedPtr_82390BF8 g;
    SharedPtr_82390BF8 h;
} Obj_82390BF8;

extern void fn_828E3508(Obj_82390BF8 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, unsigned int c);
extern SharedPtr_82390BF8 *fn_8223A7A8(SharedPtr_82390BF8 *sp, void *p);
extern char lbl_82196BF8[], lbl_82196E48[], lbl_82198494[], lbl_821B47F8[];

Obj_82390BF8 *fn_82390BF8(Obj_82390BF8 *o)
{
    Item_82390BF8 *m;
    void *r;
    Sub_82390BF8 *s;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82196BF8;
    m = (Item_82390BF8 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_82390BF8 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_82390BF8 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    m = (Item_82390BF8 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82198494;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->d, r);
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->e, r);
    m = (Item_82390BF8 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_821B47F8;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->f, r);
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->g, r);
    m = (Item_82390BF8 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82198494;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->h, r);
    return o;
}
