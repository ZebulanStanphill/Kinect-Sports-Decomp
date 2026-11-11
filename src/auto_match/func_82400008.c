typedef struct { int (*fn)(void *, int); int adj; } Pmf_82400008;
typedef struct { char pad[8]; Pmf_82400008 pmf; char *obj; int pad14; int a; } Bound_82400008;
void fn_82400008(Bound_82400008 *s)
{
    Pmf_82400008 p = s->pmf;
    p.fn(s->obj + p.adj, s->a);
}
