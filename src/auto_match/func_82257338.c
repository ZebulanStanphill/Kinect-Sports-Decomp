extern void fn_8288B338(void *p);
extern void fn_82897D88(void *p);
extern char lbl_82196884[];
extern char lbl_821970C0[];
extern char lbl_82197534[];
extern char lbl_82198278[];
extern char lbl_82198298[];

typedef struct M {
    void *vt;
    char pad[0x54];
} M;

typedef struct Obj {
    void *vt;
    char pad4[0x30];
    M m34;
    M m8c;
    M me4;
    M m13c;
    M m194;
    M m1ec;
} Obj;

static void M_dtor(M *m, void *vt)
{
    m->vt = vt;
    fn_82897D88(m);
}

void fn_82257338(Obj *o)
{
    o->vt = lbl_82198298;
    M_dtor(&o->m1ec, lbl_82197534);
    M_dtor(&o->m194, lbl_821970C0);
    M_dtor(&o->m13c, lbl_821970C0);
    M_dtor(&o->me4, lbl_82198278);
    M_dtor(&o->m8c, lbl_82198278);
    M_dtor(&o->m34, lbl_821970C0);
    o->vt = lbl_82196884;
    fn_8288B338(o);
}
