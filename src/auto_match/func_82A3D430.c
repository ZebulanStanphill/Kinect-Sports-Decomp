typedef struct S_82A3D430 {
    char pad0[0x127a * 2];
    unsigned short count[17];
    char pad1[0x2518 - 0x127a * 2 - 34];
    int limit;
    char pad2[2];
    char depth;
} S_82A3D430;

void fn_82A3D430(S_82A3D430 *s, short n)
{
    if (n < s->limit) {
        int d = s->depth;
        if (d >= 0x10) d = 0x10;
        s->count[d] = s->count[d] + 1;
    } else {
        s->depth = s->depth + 1;
        fn_82A3D430(s, *(unsigned short *)((n + 0x3c6) * 4 + (char *)s));
        fn_82A3D430(s, *(unsigned short *)(n * 4 + (char *)s + 0xf1a));
        s->depth = s->depth - 1;
    }
}
