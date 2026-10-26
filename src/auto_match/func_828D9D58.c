extern void fn_828BDDA0(void *p);
extern unsigned int lbl_82025C44;
extern unsigned int lbl_82025C48;

typedef struct Z { int x84; int x88; int x8c; int x90; int x94; } Z;
typedef struct S {
    void *vt;
    int pad[19];
    void *vt2;
    int pad2[11];
    int x80;
    Z z;
} S;

S *fn_828D9D58(S *p, int a)
{
    Z *z;
    fn_828BDDA0(p);
    p->x80 = a;
    p->vt = &lbl_82025C48;
    p->vt2 = &lbl_82025C44;
    z = &p->z;
    z->x84 = 0;
    z->x88 = 0;
    z->x8c = 0;
    z->x94 = 0;
    return p;
}
