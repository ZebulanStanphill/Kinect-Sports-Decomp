extern int lbl_8202F1AC[];
typedef struct S { void *vt; int a4; int a8; int ac; int a10; int a14; int a18; } S;
void fn_829337C0(S *p, int a, int b, int c)
{
    p->a10 = a;
    p->a14 = b;
    p->a18 = c;
    p->vt = lbl_8202F1AC;
    p->a4 = 0x11;
    p->a8 = 0;
    p->ac = 0;
}
