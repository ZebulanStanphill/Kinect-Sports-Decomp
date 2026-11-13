typedef struct Item_82390920 {
    char *vt;
    int value;
} Item_82390920;

typedef struct SharedPtr_82390920 {
    void *ptr;
    void *rep;
} SharedPtr_82390920;

typedef struct Sub_82390920 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_82390920;

typedef struct Obj_82390920 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_82390920 sub;
    int pad64;
    SharedPtr_82390920 a;
    SharedPtr_82390920 b;
    SharedPtr_82390920 c;
    SharedPtr_82390920 d;
    SharedPtr_82390920 e;
    SharedPtr_82390920 f;
} Obj_82390920;

extern void fn_828E3508(Obj_82390920 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, int c);
extern SharedPtr_82390920 *fn_8223A7A8(SharedPtr_82390920 *sp, void *p);
extern char lbl_82196BE8[], lbl_82196E48[], lbl_82198494[], lbl_82197924[];

Obj_82390920 *fn_82390920(Obj_82390920 *o)
{
    Item_82390920 *m;
    void *r;
    Sub_82390920 *s;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82196BE8;
    m = (Item_82390920 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_82390920 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_82390920 *)fn_8265C9E0(8);
    if (m != 0) {
        { int *pv = &m->value; *pv = 0; }
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    m = (Item_82390920 *)fn_8265C9E0(8);
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
    m = (Item_82390920 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82197924;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->f, r);
    return o;
}
