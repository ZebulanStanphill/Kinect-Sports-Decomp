typedef struct E { int a, b; } E;
typedef struct V { E *first; E *last; E *end; } V;
typedef struct S { char pad[0x10]; V *v; } S;

void fn_822760B0(S *p, E *e)
{
    E *d;
    if (p->v->last < p->v->end) {
        d = p->v->last;
        *d = *e;
        p->v->last++;
        return;
    }
    d = p->v->last;
    if (d != 0) {
        *d = *e;
    }
    p->v->end = ++p->v->last;
}
