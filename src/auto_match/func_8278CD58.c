extern char lbl_8200DDC4[];

typedef struct { int a; int b; } Str;
typedef struct { int pad; int refs; } RC;
typedef struct {
    void *vt;
    int refs;
    Str s1;
    Str s2;
    RC *rc;
    int *cnt;
    int v20;
    unsigned short h24;
    unsigned short h26;
    unsigned char b28;
    unsigned short h2a;
} Obj;

extern void fn_8268C3E8(Str *d, Str *s, unsigned int n);

Obj *fn_8278CD58(Obj *d, Obj *s, unsigned int n)
{
    d->refs = 1;
    d->vt = lbl_8200DDC4;
    fn_8268C3E8(&d->s1, &s->s1, n ? n : (unsigned int)s->s1.b);
    fn_8268C3E8(&d->s2, &s->s2, n ? n : (unsigned int)s->s1.b);
    {
        RC *rc = s->rc;
        if (rc) {
            rc->refs++;
        }
    }
    d->rc = s->rc;
    {
        int *c = s->cnt;
        if (c) {
            (*c)++;
        }
    }
    d->cnt = s->cnt;
    d->v20 = s->v20;
    d->h24 = s->h24;
    d->h26 = s->h26;
    d->b28 = s->b28;
    d->h2a = s->h2a;
    return d;
}
