typedef struct Item_823F2810 {
    char *vt;
    int value;
} Item_823F2810;

typedef struct SharedPtr_823F2810 {
    void *ptr;
    void *rep;
} SharedPtr_823F2810;

typedef struct Sub_823F2810 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823F2810;

typedef struct Obj_823F2810 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823F2810 sub;
    int pad64;
    SharedPtr_823F2810 a;
    SharedPtr_823F2810 b;
    SharedPtr_823F2810 c;
    SharedPtr_823F2810 d;
    SharedPtr_823F2810 e;
    SharedPtr_823F2810 f;
} Obj_823F2810;

extern void fn_828E3508(Obj_823F2810 *o);
extern void *fn_8265C9E0(int size);
extern SharedPtr_823F2810 *fn_8223A7A8(SharedPtr_823F2810 *sp, void *p);
extern char lbl_82197FE4[], lbl_82196E48[], lbl_821B7234[], lbl_82197924[], lbl_821B7114[], lbl_821B724C[];

Obj_823F2810 *fn_823F2810(Obj_823F2810 *o)
{
    Item_823F2810 *m;
    void *r;
    Sub_823F2810 *s;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82197FE4;
    m = (Item_823F2810 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_823F2810 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_821B7234;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_823F2810 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82197924;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    m = (Item_823F2810 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82197924;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->d, r);
    m = (Item_823F2810 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_821B7114;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->e, r);
    m = (Item_823F2810 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_821B724C;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->f, r);
    return o;
}
