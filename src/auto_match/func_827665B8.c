typedef struct S {
    int f0;
    unsigned int pos;
    int f8;
    int fc;
    int f10;
    int f14;
    void *f18;
    unsigned int f1c;
    unsigned int f20;
    unsigned char f24;
} S;

extern unsigned int fn_82766450(S *s, unsigned int pos, int *out);
extern unsigned int fn_827664B0(S *s, unsigned int pos, unsigned int *out);

void fn_827665B8(S *s)
{
    unsigned int *p;
    if (s->f18 != 0) {
        s->pos = fn_82766450(s, s->pos, &s->f10) + s->pos;
        s->pos = fn_82766450(s, s->pos, &s->f14) + s->pos;
        p = &s->f1c;
        s->pos = fn_827664B0(s, s->pos, p) + s->pos;
        s->f24 = 1;
        s->f20 = s->pos;
        if (s->f1c & 1) {
            s->f20 = s->f1c >> 1;
            s->f20 = fn_827664B0(s, s->f20, p) + s->f20;
            s->f24 = 0;
        }
        *p = *p >> 1;
    }
}
