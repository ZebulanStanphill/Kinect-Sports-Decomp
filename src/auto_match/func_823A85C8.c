typedef struct Item_823A85C8 {
    char *vt;
    int value;
} Item_823A85C8;

typedef struct RefCount_823A85C8 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_823A85C8;

typedef struct SharedPtr_823A85C8 {
    void *ptr;
    RefCount_823A85C8 *rep;
} SharedPtr_823A85C8;

typedef struct Sub_823A85C8 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823A85C8;

typedef struct Obj_823A85C8 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823A85C8 sub;
    int pad64;
    SharedPtr_823A85C8 a;
    SharedPtr_823A85C8 b;
    SharedPtr_823A85C8 c;
} Obj_823A85C8;

extern void fn_828E3508(Obj_823A85C8 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, int c);
extern void fn_822315A0(RefCount_823A85C8 *rep);
extern SharedPtr_823A85C8 *fn_8223A7A8(SharedPtr_823A85C8 *sp, void *p);
extern char lbl_8219736C[], lbl_821B47F8[], lbl_821B560C[], lbl_82196E94[];

Obj_823A85C8 *fn_823A85C8(Obj_823A85C8 *o)
{
    Item_823A85C8 *m;
    void *r;
    void *p;
    RefCount_823A85C8 *rc;
    RefCount_823A85C8 *nrc;
    Sub_823A85C8 *s;
    SharedPtr_823A85C8 *sp;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_8219736C;
    m = (Item_823A85C8 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B47F8;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_823A85C8 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B560C;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->b;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_823A85C8 *)fn_8265C9E0(0x10);
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
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    return o;
}
