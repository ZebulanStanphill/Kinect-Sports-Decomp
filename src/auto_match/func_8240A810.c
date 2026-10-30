typedef struct { union { char buf[16]; char *ptr; } u; unsigned int size; unsigned int res; } Str;
typedef struct { char pad[0x40]; int x40; } P;
extern void fn_8223DB60(P *p);
extern void fn_8223CE40(P *p, const char *s, unsigned int n, int x);

void fn_8240A810(P *p, Str *s)
{
    unsigned int n;
    const char *c;
    fn_8223DB60(p);
    n = s->size;
    if (s->res >= 16)
        c = s->u.ptr;
    else
        c = s->u.buf;
    fn_8223CE40(p, c, n, p->x40);
}
