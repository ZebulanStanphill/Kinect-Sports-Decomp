typedef struct M { void *vt; char rest[0x50]; } M;
typedef struct S {
    void *vt;
    char pad[0x2e8 - 4];
    M m2e8;
    M m33c;
    M m390;
} S;
extern void fn_8223B998(S *p);
extern void fn_8289D4C0(M *m);
extern char lbl_82196A24[];
extern char lbl_82196A3C[];
extern char lbl_82197080[];

static void M_dtor(M *m)
{
    m->vt = lbl_82197080;
    fn_8289D4C0(m);
}

static void Base_dtor(S *p)
{
    p->vt = lbl_82196A24;
    fn_8223B998(p);
}

void fn_82232188(S *p)
{
    p->vt = lbl_82196A3C;
    M_dtor(&p->m390);
    M_dtor(&p->m33c);
    M_dtor(&p->m2e8);
    Base_dtor(p);
}
