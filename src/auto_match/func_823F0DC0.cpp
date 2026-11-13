typedef struct Item_823F0DC0 {
    char *vt;
    int value;
} Item_823F0DC0;

typedef struct RefCount_823F0DC0 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_823F0DC0;

typedef struct SharedPtr_823F0DC0 {
    void *ptr;
    RefCount_823F0DC0 *rep;
} SharedPtr_823F0DC0;

typedef struct Sub_823F0DC0 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823F0DC0;

typedef struct Obj_823F0DC0 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823F0DC0 sub;
    int pad64;
    SharedPtr_823F0DC0 a;
    SharedPtr_823F0DC0 b;
    SharedPtr_823F0DC0 c;
    SharedPtr_823F0DC0 d;
    SharedPtr_823F0DC0 e;
    SharedPtr_823F0DC0 f;
    SharedPtr_823F0DC0 g;
} Obj_823F0DC0;

extern "C" {
extern void fn_828E3508(Obj_823F0DC0 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *p, int a, int b, int c);
extern void fn_822315A0(RefCount_823F0DC0 *rep);
extern SharedPtr_823F0DC0 *fn_8223A7A8(SharedPtr_823F0DC0 *sp, void *p);
extern char lbl_82197F74[], lbl_821B47F8[], lbl_82197924[], lbl_821B7144[], lbl_82196E94[];
extern char lbl_821B715C[], lbl_82198494[];
}
namespace v2 { extern "C" char lbl_82196E94[]; }

extern "C" Obj_823F0DC0 *fn_823F0DC0(Obj_823F0DC0 *o)
{
    Item_823F0DC0 *m;
    void *r;
    void *p;
    RefCount_823F0DC0 *rc;
    RefCount_823F0DC0 *nrc;
    Sub_823F0DC0 *s;
    SharedPtr_823F0DC0 *sp;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82197F74;
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_823F0DC0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B47F8;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_823F0DC0 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82197924;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    m = (Item_823F0DC0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B7144;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->d;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F0DC0 *)fn_8265C9E0(0x10);
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
    m = (Item_823F0DC0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B715C;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->e;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F0DC0 *)fn_8265C9E0(0x10);
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
    m = (Item_823F0DC0 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82197924;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->f, r);
    m = (Item_823F0DC0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82198494;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->g, r);
    return o;
}
