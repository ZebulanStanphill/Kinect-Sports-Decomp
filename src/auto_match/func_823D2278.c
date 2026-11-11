typedef struct { int (*fn)(void *, void *); int adj; } Pmf_823D2278;
typedef struct { Pmf_823D2278 pmf; char *obj; int pad0c; int arg[1]; } Call_823D2278;
typedef struct { char pad[0x10]; Call_823D2278 call; } Bound_823D2278;
void fn_823D2278(Bound_823D2278 *s)
{
    Call_823D2278 *c = &s->call;
    Pmf_823D2278 p = c->pmf;
    p.fn(c->obj + p.adj, &c->arg);
}
