typedef struct ColorTransform_8268D790 {
    float mulR; /* 0x00 */
    float addR; /* 0x04 */
    float mulG; /* 0x08 */
    float addG; /* 0x0c */
    float mulB; /* 0x10 */
    float addB; /* 0x14 */
    float mulA; /* 0x18 */
    float addA; /* 0x1c */
} ColorTransform_8268D790;

typedef struct Color_8268D790 {
    unsigned char a; /* 0x0 */
    unsigned char r; /* 0x1 */
    unsigned char g; /* 0x2 */
    unsigned char b; /* 0x3 */
} Color_8268D790;

extern float lbl_82005CCC; /* 255.0f */

static __forceinline float ClampChannel(float v)
{
    float result;

    if (v >= lbl_82005CCC) {
        result = lbl_82005CCC;
    } else {
        result = v;
    }
    return result >= 0.0f ? result : 0.0f;
}

/* Applies the colour transform to a colour. */
void fn_8268D790(Color_8268D790 *out, const ColorTransform_8268D790 *cx, const Color_8268D790 *in)
{
    float a;
    float b;
    float g;
    float r;

    a = ClampChannel(cx->mulA * in->a + cx->addA);
    b = ClampChannel(in->b * cx->mulB + cx->addB);
    g = ClampChannel(in->g * cx->mulG + cx->addG);
    r = ClampChannel(in->r * cx->mulR + cx->addR);
    out->g = (unsigned char)g;
    out->r = (unsigned char)r;
    out->b = (unsigned char)b;
    out->a = (unsigned char)a;
}
