typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vspltw(__vector4 v, unsigned int i);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum4fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
void __dcbt(int offset, const void *base);

typedef struct Track_82801870 {
    unsigned short stride;      /* 0x0, in floats */
    float *data;                /* 0x4 */
} Track_82801870;

typedef struct Keys_82801870 {
    int pad0;
    int first;                  /* 0x4 */
    int second;                 /* 0x8 */
} Keys_82801870;

typedef struct Pose_82801870 {
    __vector4 rotation;         /* 0x00 */
    __vector4 translation;      /* 0x10 */
    __vector4 scale;            /* 0x20 */
} Pose_82801870;

extern void fn_82A1EFC0(void *dst, int value, int size);
extern __vector4 fn_82805520(__vector4 q);
extern __vector4 fn_828042C0(__vector4 q0, __vector4 q1, __vector4 t);

static __forceinline __vector4 LoadUnaligned(const float *p)
{
    return __vor(__lvlx(p, 0), __lvrx(p, 16));
}

static __forceinline __vector4 LoadUnalignedAt(const float *p, int offset)
{
    return __vor(__lvlx(p, offset), __lvrx(p, offset + 16));
}

void fn_82801870(Track_82801870 *track, Pose_82801870 *out, Keys_82801870 *keys, float t,
                 unsigned short count, unsigned short stride)
{
    const float *p0;
    const float *p1;
    __vector4 tv;
    unsigned int prefetched;
    unsigned int i;

    p0 = track->data + keys->first * track->stride;
    p1 = track->data + keys->second * track->stride;
    __dcbt(0, p0);
    __dcbt(0x80, p0);
    __dcbt(0, p1);
    __dcbt(0x80, p1);
    tv.vector4_f32[3] = t;
    tv = __vspltw(tv, 3);
    prefetched = 0x80;
    fn_82A1EFC0(out, 0, count * sizeof(Pose_82801870));
    for (i = 0; i < count; i++) {
        __vector4 q0, q1, q, a0, a1, b0, b1, v;

        if (prefetched >= 0x80) {
            prefetched -= 0x80;
            __dcbt(0x100, p0);
            __dcbt(0x100, p1);
        }
        v = LoadUnaligned(p0);
        q0 = fn_82805520(v);
        v = LoadUnaligned(p1);
        q1 = fn_82805520(v);
        q = fn_828042C0(q0, q1, tv);
        a0 = LoadUnalignedAt(p0, 0x10);
        b0 = LoadUnalignedAt(p0, 0x1c);
        b1 = LoadUnalignedAt(p1, 0x1c);
        a1 = LoadUnalignedAt(p1, 0x10);
        v = __vmsum4fp(q, q);
        v = __vrsqrtefp(v);
        out[i].rotation = __vmulfp(q, v);
        b1 = __vsubfp(b1, b0);
        out[i].scale = __vmaddfp(tv, b1, b0);
        a1 = __vsubfp(a1, a0);
        out[i].translation = __vmaddfp(tv, a1, a0);
        prefetched += stride * 4;
        p0 += stride;
        p1 += stride;
    }
}
