typedef struct O O;
typedef struct OVt { void *f0, *f4; void (*f8)(O *o); void *fc, *f10; void (*f14)(O *o); } OVt;
struct O { OVt *vt; };
typedef struct S { int x0; char sub[8]; O *o; } S;
extern int fn_82A5C118(void *p, int n);

int fn_82A5B0E8(S *s)
{
    int r;
    s->o->vt->f8(s->o);
    r = fn_82A5C118(s->sub, 0);
    s->o->vt->f14(s->o);
    return r;
}
