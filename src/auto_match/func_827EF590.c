typedef struct Vec3_827EF590 {
    float x;
    float y;
    float z;
} Vec3_827EF590;

extern float fn_8280A5D8(float v);

void fn_827EF590(const Vec3_827EF590 *v, Vec3_827EF590 *out)
{
    float xy = v->x * v->y;
    float zy = v->z * v->y;
    float zx = v->z * v->x;
    float s = fn_8280A5D8(v->z * xy);

    out->x = s * zy;
    out->y = s * zx;
    out->z = s * xy;
}
