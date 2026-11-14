/* 1e-18f is .rdata lbl_8217BA98: score with --alias __real@219392ef=lbl_8217BA98 */
typedef struct Pair_8303A900 {
    int x0;
    int x4;
    float a;
    float b;
} Pair_8303A900;

static __forceinline void Flush(float *x)
{
    *x = (*x + 1e-18f) - 1e-18f;
}

void fn_8303A900(Pair_8303A900 *self)
{
    Flush(&self->a);
    Flush(&self->b);
}
