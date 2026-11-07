typedef struct Buf_8266E0B8 {
    unsigned int first;
    unsigned int second;
} Buf_8266E0B8;

typedef struct Ctx_8266E0B8 {
    int pad[4];
    Buf_8266E0B8 *buf;
} Ctx_8266E0B8;

typedef struct Local_8266E0B8 {
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;
    Buf_8266E0B8 *buf;
} Local_8266E0B8;

extern void fn_8266D4A8(char *a, char *b, int c);
extern void fn_8266DBB8(char *a, char *b, Local_8266E0B8 *c, int d, int e);
extern void fn_8266D7B8(unsigned int a, unsigned int b, char *c, int d, int e);

void fn_8266E0B8(char *base, char *end, int n, Ctx_8266E0B8 *ctx)
{
    Local_8266E0B8 s;
    char *p;
    char *next;
    unsigned int count;
    int i;

    p = base;
    if (n >= 0x20) {
        count = (unsigned int)n >> 5;
        do {
            next = p + 0x180;
            fn_8266D4A8(p, next, 0);
            p = next;
        } while (--count != 0);
    }
    fn_8266D4A8(p, end, 0);
    i = 0x20;
    if (i < n) {
        do {
            s.a = 0;
            s.b = 0;
            s.c = 0;
            s.d = 0;
            ctx->buf->second = ctx->buf->first;
            s.buf = ctx->buf;
            fn_8266DBB8(base, end, &s, i, n);
            i <<= 1;
            fn_8266D7B8(ctx->buf->first, ctx->buf->second, base, i, n);
            i <<= 1;
        } while (i < n);
    }
}
