typedef struct Quat_8280E2A0 { float x, y, z, w; } Quat_8280E2A0;

extern void fn_8280E180(const Quat_8280E2A0 *a, const Quat_8280E2A0 *b, Quat_8280E2A0 *out, float t);

void fn_8280E2A0(const Quat_8280E2A0 *q1, const Quat_8280E2A0 *a, const Quat_8280E2A0 *b,
                 const Quat_8280E2A0 *q2, Quat_8280E2A0 *out, float t)
{
    Quat_8280E2A0 tmp;
    fn_8280E180(q1, q2, &tmp, t);
    fn_8280E180(a, b, out, t);
    fn_8280E180(&tmp, out, out, (1.0f - t) * t * 2.0f);
}
