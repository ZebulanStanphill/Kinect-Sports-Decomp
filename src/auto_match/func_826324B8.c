typedef struct {
    void *data;
    unsigned int count;
    unsigned int capacity;
} Array_826324B8;

typedef struct {
    char pad[0x4db4];
    unsigned int flagsHi : 29;
    unsigned int bit2 : 1;
    unsigned int flagsLo : 2;
} Ctx_826324B8;

typedef struct {
    Ctx_826324B8 *ctx;
    char pad4[0x4c];
    int hr;
    char pad54[0xc];
    Array_826324B8 a60;
    Array_826324B8 a6C;
    char pad78[0x94];
    Array_826324B8 a10C;
    Array_826324B8 a118;
    Array_826324B8 a124;
    Array_826324B8 a130;
} Builder_826324B8;

extern void fn_826323F8(Builder_826324B8 *self);
extern void *fn_8265C940(unsigned int size, unsigned int tag);
extern void fn_8265C990(void *p, unsigned int tag);
extern void *memcpy(void *dst, const void *src, unsigned int n);

static __forceinline void Reset_826324B8(Builder_826324B8 *self, Array_826324B8 *a, unsigned int minimum, unsigned int elemSize)
{
    a->count = 0;
    if (a->capacity < minimum) {
        unsigned int n = a->capacity * 2;
        void *p;
        if (n < minimum) {
            n = minimum;
        }
        p = fn_8265C940(n * elemSize, 0x64800000);
        if (p == 0) {
            self->hr = 0x8007000e;
        } else {
            a->capacity = n;
            if (a->data != 0) {
                memcpy(p, a->data, a->count * elemSize);
                fn_8265C990(a->data, 0x24800000);
            }
            a->data = p;
        }
    }
}

void fn_826324B8(Builder_826324B8 *self, Ctx_826324B8 *ctx)
{
    fn_826323F8(self);
    self->ctx = ctx;
    Reset_826324B8(self, &self->a60, 100, 12);
    Reset_826324B8(self, &self->a6C, 50, 8);
    if ((unsigned char)self->ctx->bit2) {
        Reset_826324B8(self, &self->a10C, 16, 4);
    } else {
        Reset_826324B8(self, &self->a118, 2, 4);
        Reset_826324B8(self, &self->a124, 16, 4);
        Reset_826324B8(self, &self->a130, 16, 4);
    }
}
