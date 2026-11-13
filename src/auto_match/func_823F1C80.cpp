typedef struct Item_823F1C80 {
    char *vt;
    int value;
} Item_823F1C80;

typedef struct RefCount_823F1C80 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_823F1C80;

typedef struct SharedPtr_823F1C80 {
    void *ptr;
    RefCount_823F1C80 *rep;
} SharedPtr_823F1C80;

typedef struct Sub_823F1C80 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823F1C80;

typedef struct Obj_823F1C80 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823F1C80 sub;
    int pad64;
    SharedPtr_823F1C80 a;
    SharedPtr_823F1C80 b;
    SharedPtr_823F1C80 c;
    SharedPtr_823F1C80 d;
    SharedPtr_823F1C80 e;
    SharedPtr_823F1C80 f;
    SharedPtr_823F1C80 g;
} Obj_823F1C80;

extern "C" {
extern void fn_828E3508(Obj_823F1C80 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *p, int a, int b, int c);
extern void fn_822315A0(RefCount_823F1C80 *rep);
extern SharedPtr_823F1C80 *fn_8223A7A8(SharedPtr_823F1C80 *sp, void *p);
extern char lbl_82197FB4[], lbl_821B47F8[], lbl_821B7204[], lbl_821B721C[], lbl_82196E94[];
extern char lbl_82196E48[], lbl_821B7114[];
}
namespace v2 { extern "C" char lbl_82196E94[]; }

extern "C" Obj_823F1C80 *fn_823F1C80(Obj_823F1C80 *o)
{
    Item_823F1C80 *m;
    void *r;
    void *p;
    RefCount_823F1C80 *rc;
    RefCount_823F1C80 *nrc;
    Sub_823F1C80 *s;
    SharedPtr_823F1C80 *sp;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82197FB4;
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_823F1C80 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B47F8;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_823F1C80 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B7204;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->c;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F1C80 *)fn_8265C9E0(0x10);
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
    m = (Item_823F1C80 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B721C;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->d;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F1C80 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->vt = v2::lbl_82196E94;
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
    m = (Item_823F1C80 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->e, r);
    m = (Item_823F1C80 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->f, r);
    m = (Item_823F1C80 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B7114;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->g, r);
    return o;
}
