typedef struct S S;
struct S { char pad[0x1e8]; void *ctx; int x1ec; void (*cb)(void *ctx, S *s); };
extern void fn_82B6E010(S *s, unsigned int i);

void fn_82B6E1A0(S *s)
{
    unsigned int i;
    if (s != 0) {
        for (i = 0; i < 4; i++) {
            fn_82B6E010(s, i);
        }
        s->cb(s->ctx, s);
    }
}
