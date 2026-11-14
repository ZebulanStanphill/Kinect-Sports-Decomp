typedef struct Src_82B176C0 {
    char pad[8];
    unsigned p10 : 10;
    unsigned a : 3;
    unsigned p2 : 2;
    unsigned b : 3;
    unsigned c : 7;
    unsigned rest : 7;
} Src_82B176C0;
extern int fn_82ABDD90(void *, unsigned, unsigned, unsigned);

unsigned char fn_82B176C0(void *ctx, Src_82B176C0 *s)
{
    switch ((int)s->c) {
    case 5: case 6: case 7: case 8:
    case 0x19: case 0x1a: case 0x1b: case 0x1c:
        return 1;
    case 0x7c:
        return 0x20000000 == (*(unsigned int *)((char *)s - 8 + fn_82ABDD90(ctx, s->c, s->a, s->b)) & 0x60000000);
    }
    return 0;
}
