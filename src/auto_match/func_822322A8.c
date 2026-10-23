typedef struct M {
    void *vt;
    char pad[0x68 - 4];
} M;

typedef struct S {
    void *vt;
    char pad[0x34 - 4];
    M m34;
    M m9c;
    M m104;
    M m16c;
} S;

extern void fn_8288B338(S *p);
extern void fn_82897D88(M *m);
extern char lbl_82196884[];
extern char lbl_82196AAC[];
extern char lbl_821970C0[];
extern char lbl_82197534[];

static void M_dtor(M *m)
{
    m->vt = lbl_82197534;
    fn_82897D88(m);
}

static void M2_dtor(M *m)
{
    m->vt = lbl_821970C0;
    fn_82897D88(m);
}

static void Base_dtor(S *p)
{
    p->vt = lbl_82196884;
    fn_8288B338(p);
}

void fn_822322A8(S *p)
{
    p->vt = lbl_82196AAC;
    M2_dtor(&p->m16c);
    M_dtor(&p->m104);
    M_dtor(&p->m9c);
    M_dtor(&p->m34);
    Base_dtor(p);
}
