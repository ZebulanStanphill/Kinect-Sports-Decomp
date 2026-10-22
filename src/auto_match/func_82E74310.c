typedef struct {
    char pad[0x1e0];
    unsigned __int64 base;
    char pad2[0x18];
    unsigned __int64 last;
} Ctx;

typedef struct {
    char pad[0x10];
    unsigned __int64 t0;
    unsigned __int64 t1;
} Req;

extern int fn_82E731F8(void);
extern int fn_82E73170(Ctx *c, Req *r);
extern int fn_82E73A90(Ctx *c, __int64 d);

int fn_82E74310(Ctx *c, Req *r, int *done, int *eof)
{
    int hr;

    if (r == 0 || done == 0 || eof == 0)
        return 0x80004003;
    *done = 0;
    *eof = 0;
    if (fn_82E731F8() == 0) {
        hr = fn_82E73170(c, r);
        if (hr < 0) {
            if (hr == (int)0xC00D3A9F) {
                *eof = 1;
                hr = 0;
                *done = 1;
            }
            if (hr == (int)0xC00D36B5) {
                hr = 0;
                *done = 1;
            }
        } else if (r->t0 > c->last) {
            c->last = r->t0;
        }
    } else {
        if (r->t1 < c->base)
            c->base = r->t1;
        hr = fn_82E73A90(c, r->t1 - c->base);
        if (hr >= 0)
            hr = fn_82E74310(c, r, done, eof);
    }
    return hr;
}
