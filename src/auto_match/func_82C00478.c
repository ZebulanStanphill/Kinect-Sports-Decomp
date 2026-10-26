extern unsigned int lbl_820EBEE8;
extern void fn_82C065C8(void *p);
extern void fn_82C065A0(void *p);
typedef struct S { void *vt; char pad[0x34]; int x38; int x3c; int x40; int x44; float x48; } S;

S *fn_82C00478(S *p)
{
    fn_82C065C8(p);
    p->vt = &lbl_820EBEE8;
    fn_82C065A0(p);
    p->x38 = 0;
    p->x3c = 0;
    p->x40 = 0;
    p->x48 = 30.0f;
    p->x44 = 0;
    return p;
}
