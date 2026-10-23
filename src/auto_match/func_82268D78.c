extern int fn_8223B688();

typedef struct B {
    unsigned char v[8];
} B;

typedef struct S {
    unsigned __int64 a;
    char sub[0x24 - 8];
    int b;
    B bytes;
    int c;
} S;

S *fn_82268D78(S *d, S *s)
{
    d->a = s->a;
    fn_8223B688(d->sub, s->sub);
    d->b = s->b;
    d->bytes = s->bytes;
    d->c = s->c;
    return d;
}
