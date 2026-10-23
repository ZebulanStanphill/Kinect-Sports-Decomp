typedef struct M { void *vt; char rest[0x54]; } M;
typedef struct S {
    void *vt;
    char pad[0x34 - 4];
    M m34;
    M m8c;
    char pad3[0xec - 0x8c - sizeof(M)];
    M mec;
} S;
extern void fn_8288B338(S *p);
extern void fn_82897D88(M *m);
extern char lbl_82196884[];
extern char lbl_821970C0[];
extern char lbl_821970D0[];
extern char lbl_821972AC[];
extern char lbl_82197DF8[];

static void M_dtor(M *m, void *vt)
{
    m->vt = vt;
    fn_82897D88(m);
}

static void Base_dtor(S *p)
{
    p->vt = lbl_82196884;
    fn_8288B338(p);
}

void fn_8224C0C0(S *p)
{
    p->vt = lbl_82197DF8;
    M_dtor(&p->mec, lbl_821970C0);
    M_dtor(&p->m8c, lbl_821970D0);
    M_dtor(&p->m34, lbl_821972AC);
    Base_dtor(p);
}
