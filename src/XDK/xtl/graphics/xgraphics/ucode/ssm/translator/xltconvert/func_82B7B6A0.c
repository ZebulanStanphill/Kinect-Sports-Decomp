extern void fn_82B771B0(void *p, int a);
extern void fn_82B77410(void *p);
extern void fn_82B79EE8(void *p);
extern void fn_82B7AC20(void *p, void *q);
extern void fn_82BA02A8(void *p);

typedef struct Entry {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int f14;
    int f18;
} Entry;

typedef struct State {
    unsigned int f0;
    unsigned int f4;
    unsigned int f8;
    int fc;
    char f10[0x2a40 - 0x10];
    void *f2a40;
    int f2a44;
    char f2a48[0x2ef8 - 0x2a48];
    void *f2ef8;
    char pad2efc[0x3088 - 0x2efc];
    int f3088;
    int f308c;
    Entry e[0x14];
    char pad32c0[0x3360 - 0x32c0];
    int f3360;
    int f3364;
    int f3368;
    char pad336c[0x5b48 - 0x336c];
    int f5b48;
    char pad5b4c[0x5b54 - 0x5b4c];
} State;

typedef struct Sub {
    unsigned char b4;
    unsigned char b5;
    char pad6[2];
} Sub;

typedef struct Hdr {
    char pad[3];
    unsigned char b3;
    Sub sub;
} Hdr;

typedef struct Ctx {
    char pad[0x10];
    int f10;
    int pad14;
    void *f18;
    State *st;
    char pad20[0x680 - 0x20];
    int f680;
} Ctx;

int fn_82B7B6A0(Ctx *p, Hdr *q, int arg)
{
    State *s;
    unsigned int i;
    unsigned int *tok;

    if (p == 0) {
        return 0;
    }
    s = p->st;
    for (i = 0; i < sizeof(State); i++) {
        ((unsigned char *)s)[i] = 0;
    }
    s->f3360 = 0;
    s->f3364 = 0;
    s->f3368 = 0;
    s->f2a40 = s->f10;
    s->f2ef8 = s->f2a48;
    for (i = 0; i < 0x14; i++) {
        s->e[i].f0 = 0x19;
    }
    s->f3088 = arg;
    fn_82B7AC20(p, q);
    tok = (unsigned int *)&q->sub;
    for (i = 0; i < 1; i++) {
        tok++;
    }
    p->f18 = tok;
    p->st->f0 = q->sub.b5;
    p->st->f8 = q->sub.b4 & 1;
    p->st->f4 = q->b3;
    if (p->st->f8 != 0) {
        p->f680 = 7;
        p->st->f5b48 = 1;
    } else {
        p->f680 = 0;
    }
    fn_82B77410(p);
    fn_82B79EE8(p);
    fn_82B771B0(p, p->f10);
    fn_82BA02A8(p);
    return p->st->f308c * 12;
}
