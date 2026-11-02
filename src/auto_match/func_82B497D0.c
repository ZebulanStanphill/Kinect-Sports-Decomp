typedef struct Link_82B497D0 {
    unsigned a;
    unsigned b;
} Link_82B497D0;

typedef struct Arena_82B497D0 {
    char pad[0x18];
    unsigned list;
} Arena_82B497D0;

typedef struct Ctx_82B497D0 {
    char pad[0x234];
    Arena_82B497D0 *arena;
} Ctx_82B497D0;

extern unsigned fn_82B841E8(Ctx_82B497D0 *s, Arena_82B497D0 *arena, int a, int b, int c, int d);
extern unsigned fn_82AD17B0(Ctx_82B497D0 *s, unsigned v);
extern unsigned fn_82AD1978(unsigned c, unsigned v);

unsigned fn_82B497D0(Ctx_82B497D0 *s, unsigned v)
{
    unsigned c;
    Arena_82B497D0 *arena;
    unsigned *list;
    Link_82B497D0 *n;

    c = fn_82B841E8(s, s->arena, 0, 0x48, 1, 1);
    v = fn_82AD17B0(s, v);
    *(unsigned *)(c + 0x2c) = fn_82AD1978(c, v);
    arena = s->arena;
    list = &arena->list;
    n = (Link_82B497D0 *)((c & 0xfffffffe) + 0x24);
    n->a = *list;
    *(unsigned *)(*list & 0xfffffffe) = (unsigned)n - 0x24;
    n->b = ((unsigned)list - 0x24) | 1;
    *list = (unsigned)&n->b;
    return c;
}
