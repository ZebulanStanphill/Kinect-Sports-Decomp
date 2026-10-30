typedef struct { void *obj; int x4; } Pair;
typedef struct { char pad[0x28]; Pair *first; Pair *last; } Self;
typedef struct { void **h; } Ctx;
extern void fn_82463790(void *obj, Ctx *c);
extern void fn_8263CBB0(void *h, int a, int b, unsigned __int64 flags);

void fn_82462CF0(Self *s, Ctx *c)
{
    Pair *it = s->first;
    Pair *end = s->last;
    for (; it != end; it++) {
        fn_82463790(it->obj, c);
    }
    fn_8263CBB0(*c->h, 0, 0, 0x80000000);
}
