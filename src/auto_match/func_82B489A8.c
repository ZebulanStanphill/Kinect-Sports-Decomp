typedef struct Req_82B489A8 {
    int pad0[3];
    unsigned f0c;
    unsigned f10;
} Req_82B489A8;

typedef struct Link_82B489A8 {
    unsigned a;
    unsigned b;
} Link_82B489A8;

typedef struct Arena_82B489A8 {
    char pad[0x18];
    unsigned list;
} Arena_82B489A8;

typedef struct Ctx_82B489A8 {
    char pad[0x234];
    Arena_82B489A8 *arena;
} Ctx_82B489A8;

extern unsigned fn_82B841E8(Ctx_82B489A8 *s, Arena_82B489A8 *arena, int a, int b, int c, int d);
extern Req_82B489A8 *fn_82ACA920(Ctx_82B489A8 *s, Req_82B489A8 *r, unsigned v);
extern unsigned fn_82AD1978(unsigned c, Req_82B489A8 *r);

unsigned fn_82B489A8(Ctx_82B489A8 *s, Req_82B489A8 *r)
{
    unsigned c;
    Arena_82B489A8 *arena;
    unsigned *list;
    Link_82B489A8 *n;
    Req_82B489A8 *x;

    c = fn_82B841E8(s, s->arena, 0, 0x2e, 1, 1);
    x = r;
    if (r->f10 != 0) {
        x = fn_82ACA920(s, r, r->f0c);
    }
    *(unsigned *)(c + 0x2c) = fn_82AD1978(c, x);
    arena = s->arena;
    list = &arena->list;
    n = (Link_82B489A8 *)((c & 0xfffffffe) + 0x24);
    n->a = *list;
    *(unsigned *)(*list & 0xfffffffe) = (unsigned)n - 0x24;
    n->b = ((unsigned)list - 0x24) | 1;
    *list = (unsigned)&n->b;
    return c;
}
