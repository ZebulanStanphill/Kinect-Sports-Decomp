typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern unsigned char fn_82F59EA8(__vector4 q); /* quaternion is identity */
extern float fn_82F59428(float x);             /* acos */

float fn_82F59EF8(__vector4 q)
{
    if (fn_82F59EA8(q)) {
        return 0.0f;
    }
    return fn_82F59428(q.vector4_f32[3]) * 2.0f;
}
