typedef struct S {
    int pad0;
    int n;
    int pad8;
    int c;
    int d;
    char pad14[0x14];
    int lo;
    int hi;
} S;
typedef struct Out { int a, b, c, d, e, f; } Out;
extern int fn_82D016D0(S *s, int v);


void fn_82D01948(S *s, Out *o)
{
    int hi, lo;
    o->a = fn_82D016D0(s, s->d) + fn_82D016D0(s, s->c);
    hi = s->hi;
    lo = s->lo;
    o->d = s->n * lo;
    o->b = (hi - lo) * s->n;
    o->f = s->n;
    o->e = o->d;
}
