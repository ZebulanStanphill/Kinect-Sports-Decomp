typedef struct S { void *vt; int type; int a; int b; int c; } S;
extern int lbl_8202F0C8[];
void fn_829304B8(S *p)
{
    p->type = 1;
    p->a = 0;
    p->vt = lbl_8202F0C8;
    p->b = 0;
    p->c = 0;
}
