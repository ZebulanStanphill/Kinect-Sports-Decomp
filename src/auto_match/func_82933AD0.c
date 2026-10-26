extern int lbl_8202F1C4[];
typedef struct { void *vt; int type; int a; int b; int p2; int p3; int p4; int c; } S;
void fn_82933AD0(S *p, int a, int b, int c, int d)
{
    p->p2 = b;
    p->p3 = c;
    p->c = a;
    p->type = 0x12;
    p->a = 0;
    p->vt = lbl_8202F1C4;
    p->b = 0;
    p->p4 = d;
}
