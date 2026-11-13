typedef struct Vec3_8281D1D8 { float x, y, z; } Vec3_8281D1D8;

extern void fn_8280A668(float angle, float *sinOut, float *cosOut);

void fn_8281D1D8(float pitch, float yaw, float radius, Vec3_8281D1D8 *out)
{
    float s;
    float c;
    float horizontal;
    fn_8280A668(pitch, &s, &c);
    out->y = s * radius;
    horizontal = c * radius;
    fn_8280A668(yaw, &s, &c);
    out->x = horizontal * s;
    out->z = horizontal * c;
}
