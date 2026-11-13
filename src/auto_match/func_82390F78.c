typedef struct Item_82390F78 {
    char *vt;
    int value;
} Item_82390F78;

typedef struct SharedPtr_82390F78 {
    void *ptr;
    void *rep;
} SharedPtr_82390F78;

typedef struct Sub_82390F78 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_82390F78;

typedef struct Obj_82390F78 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_82390F78 sub;
    int pad64;
    SharedPtr_82390F78 a;
    SharedPtr_82390F78 b;
    SharedPtr_82390F78 c;
    SharedPtr_82390F78 d;
    SharedPtr_82390F78 e;
} Obj_82390F78;

extern void fn_828E3508(Obj_82390F78 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, int c);
extern SharedPtr_82390F78 *fn_8223A7A8(SharedPtr_82390F78 *sp, void *p);
extern char lbl_82196C18[], lbl_82196E48[], lbl_82198494[];

Obj_82390F78 *fn_82390F78(Obj_82390F78 *o)
{
    Item_82390F78 *m;
    void *r;
    Sub_82390F78 *s;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82196C18;
    m = (Item_82390F78 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_82390F78 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_82390F78 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    m = (Item_82390F78 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82198494;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->d, r);
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->e, r);
    return o;
}
