// Exponential smoothing of a vector sample: the first sample initialises the filter, later
// ones blend the previous raw sample (weight alpha) with the filtered value (weight 1 - alpha).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);

typedef struct Filter_824DA968 {
    int initialised;         // 0x00
    char pad04[0xc];
    __vector4 filtered;      // 0x10
    __vector4 output;        // 0x20
    __vector4 previous;      // 0x30
    float alpha;             // 0x40
} Filter_824DA968;

extern float lbl_821CA45C[];

static __forceinline __vector4 Scale(__vector4 v, float s)
{
    __vector4 r = __lvlx(&s, 0);
    r = __vspltw(r, 0);
    return __vmulfp(v, r);
}

void fn_824DA968(Filter_824DA968 *self, const __vector4 *sample)
{
    if (self->initialised == 0) {
        __vector4 s = *sample;
        self->initialised = 1;
        self->filtered = s;
        self->output = s;
    } else {
        __vector4 r = __vaddfp(Scale(self->previous, self->alpha),
                               Scale(self->filtered, lbl_821CA45C[1] - self->alpha));
        self->output = r;
        self->filtered = r;
    }
    self->previous = *sample;
}
