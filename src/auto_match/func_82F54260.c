// Skeleton spine bend: moves the output joints from index 2 up to 2 + count by offset, then bends the
// remaining joints (up to index 13) about the axis lbl_82165C80 around the joint 2 + count: the bend
// angle comes from the direction from that joint to joint 5 (x cleared) against the y axis, scaled by
// the settings in lbl_831BADA8 (more when the direction points backwards) and capped so that bend +
// angle stays within lbl_831BADA8[18].
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vcfsx(__vector4 v, int shift);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vaddfp(__vector4 a, __vector4 b);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Settings_831BADA8 {
    float pad0[8];
    float bendScale;     /* 0x20 */
    float bendBias;      /* 0x24 */
    int count;           /* 0x28 */
    float pad2c[7];
    float maxAngle;      /* 0x48 */
} Settings_831BADA8;

extern Settings_831BADA8 lbl_831BADA8;
extern const __vector4 lbl_82165C80;   /* bend axis */

float fn_82F59428(float x);           /* acos */
float fn_8306E888(float x);           /* fabs */
__vector4 fn_82F5A0A0(__vector4 axis, float angle);
__vector4 fn_8306ED30(__vector4 a, __vector4 b);   /* a - b */
__vector4 fn_82F59D58(__vector4 v, __vector4 q);

static __forceinline __vector4 Normalize3(__vector4 v)
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
    result = __vmulfp(v, rsq);
    return __vsel(result, d, mask);
}

void fn_82F54260(void *self, const __vector4 *in, __vector4 *out, __vector4 offset)
{
    __vector4 dir, n, dot;
    float angle, bend;
    int i;

    for (i = 0; i <= lbl_831BADA8.count; i++) {
        out[i + 2] = __vaddfp(out[i + 2], offset);
    }
    dir = __vsubfp(in[5], in[lbl_831BADA8.count + 2]);
    dir.vector4_f32[0] = 0.0f;
    n = Normalize3(dir);
    {
        const __vector4 up = {{0.0f, 1.0f, 0.0f, 0.0f}};
        dot = __vmsum3fp(n, up);
    }
    angle = fn_8306E888(fn_82F59428(dot.vector4_f32[0]));
    if (dir.vector4_f32[2] < 0.0f) {
        bend = lbl_831BADA8.bendBias + angle;
        bend = (bend + lbl_831BADA8.bendBias) * lbl_831BADA8.bendScale;
    } else {
        bend = lbl_831BADA8.bendScale;
    }
    if (bend + angle > lbl_831BADA8.maxAngle) {
        bend = lbl_831BADA8.maxAngle - angle;
    }
    for (i = lbl_831BADA8.count + 1; i < 12; i++) {
        __vector4 q = fn_82F5A0A0(lbl_82165C80, bend);
        out[i + 2] = __vaddfp(out[lbl_831BADA8.count + 2],
                              fn_82F59D58(fn_8306ED30(in[i + 2], in[lbl_831BADA8.count + 2]), q));
    }
}
