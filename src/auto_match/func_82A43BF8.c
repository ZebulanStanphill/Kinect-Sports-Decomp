typedef struct Inner_82A43BF8 Inner_82A43BF8;

typedef struct InnerVt_82A43BF8 {
    void *slot[24];
    void (*set)(Inner_82A43BF8 *self, unsigned int value, unsigned int arg, int flags);
} InnerVt_82A43BF8;

struct Inner_82A43BF8 {
    InnerVt_82A43BF8 *vt;
    char pad4[0x34 - 4];
    unsigned int *source;   /* 0x38 */
    int pad38;
    unsigned int value;     /* 0x40 */
    char pad40[0x4c - 0x40];
    unsigned int arg;       /* 0x50 */
};

typedef struct Self_82A43BF8 {
    int x0;
    Inner_82A43BF8 inner;
} Self_82A43BF8;

static __forceinline void Apply(Inner_82A43BF8 *in, unsigned int arg)
{
    in->vt->set(in, in->source ? *in->source : in->value, arg, 0);
}

void fn_82A43BF8(Self_82A43BF8 *self)
{
    Apply(&self->inner, self->inner.arg);
}
