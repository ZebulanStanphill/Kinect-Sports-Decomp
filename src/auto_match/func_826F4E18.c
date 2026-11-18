typedef struct Arena_826F4E18 {
    char *cur;
    unsigned int remaining;
} Arena_826F4E18;

typedef struct Owner_826F4E18 {
    int pad[2];
    Arena_826F4E18 arena;
} Owner_826F4E18;

typedef struct Ctx_826F4E18 {
    int pad[8];
    Owner_826F4E18 *owner;
} Ctx_826F4E18;

typedef struct Array_826F4E18 {
    void *data;
    unsigned int count;
} Array_826F4E18;

extern void *fn_826D69D0(Arena_826F4E18 *a, unsigned int size);
extern void fn_826F4470(Array_826F4E18 *a, int b);
extern void *memcpy(void *dst, const void *src, unsigned int n);

static __forceinline void *Alloc(Arena_826F4E18 *a, unsigned int size)
{
    char *mem;

    if (size <= a->remaining) {
        mem = a->cur;
        a->remaining -= size;
        a->cur = mem + size;
        return mem;
    }
    return fn_826D69D0(a, size);
}

Array_826F4E18 *fn_826F4E18(Array_826F4E18 *out, Ctx_826F4E18 *ctx, Array_826F4E18 *src)
{
    unsigned int n = src->count;

    out->data = 0;
    out->count = 0;
    if (n != 0) {
        unsigned int bytes = n * 4;

        void *p = Alloc(&ctx->owner->arena, (bytes + 3) & ~3u);
        out->data = p;
        if (p != 0) {
            memcpy(p, src->data, bytes);
            out->count = src->count;
        }
        fn_826F4470(src, 0);
    }
    return out;
}
