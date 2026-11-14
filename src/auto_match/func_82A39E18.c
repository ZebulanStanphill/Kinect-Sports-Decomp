typedef struct BitWriter_82A39E18 {
    char pad0[0x14];
    int bitbuf;
    signed char bitcount;
} BitWriter_82A39E18;

extern void fn_82A3AAB8(BitWriter_82A39E18 *s, unsigned char n, int v);

void fn_82A39E18(BitWriter_82A39E18 *s)
{
    if (s->bitcount < 32)
        fn_82A3AAB8(s, s->bitcount - 16, 0);
}
