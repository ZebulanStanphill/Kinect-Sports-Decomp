typedef struct Pair { int a, b; } Pair;
typedef struct S { char pad[0x20]; Pair *items; } S;
void fn_826D29F8(Pair *o, S *s, int i)
{
    Pair *e = &s->items[i];
    int t[2];
    t[0] = e->a;
    t[1] = e->b;
    o->a = t[0];
    o->b = t[1];
}
