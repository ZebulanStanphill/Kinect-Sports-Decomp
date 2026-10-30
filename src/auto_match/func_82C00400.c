typedef struct { char base[0x38]; int a, b, c, d; float t; } Self;
extern void fn_82C065A0(Self *s);

void fn_82C00400(Self *s)
{
    fn_82C065A0(s);
    s->a = 0;
    s->b = 0;
    s->c = 0;
    s->t = 30.0f;
    s->d = 0;
}
