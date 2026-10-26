typedef struct { int a, n; unsigned int w[1]; } Bits;
typedef struct { char pad[0x858]; Bits *bits; } S;

void fn_82BB1BE8(S *s, unsigned int i)
{
    Bits *b = s->bits;
    b->w[i >> 5] &= ~(1 << (i & 31));
}
