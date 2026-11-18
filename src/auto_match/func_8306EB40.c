typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern const float lbl_82196080; /* 1e-05f */
__vector4 __vsubfp(__vector4 a, __vector4 b);

extern float fn_8306EE38(__vector4 v);                               /* length */
extern float fn_8306ED98(__vector4 a, __vector4 b);                  /* dot product */
extern __vector4 fn_8306ED58(__vector4 a, __vector4 b, float scale); /* a + b * scale */

/* Projects point onto the segment start..end: stores the closest point on the line
   and returns its parameter along the segment. */
float fn_8306EB40(__vector4 *out, __vector4 start, __vector4 end, __vector4 point)
{
    __vector4 direction = __vsubfp(end, start);
    float dot;
    float length;
    float t;

    if (fn_8306EE38(direction) > lbl_82196080) {
        dot = fn_8306ED98(direction, __vsubfp(point, start));
        length = fn_8306EE38(direction);
        t = dot / (length * length);
        *out = fn_8306ED58(start, direction, t);
        return t;
    }
    *out = start;
    return 0.0f;
}
