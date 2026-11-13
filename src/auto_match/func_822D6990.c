typedef struct Item_822D6990 {
    char *vt;
    int value;
} Item_822D6990;

typedef struct RefCount_822D6990 {
    char *vt;
    long uses;
    long weaks;
    void *ptr;
} RefCount_822D6990;

typedef struct SharedPtr_822D6990 {
    void *ptr;
    RefCount_822D6990 *rep;
} SharedPtr_822D6990;

typedef struct Sub_822D6990 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_822D6990;

typedef struct Obj_822D6990 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_822D6990 sub;
    int pad64;
    SharedPtr_822D6990 a;
    SharedPtr_822D6990 b;
    SharedPtr_822D6990 c;
} Obj_822D6990;

extern void fn_828E3508(Obj_822D6990 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, int c);
extern void fn_822315A0(RefCount_822D6990 *rep);
extern SharedPtr_822D6990 *fn_8223A7A8(SharedPtr_822D6990 *sp, void *p);
extern char lbl_82196E28[], lbl_82196E48[], lbl_821AD930[], lbl_82196E94[];

Obj_822D6990 *fn_822D6990(Obj_822D6990 *o)
{
    Item_822D6990 *m;
    void *r;
    void *p;
    RefCount_822D6990 *rc;
    RefCount_822D6990 *nrc;
    Sub_822D6990 *s;
    SharedPtr_822D6990 *sp;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82196E28;
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_822D6990 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821AD930;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->b;
    sp->ptr = 0;
    sp->rep = 0;
    rc = (RefCount_822D6990 *)fn_8265C9E0(0x10);
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
    m = (Item_822D6990 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    return o;
}
