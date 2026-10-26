extern int lbl_8202F1D0[];
typedef struct S { void *vt; int a4; int a8; int ac; int a10; int a14; int a18; } S;
void fn_82933D48(S *p, int a, int b, int c)
{
    p->a10 = a;
    p->a14 = b;
    p->a18 = c;
    p->vt = lbl_8202F1D0;
    p->a4 = 0x1a;
    p->a8 = 0;
    p->ac = 0;
}
