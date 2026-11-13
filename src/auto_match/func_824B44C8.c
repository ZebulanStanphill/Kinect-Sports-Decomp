typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Joint_824B44C8 {
    __vector4 position;         /* 0x00 */
    __vector4 velocity;         /* 0x10 */
    char pad20[0x20];
} Joint_824B44C8;

typedef struct Frame_824B44C8 {
    char pad0[0x40];
    Joint_824B44C8 *joints;     /* 0x40 */
} Frame_824B44C8;

typedef struct History_824B44C8 History_824B44C8;

typedef struct HistoryVtbl_824B44C8 {
    void (*GetRange)(History_824B44C8 *self, int *first, unsigned int *last);
    void (*GetFrame)(History_824B44C8 *self, unsigned int index, Frame_824B44C8 **frame);
} HistoryVtbl_824B44C8;

struct History_824B44C8 {
    HistoryVtbl_824B44C8 *vt;
};

extern const float lbl_821CA45C[2];

static __forceinline __vector4 Replicate(float value)
{
    __vector4 v = __lvlx(&value, 0);
    return __vspltw(v, 0);
}

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;
    h = __vspltisw(1);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    zero = __vspltisw(0);
    mask = __vcmpeqfp(d, zero);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline int Max(int a, int b)
{
    return b < a ? a : b;
}

__vector4 *fn_824B44C8(__vector4 *result, History_824B44C8 *history, int window, int joint)
{
    int first;
    unsigned int last;
    int start;
    int previous;
    unsigned int i;
    Frame_824B44C8 *frame;
    __vector4 sum;
    __vector4 lastVelocity;
    __vector4 lastPosition;

    history->vt->GetRange(history, &first, &last);
    start = Max(last - window + 1, first);
    previous = Max(start - 1, first);
    history->vt->GetFrame(history, previous, &frame);
    sum = __VMXGetReg(77);
    lastVelocity = frame->joints[joint].velocity;
    lastPosition = frame->joints[joint].position;
    for (i = start; i <= last; i++) {
        Frame_824B44C8 *current;
        __vector4 v;
        __vector4 next;
        __vector4 speed;
        __vector4 moved;
        history->vt->GetFrame(history, i, &current);
        v = current->joints[joint].velocity;
        next = v;
        speed = Length3(v);
        if (speed.vector4_f32[0] < 1e-05f)
            v = lastVelocity;
        lastVelocity = next;
        moved = Length3(lastPosition);
        if (moved.vector4_f32[0] < 1e-05f) {
            v = __VMXGetReg(77);
            lastVelocity = __VMXGetReg(77);
        }
        lastPosition = current->joints[joint].position;
        sum = __vaddfp(sum, v);
    }
    *result = __vmulfp(sum, Replicate(lbl_821CA45C[1] / (float)(last - start + 1)));
    return result;
}
