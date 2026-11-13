typedef struct Item_823F2040 {
    char *vt;
    int value;
} Item_823F2040;

typedef struct RefCount_823F2040 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_823F2040;

typedef struct SharedPtr_823F2040 {
    void *ptr;
    RefCount_823F2040 *rep;
} SharedPtr_823F2040;

typedef struct Sub_823F2040 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823F2040;

typedef struct Obj_823F2040 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823F2040 sub;
    int pad64;
    SharedPtr_823F2040 a;
    SharedPtr_823F2040 b;
    SharedPtr_823F2040 c;
    SharedPtr_823F2040 d;
    SharedPtr_823F2040 e;
    SharedPtr_823F2040 f;
    SharedPtr_823F2040 g;
} Obj_823F2040;

extern void fn_828E3508(Obj_823F2040 *o);
extern void *fn_8265C9E0(int size);
extern void fn_822315A0(RefCount_823F2040 *rep);
extern SharedPtr_823F2040 *fn_8223A7A8(SharedPtr_823F2040 *sp, void *p);
extern char lbl_82197FC4[], lbl_82196E48[], lbl_821B7234[], lbl_82198494[], lbl_821B721C[];
extern char lbl_82196E94[], lbl_821B7114[], lbl_821B724C[];

Obj_823F2040 *fn_823F2040(Obj_823F2040 *o)
{
    Item_823F2040 *m;
    void *r;
    void *p;
    RefCount_823F2040 *rc;
    RefCount_823F2040 *nrc;
    Sub_823F2040 *s;
    SharedPtr_823F2040 *sp;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82197FC4;
    m = (Item_823F2040 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_823F2040 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B7234;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_823F2040 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    m = (Item_823F2040 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82198494;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->d, r);
    m = (Item_823F2040 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B721C;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->e;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F2040 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->vt = lbl_82196E94;
        rc->weaks = 1;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    m = (Item_823F2040 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B7114;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->f, r);
    m = (Item_823F2040 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B724C;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->g, r);
    return o;
}
