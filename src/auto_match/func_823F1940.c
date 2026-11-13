typedef struct Item_823F1940 {
    char *vt;
    int value;
} Item_823F1940;

typedef struct Rep_823F1940 {
    char *vt;
    int uses;
    int weaks;
    void *ptr;
} Rep_823F1940;

typedef struct SharedPtr_823F1940 {
    void *ptr;
    Rep_823F1940 *rep;
} SharedPtr_823F1940;

typedef struct Sub_823F1940 {
    int first;
    char pad04[0x18 - 0x4];
    int last;
} Sub_823F1940;

typedef struct Obj_823F1940 {
    char *vt;
    char pad04[0x48 - 0x4];
    Sub_823F1940 sub;
    int pad64;
    SharedPtr_823F1940 a;
    SharedPtr_823F1940 b;
    SharedPtr_823F1940 c;
    SharedPtr_823F1940 d;
    SharedPtr_823F1940 e;
    SharedPtr_823F1940 f;
} Obj_823F1940;

extern void fn_828E3508(Obj_823F1940 *o);
extern void *fn_8265C9E0(int size);
extern void *fn_828ABF58(void *mem, int a, int b, unsigned c);
extern SharedPtr_823F1940 *fn_8223A7A8(SharedPtr_823F1940 *sp, void *p);
extern void fn_822315A0(Rep_823F1940 *rep);
extern char lbl_82197FA4[], lbl_821B47F8[], lbl_82196E48[], lbl_82198494[], lbl_821B71D4[], lbl_82196E94[], lbl_82197924[];

Obj_823F1940 *fn_823F1940(Obj_823F1940 *o)
{
    Item_823F1940 *m;
    Rep_823F1940 *rep;
    Rep_823F1940 *mem;
    SharedPtr_823F1940 *sp;
    void *r;
    void *p;
    Sub_823F1940 *s;

    fn_828E3508(o);
    s = &o->sub;
    s->first = 0;
    s->last = 0;
    o->vt = lbl_82197FA4;
    r = fn_8265C9E0(0x18);
    if (r != 0) {
        r = fn_828ABF58(r, 1, 0, -1);
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->a, r);
    m = (Item_823F1940 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B47F8;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->b, r);
    m = (Item_823F1940 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82196E48;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->c, r);
    m = (Item_823F1940 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_82198494;
        r = m;
    } else {
        r = 0;
    }
    fn_8223A7A8(&o->d, r);
    m = (Item_823F1940 *)fn_8265C9E0(8);
    if (m != 0) {
        m->value = 0;
        m->vt = lbl_821B71D4;
        p = m;
    } else {
        p = 0;
    }
    sp = &o->e;
    sp->ptr = 0;
    sp->rep = 0;
    mem = (Rep_823F1940 *)fn_8265C9E0(0x10);
    if (mem != 0) {
        mem->uses = 1;
        mem->weaks = 1;
        mem->vt = lbl_82196E94;
        mem->ptr = p;
        rep = mem;
    } else {
        rep = 0;
    }
    if (sp->rep != 0) {
        fn_822315A0(sp->rep);
    }
    sp->rep = rep;
    sp->ptr = p;
    m = (Item_823F1940 *)fn_8265C9E0(8);
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
