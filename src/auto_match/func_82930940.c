typedef struct Q { unsigned __int64 v[4]; } Q;
typedef struct S { void *vt; int type; int a; int b; Q q; } S;
extern int lbl_8202F0EC[];
void fn_82930940(S *p, Q *q)
{
    p->type = 3;
    p->a = 0;
    p->vt = lbl_8202F0EC;
    p->b = 0;
    p->q = *q;
}
