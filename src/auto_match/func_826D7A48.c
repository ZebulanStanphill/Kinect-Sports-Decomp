typedef struct C { int v; } C;
typedef struct Sub { int b; C c; } Sub;
typedef struct T { int a; Sub sub; } T;
extern void fn_826D6238(C *d, C *s);

T *fn_826D7A48(T *d, T *s)
{
    Sub *ds = &d->sub;
    Sub *ss = &s->sub;
    d->a = s->a;
    ds->b = ss->b;
    fn_826D6238(&ds->c, &ss->c);
    return d;
}
