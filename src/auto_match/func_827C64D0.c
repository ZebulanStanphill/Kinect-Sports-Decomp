typedef struct Ctx_827C64D0 {
    char pad[0xe4];
    int count;
} Ctx_827C64D0;

typedef struct Writer_827C64D0 {
    unsigned char *ptr;
    int remain;
    int f8;
    int fc;
    int values[4];
    Ctx_827C64D0 *ctx;
} Writer_827C64D0;

extern unsigned char fn_827C6280(Writer_827C64D0 *w);
extern unsigned char fn_827C6100(Writer_827C64D0 *w);

unsigned char fn_827C64D0(Writer_827C64D0 *w, int code)
{
    int i;

    if (!fn_827C6280(w)) {
        return 0;
    }
    *w->ptr = 0xff;
    w->ptr++;
    w->remain--;
    if (w->remain == 0 && !fn_827C6100(w)) {
        return 0;
    }
    *w->ptr = code - 0x30;
    w->ptr++;
    w->remain--;
    if (w->remain == 0 && !fn_827C6100(w)) {
        return 0;
    }
    for (i = 0; i < w->ctx->count; i++) {
        w->values[i] = 0;
    }
    return 1;
}
