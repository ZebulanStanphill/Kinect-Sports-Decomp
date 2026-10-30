extern void fn_82BFE3B0(void *);
extern void fn_82BFE830(void *);

typedef struct { char pad[0x30]; void *b; void *a; } Self;

void fn_82F614D8(Self *s)
{
    if (s->a != 0) {
        fn_82BFE3B0(s->a);
        s->a = 0;
    }
    if (s->b != 0) {
        fn_82BFE830(s->b);
        s->b = 0;
    }
}
