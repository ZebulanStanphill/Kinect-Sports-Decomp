typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vmsum3fp(__vector4 a, __vector4 b);

int fn_82539A00(const __vector4 *normal, float distance, const __vector4 *origin,
                const __vector4 *direction, float *t)
{
    __vector4 d;
    float dn, dd;

    d = __vmsum3fp(*origin, *normal);
    dn = d.vector4_f32[0] - distance;
    if (dn < 0.0f)
        return 0;
    d = __vmsum3fp(*direction, *normal);
    dd = -d.vector4_f32[0];
    if (dd < dn)
        return 0;
    if (dd != 0.0f)
        *t = dn / dd;
    else
        *t = 0.0f;
    return 1;
}
