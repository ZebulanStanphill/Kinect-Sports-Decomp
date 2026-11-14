typedef struct Pair_824DF2E8 {
    float a;
    float b;
} Pair_824DF2E8;

typedef struct Impl_824DF2E8 Impl_824DF2E8;
struct Impl_824DF2E8 {
    struct {
        void *f0;
        int (*call)(Impl_824DF2E8 *self, float *current, float *value);
    } *vt;
};

typedef struct Function_824DF2E8 {
    char pad[0x10];
    Impl_824DF2E8 *impl;
} Function_824DF2E8;

typedef struct Self_824DF2E8 {
    unsigned int begin;
    unsigned int end;
    char pad8[0x14 - 8];
    Pair_824DF2E8 pair;
    float base;
    Function_824DF2E8 filter;
} Self_824DF2E8;

extern __declspec(noreturn) void fn_82F63108(void);
extern void fn_824BF8A8(Self_824DF2E8 *self, Pair_824DF2E8 *pair);

static __forceinline int Call(Function_824DF2E8 *f, float *current, float *value)
{
    if (f->impl == 0)
        fn_82F63108();
    return f->impl->vt->call(f->impl, current, value);
}

void fn_824DF2E8(Self_824DF2E8 *self, float value)
{
    Pair_824DF2E8 pair;

    pair.a = self->base;
    pair.b = value;
    if ((self->end - self->begin) / 8 == 0 || Call(&self->filter, &self->pair.b, &value) != 0)
        self->pair = pair;
    fn_824BF8A8(self, &pair);
}
