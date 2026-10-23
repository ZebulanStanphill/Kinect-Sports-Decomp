typedef struct Reader {
    char pad0[0x15];
    unsigned char flag15;
    char pad16[0x2c - 0x16];
    int pos;
    int end;
    char pad34[0x3c - 0x34];
    unsigned char *buf;
} Reader;

extern char *fn_8267B890(void *heap, int size, int flags);
extern void fn_826E7800(Reader *r, int n);

static unsigned char Reader_byte(Reader *r)
{
    r->flag15 = 0;
    if (r->end - r->pos < 1)
        fn_826E7800(r, 1);
    return r->buf[r->pos++];
}

char *fn_826E8780(Reader *r, void *heap)
{
    int len;
    int i;
    char *s;

    len = Reader_byte(r);
    if (len <= 0)
        return 0;
    s = fn_8267B890(heap, len + 1, 0);
    for (i = 0; i < len; i++)
        s[i] = Reader_byte(r);
    s[i] = 0;
    return s;
}
