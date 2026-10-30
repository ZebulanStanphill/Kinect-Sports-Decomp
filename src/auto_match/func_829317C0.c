typedef struct S { void *vt; int type; int a; int b; int c; } S;
extern int lbl_8202F134[];
void fn_829317C0(S *p, int v)
{
    p->c = v;
    p->type = 0x14;
    p->a = 0;
    p->vt = lbl_8202F134;
    p->b = 0;
}
