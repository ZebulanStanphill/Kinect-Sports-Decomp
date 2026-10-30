typedef struct { int a; unsigned short b; } Sub;
typedef struct { int x0; Sub s; } Src;
typedef struct { char pad[0x74]; int a; unsigned int b; } Dst;
extern void fn_82855BE8(Dst *d, unsigned short b, int a);

void fn_82855C50(Dst *d, Src *src)
{
    Sub *s = &src->s;
    fn_82855BE8(d, s->b, s->a);
    d->a = s->a;
    d->b = s->b;
}
