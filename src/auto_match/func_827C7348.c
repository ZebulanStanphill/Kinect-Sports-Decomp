typedef struct Ctx Ctx;
typedef struct Common Common;
typedef struct {
    void (*error_exit)(Common *c);
    int pad[4];
    int msg_code;
} Err;
struct Common { Err *err; };
struct Ctx {
    int pad0[8];
    Common *cinfo;
    int pad24[4];
    int f34;
    unsigned int f38;
    int f3c;
    int f40;
};

extern void fn_827C7150(Ctx *c, unsigned int a, int n);
extern void fn_827C72A8(Ctx *c, int a, int n);
extern void fn_827C72F8(Ctx *c, int a, int b);

void fn_827C7348(Ctx *c)
{
    int v;
    int n;

    if (c->f38 != 0) {
        n = 0;
        for (v = (int)c->f38 >> 1; v != 0; v >>= 1) {
            n++;
        }
        if (n > 14) {
            c->cinfo->err->msg_code = 0x28;
            c->cinfo->err->error_exit(c->cinfo);
        }
        fn_827C72A8(c, c->f34, n * 16);
        if (n != 0) {
            fn_827C7150(c, c->f38, n);
        }
        c->f38 = 0;
        fn_827C72F8(c, c->f40, c->f3c);
        c->f3c = 0;
    }
}
