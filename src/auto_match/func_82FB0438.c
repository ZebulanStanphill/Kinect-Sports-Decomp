typedef struct O O;
typedef struct { void *s[35]; void (*f)(O *o); } OVt;
struct O { OVt *vt; };
typedef struct { int a; O *o; } E;
typedef struct { char pad[0x7c]; E *first; E *last; } S;

void fn_82FB0438(S *s)
{
    E *e;

    for (e = s->first; e != s->last; e++)
        e->o->vt->f(e->o);
}
