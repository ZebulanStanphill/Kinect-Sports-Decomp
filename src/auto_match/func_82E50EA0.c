extern void fn_82A1E658(void *);

typedef struct { char pad[0x1c]; void *a; void *b; } Self;

void fn_82E50EA0(Self *s)
{
    if (s->a != 0) {
        fn_82A1E658(s->a);
        s->a = 0;
    }
    if (s->b != 0) {
        fn_82A1E658(s->b);
        s->b = 0;
    }
}
