typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __VMXGetReg(int n);

typedef struct Ring_823AD260 {
    __vector4 *begin;   /* 0x00 */
    __vector4 *end;     /* 0x04 */
    __vector4 *cur;     /* 0x08 */
    int pad0c;          /* 0x0c */
    unsigned int count; /* 0x10 */
} Ring_823AD260;

typedef struct Tracker_823AD260 {
    void *active;               /* 0x00 */
    char pad04[0xc];
    __vector4 average;          /* 0x10 */
    __vector4 previous;         /* 0x20 */
    __vector4 current;          /* 0x30 */
    char pad40[0x1c];
    Ring_823AD260 history;      /* 0x5c */
} Tracker_823AD260;

extern const float lbl_821CA45C[];

void fn_823AD790(Ring_823AD260 *ring, const __vector4 *v);

static __forceinline __vector4 Replicate(float f)
{
    return __vspltw(__lvlx(&f, 0), 0);
}

static __forceinline __vector4 *At(Ring_823AD260 *ring, int i)
{
    int idx;
    __vector4 *cur = ring->cur;
    if (i < ring->end - cur)
        idx = i;
    else
        idx = i - (ring->end - ring->begin);
    return &cur[idx];
}

static __forceinline void Pop(Ring_823AD260 *ring)
{
    __vector4 **pc = &ring->cur;
    if (++*pc == ring->end)
        *pc = ring->begin;
}

void fn_823AD260(Tracker_823AD260 *self, float dt)
{
    if (self->active != 0) {
        float one = lbl_821CA45C[1];
        Ring_823AD260 *ring = &self->history;
        __vector4 velocity;
        __vector4 *avg;
        unsigned int count;
        unsigned int i;

        velocity = __vmulfp(__vsubfp(self->current, self->previous), Replicate(one / dt));
        fn_823AD790(ring, &velocity);
        count = self->history.count;
        self->average = __VMXGetReg(77);
        for (i = 0; i < self->history.count; i++) {
            self->average = __vaddfp(self->average, *At(ring, i));
        }
        self->average = __vmulfp(self->average, Replicate(one / (float)count));
    } else {
        Ring_823AD260 *ring = &self->history;
        unsigned int i;

        i = 0;
        while (i < ring->count) {
            i++;
            Pop(ring);
        }
        ring->count = 0;
        self->average = __VMXGetReg(77);
    }
}
