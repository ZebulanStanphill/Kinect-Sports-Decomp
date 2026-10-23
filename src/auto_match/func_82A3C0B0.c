typedef struct {
    unsigned char *window;
    char pad[0x14 - 0x4];
    int bitbuf;
    signed char bitcount;
    char pad2[0x30 - 0x19];
    unsigned int v[3];
    char pad3[0x858 - 0x3c];
    unsigned char *out;
    int pad4;
    unsigned int count;
    char pad5[0x871 - 0x864];
    unsigned char flag;
} State;

extern void fn_82A3AAB8(State *s, int n, int z);
extern void fn_82A3C038(State *s);

void fn_82A3C0B0(State *s, unsigned int pos, unsigned int len)
{
    int i;
    int j;

    fn_82A3AAB8(s, s->bitcount - 16, 0);
    for (i = 0; i < 3; i++) {
        unsigned int v = s->v[i];
        for (j = 0; j < 4; j++) {
            *s->out = (unsigned char)v;
            s->out++;
            v >>= 8;
        }
    }
    while (len != 0) {
        len--;
        *s->out = s->window[pos];
        pos++;
        s->out++;
        if (++s->count == 0x8000) {
            fn_82A3C038(s);
            s->flag = 0;
        }
    }
    s->bitbuf = 0;
    s->bitcount = 32;
}
