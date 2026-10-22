extern void fn_8267BE38(void *p);
extern void fn_8267C498(void *p);
extern void fn_82759498(void *p);
extern void fn_827760B8(void *a, int b);
extern void fn_827ABAF0(void *p, int a, int b);

typedef struct Sub {
    char pad[0x60];
    unsigned char flags;
    char pad2[0xb0 - 0x61];
    void *buf;
} Sub;

typedef struct S {
    void *mem;
    int x4;
    int x8;
    int xc;
    void *x10;
    Sub sub;
} S;

void fn_827ABBA0(S *p)
{
    Sub *s;

    if (p->x10 != 0) {
        fn_827760B8(p->x10, p->xc);
    }
    s = &p->sub;
    s->flags |= 1;
    fn_827ABAF0(p, 0, p->x4);
    if (s->buf != 0) {
        fn_8267C498(s->buf);
    }
    fn_82759498((char *)p + 0x98);
    fn_8267BE38(p->mem);
}
