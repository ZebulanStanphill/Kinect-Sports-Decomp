typedef struct Ref_82280798 {
    void *ptr;
    int count;
} Ref_82280798;

typedef struct Self_82280798 {
    char pad0[0x50];
    int f50;
    int pad54;
    int f58;
    char pad5c[0x64 - 0x5c];
    Ref_82280798 ref;
    int f6c;
    float range[2];
    unsigned char hasRange;
    unsigned char f79;
} Self_82280798;

extern void fn_82280B40(Ref_82280798 *ref);
extern void fn_82279DA8(void *ptr, int flags);

void fn_82280798(Self_82280798 *self, Ref_82280798 *src, float *range, unsigned char flag)
{
    Ref_82280798 *ref = &self->ref;

    if (ref->ptr != 0)
        fn_82280B40(ref);
    else
        ref->count = 0;
    self->f6c = 1;
    ref->ptr = src->ptr;
    ref->count = src->count;
    if (range != 0) {
        float *r = self->range;
        r[0] = range[0];
        r[1] = range[1];
        self->hasRange = 1;
    } else {
        float *r = self->range;
        r[1] = 0.0f;
        r[0] = 0.0f;
        self->hasRange = 0;
    }
    self->f79 = flag;
    fn_82279DA8(ref->ptr, 0);
    if (flag) {
        self->f50 = 0;
        self->f58 = 0;
    }
}
