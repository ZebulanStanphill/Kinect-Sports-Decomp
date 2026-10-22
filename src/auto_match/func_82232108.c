typedef struct M { void *vt; char rest[0x54]; } M;
typedef struct S {
    void *vt;
    char pad[0x2fc - 4];
    M m2fc;
    M m354;
    M m3ac;
} S;
extern void fn_8223BC88(S *p);
extern void fn_82897D88(M *m);
extern char lbl_82196A34[];
extern char lbl_82196A4C[];
extern char lbl_821970C0[];

static void M_dtor(M *m)
{
    m->vt = lbl_821970C0;
    fn_82897D88(m);
}

static void Base_dtor(S *p)
{
    p->vt = lbl_82196A34;
    fn_8223BC88(p);
}

void fn_82232108(S *p)
{
    p->vt = lbl_82196A4C;
    M_dtor(&p->m3ac);
    M_dtor(&p->m354);
    M_dtor(&p->m2fc);
    Base_dtor(p);
}
