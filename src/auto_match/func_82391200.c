typedef struct Item_82391200 {
    char *vt;
    int value;
} Item_82391200;

typedef struct SharedPtr_82391200 {
    void *ptr;
    void *rep;
} SharedPtr_82391200;

typedef struct Sub_82391200 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_82391200;

typedef struct Obj_82391200 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_82391200 sub;
    int pad64;
    SharedPtr_82391200 a;
    SharedPtr_82391200 b;
    SharedPtr_82391200 c;
    SharedPtr_82391200 d;
    SharedPtr_82391200 e;
    SharedPtr_82391200 f;
    SharedPtr_82391200 g;
    SharedPtr_82391200 h;
    SharedPtr_82391200 i;
} Obj_82391200;

extern void fn_828E3508(Obj_82391200 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, unsigned c);
extern SharedPtr_82391200 *fn_8223A7A8(SharedPtr_82391200 *sp, void *p);
extern char lbl_82196C28[], lbl_82196E48[], lbl_82198494[], lbl_821B47F8[];

Obj_82391200 *fn_82391200(Obj_82391200 *o)
{
    Item_82391200 *m;
    void *r;
    Sub_82391200 *s;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82196C28;
    m = (Item_82391200 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_82391200 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_82391200 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    m = (Item_82391200 *)fn_8265C9E0(8);
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
    m = (Item_82391200 *)fn_8265C9E0(8);
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
    m = (Item_82391200 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82198494;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->h, r);
    m = (Item_82391200 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82198494;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->i, r);
    return o;
}
