typedef unsigned int size_t;
void *memcpy(void *d, const void *s, size_t n);
typedef struct Sub { int v[6]; } Sub;
extern Sub *fn_822C5B18(Sub *d, Sub *s);
typedef struct Blk { unsigned char a[0x200]; } Blk;
typedef struct Obj { Blk a; Blk b; Sub c; Sub d; int x, y, z; } Obj;

Obj *fn_82285290(Obj *d, Obj *s)
{
    d->a = s->a;
    d->b = s->b;
    fn_822C5B18(&d->c, &s->c);
    fn_822C5B18(&d->d, &s->d);
    d->x = s->x; d->y = s->y; d->z = s->z;
    return d;
}
