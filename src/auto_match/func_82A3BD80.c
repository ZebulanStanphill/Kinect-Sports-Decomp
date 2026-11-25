typedef struct BitReader_82A3BD18 {
    unsigned char pad0[0x2b04];
    unsigned char *cur; /* 0x2b04 */
    unsigned char *end; /* 0x2b08 */
    unsigned char pad1[0x2eb0 - 0x2b0c];
    unsigned int bits; /* 0x2eb0 */
    signed char count; /* 0x2eb4 */
    unsigned char pad2[0x2eb7 - 0x2eb5];
    unsigned char exhausted; /* 0x2eb7 */
} BitReader_82A3BD18;

static __forceinline void LoadHalf(BitReader_82A3BD18 *s)
{
    unsigned char *p = s->cur;
    unsigned int v;

    v = (p[1] << 8) | p[0];
    s->cur = p + 2;
    s->bits |= v << -s->count;
    s->count += 0x10;
}

static __forceinline int Refill(BitReader_82A3BD18 *s)
{
    if (s->cur >= s->end) {
        s->exhausted = 1;
        return 0;
    }
    LoadHalf(s);
    return 1;
}

/* Drops n bits from the cache and refills it with up to two 16-bit words. */
void fn_82A3BD80(BitReader_82A3BD18 *s, unsigned int n)
{
    s->bits <<= n;
    s->count -= n;
    if (s->count > 0) {
        return;
    }
    if (!Refill(s)) {
        return;
    }
    if (s->count > 0) {
        return;
    }
    Refill(s);
}
