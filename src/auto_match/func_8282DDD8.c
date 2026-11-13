typedef struct {
    void *ctx;
    int f4;
    void (*fn)(void *ctx, int n, int v);
} Writer_8282DDD8;
extern int lbl_83156EBC;

void fn_8282DDD8(Writer_8282DDD8 *w, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n; i++) w->fn(w->ctx, 1, lbl_83156EBC);
}
