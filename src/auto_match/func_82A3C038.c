typedef void (*WriteFn)(void *ctx, unsigned char *buf, int len, unsigned int n);

typedef struct State {
    char pad0[0x14];
    int f14;
    unsigned char f18;
    char pad19[0x854 - 0x19];
    unsigned char *start;
    unsigned char *cur;
    char pad85c[4];
    unsigned int n;
    char pad864[0x4330 - 0x864];
    void *ctx;
    char pad4334[0x4340 - 0x4334];
    WriteFn write;
} State;

extern void fn_82A39E18(State *s);

void fn_82A3C038(State *s)
{
    int len;

    if (s->n > 0) {
        fn_82A39E18(s);
        len = s->cur - s->start;
        if (len > 0) {
            s->write(s->ctx, s->start, len, s->n);
        }
    }
    s->n = 0;
    s->f18 = 0x20;
    s->f14 = 0;
    s->cur = s->start;
}
