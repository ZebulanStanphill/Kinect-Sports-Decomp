typedef struct Callback_82AA6210 {
    void *ctx;
    void (*fn)(void *ctx, int a, int c, int d);
} Callback_82AA6210;

void fn_82AA6210(void *self, int a, int b, int c, int d)
{
    Callback_82AA6210 *cb = (Callback_82AA6210 *)self;
    cb->fn(cb->ctx, a, c, d);
}
