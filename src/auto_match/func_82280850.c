typedef struct Ref_82280850 {
    void *ptr;
    int count;
} Ref_82280850;

typedef struct Self_82280850 {
    char pad0[0x50];
    int f50;
    int pad54;
    int f58;
    char pad5c[0x64 - 0x5c];
    Ref_82280850 ref;
    int f6c;
    float range[2];
    unsigned char f78;
    unsigned char f79;
} Self_82280850;

extern void fn_82280B40(Ref_82280850 *ref);

void fn_82280850(Self_82280850 *self)
{
    Ref_82280850 *ref = &self->ref;

    if (ref->ptr != 0)
        fn_82280B40(ref);
    else
        ref->count = 0;
    self->ref.count = 0;
    ref->ptr = 0;
    self->f6c = 1;
    {
        float *r = self->range;
        r[1] = 0.0f;
        r[0] = 0.0f;
    }
    self->f78 = 0;
    self->f79 = 1;
    self->f50 = 0;
    self->f58 = 0;
}
