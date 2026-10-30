typedef struct V { char pad[0xc]; int r; } V;
typedef struct P { unsigned int key; V *v; } P;
typedef struct S { int pad; P *begin; P *end; } S;

int fn_82FF6580(S *s, unsigned int key)
{
    P *p;
    unsigned int f;
    for (p = s->begin; p != s->end && p->key != key; p++)
        ;
    f = p != s->end;
    return (*(V **)((f > 0 ? -1 : 0) & (unsigned int)&p->v))->r;
}
