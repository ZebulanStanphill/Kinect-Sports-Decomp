// Shortest-arc quaternion rotating direction a onto direction b: identity when they are
// (nearly) equal, a half turn about a perpendicular axis when they are (nearly) opposite, else
// the normalised cross product scaled to sin(theta/2) with w = cos(theta/2).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

double sqrt(double);

extern const float lbl_8201E038;   /* 0.99999 */
extern const float lbl_82165FBC;   /* -0.99999 */
extern const float lbl_82165FB8;   /* -0.999 */
extern __vector4 lbl_832628A0;     /* identity quaternion */

extern float fn_82F534A0(__vector4 a, __vector4 b);
extern __vector4 fn_82F53580(__vector4 v);
extern __vector4 fn_82F53548(__vector4 v);
extern __vector4 fn_82F53528(__vector4 a, __vector4 b);
extern float fn_82F535C8(__vector4 v);
extern __vector4 fn_82F534F8(__vector4 v, float s);

__vector4 fn_82F59F48(__vector4 a, __vector4 b)
{
    __vector4 q;
    float d;
    float c;
    float half;
    float scale;

    d = fn_82F534A0(b, a);
    if (d > lbl_8201E038)
        return lbl_832628A0;
    if (d < lbl_82165FBC) {
        q = fn_82F53580(b);
        q = fn_82F53548(q);
        q.vector4_f32[3] = 0.0f;
        return q;
    }
    half = 0.5f;
    c = (float)sqrt((d + 1.0f) * half);
    q = fn_82F53528(b, a);
    scale = half / c;
    if (d < lbl_82165FB8)
        scale = (float)sqrt(c * c - d) * c * 2.0f / fn_82F535C8(q) * scale;
    q = fn_82F534F8(q, scale);
    q.vector4_f32[3] = c;
    return q;
}
