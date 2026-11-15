typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

extern __vector4 __vsubfp(__vector4, __vector4);
extern __vector4 __vmsum3fp(__vector4, __vector4);
extern void __stvewx(__vector4, void *, int);
extern double fabs(double);

float fn_82DD36F8(const __vector4 *normal, const __vector4 *first, const __vector4 *second)
{
    float distance;
    __stvewx(__vmsum3fp(__vsubfp(*first, *second), *normal), &distance, 0);
    return (float)fabs(distance) * distance;
}
