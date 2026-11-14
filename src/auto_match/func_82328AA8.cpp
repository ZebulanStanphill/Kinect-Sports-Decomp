typedef struct Item_82328AA8 {
    char *vt;
    int value;
} Item_82328AA8;

typedef struct RefCount_82328AA8 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_82328AA8;

typedef struct SharedPtr_82328AA8 {
    void *ptr;
    RefCount_82328AA8 *rep;
} SharedPtr_82328AA8;

typedef struct Sub_82328AA8 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_82328AA8;

typedef struct Obj_82328AA8 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_82328AA8 sub;
    int pad64;
    SharedPtr_82328AA8 a;
    SharedPtr_82328AA8 b;
    SharedPtr_82328AA8 c;
    SharedPtr_82328AA8 d;
    SharedPtr_82328AA8 e;
    SharedPtr_82328AA8 f;
    SharedPtr_82328AA8 g;
} Obj_82328AA8;

extern "C" {
extern void fn_828E3508(Obj_82328AA8 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, int c);
extern void fn_822315A0(RefCount_82328AA8 *rep);
extern SharedPtr_82328AA8 *fn_8223A7A8(SharedPtr_82328AA8 *sp, void *p);
extern char lbl_82196E48[], lbl_82198198[], lbl_82198494[], lbl_821B03CC[], lbl_821B04D0[], lbl_821B04E8[], lbl_821B0500[];
extern char lbl_82196E94[];
}
namespace v2 { extern "C" char lbl_82196E94[]; }
namespace v3 { extern "C" char lbl_82196E94[]; }
namespace v4 { extern "C" char lbl_82196E94[]; }

extern "C" Obj_82328AA8 *fn_82328AA8(Obj_82328AA8 *o)
{
    Item_82328AA8 *m;
    void *r;
    void *p;
    RefCount_82328AA8 *rc;
    RefCount_82328AA8 *nrc;
    Sub_82328AA8 *s;
    SharedPtr_82328AA8 *sp;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82198198;
    m = (Item_82328AA8 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_82328AA8 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82198494;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_82328AA8 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B04D0;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->c;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_82328AA8 *)fn_8265C9E0(0x10);
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
    m = (Item_82328AA8 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B04E8;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->d;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_82328AA8 *)fn_8265C9E0(0x10);
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
    m = (Item_82328AA8 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B03CC;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->e;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_82328AA8 *)fn_8265C9E0(0x10);
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
    m = (Item_82328AA8 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B0500;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->f;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_82328AA8 *)fn_8265C9E0(0x10);
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
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->g, r);
    return o;
}
