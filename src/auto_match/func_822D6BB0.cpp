typedef struct Item_822D6BB0 {
    char *vt;
    int value;
} Item_822D6BB0;

typedef struct RefCount_822D6BB0 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_822D6BB0;

typedef struct SharedPtr_822D6BB0 {
    void *ptr;
    RefCount_822D6BB0 *rep;
} SharedPtr_822D6BB0;

typedef struct Sub_822D6BB0 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_822D6BB0;

typedef struct Obj_822D6BB0 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_822D6BB0 sub;
    int pad64;
    SharedPtr_822D6BB0 a;
    SharedPtr_822D6BB0 b;
    SharedPtr_822D6BB0 c;
} Obj_822D6BB0;

extern "C" void fn_828E3508(Obj_822D6BB0 *o);
extern "C" void *fn_8265C9E0(int size);
extern "C" void fn_822315A0(RefCount_822D6BB0 *rep);
extern "C" SharedPtr_822D6BB0 *fn_8223A7A8(SharedPtr_822D6BB0 *sp, void *p);
extern "C" char lbl_82196E38[], lbl_821AD978[], lbl_821AD990[], lbl_82196E94[], lbl_82197924[];

namespace v2 { extern "C" char lbl_82196E94[]; }

extern "C" Obj_822D6BB0 *fn_822D6BB0(Obj_822D6BB0 *o)
{
    Item_822D6BB0 *m;
    void *r;
    void *p;
    RefCount_822D6BB0 *rc;
    RefCount_822D6BB0 *nrc;
    Sub_822D6BB0 *s;
    SharedPtr_822D6BB0 *sp;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82196E38;
    m = (Item_822D6BB0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821AD978;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->a;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_822D6BB0 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->weaks = 1;
        rc->vt = lbl_82196E94;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    m = (Item_822D6BB0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821AD990;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->b;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_822D6BB0 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->weaks = 1;
        rc->vt = v2::lbl_82196E94;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    m = (Item_822D6BB0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82197924;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    return o;
}
