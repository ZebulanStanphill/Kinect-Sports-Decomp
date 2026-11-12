typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Body_824A8980 {
    char pad0[0x4c0];
    __vector4 end;          /* 0x4c0 */
    char pad4d0[0xf0];
    __vector4 start;        /* 0x5c0 */
} Body_824A8980;

typedef struct Node_824A8980 {
    char pad0[0x40];
    Body_824A8980 *body;    /* 0x40 */
} Node_824A8980;

struct Track_824A8980;
typedef struct TrackVtbl_824A8980 {
    void (*getRange)(struct Track_824A8980 *self, int *first, int *count);
    void (*getNode)(struct Track_824A8980 *self, int index, Node_824A8980 **node);
} TrackVtbl_824A8980;

typedef struct Track_824A8980 {
    TrackVtbl_824A8980 *vt;
} Track_824A8980;

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

int fn_824A8980(Track_824A8980 *self)
{
    int count;
    Node_824A8980 *last;
    Node_824A8980 *prev;
    int first;
    __vector4 a, b;

    self->vt->getRange(self, &first, &count);
    self->vt->getNode(self, count, &last);
    self->vt->getNode(self, count - 1, &prev);
    a = Length3(__vsubfp(last->body->end, last->body->start));
    b = Length3(__vsubfp(prev->body->end, prev->body->start));
    return a.vector4_f32[0] >= b.vector4_f32[0];
}
