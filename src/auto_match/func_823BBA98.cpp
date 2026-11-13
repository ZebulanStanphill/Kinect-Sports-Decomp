typedef struct Item_823BBA98 {
    char *vt;
    int value;
} Item_823BBA98;

typedef struct RefCount_823BBA98 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_823BBA98;

typedef struct SharedPtr_823BBA98 {
    void *ptr;
    RefCount_823BBA98 *rep;
} SharedPtr_823BBA98;

typedef struct Sub_823BBA98 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823BBA98;

typedef struct Obj_823BBA98 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823BBA98 sub;
    int pad64;
    SharedPtr_823BBA98 a;
    SharedPtr_823BBA98 b;
} Obj_823BBA98;

extern "C" {
void fn_828E3508(Obj_823BBA98 *o);
void *fn_8265C9E0(int size);
void fn_822315A0(RefCount_823BBA98 *rep);
extern char lbl_821982A0[], lbl_821B5E1C[], lbl_821B5E34[], lbl_82196E94[];
}
/* The two _Ref_count vtables were folded into one symbol at link time. */
namespace v2 { extern "C" char lbl_82196E94[]; }

extern "C" Obj_823BBA98 *fn_823BBA98(Obj_823BBA98 *o)
{
    Item_823BBA98 *m;
    void *p;
    RefCount_823BBA98 *rc;
    RefCount_823BBA98 *nrc;
    Sub_823BBA98 *s;
    SharedPtr_823BBA98 *sp;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_821982A0;
    m = (Item_823BBA98 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B5E1C;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->a;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823BBA98 *)fn_8265C9E0(0x10);
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
    m = (Item_823BBA98 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B5E34;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->b;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823BBA98 *)fn_8265C9E0(0x10);
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
    return o;
}
