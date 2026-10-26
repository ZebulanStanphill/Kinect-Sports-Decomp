extern void fn_826C0B08(void *p);
extern void fn_8274CC38(void *p, int a);
extern unsigned int lbl_82013530;
extern unsigned int lbl_82013584;

typedef struct B2 { void *vt; int pad[7]; } B2;
typedef struct Z { int x30; int x34; } Z;
typedef struct S {
    void *vt;
    int pad[3];
    B2 b2;
    Z z;
} S;

S *fn_8274CF30(S *p, int a)
{
    Z *z;
    fn_826C0B08(p);
    p->vt = &lbl_82013584;
    p->b2.vt = &lbl_82013530;
    z = &p->z;
    z->x30 = 0;
    z->x34 = 0;
    fn_8274CC38(p, a);
    return p;
}
