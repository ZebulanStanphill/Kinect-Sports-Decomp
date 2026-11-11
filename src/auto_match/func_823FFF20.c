typedef struct { int (*fn)(void *, int, int); int adj; } Pmf_823FFF20;
typedef struct { char pad[8]; Pmf_823FFF20 pmf; char *obj; int pad14; int a; int pad1c; int b; } Bound_823FFF20;
void fn_823FFF20(Bound_823FFF20 *s)
{
    Pmf_823FFF20 p = s->pmf;
    p.fn(s->obj + p.adj, s->a, s->b);
}
