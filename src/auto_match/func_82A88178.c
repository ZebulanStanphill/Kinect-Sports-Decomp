typedef struct Part_82A88178 {
    int size;
    int f4;
    int f8;
} Part_82A88178;

typedef struct Src_82A88178 {
    char pad0[0x28];
    int f28;
    int f2c;
    int f30;
    Part_82A88178 parts[3];
} Src_82A88178;

extern void fn_82A8DC48(char *, Src_82A88178 *, int, int, char *);
extern void fn_82A87738(char *, Part_82A88178 *, int, int, char *);

void fn_82A88178(char *a, Src_82A88178 *s, int c, int d, char *dst)
{
    int base = s->f30 + s->f2c + s->f28;
    int first = s->parts[0].size;
    int off;
    int second;
    char *b;
    Part_82A88178 *p;

    fn_82A8DC48(a, s, c, d, dst);
    fn_82A87738(a + 4, &s->parts[0], c, base + d, dst + 0xc);
    off = first + base + d;
    b = a + 8;
    p = &s->parts[1];
    second = s->parts[1].size;
    fn_82A87738(b, p, c, off, dst + 0x10);
    fn_82A87738(b + 1, p + 1, c, second + off, dst + 0x14);
}
