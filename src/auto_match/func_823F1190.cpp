typedef struct Item_823F1190 {
    char *vt;
    int value;
} Item_823F1190;

typedef struct RefCount_823F1190 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_823F1190;

typedef struct SharedPtr_823F1190 {
    void *ptr;
    RefCount_823F1190 *rep;
} SharedPtr_823F1190;

typedef struct Sub_823F1190 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823F1190;

typedef struct Obj_823F1190 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823F1190 sub;
    int pad64;
    SharedPtr_823F1190 a;
    SharedPtr_823F1190 b;
    SharedPtr_823F1190 c;
    SharedPtr_823F1190 d;
    SharedPtr_823F1190 e;
    SharedPtr_823F1190 f;
    SharedPtr_823F1190 g;
} Obj_823F1190;

extern "C" {
extern void fn_828E3508(Obj_823F1190 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, int c);
extern void fn_822315A0(RefCount_823F1190 *rep);
extern SharedPtr_823F1190 *fn_8223A7A8(SharedPtr_823F1190 *sp, void *p);
extern char lbl_82196E48[], lbl_82197F84[], lbl_821B47F8[], lbl_821B7174[], lbl_821B718C[], lbl_821B71A4[], lbl_821B71BC[];
extern char lbl_82196E94[];
}
namespace v2 { extern "C" char lbl_82196E94[]; }
namespace v3 { extern "C" char lbl_82196E94[]; }
namespace v4 { extern "C" char lbl_82196E94[]; }

extern "C" Obj_823F1190 *fn_823F1190(Obj_823F1190 *o)
{
    Item_823F1190 *m;
    void *r;
    void *p;
    RefCount_823F1190 *rc;
    RefCount_823F1190 *nrc;
    Sub_823F1190 *s;
    SharedPtr_823F1190 *sp;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82197F84;
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_823F1190 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B47F8;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_823F1190 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    m = (Item_823F1190 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B7174;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->d;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F1190 *)fn_8265C9E0(0x10);
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
    m = (Item_823F1190 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B718C;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->e;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F1190 *)fn_8265C9E0(0x10);
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
    m = (Item_823F1190 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B71A4;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->f;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F1190 *)fn_8265C9E0(0x10);
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
    m = (Item_823F1190 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B71BC;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->g;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823F1190 *)fn_8265C9E0(0x10);
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
    return o;
}
