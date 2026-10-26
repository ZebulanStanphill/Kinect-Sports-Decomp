extern void fn_82C065A0(void *p);
extern void fn_82C065C8(void *p);
extern char lbl_820EBF28[];
typedef struct { void *vt; char pad[0x34]; int a, b, c, d, e, f; float h; } S;

S *fn_82C005C8(S *p)
{
    fn_82C065C8(p);
    p->vt = lbl_820EBF28;
    fn_82C065A0(p);
    p->a = 0;
    p->b = 0;
    p->c = 0;
    p->h = 0.0f;
    p->d = 0;
    p->e = 0;
    p->f = 0;
    return p;
}
