typedef struct {
    int ctx;
    void *(*alloc)(int, unsigned int);
    void (*free)(int, void *);
    int pad0c[2];
    int f14;
    int f18;
    int pad1c[(0x140 - 0x1c) / 4];
    int f140;
    int f144;
    int f148;
} Ctx_82B6D410;
extern void *fn_82B7FBF8(int, void *(*)(int, unsigned int), void (*)(int, void *), int, int, int, int, int, void *);

void *fn_82B6D410(Ctx_82B6D410 *c, void *p)
{
    return fn_82B7FBF8(c->ctx, c->alloc, c->free, c->f18, c->f14, c->f140, c->f144, c->f148, p);
}
