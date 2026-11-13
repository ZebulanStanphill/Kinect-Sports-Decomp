extern int fn_82637398(void *, int);
extern unsigned int *fn_82643B08(void *);
extern int fn_82645110();
extern int fn_8264F1D8(void *, unsigned int);

typedef struct {
    char pad[0xc];
    unsigned int *wp;
    unsigned int *wend;
} Buf_82646DB8;

static unsigned int *Next_82646DB8(Buf_82646DB8 *b)
{
    unsigned int *p = b->wp;
    if (p + 1 > b->wend) {
        p = fn_82643B08(b);
    }
    return p;
}

typedef struct {
    char pad0[0x2abc];
    unsigned char flags_a;
    unsigned char flags_b;
    char pad1[0x2c3c - 0x2abe];
    unsigned int shift;
    char pad2[0x3500 - 0x2c40];
    Buf_82646DB8 buf;
} Ctx_82646DB8;

int fn_82646DB8(Ctx_82646DB8 *c)
{
    unsigned int *p;
    c->flags_b = c->flags_b & 0x7f;
    fn_82645110();
    p = Next_82646DB8(&c->buf);
    *p = 0x85000000;
    c->buf.wp = p + 1;
    if ((c->flags_a & 0x20) == 0) {
        if (fn_8264F1D8(c, 0x1000000 << c->shift) != 0) {
            fn_82637398(c, 0);
            return 0x8007000e;
        }
        if ((c->flags_b & 0x40) == 0) {
            fn_82637398(c, 0);
        }
    }
    return 0;
}
