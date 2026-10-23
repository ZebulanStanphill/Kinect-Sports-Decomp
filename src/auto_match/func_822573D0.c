extern void fn_828974A8(void *p);
extern void fn_8289D4C0(void *p);
extern char lbl_82197070[];
extern char lbl_82197080[];
extern char lbl_82197100[];
extern char lbl_82198288[];
extern char lbl_821B9610[];

typedef struct M {
    void *vt;
    char pad[0x50];
} M;

typedef struct Obj {
    void *vt;
    char pad4[0x44];
    M m48;
    M m9c;
    M mf0;
    M m144;
    M m198;
    M m1ec;
} Obj;

static void M_dtor(M *m, void *vt)
{
    m->vt = vt;
    fn_8289D4C0(m);
}

void fn_822573D0(Obj *o)
{
    o->vt = lbl_82198288;
    M_dtor(&o->m1ec, lbl_82197100);
    M_dtor(&o->m198, lbl_82197080);
    M_dtor(&o->m144, lbl_82197080);
    M_dtor(&o->mf0, lbl_821B9610);
    M_dtor(&o->m9c, lbl_821B9610);
    M_dtor(&o->m48, lbl_82197080);
    o->vt = lbl_82197070;
    fn_828974A8(o);
}
