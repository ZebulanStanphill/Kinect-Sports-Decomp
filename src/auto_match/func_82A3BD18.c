typedef struct BitReader_82A3BD18 {
    unsigned char pad0[0x2b04];
    unsigned char *cur;             /* 0x2b04 */
    unsigned char *end;             /* 0x2b08 */
    unsigned char pad1[0x2eb0 - 0x2b0c];
    unsigned int bits;              /* 0x2eb0 */
    unsigned char count;            /* 0x2eb4 */
    unsigned char pad2[0x2ed0 - 0x2eb5];
    int state;                      /* 0x2ed0 */
} BitReader_82A3BD18;

void fn_82A3BD18(BitReader_82A3BD18 *s)
{
    unsigned char *p;
    unsigned int v;

    if (s->state == 3) {
        return;
    }
    p = s->cur;
    if (p + 4 > s->end) {
        return;
    }
    v = p[1];
    v = (v << 8) | p[0];
    v = (v << 8) | p[3];
    v = (v << 8) | p[2];
    s->cur = p + 4;
    s->count = 0x10;
    s->bits = v;
}
