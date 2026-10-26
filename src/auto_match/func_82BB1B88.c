typedef struct { int a, n; unsigned int w[1]; } Bits;
typedef struct { char pad[0x85c]; Bits *bits; } S;

void fn_82BB1B88(S *s, unsigned int i)
{
    Bits *b = s->bits;
    b->w[i >> 5] &= ~(1 << (i & 31));
}
