typedef struct Vec3_8281CEE8 { float x, y, z; } Vec3_8281CEE8;

extern void fn_8280A668(float angle, float *sinOut, float *cosOut);

void fn_8281CEE8(const Vec3_8281CEE8 *v, float ax, float ay, float az, Vec3_8281CEE8 *out)
{
    float s;
    float c;
    float y;
    float z;
    float x;

    fn_8280A668(ax, &s, &c);
    z = v->z * c + v->y * s;
    y = v->y * c - v->z * s;
    fn_8280A668(ay, &s, &c);
    x = v->x * c + z * s;
    out->z = z * c - v->x * s;
    fn_8280A668(az, &s, &c);
    out->x = x * c - y * s;
    out->y = x * s + y * c;
}
