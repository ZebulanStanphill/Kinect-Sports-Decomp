typedef struct {
    int a;
    unsigned int count;
} Stack;

typedef struct {
    char pad[0x5b0];
    void *alloc;
} Ctx;

typedef struct {
    int f0;
    unsigned int *rank;
    int f8;
    unsigned int *parent;
    unsigned int *best;
    int pad[4];
    Ctx *ctx;
} UF;

extern void **fn_82B7BD28(void *alloc, int size);
extern void fn_82BA03B8(Stack *s, void *alloc);
extern unsigned int *fn_82BC0088(Stack *s, unsigned int n);
extern unsigned int fn_82BC7368(Stack *s);
extern void fn_82BC6DC0(Stack *s, int f);

static void *Alloc(void *alloc, int size)
{
    void **mem = fn_82B7BD28(alloc, size + 4);
    *mem = alloc;
    return mem + 1;
}

static Stack *Stack_ctor(Stack *s, void *a)
{
    fn_82BA03B8(s, a);
    return s;
}

void fn_82BC4F30(UF *uf, unsigned int x)
{
    Stack *s;
    Stack *mem;
    unsigned int i;
    unsigned int p;

    mem = (Stack *)Alloc(uf->ctx->alloc, 0x10);
    s = mem ? Stack_ctor(mem, uf->ctx->alloc) : 0;
    while (uf->parent[uf->parent[x]] != 0) {
        *fn_82BC0088(s, s->count) = x;
        x = uf->parent[x];
    }
    while (s->count != 0) {
        i = fn_82BC7368(s) * 4;
        p = *(unsigned int *)((char *)uf->parent + i);
        if (uf->rank[uf->best[p]] < uf->rank[*(unsigned int *)((char *)uf->best + i)]) {
            *(unsigned int *)((char *)uf->best + i) = uf->best[p];
        }
        *(unsigned int *)((char *)uf->parent + i) = uf->parent[p];
    }
    fn_82BC6DC0(s, 1);
}
