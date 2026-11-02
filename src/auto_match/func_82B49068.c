typedef struct Req_82B49068 {
    int pad0[3];
    unsigned f0c;
    unsigned f10;
} Req_82B49068;

typedef struct Link_82B49068 {
    unsigned a;
    unsigned b;
} Link_82B49068;

typedef struct Arena_82B49068 {
    char pad[0x18];
    unsigned list;
} Arena_82B49068;

typedef struct Ctx_82B49068 {
    char pad[0x234];
    Arena_82B49068 *arena;
} Ctx_82B49068;

typedef struct Info_82B49068 {
    unsigned pad : 4;
    unsigned g : 3;
    unsigned rest : 25;
} Info_82B49068;

typedef struct Chunk_82B49068 {
    char pad0[8];
    unsigned : 15;
    unsigned f : 3;
    unsigned rest : 14;
    char pad1[0x20];
    Info_82B49068 *info;
    unsigned f30;
} Chunk_82B49068;

extern Chunk_82B49068 *fn_82B841E8(Ctx_82B49068 *s, Arena_82B49068 *arena, int a, int b, int c, int d);
extern Info_82B49068 *fn_82AD17B0(Ctx_82B49068 *s, unsigned v);
extern Info_82B49068 *fn_82AD1978(Chunk_82B49068 *c, void *v);
extern Req_82B49068 *fn_82ACA920(Ctx_82B49068 *s, Req_82B49068 *r, unsigned v);

Chunk_82B49068 *fn_82B49068(Ctx_82B49068 *s, unsigned v, Req_82B49068 *r)
{
    Chunk_82B49068 *c;
    Arena_82B49068 *arena;
    unsigned *list;
    Link_82B49068 *n;
    Req_82B49068 *x;

    c = fn_82B841E8(s, s->arena, 0, 1, 2, 4);
    c->info = fn_82AD1978(c, fn_82AD17B0(s, v));
    if (r->f10 != 0) {
        x = fn_82ACA920(s, r, r->f0c);
    } else {
        x = r;
    }
    c->f30 = (unsigned)fn_82AD1978(c, x);
    c->f = c->info->g ? c->info->g : 0;
    arena = s->arena;
    list = &arena->list;
    n = (Link_82B49068 *)(((unsigned)c & 0xfffffffe) + 0x24);
    n->a = *list;
    *(unsigned *)(*list & 0xfffffffe) = (unsigned)n - 0x24;
    n->b = ((unsigned)list - 0x24) | 1;
    *list = (unsigned)&n->b;
    return c;
}
