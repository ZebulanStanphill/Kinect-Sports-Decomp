typedef struct Link_82B4C948 {
    unsigned a;
    unsigned b;
} Link_82B4C948;

typedef struct Arena_82B4C948 {
    char pad[0x18];
    unsigned list;
} Arena_82B4C948;

typedef struct Ctx_82B4C948 {
    char pad[0x234];
    Arena_82B4C948 *arena;
} Ctx_82B4C948;

extern unsigned fn_82B841E8(Ctx_82B4C948 *s, Arena_82B4C948 *arena, int a, int b, int c, int d);
extern unsigned fn_82B4BAA8(Ctx_82B4C948 *s, unsigned v);
extern unsigned fn_82AD1978(unsigned c, unsigned v);

unsigned fn_82B4C948(Ctx_82B4C948 *s, unsigned v)
{
    unsigned c;
    Arena_82B4C948 *arena;
    unsigned *list;
    Link_82B4C948 *n;

    c = fn_82B841E8(s, s->arena, 0, 0x2e, 1, 1);
    v = fn_82B4BAA8(s, v);
    *(unsigned *)(c + 0x2c) = fn_82AD1978(c, v);
    arena = s->arena;
    list = &arena->list;
    n = (Link_82B4C948 *)((c & 0xfffffffe) + 0x24);
    n->a = *list;
    *(unsigned *)(*list & 0xfffffffe) = (unsigned)n - 0x24;
    n->b = ((unsigned)list - 0x24) | 1;
    *list = (unsigned)&n->b;
    return c;
}
