/* Counts the inactive objects of the list that lie close to the segment between the tracker's two points (distance
   to the line through them, relative to the segment length, with x taken relative to the source origin): those
   under the near limit increment the near count and the one with the smallest |z| is kept, those under the far
   limit increment the far count. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vpermwi(__vector4 v, int control);

typedef struct Config_822BD060 {
    char pad0[0x14];
    float nearLimit;            /* 0x14 */
    float farLimit;             /* 0x18 */
} Config_822BD060;

typedef struct Tracker_822BD060 {
    __vector4 start;            /* 0x00 */
    __vector4 end;              /* 0x10 */
    int nearCount;              /* 0x20 */
    int farCount;               /* 0x24 */
    float length;               /* 0x28 */
    char pad2c[0x4];
    __vector4 closest;          /* 0x30 */
} Tracker_822BD060;

typedef struct Object_822BD060 {
    char pad0[0x20];
    __vector4 position;         /* 0x20 */
    int active;                 /* 0x30 */
} Object_822BD060;

typedef struct Source_822BD060 {
    char pad0[0x88];
    Object_822BD060 **begin;    /* 0x88 */
    Object_822BD060 **end;      /* 0x8c */
    char pad90[0x140];
    __vector4 origin;           /* 0x1d0 */
} Source_822BD060;

float fn_82809CB0(float x);

static __forceinline __vector4 Cross3(__vector4 a, __vector4 b)
{
    __vector4 a1 = __vpermwi(a, 99);
    __vector4 b1 = __vpermwi(b, 135);
    __vector4 b2 = __vpermwi(b, 99);
    __vector4 a2 = __vpermwi(a, 135);
    __vector4 r = __vmulfp(a1, b1);
    return __vnmsubfp(a2, b2, r);
}

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    d = __vmsum3fp(v, v);
    h = __vspltisw(1);
    zero = __vspltisw(0);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    rt = __vmulfp(d, h);
    mask = __vcmpeqfp(d, zero);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

static __forceinline int NotDone(Object_822BD060 **a, Object_822BD060 **b)
{
    if (a != b) return 1;
    return 0;
}

void fn_822BD060(const Config_822BD060 *config, Tracker_822BD060 *tracker, const Source_822BD060 *source)
{
    Object_822BD060 **it = source->begin;
    Object_822BD060 **end = source->end;

    for (; NotDone(it, end); it++) {
        Object_822BD060 *o = *it;
        if (o->active == 0) {
            __vector4 p = o->position;
            __vector4 origin = source->origin;
            __vector4 c;
            __vector4 len;
            float ratio;

            p.vector4_f32[0] -= origin.vector4_f32[0];
            c = Cross3(__vsubfp(p, tracker->start), __vsubfp(p, tracker->end));
            len = Length3(c);
            ratio = len.vector4_f32[0] / tracker->length;
            if (ratio < config->nearLimit) {
                __vector4 q;
                tracker->nearCount++;
                q = o->position;
                if (fn_82809CB0(q.vector4_f32[2]) < fn_82809CB0(tracker->closest.vector4_f32[2])) {
                    tracker->closest = o->position;
                }
            } else if (ratio < config->farLimit) {
                tracker->farCount++;
            }
        }
    }
}
