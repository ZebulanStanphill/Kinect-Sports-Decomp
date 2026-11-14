typedef struct Item_823F23B0 {
    char *vt;
    int value;
} Item_823F23B0;

typedef struct RefCount_823F23B0 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_823F23B0;

typedef struct SharedPtr_823F23B0 {
    void *ptr;
    RefCount_823F23B0 *rep;
} SharedPtr_823F23B0;

typedef struct Sub_823F23B0 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823F23B0;

typedef struct Obj_823F23B0 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823F23B0 sub;
    int pad64;
    SharedPtr_823F23B0 a;
    SharedPtr_823F23B0 b;
    SharedPtr_823F23B0 c;
    SharedPtr_823F23B0 d;
    SharedPtr_823F23B0 e;
    SharedPtr_823F23B0 f;
    SharedPtr_823F23B0 g;
} Obj_823F23B0;

extern "C" {
extern void fn_828E3508(Obj_823F23B0 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, int c);
extern void fn_822315A0(RefCount_823F23B0 *rep);
extern SharedPtr_823F23B0 *fn_8223A7A8(SharedPtr_823F23B0 *sp, void *p);
extern char lbl_82196E48[], lbl_82197FD4[], lbl_821B7174[], lbl_821B718C[], lbl_821B71A4[], lbl_821B71BC[], lbl_821B7234[], lbl_821B724C[];
extern char lbl_82196E94[];
}
namespace v2 { extern "C" char lbl_82196E94[]; }
namespace v3 { extern "C" char lbl_82196E94[]; }
namespace v4 { extern "C" char lbl_82196E94[]; }

extern "C" Obj_823F23B0 *fn_823F23B0(Obj_823F23B0 *o)
{
    Item_823F23B0 *m;
    void *r;
    void *p;
    RefCount_823F23B0 *rc;
    RefCount_823F23B0 *nrc;
    Sub_823F23B0 *s;
    SharedPtr_823F23B0 *sp;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82197FD4;
    m = (Item_823F23B0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_823F23B0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B7234;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_823F23B0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B71A4;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->c;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F23B0 *)fn_8265C9E0(0x10);
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
    m = (Item_823F23B0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B718C;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->d;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F23B0 *)fn_8265C9E0(0x10);
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
    m = (Item_823F23B0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B7174;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->e;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F23B0 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->weaks = 1;
        rc->vt = v3::lbl_82196E94;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    m = (Item_823F23B0 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B71BC;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->f;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F23B0 *)fn_8265C9E0(0x10);
    if (rc != 0) {
        rc->ptr = p;
        rc->uses = 1;
        rc->weaks = 1;
        rc->vt = v4::lbl_82196E94;
        nrc = rc;
    } else {
        nrc = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = nrc;
    sp->ptr = p;
    m = (Item_823F23B0 *)fn_8265C9E0(8);
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
