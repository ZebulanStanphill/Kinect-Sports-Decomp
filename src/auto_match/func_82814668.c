typedef struct Blk_82814668 {
    char *name;
    unsigned int size;
    int f8, fc;
    unsigned int flags;
    int f14;
    int f18;
    unsigned int f1c;
    unsigned int f20;
    char pad[0x84 - 0x24];
    char buf[0x104];
} Blk_82814668;
extern Blk_82814668 *fn_828145E8(int ctx, unsigned int n);
extern char *strncpy(char *d, const char *s, unsigned int n);

int fn_82814668(const char *src, int a, int ctx, Blk_82814668 **out, unsigned int fl, unsigned int size)
{
    Blk_82814668 *b;
    char *p;
    if (*out == 0 || (*out)->f20 == 0) {
        b = fn_828145E8(ctx, ((size + 0x7f) & ~(size - 1)) + 0x18d);
        if (b == 0)
            return 1;
        p = b->buf; b->size = size; b->name = p; b->f8 = 0; b->fc = 0; b->f1c = (unsigned int)(p + 0x108) & ~3u; b->flags = b->flags | fl | 0x10; strncpy(p, src, 0x104); b->f14 = a; b->f18 = ctx;

        *out = b;
    }
    return 0;
}
