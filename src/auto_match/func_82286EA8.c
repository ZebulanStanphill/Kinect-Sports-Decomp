extern void fn_82267130(void *);
extern void fn_82522ED8(void *);
extern void fn_8265CA20(void *);

typedef struct { char pad[0x5c0]; void *a; char pad2[0x18]; void *b; } Self;

Self *fn_82286EA8(Self *s)
{
    if (s->a != 0) {
        fn_82267130(s->a);
    }
    if (s->b != 0) {
        fn_82522ED8(s->b);
        s->b = 0;
    }
    fn_8265CA20(s);
    return s;
}
